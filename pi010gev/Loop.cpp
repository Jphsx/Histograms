#include "OutputClass.cpp"
#include "TTree.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TFile.h"
#include "TStyle.h"
void Loop(){
	TTree* tree=0;
	TFile *f = TFile::Open("MassConstraint.root");
 	TFile *f2 = new TFile("test_uncal.root","RECREATE");
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
  	TTreeReader my2dvecReader5_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_1_0(my2dvecReader5_1_0,"measNeutralVec");
  	while(my2dvecReader5_1_0.Next()){
		oc->hmeasNeutralVec_part_1_param_0->Fill(my2dvecvar5_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader5_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_1_1(my2dvecReader5_1_1,"measNeutralVec");
  	while(my2dvecReader5_1_1.Next()){
		oc->hmeasNeutralVec_part_1_param_1->Fill(my2dvecvar5_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader5_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_1_2(my2dvecReader5_1_2,"measNeutralVec");
  	while(my2dvecReader5_1_2.Next()){
		oc->hmeasNeutralVec_part_1_param_2->Fill(my2dvecvar5_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader5_1_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar5_1_3(my2dvecReader5_1_3,"measNeutralVec");
  	while(my2dvecReader5_1_3.Next()){
		oc->hmeasNeutralVec_part_1_param_3->Fill(my2dvecvar5_1_3->at(1).at(3));
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
  	TTreeReader my2dvecReader6_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar6_1_0(my2dvecReader6_1_0,"measNeutralParamVec");
  	while(my2dvecReader6_1_0.Next()){
		oc->hmeasNeutralParamVec_part_1_param_0->Fill(my2dvecvar6_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader6_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar6_1_1(my2dvecReader6_1_1,"measNeutralParamVec");
  	while(my2dvecReader6_1_1.Next()){
		oc->hmeasNeutralParamVec_part_1_param_1->Fill(my2dvecvar6_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader6_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar6_1_2(my2dvecReader6_1_2,"measNeutralParamVec");
  	while(my2dvecReader6_1_2.Next()){
		oc->hmeasNeutralParamVec_part_1_param_2->Fill(my2dvecvar6_1_2->at(1).at(2));
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
  	TTreeReader my2dvecReader8_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_1_0(my2dvecReader8_1_0,"fitNeutralVec");
  	while(my2dvecReader8_1_0.Next()){
		oc->hfitNeutralVec_part_1_param_0->Fill(my2dvecvar8_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader8_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_1_1(my2dvecReader8_1_1,"fitNeutralVec");
  	while(my2dvecReader8_1_1.Next()){
		oc->hfitNeutralVec_part_1_param_1->Fill(my2dvecvar8_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader8_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_1_2(my2dvecReader8_1_2,"fitNeutralVec");
  	while(my2dvecReader8_1_2.Next()){
		oc->hfitNeutralVec_part_1_param_2->Fill(my2dvecvar8_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader8_1_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar8_1_3(my2dvecReader8_1_3,"fitNeutralVec");
  	while(my2dvecReader8_1_3.Next()){
		oc->hfitNeutralVec_part_1_param_3->Fill(my2dvecvar8_1_3->at(1).at(3));
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
  	TTreeReader my2dvecReader9_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar9_1_0(my2dvecReader9_1_0,"fitNeutralParamVec");
  	while(my2dvecReader9_1_0.Next()){
		oc->hfitNeutralParamVec_part_1_param_0->Fill(my2dvecvar9_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader9_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar9_1_1(my2dvecReader9_1_1,"fitNeutralParamVec");
  	while(my2dvecReader9_1_1.Next()){
		oc->hfitNeutralParamVec_part_1_param_1->Fill(my2dvecvar9_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader9_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar9_1_2(my2dvecReader9_1_2,"fitNeutralParamVec");
  	while(my2dvecReader9_1_2.Next()){
		oc->hfitNeutralParamVec_part_1_param_2->Fill(my2dvecvar9_1_2->at(1).at(2));
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
  	TTreeReader my2dvecReader11_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar11_1_0(my2dvecReader11_1_0,"measNeutral_err");
  	while(my2dvecReader11_1_0.Next()){
		oc->hmeasNeutral_err_part_1_param_0->Fill(my2dvecvar11_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader11_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar11_1_1(my2dvecReader11_1_1,"measNeutral_err");
  	while(my2dvecReader11_1_1.Next()){
		oc->hmeasNeutral_err_part_1_param_1->Fill(my2dvecvar11_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader11_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar11_1_2(my2dvecReader11_1_2,"measNeutral_err");
  	while(my2dvecReader11_1_2.Next()){
		oc->hmeasNeutral_err_part_1_param_2->Fill(my2dvecvar11_1_2->at(1).at(2));
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
  	TTreeReader my2dvecReader13_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar13_1_0(my2dvecReader13_1_0,"fitNeutral_err");
  	while(my2dvecReader13_1_0.Next()){
		oc->hfitNeutral_err_part_1_param_0->Fill(my2dvecvar13_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader13_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar13_1_1(my2dvecReader13_1_1,"fitNeutral_err");
  	while(my2dvecReader13_1_1.Next()){
		oc->hfitNeutral_err_part_1_param_1->Fill(my2dvecvar13_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader13_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar13_1_2(my2dvecReader13_1_2,"fitNeutral_err");
  	while(my2dvecReader13_1_2.Next()){
		oc->hfitNeutral_err_part_1_param_2->Fill(my2dvecvar13_1_2->at(1).at(2));
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
  	TTreeReader my2dvecReader19_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar19_1_0(my2dvecReader19_1_0,"fitmeas_NeutralPulls");
  	while(my2dvecReader19_1_0.Next()){
		oc->hfitmeas_NeutralPulls_part_1_param_0->Fill(my2dvecvar19_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader19_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar19_1_1(my2dvecReader19_1_1,"fitmeas_NeutralPulls");
  	while(my2dvecReader19_1_1.Next()){
		oc->hfitmeas_NeutralPulls_part_1_param_1->Fill(my2dvecvar19_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader19_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar19_1_2(my2dvecReader19_1_2,"fitmeas_NeutralPulls");
  	while(my2dvecReader19_1_2.Next()){
		oc->hfitmeas_NeutralPulls_part_1_param_2->Fill(my2dvecvar19_1_2->at(1).at(2));
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
  	TTreeReader my2dvecReader23_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_1_0(my2dvecReader23_1_0,"mcNeutralVec");
  	while(my2dvecReader23_1_0.Next()){
		oc->hmcNeutralVec_part_1_param_0->Fill(my2dvecvar23_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader23_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_1_1(my2dvecReader23_1_1,"mcNeutralVec");
  	while(my2dvecReader23_1_1.Next()){
		oc->hmcNeutralVec_part_1_param_1->Fill(my2dvecvar23_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader23_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_1_2(my2dvecReader23_1_2,"mcNeutralVec");
  	while(my2dvecReader23_1_2.Next()){
		oc->hmcNeutralVec_part_1_param_2->Fill(my2dvecvar23_1_2->at(1).at(2));
	}
  	TTreeReader my2dvecReader23_1_3(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar23_1_3(my2dvecReader23_1_3,"mcNeutralVec");
  	while(my2dvecReader23_1_3.Next()){
		oc->hmcNeutralVec_part_1_param_3->Fill(my2dvecvar23_1_3->at(1).at(3));
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
  	TTreeReader my2dvecReader24_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar24_1_0(my2dvecReader24_1_0,"mcNeutralParamVec");
  	while(my2dvecReader24_1_0.Next()){
		oc->hmcNeutralParamVec_part_1_param_0->Fill(my2dvecvar24_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader24_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar24_1_1(my2dvecReader24_1_1,"mcNeutralParamVec");
  	while(my2dvecReader24_1_1.Next()){
		oc->hmcNeutralParamVec_part_1_param_1->Fill(my2dvecvar24_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader24_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar24_1_2(my2dvecReader24_1_2,"mcNeutralParamVec");
  	while(my2dvecReader24_1_2.Next()){
		oc->hmcNeutralParamVec_part_1_param_2->Fill(my2dvecvar24_1_2->at(1).at(2));
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
  	TTreeReader my2dvecReader25_1_0(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar25_1_0(my2dvecReader25_1_0,"measgen_NeutralPulls");
  	while(my2dvecReader25_1_0.Next()){
		oc->hmeasgen_NeutralPulls_part_1_param_0->Fill(my2dvecvar25_1_0->at(1).at(0));
	}
  	TTreeReader my2dvecReader25_1_1(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar25_1_1(my2dvecReader25_1_1,"measgen_NeutralPulls");
  	while(my2dvecReader25_1_1.Next()){
		oc->hmeasgen_NeutralPulls_part_1_param_1->Fill(my2dvecvar25_1_1->at(1).at(1));
	}
  	TTreeReader my2dvecReader25_1_2(tree);
  	TTreeReaderValue<std::vector<std::vector<double> > > my2dvecvar25_1_2(my2dvecReader25_1_2,"measgen_NeutralPulls");
  	while(my2dvecReader25_1_2.Next()){
		oc->hmeasgen_NeutralPulls_part_1_param_2->Fill(my2dvecvar25_1_2->at(1).at(2));
	}

	oc->hmeasgen_NeutralPulls_part_0_param_0->Fit("gaus");
         oc->hmeasgen_NeutralPulls_part_0_param_1->Fit("gaus");
	 oc->hmeasgen_NeutralPulls_part_0_param_2->Fit("gaus");
	 oc->hmeasgen_NeutralPulls_part_1_param_0->Fit("gaus");
	 oc->hmeasgen_NeutralPulls_part_1_param_1->Fit("gaus");
	 oc->hmeasgen_NeutralPulls_part_1_param_2->Fit("gaus");

	TStyle *st1 = new TStyle("st1","my style");
    	st1->SetOptStat(111111);
	st1->SetOptFit(1);
	st1->SetStatW(0.18);
	st1->SetStatH(0.18);
	
	
    st1->cd();

	f2->Write();
}
