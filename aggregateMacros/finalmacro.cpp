#include "TFile.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TProfile.h"
#include "TLorentzVector.h"
#include "TTreeReaderValue.h"
#include "TTreeReader.h"
#include "TCanvas.h"
#include <vector>
#include "TVector3.h"
void finalmacro(){

	TTree* jpsitree=0;
	TTree* pi0tree=0;
	TTree* etatree=0;
	TTree* etapi0tree=0;
	TTree* etapi02ctree=0;
	TFile *f = TFile::Open("../jpsi20gev_cal/MassConstraint_calibrated.root");
	TFile *f2 = TFile::Open("../pi010gev_cal/MassConstraint_calibrated.root");
	TFile *f3 = TFile::Open("../eta20gev_cal/MassConstraint_calibrated.root");
	TFile *f4 = TFile::Open("../etapi020gev_1C_cal/MassConstraint1C_calibrated.root");
	TFile *f5 = TFile::Open("../etapi020gev_2C_cal/MassConstraint2C_calibrated.root");
	

	f->GetObject("tree", jpsitree);
	f2->GetObject("tree", pi0tree);
	f3->GetObject("tree", etatree);
	f4->GetObject("tree", etapi0tree);
	f5->GetObject("tree", etapi02ctree);

	TFile *fout = new TFile("formattedplots.root","RECREATE");

	double jpsiFitdE, jpsiMeasdE;
	
	TProfile* hjpsifit = new TProfile ("hjpsifit"," J/#psi Fitted Energy Resolution;|cos(#theta)|;#sigma_{E}" , 10, 0, 1, "");

	TProfile* hjpsimeas = new TProfile("hjpsimeas"," J/#psi  Reconstructed Energy Resolution;|cos(#theta)|;#sigma_{E}", 10, 0,1,"");	

	TTreeReader myreader0(jpsitree);
	TTreeReaderValue<std::vector<double> > jpsiFitEnergyErr(myreader0,"fitParent_err");
	TTreeReaderValue<std::vector<std::vector<double> > > jpsimcparts(myreader0,"mcChargedVec");
	TTreeReaderValue<std::vector<double> > jpsiMeasEnergyErr(myreader0,"measParent_err");
	while(myreader0.Next()){
		jpsiFitdE=jpsiFitEnergyErr->at(3);
		jpsiMeasdE=jpsiMeasEnergyErr->at(3);
		TLorentzVector tlv, tlv2, tlvp;		
		
		for(int i=0; i<2; i++){
			tlv.SetPxPyPzE( jpsimcparts->at(0).at(0),
					jpsimcparts->at(0).at(1),
					jpsimcparts->at(0).at(2),
					jpsimcparts->at(0).at(3));

			tlv2.SetPxPyPzE( jpsimcparts->at(1).at(0),
					 jpsimcparts->at(1).at(1),
					 jpsimcparts->at(1).at(2),
					 jpsimcparts->at(1).at(3));
		}
tlv+tlv2;
		 
		tlvp = tlv+tlv2;
		 
		hjpsimeas->Fill(fabs(tlvp.CosTheta()), jpsiMeasdE);
		hjpsifit->Fill(fabs(tlvp.CosTheta()), jpsiFitdE);
		
	}

	TStyle *st1 = new TStyle("st1","my style");
    	st1->SetOptStat(1111);
	st1->SetOptFit(1);
	st1->SetStatW(0.18);
	st1->SetStatH(0.18);
	st1->cd();

//	fout->Write();
	
	TCanvas* c1 = new TCanvas();

	hjpsimeas->Draw();
	hjpsifit->SetLineColor(kRed);
	hjpsifit->SetMarkerStyle(3);
	hjpsifit->SetMarkerColor(kRed);
	hjpsifit->Draw("sames");
	c1->BuildLegend(0.5,0.67,0.88,0.88,"","");
	
/////////////////////////////START PI0S

	std::vector<TLorentzVector> pi0s;
		
	double pi0FitdE, pi0MeasdE;
	
	TProfile* hpi0fit = new TProfile ("hpi0fit"," #pi^{0} Fitted Energy Resolution;max{cos(#theta *)};#sigma_{E}/#sqrt{E_{g}}" , 10, 0, 1, "");
	TProfile* hpi0meas = new TProfile("hpi0meas"," #pi^{0} Reconstructed Energy Resolution;max{cos(#theta *)};#sigma_{E}/#sqrt{E_{g}}", 10, 0,1,"");

	//TProfile* hpi0meas = new TProfile("hjpsimeas"," J/#psi  Reconstructed Energy Resolution;cos(#theta);#sigma_{E}", 90, -1,1,"");	

	TTreeReader myreader1(pi0tree);
	TTreeReaderValue<std::vector<double> > pi0FitEnergyErr(myreader1,"fitParent_err");
	TTreeReaderValue<std::vector<std::vector<double> > > pi0mcparts(myreader1,"mcNeutralVec");
	TTreeReaderValue<std::vector<double> > pi0MeasEnergyErr(myreader1,"measParent_err");
	while(myreader1.Next()){
		pi0FitdE=pi0FitEnergyErr->at(3);
		pi0MeasdE=pi0MeasEnergyErr->at(3);
		TLorentzVector tlv, tlv2, tlvp;		
		
		
			tlv.SetPxPyPzE( pi0mcparts->at(0).at(0),
					pi0mcparts->at(0).at(1),
					pi0mcparts->at(0).at(2),
					pi0mcparts->at(0).at(3));

			tlv2.SetPxPyPzE( pi0mcparts->at(1).at(0),
					 pi0mcparts->at(1).at(1),
					 pi0mcparts->at(1).at(2),
					 pi0mcparts->at(1).at(3));
		
		 
		tlvp = tlv+tlv2;
		TVector3 vp, v1,v2, boostvector;
		vp = tlvp.Vect();
		boostvector = tlvp.BoostVector();
		double costhetastar;

		 tlv.Boost(-boostvector);
		 tlv2.Boost(-boostvector);
		v1=tlv.Vect();
		v2=tlv2.Vect();	
		
		//std::cout<<v1.Dot(vp)<<" ";
		costhetastar= v1.Dot(vp)/(v1.Mag() *vp.Mag()  );		
		if( v2.Dot(vp)/(v2.Mag()*vp.Mag() ) > costhetastar){
			costhetastar = v2.Dot(vp)/(v2.Mag()*vp.Mag() );
		}
		//std::cout<<costhetastar<<" ";
		
 
		//hjpsimeas->Fill(tlvp.CosTheta(), jpsiMeasdE);
		hpi0fit->Fill(costhetastar, pi0FitdE/sqrt(10.0));
		hpi0meas->Fill(costhetastar, pi0MeasdE/sqrt(10.0));
	}
	hpi0fit->SetMinimum(0.04);
	hpi0fit->SetMaximum(0.2);
	TCanvas* c2 = new TCanvas();
	hpi0meas->SetLineColor(kRed);
	hpi0meas->SetMarkerStyle(3);
	hpi0meas->SetMarkerColor(kRed);
	//hpi0meas->SetLineStyle(2);
	
	
	hpi0fit->Draw();
	hpi0meas->Draw("sames");
	c2->BuildLegend(0.5,0.67,0.88,0.88,"","");

/////////////////////START ETA///////////////////////
	std::vector<TLorentzVector> etas;
		
	double etaFitdE, etaMeasdE;
	
	TProfile* hetafit = new TProfile ("hetafit"," #eta #rightarrow #pi^{+} #pi^{-} #gamma Fitted Energy Resolution;cos(#theta *);#sigma_{E}/#sqrt{E_{g}}" , 20, -1, 1, "");

	TProfile* hetameas = new TProfile("hetameas"," #eta #rightarrow #pi^{+} #pi^{-} #gamma Reconstructed Energy Resolution;cos(#theta *);#sigma_{E}/#sqrt{E_{g}}", 20, -1,1,"");

	//TProfile* hpi0meas = new TProfile("hjpsimeas"," J/#psi  Reconstructed Energy Resolution;cos(#theta);#sigma_{E}", 90, -1,1,"");	

	TTreeReader myreader2(etatree);
	TTreeReaderValue<std::vector<double> > etaFitEnergyErr(myreader2,"fitParent_err");
	TTreeReaderValue<std::vector<std::vector<double> > > etamcparts_neut(myreader2,"mcNeutralVec");
	TTreeReaderValue<std::vector<std::vector<double> > > etamcparts_char(myreader2,"mcChargedVec");
	TTreeReaderValue<std::vector<double> > etaMeasEnergyErr(myreader2,"measParent_err");	

	while(myreader2.Next()){
		etaFitdE=etaFitEnergyErr->at(3);
		etaMeasdE=etaMeasEnergyErr->at(3);
		TLorentzVector tlv, tlv2, tlv3, tlvp;		
		
		
			tlv.SetPxPyPzE( etamcparts_neut->at(0).at(0),
					etamcparts_neut->at(0).at(1),
					etamcparts_neut->at(0).at(2),
					etamcparts_neut->at(0).at(3));

			tlv2.SetPxPyPzE( etamcparts_char->at(0).at(0),
					 etamcparts_char->at(0).at(1),
					 etamcparts_char->at(0).at(2),
					 etamcparts_char->at(0).at(3));

			tlv3.SetPxPyPzE( etamcparts_char->at(1).at(0),
					 etamcparts_char->at(1).at(1),
					 etamcparts_char->at(1).at(2),
					 etamcparts_char->at(1).at(3));
		 
		tlvp = tlv+tlv2+tlv3;
		TVector3 vp, v1,v2, boostvector;
		vp = tlvp.Vect();
		boostvector = tlvp.BoostVector();
		double costhetastar;

		 tlv.Boost(-boostvector);
		// tlv2.Boost(-boostvector);
		v1=tlv.Vect();
	//	v2=tlv2.Vect();	
		
		//std::cout<<v1.Dot(vp)<<" ";
		costhetastar= v1.Dot(vp)/(v1.Mag() *vp.Mag()  );		
		//if( v2.Dot(vp)/(v2.Mag()*vp.Mag() ) > costhetastar){
		//	costhetastar = v2.Dot(vp)/(v2.Mag()*vp.Mag() );
		//}
		//std::cout<<costhetastar<<" ";
		
 
		//hjpsimeas->Fill(tlvp.CosTheta(), jpsiMeasdE);
		hetafit->Fill(costhetastar, etaFitdE/sqrt(20.0));
		hetameas->Fill(costhetastar,etaMeasdE/sqrt(10.0));
		
	}
	hetafit->SetMinimum(0.0);
	hetafit->SetMaximum(0.18);
	TCanvas* c3 = new TCanvas();
	hetameas->SetLineColor(kRed);
	hetameas->SetMarkerStyle(3);
	hetameas->SetMarkerColor(kRed);
	//hetameas->SetLineStyle(2);
	hetafit->Draw();
	hetameas->Draw("sames");
	c3->BuildLegend(0.5,0.67,0.88,0.88,"","");
	

/////////////////////////start etapios/////////////////



std::vector<TLorentzVector> etapi0s;
		
	double etapi0FitdE, etapi0MeasdE;
	
	TProfile* hetapi0fit = new TProfile ("hetapi0fit"," #eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 1C Fitted Energy Resolution;cos(#theta *);#sigma_{E}/#sqrt{E_{g}}" , 20, -1, 1, "");
	TProfile* hetapi0meas = new TProfile("hetapi0meas"," #eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 1C Reconstructed Energy Resolution;cos(#theta *);#sigma_{E}/#sqrt{E_{g}}", 20, -1,1,"");

	//TProfile* hpi0meas = new TProfile("hjpsimeas"," J/#psi  Reconstructed Energy Resolution;cos(#theta);#sigma_{E}", 90, -1,1,"");	

	TTreeReader myreader3(etapi0tree);
	TTreeReaderValue<std::vector<double> > etapi0FitEnergyErr(myreader3,"fitParent_err");
	TTreeReaderValue<std::vector<std::vector<double> > > etapi0mcparts_neut(myreader3,"mcNeutralVec");
	TTreeReaderValue<std::vector<std::vector<double> > > etapi0mcparts_char(myreader3,"mcChargedVec"); 
	TTreeReaderValue<std::vector<double> > etapi0MeasEnergyErr(myreader3,"measParent_err");
	
	while(myreader3.Next()){
		etapi0FitdE=etapi0FitEnergyErr->at(3);
		etapi0MeasdE=etapi0MeasEnergyErr->at(3);
		TLorentzVector tlv, tlv2, tlv3,tlv4, tlvp, tlvpi0;		
		
		
			tlv.SetPxPyPzE( etapi0mcparts_neut->at(0).at(0),
					etapi0mcparts_neut->at(0).at(1),
					etapi0mcparts_neut->at(0).at(2),
					etapi0mcparts_neut->at(0).at(3));

			tlv2.SetPxPyPzE( etapi0mcparts_neut->at(1).at(0),
					etapi0mcparts_neut->at(1).at(1),
					etapi0mcparts_neut->at(1).at(2),
					etapi0mcparts_neut->at(1).at(3));

			tlv3.SetPxPyPzE( etapi0mcparts_char->at(0).at(0),
					 etapi0mcparts_char->at(0).at(1),
					 etapi0mcparts_char->at(0).at(2),
					 etapi0mcparts_char->at(0).at(3));

			tlv4.SetPxPyPzE( etapi0mcparts_char->at(1).at(0),
					 etapi0mcparts_char->at(1).at(1),
					 etapi0mcparts_char->at(1).at(2),
					 etapi0mcparts_char->at(1).at(3));
		
		 
		tlvp = tlv+tlv2+tlv3+tlv4;
		tlvpi0 = tlv+tlv2;
		TVector3 vp, v1,v2, boostvector;
		vp = tlvp.Vect();
		boostvector = tlvp.BoostVector();
		double costhetastar;

//		 tlv.Boost(-boostvector);
//		 tlv2.Boost(-boostvector);
//		v1=tlv.Vect();
//		v2=tlv2.Vect();
		tlvpi0.Boost(-boostvector);	
		v1 = tlvpi0.Vect();
		//std::cout<<v1.Dot(vp)<<" ";
		costhetastar= v1.Dot(vp)/(v1.Mag() *vp.Mag()  );		
		//if( v2.Dot(vp)/(v2.Mag()*vp.Mag() ) > costhetastar){
		//	costhetastar = v2.Dot(vp)/(v2.Mag()*vp.Mag() );
	//	}
		//std::cout<<costhetastar<<" ";
		
 
		//hjpsimeas->Fill(tlvp.CosTheta(), jpsiMeasdE);
		hetapi0fit->Fill(costhetastar, etapi0FitdE/sqrt(20.0));
		hetapi0meas->Fill(costhetastar, etapi0MeasdE/sqrt(20.0));
	}
	
	TCanvas* c4 = new TCanvas();
	hetapi0fit->SetMinimum(0.0);
	hetapi0fit->SetMaximum(0.14);
	hetapi0meas->SetLineColor(kRed);
	hetapi0meas->SetMarkerStyle(3);
	hetapi0meas->SetMarkerColor(kRed);
	//hetapi0meas->SetLineStyle(2);
	hetapi0fit->Draw();
	
	hetapi0meas->Draw("sames");
	c4->BuildLegend(0.5,0.67,0.88,0.88,"","");


/////////////////////////start etapios 2c/////////////////



//std::vector<TLorentzVector> etapi0s;
		
	double etapi02cFitdE, etapi02cMeasdE;
	
	TProfile* hetapi02cfit = new TProfile ("hetapi02cfit"," #eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 2C Fitted Energy Resolution;cos(#theta *);#sigma_{E}/#sqrt{E_{g}}" , 20, -1, 1,0.0,0.18, "");
	TProfile* hetapi02cmeas = new TProfile("hetapi02cmeas"," #eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 2C Reconstructed Energy Resolution;cos(#theta *);#sigma_{E}/#sqrt{E_{g}}", 20, -1,1,0.0,0.18,"");

	//TProfile* hpi0meas = new TProfile("hjpsimeas"," J/#psi  Reconstructed Energy Resolution;cos(#theta);#sigma_{E}", 90, -1,1,"");	

	TTreeReader myreader5(etapi02ctree);
	TTreeReaderValue<std::vector<double> > etapi02cFitEnergyErr(myreader5,"fitParent_err");
	TTreeReaderValue<std::vector<std::vector<double> > > etapi02cmcparts_neut(myreader5,"mcNeutralVec");
	TTreeReaderValue<std::vector<std::vector<double> > > etapi02cmcparts_char(myreader5,"mcChargedVec"); 
	TTreeReaderValue<std::vector<double> > etapi02cMeasEnergyErr(myreader5,"measParent_err");
	
	while(myreader5.Next()){
		etapi02cFitdE=etapi02cFitEnergyErr->at(3);
		etapi02cMeasdE=etapi02cMeasEnergyErr->at(3);
		TLorentzVector tlv, tlv2, tlv3,tlv4, tlvp, tlvpi0;		
		
		
			tlv.SetPxPyPzE( etapi02cmcparts_neut->at(0).at(0),
					etapi02cmcparts_neut->at(0).at(1),
					etapi02cmcparts_neut->at(0).at(2),
					etapi02cmcparts_neut->at(0).at(3));

			tlv2.SetPxPyPzE( etapi02cmcparts_neut->at(1).at(0),
					etapi02cmcparts_neut->at(1).at(1),
					etapi02cmcparts_neut->at(1).at(2),
					etapi02cmcparts_neut->at(1).at(3));

			tlv3.SetPxPyPzE( etapi02cmcparts_char->at(0).at(0),
					 etapi02cmcparts_char->at(0).at(1),
					 etapi02cmcparts_char->at(0).at(2),
					 etapi02cmcparts_char->at(0).at(3));

			tlv4.SetPxPyPzE( etapi02cmcparts_char->at(1).at(0),
					 etapi02cmcparts_char->at(1).at(1),
					 etapi02cmcparts_char->at(1).at(2),
					 etapi02cmcparts_char->at(1).at(3));
		
		 
		tlvp = tlv+tlv2+tlv3+tlv4;
		tlvpi0 = tlv+tlv2;
		TVector3 vp, v1,v2, boostvector;
		vp = tlvp.Vect();
		boostvector = tlvp.BoostVector();
		double costhetastar;

//		 tlv.Boost(-boostvector);
//		 tlv2.Boost(-boostvector);
//		v1=tlv.Vect();
//		v2=tlv2.Vect();	
		tlvpi0.Boost(-boostvector);
		v1=tlvpi0.Vect();		
		
		//std::cout<<v1.Dot(vp)<<" ";
		costhetastar= v1.Dot(vp)/(v1.Mag() *vp.Mag()  );		
	//	if( v2.Dot(vp)/(v2.Mag()*vp.Mag() ) > costhetastar){
	//		costhetastar = v2.Dot(vp)/(v2.Mag()*vp.Mag() );
	//	}
		//std::cout<<costhetastar<<" ";
		
 
		//hjpsimeas->Fill(tlvp.CosTheta(), jpsiMeasdE);
		hetapi02cfit->Fill(costhetastar, etapi02cFitdE/sqrt(20.0));
		hetapi02cmeas->Fill(costhetastar, etapi02cMeasdE/sqrt(20.0));
	}
	
	TCanvas* c5 = new TCanvas();
	//c5->SetLogy();
	hetapi02cfit->SetMinimum(0.0);
	hetapi02cfit->SetMaximum(0.14);
	hetapi02cfit->Draw();
	hetapi02cmeas->SetLineColor(kRed);
	//hetapi02cmeas->SetLineStyle(2);
	hetapi02cmeas->SetMarkerStyle(3);
	hetapi02cmeas->SetMarkerColor(kRed);
	hetapi02cmeas->Draw("sames");
	c5->BuildLegend(0.5,0.67,0.88,0.88,"","");
	//hetapi02cfit->Draw("sames");











}
