#include "OutputClass.cpp"
#include "TTree.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TFile.h"
#include "TStyle.h"
#include "TCanvas.h"
void Loop(){
	TTree* tree=0;
	TFile *f = TFile::Open("MassConstraint_calibrated.root");
 	TFile *f2 = new TFile("test_cal.root","RECREATE");
	f->GetObject("tree",tree);
  OutputClass* oc = new OutputClass();


	TTreeReader mydoubleReader0(tree);
	TTreeReaderValue<Double_t> mydoublevar0(mydoubleReader0,"RecoEnergy");
	while(mydoubleReader0.Next()){	
		oc->hRecoEnergy->Fill(*mydoublevar0);
	}
	TTreeReader mydoubleReader1(tree);
	TTreeReaderValue<Double_t> mydoublevar1(mydoubleReader1,"FitEnergy");
	while(mydoubleReader1.Next()){	
		oc->hFitEnergy->Fill(*mydoublevar1);
	}
	TTreeReader mydoubleReader2(tree);
	TTreeReaderValue<Double_t> mydoublevar2(mydoubleReader2,"RecoMass");
	while(mydoubleReader2.Next()){	
		oc->hRecoMass->Fill(*mydoublevar2);
	}
	TTreeReader mydoubleReader3(tree);
	TTreeReaderValue<Double_t> mydoublevar3(mydoubleReader3,"FitProbability");
	while(mydoubleReader3.Next()){	
		oc->hFitProbability->Fill(*mydoublevar3);
	}
	TTreeReader mydoubleReader4(tree);
	TTreeReaderValue<Double_t> mydoublevar4(mydoubleReader4,"Chisq");
	while(mydoubleReader4.Next()){	
		oc->hChisq->Fill(*mydoublevar4);
	}
  	TTreeReader my2dvecReader5_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_0_0(my2dvecReader5_0_0,"measNeutralVec");
  	while(my2dvecReader5_0_0.Next()){
		oc->hmeasNeutralVec_part_0_param_0->Fill(my2dvecvar5_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader5_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_0_1(my2dvecReader5_0_1,"measNeutralVec");
  	while(my2dvecReader5_0_1.Next()){
		oc->hmeasNeutralVec_part_0_param_1->Fill(my2dvecvar5_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader5_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_0_2(my2dvecReader5_0_2,"measNeutralVec");
  	while(my2dvecReader5_0_2.Next()){
		oc->hmeasNeutralVec_part_0_param_2->Fill(my2dvecvar5_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader5_0_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_0_3(my2dvecReader5_0_3,"measNeutralVec");
  	while(my2dvecReader5_0_3.Next()){
		oc->hmeasNeutralVec_part_0_param_3->Fill(my2dvecvar5_0_3->at(0).at(3));
	}
  	TTreeReader my2dvecReader6_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar6_0_0(my2dvecReader6_0_0,"measNeutralParamVec");
  	while(my2dvecReader6_0_0.Next()){
		oc->hmeasNeutralParamVec_part_0_param_0->Fill(my2dvecvar6_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader6_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar6_0_1(my2dvecReader6_0_1,"measNeutralParamVec");
  	while(my2dvecReader6_0_1.Next()){
		oc->hmeasNeutralParamVec_part_0_param_1->Fill(my2dvecvar6_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader6_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar6_0_2(my2dvecReader6_0_2,"measNeutralParamVec");
  	while(my2dvecReader6_0_2.Next()){
		oc->hmeasNeutralParamVec_part_0_param_2->Fill(my2dvecvar6_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader7_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_0_0(my2dvecReader7_0_0,"measChargedVec");
  	while(my2dvecReader7_0_0.Next()){
		oc->hmeasChargedVec_part_0_param_0->Fill(my2dvecvar7_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader7_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_0_1(my2dvecReader7_0_1,"measChargedVec");
  	while(my2dvecReader7_0_1.Next()){
		oc->hmeasChargedVec_part_0_param_1->Fill(my2dvecvar7_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader7_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_0_2(my2dvecReader7_0_2,"measChargedVec");
  	while(my2dvecReader7_0_2.Next()){
		oc->hmeasChargedVec_part_0_param_2->Fill(my2dvecvar7_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader7_0_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_0_3(my2dvecReader7_0_3,"measChargedVec");
  	while(my2dvecReader7_0_3.Next()){
		oc->hmeasChargedVec_part_0_param_3->Fill(my2dvecvar7_0_3->at(0).at(3));
	}
  	TTreeReader my2dvecReader7_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_1_0(my2dvecReader7_1_0,"measChargedVec");
  	while(my2dvecReader7_1_0.Next()){
		oc->hmeasChargedVec_part_1_param_0->Fill(my2dvecvar7_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader7_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_1_1(my2dvecReader7_1_1,"measChargedVec");
  	while(my2dvecReader7_1_1.Next()){
		oc->hmeasChargedVec_part_1_param_1->Fill(my2dvecvar7_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader7_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_1_2(my2dvecReader7_1_2,"measChargedVec");
  	while(my2dvecReader7_1_2.Next()){
		oc->hmeasChargedVec_part_1_param_2->Fill(my2dvecvar7_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader7_1_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar7_1_3(my2dvecReader7_1_3,"measChargedVec");
  	while(my2dvecReader7_1_3.Next()){
		oc->hmeasChargedVec_part_1_param_3->Fill(my2dvecvar7_1_3->at(1).at(3));
	}
  	TTreeReader my2dvecReader8_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_0_0(my2dvecReader8_0_0,"fitNeutralVec");
  	while(my2dvecReader8_0_0.Next()){
		oc->hfitNeutralVec_part_0_param_0->Fill(my2dvecvar8_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader8_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_0_1(my2dvecReader8_0_1,"fitNeutralVec");
  	while(my2dvecReader8_0_1.Next()){
		oc->hfitNeutralVec_part_0_param_1->Fill(my2dvecvar8_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader8_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_0_2(my2dvecReader8_0_2,"fitNeutralVec");
  	while(my2dvecReader8_0_2.Next()){
		oc->hfitNeutralVec_part_0_param_2->Fill(my2dvecvar8_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader8_0_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_0_3(my2dvecReader8_0_3,"fitNeutralVec");
  	while(my2dvecReader8_0_3.Next()){
		oc->hfitNeutralVec_part_0_param_3->Fill(my2dvecvar8_0_3->at(0).at(3));
	}
  	TTreeReader my2dvecReader9_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar9_0_0(my2dvecReader9_0_0,"fitNeutralParamVec");
  	while(my2dvecReader9_0_0.Next()){
		oc->hfitNeutralParamVec_part_0_param_0->Fill(my2dvecvar9_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader9_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar9_0_1(my2dvecReader9_0_1,"fitNeutralParamVec");
  	while(my2dvecReader9_0_1.Next()){
		oc->hfitNeutralParamVec_part_0_param_1->Fill(my2dvecvar9_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader9_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar9_0_2(my2dvecReader9_0_2,"fitNeutralParamVec");
  	while(my2dvecReader9_0_2.Next()){
		oc->hfitNeutralParamVec_part_0_param_2->Fill(my2dvecvar9_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader10_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_0_0(my2dvecReader10_0_0,"fitChargedVec");
  	while(my2dvecReader10_0_0.Next()){
		oc->hfitChargedVec_part_0_param_0->Fill(my2dvecvar10_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader10_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_0_1(my2dvecReader10_0_1,"fitChargedVec");
  	while(my2dvecReader10_0_1.Next()){
		oc->hfitChargedVec_part_0_param_1->Fill(my2dvecvar10_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader10_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_0_2(my2dvecReader10_0_2,"fitChargedVec");
  	while(my2dvecReader10_0_2.Next()){
		oc->hfitChargedVec_part_0_param_2->Fill(my2dvecvar10_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader10_0_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_0_3(my2dvecReader10_0_3,"fitChargedVec");
  	while(my2dvecReader10_0_3.Next()){
		oc->hfitChargedVec_part_0_param_3->Fill(my2dvecvar10_0_3->at(0).at(3));
	}
  	TTreeReader my2dvecReader10_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_1_0(my2dvecReader10_1_0,"fitChargedVec");
  	while(my2dvecReader10_1_0.Next()){
		oc->hfitChargedVec_part_1_param_0->Fill(my2dvecvar10_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader10_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_1_1(my2dvecReader10_1_1,"fitChargedVec");
  	while(my2dvecReader10_1_1.Next()){
		oc->hfitChargedVec_part_1_param_1->Fill(my2dvecvar10_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader10_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_1_2(my2dvecReader10_1_2,"fitChargedVec");
  	while(my2dvecReader10_1_2.Next()){
		oc->hfitChargedVec_part_1_param_2->Fill(my2dvecvar10_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader10_1_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar10_1_3(my2dvecReader10_1_3,"fitChargedVec");
  	while(my2dvecReader10_1_3.Next()){
		oc->hfitChargedVec_part_1_param_3->Fill(my2dvecvar10_1_3->at(1).at(3));
	}
  	TTreeReader my2dvecReader11_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar11_0_0(my2dvecReader11_0_0,"measNeutral_err");
  	while(my2dvecReader11_0_0.Next()){
		oc->hmeasNeutral_err_part_0_param_0->Fill(my2dvecvar11_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader11_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar11_0_1(my2dvecReader11_0_1,"measNeutral_err");
  	while(my2dvecReader11_0_1.Next()){
		oc->hmeasNeutral_err_part_0_param_1->Fill(my2dvecvar11_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader11_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar11_0_2(my2dvecReader11_0_2,"measNeutral_err");
  	while(my2dvecReader11_0_2.Next()){
		oc->hmeasNeutral_err_part_0_param_2->Fill(my2dvecvar11_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader12_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar12_0_0(my2dvecReader12_0_0,"measCharged_err");
  	while(my2dvecReader12_0_0.Next()){
		oc->hmeasCharged_err_part_0_param_0->Fill(my2dvecvar12_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader12_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar12_0_1(my2dvecReader12_0_1,"measCharged_err");
  	while(my2dvecReader12_0_1.Next()){
		oc->hmeasCharged_err_part_0_param_1->Fill(my2dvecvar12_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader12_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar12_0_2(my2dvecReader12_0_2,"measCharged_err");
  	while(my2dvecReader12_0_2.Next()){
		oc->hmeasCharged_err_part_0_param_2->Fill(my2dvecvar12_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader12_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar12_1_0(my2dvecReader12_1_0,"measCharged_err");
  	while(my2dvecReader12_1_0.Next()){
		oc->hmeasCharged_err_part_1_param_0->Fill(my2dvecvar12_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader12_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar12_1_1(my2dvecReader12_1_1,"measCharged_err");
  	while(my2dvecReader12_1_1.Next()){
		oc->hmeasCharged_err_part_1_param_1->Fill(my2dvecvar12_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader12_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar12_1_2(my2dvecReader12_1_2,"measCharged_err");
  	while(my2dvecReader12_1_2.Next()){
		oc->hmeasCharged_err_part_1_param_2->Fill(my2dvecvar12_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader13_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar13_0_0(my2dvecReader13_0_0,"fitNeutral_err");
  	while(my2dvecReader13_0_0.Next()){
		oc->hfitNeutral_err_part_0_param_0->Fill(my2dvecvar13_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader13_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar13_0_1(my2dvecReader13_0_1,"fitNeutral_err");
  	while(my2dvecReader13_0_1.Next()){
		oc->hfitNeutral_err_part_0_param_1->Fill(my2dvecvar13_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader13_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar13_0_2(my2dvecReader13_0_2,"fitNeutral_err");
  	while(my2dvecReader13_0_2.Next()){
		oc->hfitNeutral_err_part_0_param_2->Fill(my2dvecvar13_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader14_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar14_0_0(my2dvecReader14_0_0,"fitCharged_err");
  	while(my2dvecReader14_0_0.Next()){
		oc->hfitCharged_err_part_0_param_0->Fill(my2dvecvar14_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader14_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar14_0_1(my2dvecReader14_0_1,"fitCharged_err");
  	while(my2dvecReader14_0_1.Next()){
		oc->hfitCharged_err_part_0_param_1->Fill(my2dvecvar14_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader14_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar14_0_2(my2dvecReader14_0_2,"fitCharged_err");
  	while(my2dvecReader14_0_2.Next()){
		oc->hfitCharged_err_part_0_param_2->Fill(my2dvecvar14_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader14_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar14_1_0(my2dvecReader14_1_0,"fitCharged_err");
  	while(my2dvecReader14_1_0.Next()){
		oc->hfitCharged_err_part_1_param_0->Fill(my2dvecvar14_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader14_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar14_1_1(my2dvecReader14_1_1,"fitCharged_err");
  	while(my2dvecReader14_1_1.Next()){
		oc->hfitCharged_err_part_1_param_1->Fill(my2dvecvar14_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader14_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar14_1_2(my2dvecReader14_1_2,"fitCharged_err");
  	while(my2dvecReader14_1_2.Next()){
		oc->hfitCharged_err_part_1_param_2->Fill(my2dvecvar14_1_2->at(1).at(2));
	}
  	TTreeReader myvecReader17_0(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar17_0(myvecReader17_0,"measParent_err");
  	while(myvecReader17_0.Next()){
		oc->hmeasParent_err_param_0->Fill(myvecvar17_0->at(0));
	}
  	TTreeReader myvecReader17_1(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar17_1(myvecReader17_1,"measParent_err");
  	while(myvecReader17_1.Next()){
		oc->hmeasParent_err_param_1->Fill(myvecvar17_1->at(1));
	}
  	TTreeReader myvecReader17_2(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar17_2(myvecReader17_2,"measParent_err");
  	while(myvecReader17_2.Next()){
		oc->hmeasParent_err_param_2->Fill(myvecvar17_2->at(2));
	}
  	TTreeReader myvecReader17_3(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar17_3(myvecReader17_3,"measParent_err");
  	while(myvecReader17_3.Next()){
		oc->hmeasParent_err_param_3->Fill(myvecvar17_3->at(3));
	}
  	TTreeReader myvecReader18_0(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar18_0(myvecReader18_0,"fitParent_err");
  	while(myvecReader18_0.Next()){
		oc->hfitParent_err_param_0->Fill(myvecvar18_0->at(0));
	}
  	TTreeReader myvecReader18_1(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar18_1(myvecReader18_1,"fitParent_err");
  	while(myvecReader18_1.Next()){
		oc->hfitParent_err_param_1->Fill(myvecvar18_1->at(1));
	}
  	TTreeReader myvecReader18_2(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar18_2(myvecReader18_2,"fitParent_err");
  	while(myvecReader18_2.Next()){
		oc->hfitParent_err_param_2->Fill(myvecvar18_2->at(2));
	}
  	TTreeReader myvecReader18_3(tree);
  	TTreeReaderValue<std::vector<double> > myvecvar18_3(myvecReader18_3,"fitParent_err");
  	while(myvecReader18_3.Next()){
		oc->hfitParent_err_param_3->Fill(myvecvar18_3->at(3));
	}
  	TTreeReader my2dvecReader19_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar19_0_0(my2dvecReader19_0_0,"fitmeas_NeutralPulls");
  	while(my2dvecReader19_0_0.Next()){
		oc->hfitmeas_NeutralPulls_part_0_param_0->Fill(my2dvecvar19_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader19_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar19_0_1(my2dvecReader19_0_1,"fitmeas_NeutralPulls");
  	while(my2dvecReader19_0_1.Next()){
		oc->hfitmeas_NeutralPulls_part_0_param_1->Fill(my2dvecvar19_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader19_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar19_0_2(my2dvecReader19_0_2,"fitmeas_NeutralPulls");
  	while(my2dvecReader19_0_2.Next()){
		oc->hfitmeas_NeutralPulls_part_0_param_2->Fill(my2dvecvar19_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader20_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar20_0_0(my2dvecReader20_0_0,"fitmeas_ChargedPulls");
  	while(my2dvecReader20_0_0.Next()){
		oc->hfitmeas_ChargedPulls_part_0_param_0->Fill(my2dvecvar20_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader20_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar20_0_1(my2dvecReader20_0_1,"fitmeas_ChargedPulls");
  	while(my2dvecReader20_0_1.Next()){
		oc->hfitmeas_ChargedPulls_part_0_param_1->Fill(my2dvecvar20_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader20_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar20_0_2(my2dvecReader20_0_2,"fitmeas_ChargedPulls");
  	while(my2dvecReader20_0_2.Next()){
		oc->hfitmeas_ChargedPulls_part_0_param_2->Fill(my2dvecvar20_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader20_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar20_1_0(my2dvecReader20_1_0,"fitmeas_ChargedPulls");
  	while(my2dvecReader20_1_0.Next()){
		oc->hfitmeas_ChargedPulls_part_1_param_0->Fill(my2dvecvar20_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader20_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar20_1_1(my2dvecReader20_1_1,"fitmeas_ChargedPulls");
  	while(my2dvecReader20_1_1.Next()){
		oc->hfitmeas_ChargedPulls_part_1_param_1->Fill(my2dvecvar20_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader20_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar20_1_2(my2dvecReader20_1_2,"fitmeas_ChargedPulls");
  	while(my2dvecReader20_1_2.Next()){
		oc->hfitmeas_ChargedPulls_part_1_param_2->Fill(my2dvecvar20_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader21_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_0_0(my2dvecReader21_0_0,"mcChargedVec");
  	while(my2dvecReader21_0_0.Next()){
		oc->hmcChargedVec_part_0_param_0->Fill(my2dvecvar21_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader21_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_0_1(my2dvecReader21_0_1,"mcChargedVec");
  	while(my2dvecReader21_0_1.Next()){
		oc->hmcChargedVec_part_0_param_1->Fill(my2dvecvar21_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader21_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_0_2(my2dvecReader21_0_2,"mcChargedVec");
  	while(my2dvecReader21_0_2.Next()){
		oc->hmcChargedVec_part_0_param_2->Fill(my2dvecvar21_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader21_0_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_0_3(my2dvecReader21_0_3,"mcChargedVec");
  	while(my2dvecReader21_0_3.Next()){
		oc->hmcChargedVec_part_0_param_3->Fill(my2dvecvar21_0_3->at(0).at(3));
	}
  	TTreeReader my2dvecReader21_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_1_0(my2dvecReader21_1_0,"mcChargedVec");
  	while(my2dvecReader21_1_0.Next()){
		oc->hmcChargedVec_part_1_param_0->Fill(my2dvecvar21_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader21_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_1_1(my2dvecReader21_1_1,"mcChargedVec");
  	while(my2dvecReader21_1_1.Next()){
		oc->hmcChargedVec_part_1_param_1->Fill(my2dvecvar21_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader21_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_1_2(my2dvecReader21_1_2,"mcChargedVec");
  	while(my2dvecReader21_1_2.Next()){
		oc->hmcChargedVec_part_1_param_2->Fill(my2dvecvar21_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader21_1_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar21_1_3(my2dvecReader21_1_3,"mcChargedVec");
  	while(my2dvecReader21_1_3.Next()){
		oc->hmcChargedVec_part_1_param_3->Fill(my2dvecvar21_1_3->at(1).at(3));
	}
  	TTreeReader my2dvecReader22_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar22_0_0(my2dvecReader22_0_0,"mcChargedParamVec");
  	while(my2dvecReader22_0_0.Next()){
		oc->hmcChargedParamVec_part_0_param_0->Fill(my2dvecvar22_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader22_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar22_0_1(my2dvecReader22_0_1,"mcChargedParamVec");
  	while(my2dvecReader22_0_1.Next()){
		oc->hmcChargedParamVec_part_0_param_1->Fill(my2dvecvar22_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader22_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar22_0_2(my2dvecReader22_0_2,"mcChargedParamVec");
  	while(my2dvecReader22_0_2.Next()){
		oc->hmcChargedParamVec_part_0_param_2->Fill(my2dvecvar22_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader22_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar22_1_0(my2dvecReader22_1_0,"mcChargedParamVec");
  	while(my2dvecReader22_1_0.Next()){
		oc->hmcChargedParamVec_part_1_param_0->Fill(my2dvecvar22_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader22_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar22_1_1(my2dvecReader22_1_1,"mcChargedParamVec");
  	while(my2dvecReader22_1_1.Next()){
		oc->hmcChargedParamVec_part_1_param_1->Fill(my2dvecvar22_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader22_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar22_1_2(my2dvecReader22_1_2,"mcChargedParamVec");
  	while(my2dvecReader22_1_2.Next()){
		oc->hmcChargedParamVec_part_1_param_2->Fill(my2dvecvar22_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader23_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_0_0(my2dvecReader23_0_0,"mcNeutralVec");
  	while(my2dvecReader23_0_0.Next()){
		oc->hmcNeutralVec_part_0_param_0->Fill(my2dvecvar23_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader23_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_0_1(my2dvecReader23_0_1,"mcNeutralVec");
  	while(my2dvecReader23_0_1.Next()){
		oc->hmcNeutralVec_part_0_param_1->Fill(my2dvecvar23_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader23_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_0_2(my2dvecReader23_0_2,"mcNeutralVec");
  	while(my2dvecReader23_0_2.Next()){
		oc->hmcNeutralVec_part_0_param_2->Fill(my2dvecvar23_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader23_0_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_0_3(my2dvecReader23_0_3,"mcNeutralVec");
  	while(my2dvecReader23_0_3.Next()){
		oc->hmcNeutralVec_part_0_param_3->Fill(my2dvecvar23_0_3->at(0).at(3));
	}
  	TTreeReader my2dvecReader24_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar24_0_0(my2dvecReader24_0_0,"mcNeutralParamVec");
  	while(my2dvecReader24_0_0.Next()){
		oc->hmcNeutralParamVec_part_0_param_0->Fill(my2dvecvar24_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader24_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar24_0_1(my2dvecReader24_0_1,"mcNeutralParamVec");
  	while(my2dvecReader24_0_1.Next()){
		oc->hmcNeutralParamVec_part_0_param_1->Fill(my2dvecvar24_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader24_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar24_0_2(my2dvecReader24_0_2,"mcNeutralParamVec");
  	while(my2dvecReader24_0_2.Next()){
		oc->hmcNeutralParamVec_part_0_param_2->Fill(my2dvecvar24_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader25_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar25_0_0(my2dvecReader25_0_0,"measgen_NeutralPulls");
  	while(my2dvecReader25_0_0.Next()){
		oc->hmeasgen_NeutralPulls_part_0_param_0->Fill(my2dvecvar25_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader25_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar25_0_1(my2dvecReader25_0_1,"measgen_NeutralPulls");
  	while(my2dvecReader25_0_1.Next()){
		oc->hmeasgen_NeutralPulls_part_0_param_1->Fill(my2dvecvar25_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader25_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar25_0_2(my2dvecReader25_0_2,"measgen_NeutralPulls");
  	while(my2dvecReader25_0_2.Next()){
		oc->hmeasgen_NeutralPulls_part_0_param_2->Fill(my2dvecvar25_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader26_0_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar26_0_0(my2dvecReader26_0_0,"measgen_ChargedPulls");
  	while(my2dvecReader26_0_0.Next()){
		oc->hmeasgen_ChargedPulls_part_0_param_0->Fill(my2dvecvar26_0_0->at(0).at(0));
	}
  	TTreeReader my2dvecReader26_0_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar26_0_1(my2dvecReader26_0_1,"measgen_ChargedPulls");
  	while(my2dvecReader26_0_1.Next()){
		oc->hmeasgen_ChargedPulls_part_0_param_1->Fill(my2dvecvar26_0_1->at(0).at(1));
	}
  	TTreeReader my2dvecReader26_0_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar26_0_2(my2dvecReader26_0_2,"measgen_ChargedPulls");
  	while(my2dvecReader26_0_2.Next()){
		oc->hmeasgen_ChargedPulls_part_0_param_2->Fill(my2dvecvar26_0_2->at(0).at(2));
	}
  	TTreeReader my2dvecReader26_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar26_1_0(my2dvecReader26_1_0,"measgen_ChargedPulls");
  	while(my2dvecReader26_1_0.Next()){
		oc->hmeasgen_ChargedPulls_part_1_param_0->Fill(my2dvecvar26_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader26_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar26_1_1(my2dvecReader26_1_1,"measgen_ChargedPulls");
  	while(my2dvecReader26_1_1.Next()){
		oc->hmeasgen_ChargedPulls_part_1_param_1->Fill(my2dvecvar26_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader26_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar26_1_2(my2dvecReader26_1_2,"measgen_ChargedPulls");
  	while(my2dvecReader26_1_2.Next()){
		oc->hmeasgen_ChargedPulls_part_1_param_2->Fill(my2dvecvar26_1_2->at(1).at(2));
	}


	//oc->hmeasgen_NeutralPulls_part_0_param_0->Fit("gaus");
        // oc->hmeasgen_NeutralPulls_part_0_param_1->Fit("gaus");
	// oc->hmeasgen_NeutralPulls_part_0_param_2->Fit("gaus");
	// oc->hmeasgen_NeutralPulls_part_1_param_0->Fit("gaus");
	// oc->hmeasgen_NeutralPulls_part_1_param_1->Fit("gaus");
	// oc->hmeasgen_NeutralPulls_part_1_param_2->Fit("gaus");

	oc->hfitmeas_ChargedPulls_part_0_param_0->Fit("gaus");
         oc->hfitmeas_ChargedPulls_part_0_param_1->Fit("gaus");
	 oc->hfitmeas_ChargedPulls_part_0_param_2->Fit("gaus");
	 oc->hfitmeas_ChargedPulls_part_1_param_0->Fit("gaus");
	 oc->hfitmeas_ChargedPulls_part_1_param_1->Fit("gaus");
	 oc->hfitmeas_ChargedPulls_part_1_param_2->Fit("gaus");
	oc->hfitmeas_NeutralPulls_part_0_param_0->Fit("gaus");
         oc->hfitmeas_NeutralPulls_part_0_param_1->Fit("gaus");
	 oc->hfitmeas_NeutralPulls_part_0_param_2->Fit("gaus");

	TStyle *st1 = new TStyle("st1","my style");
    	st1->SetOptStat(111111);
	st1->SetOptFit(1);
	st1->SetStatW(0.18);
	st1->SetStatH(0.18);
	
	
    st1->cd();

	TCanvas* c0 = new TCanvas();
	oc->hFitProbability->Fit("pol0");
	oc->hFitProbability->Draw("E");

	TCanvas* c1 = new TCanvas();
	oc->hFitEnergy->Draw();
	oc->hRecoEnergy->SetLineStyle(2);
	oc->hRecoEnergy->SetLineColor(kRed);
	oc->hRecoEnergy->Draw("sames");
	c1->BuildLegend(0.5,0.67,0.88,0.88,"","");

	TCanvas* c2 = new TCanvas();
	TH1D* hrejects;
	hrejects = (TH1D*) f->Get("hrejects");
	hrejects->SetTitle("#eta #rightarrow #pi^{+} #pi^{-} #gamma Rejected Events");
	hrejects->GetXaxis()->SetTitle("Rejection Type");
	hrejects->GetYaxis()->SetTitle("Events Per Bin");
	hrejects->SetFillColor(kBlue);
	hrejects->Draw("B");
/////////charged stuff

	TH1D* hcharE = new TH1D("hcharE","charged 1/pt",100,0,12);
	TTreeReader my2dvecReaderExtra1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvarExtra1(my2dvecReaderExtra1,"measChargedVec");
  	while(my2dvecReaderExtra1.Next()){
		double px = my2dvecvarExtra1->at(0).at(0);
		double py = my2dvecvarExtra1->at(0).at(1);
		double pt = sqrt(px*px + py*py);
		hcharE->Fill(1/pt);
		px = my2dvecvarExtra1->at(1).at(0);
		py = my2dvecvarExtra1->at(1).at(1);
		pt = sqrt(px*px + py*py);	
		hcharE->Fill(1/pt);
	}

	TCanvas* cExtra = new TCanvas();
	//hneutE->Fit("gaus");
	hcharE->Draw();
	
	TH1D* hcharErr = new TH1D("hcharErr","charged curvature errors",100,0,0.05);
	TTreeReader my2dvecReaderExtra2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvarExtra2(my2dvecReaderExtra2,"measCharged_err");
  	while(my2dvecReaderExtra2.Next()){
		hcharErr->Fill(my2dvecvarExtra2->at(0).at(0));
		hcharErr->Fill(my2dvecvarExtra2->at(1).at(0));
	}
	TCanvas* cExtra2 = new TCanvas();
	hcharErr->Draw();
	
	TH1D* hcharFitErr = new TH1D("hcharFitErr","charged curvature fit errors",100,0,0.1);
	TTreeReader my2dvecReaderExtra3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvarExtra3(my2dvecReaderExtra3,"fitCharged_err");
  	while(my2dvecReaderExtra3.Next()){
		hcharFitErr->Fill(my2dvecvarExtra3->at(0).at(0));
		hcharFitErr->Fill(my2dvecvarExtra3->at(1).at(0));
	}
	TCanvas* cExtra3 = new TCanvas();
	hcharFitErr->Draw();

	///////////////////// photon stuff
	TH1D* hneutE = new TH1D("hE","#eta #rightarrow #pi^{+} #pi^{-} #gamma Measured Photon Energy;Energy GeV;Events Per 0.2 Bin",100,0,20.0);
	TTreeReader my2dvecReaderExtra1n(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvarExtra1n(my2dvecReaderExtra1n,"measNeutralParamVec");
  	while(my2dvecReaderExtra1n.Next()){
		hneutE->Fill(my2dvecvarExtra1n->at(0).at(0));
		//hneutE->Fill(my2dvecvarExtra1->at(1).at(0));
	}

	TCanvas* cExtran = new TCanvas();
	//hneutE->Fit("gaus");
	hneutE->Draw();
	
	TH1D* hneutErr = new TH1D("hneutErr","photon errors",100,0,0.7);
	TTreeReader my2dvecReaderExtra2n(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvarExtra2n(my2dvecReaderExtra2n,"measNeutral_err");
  	while(my2dvecReaderExtra2n.Next()){
		hneutErr->Fill(my2dvecvarExtra2n->at(0).at(0));
		//hneutErr->Fill(my2dvecvarExtra2n->at(1).at(0));
	}
	TCanvas* cExtra2n = new TCanvas();
	hneutErr->Draw();
	
	TH1D* hneutFitErr = new TH1D("hneutFitErr","photon fit errors",100,0,0.7);
	TTreeReader my2dvecReaderExtra3n(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvarExtra3n(my2dvecReaderExtra3n,"fitNeutral_err");
  	while(my2dvecReaderExtra3n.Next()){
		hneutFitErr->Fill(my2dvecvarExtra3n->at(0).at(0));
		//hneutFitErr->Fill(my2dvecvarExtra3n->at(1).at(0));
	}
	TCanvas* cExtra3n = new TCanvas();
	hneutFitErr->Draw();

	f2->Write();

	
	
}
