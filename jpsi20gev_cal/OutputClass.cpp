#include "TH1D.h"

class OutputClass{ 
     public: 
		TH1D* hRecoEnergy;
		TH1D* hFitEnergy;
		TH1D* hRecoMass;
		TH1D* hFitProbability;
		TH1D* hChisq;
		TH1D* hmeasChargedVec_part_0_param_0;
		TH1D* hmeasChargedVec_part_0_param_1;
		TH1D* hmeasChargedVec_part_0_param_2;
		TH1D* hmeasChargedVec_part_0_param_3;
		TH1D* hmeasChargedVec_part_1_param_0;
		TH1D* hmeasChargedVec_part_1_param_1;
		TH1D* hmeasChargedVec_part_1_param_2;
		TH1D* hmeasChargedVec_part_1_param_3;
		TH1D* hfitChargedVec_part_0_param_0;
		TH1D* hfitChargedVec_part_0_param_1;
		TH1D* hfitChargedVec_part_0_param_2;
		TH1D* hfitChargedVec_part_0_param_3;
		TH1D* hfitChargedVec_part_1_param_0;
		TH1D* hfitChargedVec_part_1_param_1;
		TH1D* hfitChargedVec_part_1_param_2;
		TH1D* hfitChargedVec_part_1_param_3;
		TH1D* hmeasCharged_err_part_0_param_0;
		TH1D* hmeasCharged_err_part_0_param_1;
		TH1D* hmeasCharged_err_part_0_param_2;
		TH1D* hmeasCharged_err_part_1_param_0;
		TH1D* hmeasCharged_err_part_1_param_1;
		TH1D* hmeasCharged_err_part_1_param_2;
		TH1D* hfitCharged_err_part_0_param_0;
		TH1D* hfitCharged_err_part_0_param_1;
		TH1D* hfitCharged_err_part_0_param_2;
		TH1D* hfitCharged_err_part_1_param_0;
		TH1D* hfitCharged_err_part_1_param_1;
		TH1D* hfitCharged_err_part_1_param_2;
		TH1D* hmeasParent_err_param_0;
		TH1D* hmeasParent_err_param_1;
		TH1D* hmeasParent_err_param_2;
		TH1D* hmeasParent_err_param_3;
		TH1D* hfitParent_err_param_0;
		TH1D* hfitParent_err_param_1;
		TH1D* hfitParent_err_param_2;
		TH1D* hfitParent_err_param_3;
		TH1D* hfitmeas_ChargedPulls_part_0_param_0;
		TH1D* hfitmeas_ChargedPulls_part_0_param_1;
		TH1D* hfitmeas_ChargedPulls_part_0_param_2;
		TH1D* hfitmeas_ChargedPulls_part_1_param_0;
		TH1D* hfitmeas_ChargedPulls_part_1_param_1;
		TH1D* hfitmeas_ChargedPulls_part_1_param_2;
		TH1D* hmcChargedVec_part_0_param_0;
		TH1D* hmcChargedVec_part_0_param_1;
		TH1D* hmcChargedVec_part_0_param_2;
		TH1D* hmcChargedVec_part_0_param_3;
		TH1D* hmcChargedVec_part_1_param_0;
		TH1D* hmcChargedVec_part_1_param_1;
		TH1D* hmcChargedVec_part_1_param_2;
		TH1D* hmcChargedVec_part_1_param_3;
		TH1D* hmcChargedParamVec_part_0_param_0;
		TH1D* hmcChargedParamVec_part_0_param_1;
		TH1D* hmcChargedParamVec_part_0_param_2;
		TH1D* hmcChargedParamVec_part_1_param_0;
		TH1D* hmcChargedParamVec_part_1_param_1;
		TH1D* hmcChargedParamVec_part_1_param_2;
		TH1D* hmeasgen_ChargedPulls_part_0_param_0;
		TH1D* hmeasgen_ChargedPulls_part_0_param_1;
		TH1D* hmeasgen_ChargedPulls_part_0_param_2;
		TH1D* hmeasgen_ChargedPulls_part_1_param_0;
		TH1D* hmeasgen_ChargedPulls_part_1_param_1;
		TH1D* hmeasgen_ChargedPulls_part_1_param_2;
		OutputClass();
};
OutputClass::OutputClass(){
	hRecoEnergy = new TH1D("hRecoEnergy", "Reconstructed Energy;Energy GeV;Events Per Bin", 90, 19.7, 20.3);
	hFitEnergy = new TH1D("hFitEnergy", "J/#psi Fitted Energy;Energy GeV; Events Per 0.006 Bin", 90, 19.7, 20.3 );
	hRecoMass = new TH1D("hRecoMass", "J/#psi Reconstructed Mass;Mass GeV;Events Per 0.0004 Bin", 90, 3.07706, 3.11688);
	hFitProbability = new TH1D("hFitProbability", "J/#psi Fit Probability;Probability;Events Per 0.1 Bin", 100, 0.00, 1.0);
	hChisq = new TH1D("hChisq", "default description", 90, 6.75248e-08, 7.83121);
		hmeasChargedVec_part_0_param_0 = new TH1D("hmeasChargedVec_part_0_param_0","default description",90, -19.4707, 19.0362);
		hmeasChargedVec_part_0_param_1 = new TH1D("hmeasChargedVec_part_0_param_1","default description",90, -19.4852, 19.6947);
		hmeasChargedVec_part_0_param_2 = new TH1D("hmeasChargedVec_part_0_param_2","default description",90, -19.4402, 18.9207);
		hmeasChargedVec_part_0_param_3 = new TH1D("hmeasChargedVec_part_0_param_3","default description",90, 0.263071, 19.9089);
		hmeasChargedVec_part_1_param_0 = new TH1D("hmeasChargedVec_part_1_param_0","default description",90, -19.3052, 18.9649);
		hmeasChargedVec_part_1_param_1 = new TH1D("hmeasChargedVec_part_1_param_1","default description",90, -19.3842, 19.4552);
		hmeasChargedVec_part_1_param_2 = new TH1D("hmeasChargedVec_part_1_param_2","default description",90, -19.0978, 19.5015);
		hmeasChargedVec_part_1_param_3 = new TH1D("hmeasChargedVec_part_1_param_3","default description",90, 0.188728, 19.8149);
		hfitChargedVec_part_0_param_0 = new TH1D("hfitChargedVec_part_0_param_0","default description",90, -19.4685, 19.0337);
		hfitChargedVec_part_0_param_1 = new TH1D("hfitChargedVec_part_0_param_1","default description",90, -19.4863, 19.695);
		hfitChargedVec_part_0_param_2 = new TH1D("hfitChargedVec_part_0_param_2","default description",90, -19.4577, 19.0266);
		hfitChargedVec_part_0_param_3 = new TH1D("hfitChargedVec_part_0_param_3","default description",90, 0.26111, 19.9269);
		hfitChargedVec_part_1_param_0 = new TH1D("hfitChargedVec_part_1_param_0","default description",90, -19.2904, 18.9655);
		hfitChargedVec_part_1_param_1 = new TH1D("hfitChargedVec_part_1_param_1","default description",90, -19.3772, 19.4638);
		hfitChargedVec_part_1_param_2 = new TH1D("hfitChargedVec_part_1_param_2","default description",90, -19.156, 19.5212);
		hfitChargedVec_part_1_param_3 = new TH1D("hfitChargedVec_part_1_param_3","default description",90, 0.188597, 19.8349);
		hmeasCharged_err_part_0_param_0 = new TH1D("hmeasCharged_err_part_0_param_0","default description",90, 5.79101e-05, 0.118538);
		hmeasCharged_err_part_0_param_1 = new TH1D("hmeasCharged_err_part_0_param_1","default description",90, 5.4991e-05, 0.00841227);
		hmeasCharged_err_part_0_param_2 = new TH1D("hmeasCharged_err_part_0_param_2","default description",90, 6.58162e-05, 0.0362075);
		hmeasCharged_err_part_1_param_0 = new TH1D("hmeasCharged_err_part_1_param_0","default description",90, 5.91152e-05, 0.981832);
		hmeasCharged_err_part_1_param_1 = new TH1D("hmeasCharged_err_part_1_param_1","default description",90, 5.09093e-05, 0.0164042);
		hmeasCharged_err_part_1_param_2 = new TH1D("hmeasCharged_err_part_1_param_2","default description",90, 6.66158e-05, 0.331109);
		hfitCharged_err_part_0_param_0 = new TH1D("hfitCharged_err_part_0_param_0","default description",90, 4.93728e-05, 0.053314);
		hfitCharged_err_part_0_param_1 = new TH1D("hfitCharged_err_part_0_param_1","default description",90, 5.49889e-05, 0.0079787);
		hfitCharged_err_part_0_param_2 = new TH1D("hfitCharged_err_part_0_param_2","default description",90, 6.57974e-05, 0.0183869);
		hfitCharged_err_part_1_param_0 = new TH1D("hfitCharged_err_part_1_param_0","default description",90, 5.0759e-05, 0.692686);
		hfitCharged_err_part_1_param_1 = new TH1D("hfitCharged_err_part_1_param_1","default description",90, 5.09071e-05, 0.0153303);
		hfitCharged_err_part_1_param_2 = new TH1D("hfitCharged_err_part_1_param_2","default description",90, 6.66081e-05, 0.0955904);
		hmeasParent_err_param_0 = new TH1D("hmeasParent_err_param_0","default description",90, 0.00143743, 3.1443);
		hmeasParent_err_param_1 = new TH1D("hmeasParent_err_param_1","default description",90, 0.00142242, 0.843332);
		hmeasParent_err_param_2 = new TH1D("hmeasParent_err_param_2","default description",90, 0.0141304, 4.22921);
		hmeasParent_err_param_3 = new TH1D("hmeasParent_err_param_3","default description",90, 0.000143503, 0.981832);
		hfitParent_err_param_0 = new TH1D("hfitParent_err_param_0","default description",90, 0.00134218, 0.102468);
		hfitParent_err_param_1 = new TH1D("hfitParent_err_param_1","default description",90, 0.00132219, 0.0874047);
		hfitParent_err_param_2 = new TH1D("hfitParent_err_param_2","default description",90, 0.0141624, 0.399118);
		hfitParent_err_param_3 = new TH1D("hfitParent_err_param_3","default description",90, 0.000143436, 0.692693);
		hfitmeas_ChargedPulls_part_0_param_0 = new TH1D("hfitmeas_ChargedPulls_part_0_param_0","J/#psi Fit and Measured Pull Distribution;#kappa_{1fit} - #kappa_{1meas}/#sqrt{ #sigma_{#kappa_{1meas}}^2 - #sigma_{#kappa_{1fit}}^2}; Events Per 0.1 Bin ",100, -5, 5);
		hfitmeas_ChargedPulls_part_0_param_1 = new TH1D("hfitmeas_ChargedPulls_part_0_param_1","default description",90, -5, 5);
		hfitmeas_ChargedPulls_part_0_param_2 = new TH1D("hfitmeas_ChargedPulls_part_0_param_2","default description",90, -5, 5);
		hfitmeas_ChargedPulls_part_1_param_0 = new TH1D("hfitmeas_ChargedPulls_part_1_param_0","default description",90, -5, 5);
		hfitmeas_ChargedPulls_part_1_param_1 = new TH1D("hfitmeas_ChargedPulls_part_1_param_1","default description",90, -5, 5);
		hfitmeas_ChargedPulls_part_1_param_2 = new TH1D("hfitmeas_ChargedPulls_part_1_param_2","default description",90, -5, 5);
		hmcChargedVec_part_0_param_0 = new TH1D("hmcChargedVec_part_0_param_0","default description",90, -19.4518, 19.0013);
		hmcChargedVec_part_0_param_1 = new TH1D("hmcChargedVec_part_0_param_1","default description",90, -19.4446, 19.6778);
		hmcChargedVec_part_0_param_2 = new TH1D("hmcChargedVec_part_0_param_2","default description",90, -19.3326, 19.0786);
		hmcChargedVec_part_0_param_3 = new TH1D("hmcChargedVec_part_0_param_3","default description",90, 0.259885, 19.8114);
		hmcChargedVec_part_1_param_0 = new TH1D("hmcChargedVec_part_1_param_0","default description",90, -19.2987, 18.9593);
		hmcChargedVec_part_1_param_1 = new TH1D("hmcChargedVec_part_1_param_1","default description",90, -19.3902, 19.4455);
		hmcChargedVec_part_1_param_2 = new TH1D("hmcChargedVec_part_1_param_2","default description",90, -19.2527, 19.374);
		hmcChargedVec_part_1_param_3 = new TH1D("hmcChargedVec_part_1_param_3","default description",90, 0.188595, 19.7401);
		hmcChargedParamVec_part_0_param_0 = new TH1D("hmcChargedParamVec_part_0_param_0","default description",90, -4.22326, 4.25626);
		hmcChargedParamVec_part_0_param_1 = new TH1D("hmcChargedParamVec_part_0_param_1","default description",90, 0.184946, 2.95629);
		hmcChargedParamVec_part_0_param_2 = new TH1D("hmcChargedParamVec_part_0_param_2","default description",90, -3.14057, 3.14115);
		hmcChargedParamVec_part_1_param_0 = new TH1D("hmcChargedParamVec_part_1_param_0","default description",90, -9.38644, 6.96425);
		hmcChargedParamVec_part_1_param_1 = new TH1D("hmcChargedParamVec_part_1_param_1","default description",90, 0.096753, 3.04889);
		hmcChargedParamVec_part_1_param_2 = new TH1D("hmcChargedParamVec_part_1_param_2","default description",90, -3.14131, 3.13852);
		hmeasgen_ChargedPulls_part_0_param_0 = new TH1D("hmeasgen_ChargedPulls_part_0_param_0","J/#psi Calibrated Measured and Generator Pull Distribution;#frac{#kappa_{1g} - #kappa_{1m}}{#sigma_{#kappa_{1m}}};Events Per 0.1 Bin",100, -5, 5);
		hmeasgen_ChargedPulls_part_0_param_1 = new TH1D("hmeasgen_ChargedPulls_part_0_param_1","J/#psi Calibrated Measured and Generator Pull Distribution; #frac{#theta_{1g} - #theta_{1m}}{#sigma_{#theta_{1m}}};Events Per 0.1 Bin",100, -5, 5);
		hmeasgen_ChargedPulls_part_0_param_2 = new TH1D("hmeasgen_ChargedPulls_part_0_param_2","J/#psi Calibrated Measured and Generator Pull Distribution; #frac{#phi_{1g} - #phi_{1m}}{#sigma_{#phi_{1m}}};Events Per 0.1 Bin",100, -5, 5);
		hmeasgen_ChargedPulls_part_1_param_0 = new TH1D("hmeasgen_ChargedPulls_part_1_param_0","J/#psi Calibrated Measured and Generator Pull Distribution; #frac{#kappa_{2g} - #kappa_{2m}}{#sigma_{#kappa_{2m}}};Events Per 0.1 Bin",100, -5, 5);
		hmeasgen_ChargedPulls_part_1_param_1 = new TH1D("hmeasgen_ChargedPulls_part_1_param_1","J/#psi Calibrated Measured and Generator Pull Distribution; #frac{#theta_{2g} - #theta_{2m}}{#sigma_{#theta_{2m}}};Events Per 0.1 Bin",100, -5, 5);
		hmeasgen_ChargedPulls_part_1_param_2 = new TH1D("hmeasgen_ChargedPulls_part_1_param_2","J/#psi Calibrated Measured and Generator Pull Distribution; #frac{#phi_{2g} - #phi_{2m}}{#sigma_{#phi_{2m}}};Events Per 0.1 Bin",100, -5, 5);
}
