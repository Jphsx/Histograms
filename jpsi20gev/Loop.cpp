#include "OutputClass.cpp"
#include "TTree.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TFile.h"
#include "TStyle.h"
#include "TPaveStats.h"

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

	 oc->hmeasgen_ChargedPulls_part_0_param_0->Fit("gaus");
         oc->hmeasgen_ChargedPulls_part_0_param_1->Fit("gaus");
	 oc->hmeasgen_ChargedPulls_part_0_param_2->Fit("gaus");
	 oc->hmeasgen_ChargedPulls_part_1_param_0->Fit("gaus");
	 oc->hmeasgen_ChargedPulls_part_1_param_1->Fit("gaus");
	 oc->hmeasgen_ChargedPulls_part_1_param_2->Fit("gaus");

	TStyle *st1 = new TStyle("st1","my style");
    	st1->SetOptStat(112222);
	st1->SetOptFit(1);
	st1->SetStatW(0.18);
	st1->SetStatH(0.18);
	
	
    st1->cd();  //this becomes now the current style gStyle

	
	
	f2->Write();
}
