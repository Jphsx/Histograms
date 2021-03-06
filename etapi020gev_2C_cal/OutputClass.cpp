#include "TH1D.h"

class OutputClass{ 
     public: 
		TH1D* hRecoEnergy;
		TH1D* hFitEnergy;
		TH1D* hRecoMass;
		TH1D* hFitProbability;
		TH1D* hChisq;
		TH1D* hmeasNeutralVec_part_0_param_0;
		TH1D* hmeasNeutralVec_part_0_param_1;
		TH1D* hmeasNeutralVec_part_0_param_2;
		TH1D* hmeasNeutralVec_part_0_param_3;
		TH1D* hmeasNeutralVec_part_1_param_0;
		TH1D* hmeasNeutralVec_part_1_param_1;
		TH1D* hmeasNeutralVec_part_1_param_2;
		TH1D* hmeasNeutralVec_part_1_param_3;
		TH1D* hmeasNeutralParamVec_part_0_param_0;
		TH1D* hmeasNeutralParamVec_part_0_param_1;
		TH1D* hmeasNeutralParamVec_part_0_param_2;
		TH1D* hmeasNeutralParamVec_part_1_param_0;
		TH1D* hmeasNeutralParamVec_part_1_param_1;
		TH1D* hmeasNeutralParamVec_part_1_param_2;
		TH1D* hmeasChargedVec_part_0_param_0;
		TH1D* hmeasChargedVec_part_0_param_1;
		TH1D* hmeasChargedVec_part_0_param_2;
		TH1D* hmeasChargedVec_part_0_param_3;
		TH1D* hmeasChargedVec_part_1_param_0;
		TH1D* hmeasChargedVec_part_1_param_1;
		TH1D* hmeasChargedVec_part_1_param_2;
		TH1D* hmeasChargedVec_part_1_param_3;
		TH1D* hfitNeutralVec_part_0_param_0;
		TH1D* hfitNeutralVec_part_0_param_1;
		TH1D* hfitNeutralVec_part_0_param_2;
		TH1D* hfitNeutralVec_part_0_param_3;
		TH1D* hfitNeutralVec_part_1_param_0;
		TH1D* hfitNeutralVec_part_1_param_1;
		TH1D* hfitNeutralVec_part_1_param_2;
		TH1D* hfitNeutralVec_part_1_param_3;
		TH1D* hfitNeutralParamVec_part_0_param_0;
		TH1D* hfitNeutralParamVec_part_0_param_1;
		TH1D* hfitNeutralParamVec_part_0_param_2;
		TH1D* hfitNeutralParamVec_part_1_param_0;
		TH1D* hfitNeutralParamVec_part_1_param_1;
		TH1D* hfitNeutralParamVec_part_1_param_2;
		TH1D* hfitChargedVec_part_0_param_0;
		TH1D* hfitChargedVec_part_0_param_1;
		TH1D* hfitChargedVec_part_0_param_2;
		TH1D* hfitChargedVec_part_0_param_3;
		TH1D* hfitChargedVec_part_1_param_0;
		TH1D* hfitChargedVec_part_1_param_1;
		TH1D* hfitChargedVec_part_1_param_2;
		TH1D* hfitChargedVec_part_1_param_3;
		TH1D* hmeasNeutral_err_part_0_param_0;
		TH1D* hmeasNeutral_err_part_0_param_1;
		TH1D* hmeasNeutral_err_part_0_param_2;
		TH1D* hmeasNeutral_err_part_1_param_0;
		TH1D* hmeasNeutral_err_part_1_param_1;
		TH1D* hmeasNeutral_err_part_1_param_2;
		TH1D* hmeasCharged_err_part_0_param_0;
		TH1D* hmeasCharged_err_part_0_param_1;
		TH1D* hmeasCharged_err_part_0_param_2;
		TH1D* hmeasCharged_err_part_1_param_0;
		TH1D* hmeasCharged_err_part_1_param_1;
		TH1D* hmeasCharged_err_part_1_param_2;
		TH1D* hfitNeutral_err_part_0_param_0;
		TH1D* hfitNeutral_err_part_0_param_1;
		TH1D* hfitNeutral_err_part_0_param_2;
		TH1D* hfitNeutral_err_part_1_param_0;
		TH1D* hfitNeutral_err_part_1_param_1;
		TH1D* hfitNeutral_err_part_1_param_2;
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
		TH1D* hfitmeas_NeutralPulls_part_0_param_0;
		TH1D* hfitmeas_NeutralPulls_part_0_param_1;
		TH1D* hfitmeas_NeutralPulls_part_0_param_2;
		TH1D* hfitmeas_NeutralPulls_part_1_param_0;
		TH1D* hfitmeas_NeutralPulls_part_1_param_1;
		TH1D* hfitmeas_NeutralPulls_part_1_param_2;
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
		TH1D* hmcNeutralVec_part_0_param_0;
		TH1D* hmcNeutralVec_part_0_param_1;
		TH1D* hmcNeutralVec_part_0_param_2;
		TH1D* hmcNeutralVec_part_0_param_3;
		TH1D* hmcNeutralVec_part_1_param_0;
		TH1D* hmcNeutralVec_part_1_param_1;
		TH1D* hmcNeutralVec_part_1_param_2;
		TH1D* hmcNeutralVec_part_1_param_3;
		TH1D* hmcNeutralParamVec_part_0_param_0;
		TH1D* hmcNeutralParamVec_part_0_param_1;
		TH1D* hmcNeutralParamVec_part_0_param_2;
		TH1D* hmcNeutralParamVec_part_1_param_0;
		TH1D* hmcNeutralParamVec_part_1_param_1;
		TH1D* hmcNeutralParamVec_part_1_param_2;
		TH1D* hmeasgen_NeutralPulls_part_0_param_0;
		TH1D* hmeasgen_NeutralPulls_part_0_param_1;
		TH1D* hmeasgen_NeutralPulls_part_0_param_2;
		TH1D* hmeasgen_NeutralPulls_part_1_param_0;
		TH1D* hmeasgen_NeutralPulls_part_1_param_1;
		TH1D* hmeasgen_NeutralPulls_part_1_param_2;
		TH1D* hmeasgen_ChargedPulls_part_0_param_0;
		TH1D* hmeasgen_ChargedPulls_part_0_param_1;
		TH1D* hmeasgen_ChargedPulls_part_0_param_2;
		TH1D* hmeasgen_ChargedPulls_part_1_param_0;
		TH1D* hmeasgen_ChargedPulls_part_1_param_1;
		TH1D* hmeasgen_ChargedPulls_part_1_param_2;
		OutputClass();
};
OutputClass::OutputClass(){
	
	hRecoEnergy = new TH1D("hRecoEnergy", "Reconstructed Energy;Energy GeV; Events Per Bin", 80, 17.0, 23.0);
	hFitEnergy = new TH1D("hFitEnergy", "#eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 2C Fitted Energy;Energy GeV; Events Per 0.075 Bin", 80, 17.0, 23.0);
	hRecoMass = new TH1D("hRecoMass", "#eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 2C Reconstructed Mass; Mass GeV; Events Per 0.0025 Bin", 80, 0.45, 0.65);
	hFitProbability = new TH1D("hFitProbability", "#eta #rightarrow #pi^{+} #pi^{-} #pi^{0} 2C Fit Probability;Probability;Events Per .01 Bin", 100, 0.00, 1.0);
	hChisq = new TH1D("hChisq", "default description", 61, 0.000381842, 10.5824);
		hmeasNeutralVec_part_0_param_0 = new TH1D("hmeasNeutralVec_part_0_param_0","default description",61, -11.8087, 11.3426);
		hmeasNeutralVec_part_0_param_1 = new TH1D("hmeasNeutralVec_part_0_param_1","default description",61, -11.9712, 12.438);
		hmeasNeutralVec_part_0_param_2 = new TH1D("hmeasNeutralVec_part_0_param_2","default description",61, -11.3945, 10.2664);
		hmeasNeutralVec_part_0_param_3 = new TH1D("hmeasNeutralVec_part_0_param_3","default description",61, 0.0493013, 13.3685);
		hmeasNeutralVec_part_1_param_0 = new TH1D("hmeasNeutralVec_part_1_param_0","default description",61, -10.1373, 9.87603);
		hmeasNeutralVec_part_1_param_1 = new TH1D("hmeasNeutralVec_part_1_param_1","default description",61, -12.3416, 10.6603);
		hmeasNeutralVec_part_1_param_2 = new TH1D("hmeasNeutralVec_part_1_param_2","default description",61, -10.6924, 10.2475);
		hmeasNeutralVec_part_1_param_3 = new TH1D("hmeasNeutralVec_part_1_param_3","default description",61, 0.0611858, 13.722);
		hmeasNeutralParamVec_part_0_param_0 = new TH1D("hmeasNeutralParamVec_part_0_param_0","default description",61, 0.0493013, 13.3685);
		hmeasNeutralParamVec_part_0_param_1 = new TH1D("hmeasNeutralParamVec_part_0_param_1","default description",61, 0.0169288, 3.073);
		hmeasNeutralParamVec_part_0_param_2 = new TH1D("hmeasNeutralParamVec_part_0_param_2","default description",61, -3.14141, 3.14107);
		hmeasNeutralParamVec_part_1_param_0 = new TH1D("hmeasNeutralParamVec_part_1_param_0","default description",61, 0.0611858, 13.722);
		hmeasNeutralParamVec_part_1_param_1 = new TH1D("hmeasNeutralParamVec_part_1_param_1","default description",61, 0.109939, 3.08219);
		hmeasNeutralParamVec_part_1_param_2 = new TH1D("hmeasNeutralParamVec_part_1_param_2","default description",61, -3.14106, 3.14084);
		hmeasChargedVec_part_0_param_0 = new TH1D("hmeasChargedVec_part_0_param_0","default description",61, -13.0354, 13.2952);
		hmeasChargedVec_part_0_param_1 = new TH1D("hmeasChargedVec_part_0_param_1","default description",61, -13.6027, 12.3143);
		hmeasChargedVec_part_0_param_2 = new TH1D("hmeasChargedVec_part_0_param_2","default description",61, -12.8829, 12.3781);
		hmeasChargedVec_part_0_param_3 = new TH1D("hmeasChargedVec_part_0_param_3","default description",61, 0.16401, 14.0254);
		hmeasChargedVec_part_1_param_0 = new TH1D("hmeasChargedVec_part_1_param_0","default description",61, -12.7463, 14.1473);
		hmeasChargedVec_part_1_param_1 = new TH1D("hmeasChargedVec_part_1_param_1","default description",61, -25.3315, 12.7585);
		hmeasChargedVec_part_1_param_2 = new TH1D("hmeasChargedVec_part_1_param_2","default description",61, -12.4371, 11.7929);
		hmeasChargedVec_part_1_param_3 = new TH1D("hmeasChargedVec_part_1_param_3","default description",61, 0.164681, 25.9011);
		hfitNeutralVec_part_0_param_0 = new TH1D("hfitNeutralVec_part_0_param_0","default description",61, -11.8956, 11.3324);
		hfitNeutralVec_part_0_param_1 = new TH1D("hfitNeutralVec_part_0_param_1","default description",61, -11.98, 11.7657);
		hfitNeutralVec_part_0_param_2 = new TH1D("hfitNeutralVec_part_0_param_2","default description",61, -11.9585, 10.4669);
		hfitNeutralVec_part_0_param_3 = new TH1D("hfitNeutralVec_part_0_param_3","default description",61, 0.0367204, 13.0476);
		hfitNeutralVec_part_1_param_0 = new TH1D("hfitNeutralVec_part_1_param_0","default description",61, -9.64971, 9.46292);
		hfitNeutralVec_part_1_param_1 = new TH1D("hfitNeutralVec_part_1_param_1","default description",61, -11.81, 10.6163);
		hfitNeutralVec_part_1_param_2 = new TH1D("hfitNeutralVec_part_1_param_2","default description",61, -10.5143, 10.0244);
		hfitNeutralVec_part_1_param_3 = new TH1D("hfitNeutralVec_part_1_param_3","default description",61, 0.0246958, 13.1309);
		hfitNeutralParamVec_part_0_param_0 = new TH1D("hfitNeutralParamVec_part_0_param_0","default description",61, 0.0367204, 13.0476);
		hfitNeutralParamVec_part_0_param_1 = new TH1D("hfitNeutralParamVec_part_0_param_1","default description",61, 0.0169496, 3.07296);
		hfitNeutralParamVec_part_0_param_2 = new TH1D("hfitNeutralParamVec_part_0_param_2","default description",61, -3.14144, 3.14106);
		hfitNeutralParamVec_part_1_param_0 = new TH1D("hfitNeutralParamVec_part_1_param_0","default description",61, 0.0246958, 13.1309);
		hfitNeutralParamVec_part_1_param_1 = new TH1D("hfitNeutralParamVec_part_1_param_1","default description",61, 0.1098, 3.08233);
		hfitNeutralParamVec_part_1_param_2 = new TH1D("hfitNeutralParamVec_part_1_param_2","default description",61, -3.14091, 3.14094);
		hfitChargedVec_part_0_param_0 = new TH1D("hfitChargedVec_part_0_param_0","default description",61, -13.0346, 13.2952);
		hfitChargedVec_part_0_param_1 = new TH1D("hfitChargedVec_part_0_param_1","default description",61, -13.6026, 12.3133);
		hfitChargedVec_part_0_param_2 = new TH1D("hfitChargedVec_part_0_param_2","default description",61, -12.8584, 12.3997);
		hfitChargedVec_part_0_param_3 = new TH1D("hfitChargedVec_part_0_param_3","default description",61, 0.164008, 14.0256);
		hfitChargedVec_part_1_param_0 = new TH1D("hfitChargedVec_part_1_param_0","default description",61, -12.7453, 12.4986);
		hfitChargedVec_part_1_param_1 = new TH1D("hfitChargedVec_part_1_param_1","default description",61, -15.4979, 12.7574);
		hfitChargedVec_part_1_param_2 = new TH1D("hfitChargedVec_part_1_param_2","default description",61, -12.4357, 12.0409);
		hfitChargedVec_part_1_param_3 = new TH1D("hfitChargedVec_part_1_param_3","default description",61, 0.16468, 15.8491);
		hmeasNeutral_err_part_0_param_0 = new TH1D("hmeasNeutral_err_part_0_param_0","default description",61, 0.039967, 0.658133);
		hmeasNeutral_err_part_0_param_1 = new TH1D("hmeasNeutral_err_part_0_param_1","default description",61, 0.000273501, 0.00450371);
		hmeasNeutral_err_part_0_param_2 = new TH1D("hmeasNeutral_err_part_0_param_2","default description",61, 0.000273501, 0.00450371);
		hmeasNeutral_err_part_1_param_0 = new TH1D("hmeasNeutral_err_part_1_param_0","default description",61, 0.0445244, 0.666777);
		hmeasNeutral_err_part_1_param_1 = new TH1D("hmeasNeutral_err_part_1_param_1","default description",61, 0.000269955, 0.00404273);
		hmeasNeutral_err_part_1_param_2 = new TH1D("hmeasNeutral_err_part_1_param_2","default description",61, 0.000269955, 0.00404273);
		hmeasCharged_err_part_0_param_0 = new TH1D("hmeasCharged_err_part_0_param_0","default description",61, 7.85087e-05, 0.613159);
		hmeasCharged_err_part_0_param_1 = new TH1D("hmeasCharged_err_part_0_param_1","default description",61, 7.33285e-05, 0.0168952);
		hmeasCharged_err_part_0_param_2 = new TH1D("hmeasCharged_err_part_0_param_2","default description",61, 8.16543e-05, 0.313686);
		hmeasCharged_err_part_1_param_0 = new TH1D("hmeasCharged_err_part_1_param_0","default description",61, 7.79982e-05, 0.51778);
		hmeasCharged_err_part_1_param_1 = new TH1D("hmeasCharged_err_part_1_param_1","default description",61, 7.29141e-05, 0.00948619);
		hmeasCharged_err_part_1_param_2 = new TH1D("hmeasCharged_err_part_1_param_2","default description",61, 8.10437e-05, 0.24069);
		hfitNeutral_err_part_0_param_0 = new TH1D("hfitNeutral_err_part_0_param_0","default description",61, 0.000548263, 0.545842);
		hfitNeutral_err_part_0_param_1 = new TH1D("hfitNeutral_err_part_0_param_1","default description",61, 0.000185374, 0.00450356);
		hfitNeutral_err_part_0_param_2 = new TH1D("hfitNeutral_err_part_0_param_2","default description",61, 0.000173227, 0.00450046);
		hfitNeutral_err_part_1_param_0 = new TH1D("hfitNeutral_err_part_1_param_0","default description",61, 0.00021266, 0.453537);
		hfitNeutral_err_part_1_param_1 = new TH1D("hfitNeutral_err_part_1_param_1","default description",61, 0.000195005, 0.00401902);
		hfitNeutral_err_part_1_param_2 = new TH1D("hfitNeutral_err_part_1_param_2","default description",61, 0.000227684, 0.0040024);
		hfitCharged_err_part_0_param_0 = new TH1D("hfitCharged_err_part_0_param_0","default description",61, 7.84965e-05, 0.162884);
		hfitCharged_err_part_0_param_1 = new TH1D("hfitCharged_err_part_0_param_1","default description",61, 7.32863e-05, 0.0142581);
		hfitCharged_err_part_0_param_2 = new TH1D("hfitCharged_err_part_0_param_2","default description",61, 8.16475e-05, 0.0868435);
		hfitCharged_err_part_1_param_0 = new TH1D("hfitCharged_err_part_1_param_0","default description",61, 7.79786e-05, 0.102935);
		hfitCharged_err_part_1_param_1 = new TH1D("hfitCharged_err_part_1_param_1","default description",61, 7.29141e-05, 0.00942613);
		hfitCharged_err_part_1_param_2 = new TH1D("hfitCharged_err_part_1_param_2","default description",61, 8.09272e-05, 0.0378877);
		hmeasParent_err_param_0 = new TH1D("hmeasParent_err_param_0","default description",61, 0.00237891, 3.77842);
		hmeasParent_err_param_1 = new TH1D("hmeasParent_err_param_1","default description",61, 0.00222326, 10.1482);
		hmeasParent_err_param_2 = new TH1D("hmeasParent_err_param_2","default description",61, 0.00348255, 10.3709);
		hmeasParent_err_param_3 = new TH1D("hmeasParent_err_param_3","default description",61, 0.0868718, 0.696738);
		hfitParent_err_param_0 = new TH1D("hfitParent_err_param_0","default description",61, 0.000646668, 0.824831);
		hfitParent_err_param_1 = new TH1D("hfitParent_err_param_1","default description",61, 0.000440038, 0.983777);
		hfitParent_err_param_2 = new TH1D("hfitParent_err_param_2","default description",61, 0.00153547, 1.22922);
		hfitParent_err_param_3 = new TH1D("hfitParent_err_param_3","default description",61, 0.003709, 0.5156);
		hfitmeas_NeutralPulls_part_0_param_0 = new TH1D("hfitmeas_NeutralPulls_part_0_param_0","default description",61, -5, 5);
		hfitmeas_NeutralPulls_part_0_param_1 = new TH1D("hfitmeas_NeutralPulls_part_0_param_1","default description",61, -5, 5);
		hfitmeas_NeutralPulls_part_0_param_2 = new TH1D("hfitmeas_NeutralPulls_part_0_param_2","default description",61, -5, 5);
		hfitmeas_NeutralPulls_part_1_param_0 = new TH1D("hfitmeas_NeutralPulls_part_1_param_0","default description",61, -5, 5);
		hfitmeas_NeutralPulls_part_1_param_1 = new TH1D("hfitmeas_NeutralPulls_part_1_param_1","default description",61, -5, 5);
		hfitmeas_NeutralPulls_part_1_param_2 = new TH1D("hfitmeas_NeutralPulls_part_1_param_2","default description",61, -5, 5);
		hfitmeas_ChargedPulls_part_0_param_0 = new TH1D("hfitmeas_ChargedPulls_part_0_param_0","default description",61, -5, 5);
		hfitmeas_ChargedPulls_part_0_param_1 = new TH1D("hfitmeas_ChargedPulls_part_0_param_1","default description",61, -5, 5);
		hfitmeas_ChargedPulls_part_0_param_2 = new TH1D("hfitmeas_ChargedPulls_part_0_param_2","default description",61, -5, 5);
		hfitmeas_ChargedPulls_part_1_param_0 = new TH1D("hfitmeas_ChargedPulls_part_1_param_0","default description",61, -5, 5);
		hfitmeas_ChargedPulls_part_1_param_1 = new TH1D("hfitmeas_ChargedPulls_part_1_param_1","default description",61, -5, 5);
		hfitmeas_ChargedPulls_part_1_param_2 = new TH1D("hfitmeas_ChargedPulls_part_1_param_2","default description",61, -5, 5);
		hmcChargedVec_part_0_param_0 = new TH1D("hmcChargedVec_part_0_param_0","default description",61, -19.8499, 13.2951);
		hmcChargedVec_part_0_param_1 = new TH1D("hmcChargedVec_part_0_param_1","default description",61, -13.5996, 14.4622);
		hmcChargedVec_part_0_param_2 = new TH1D("hmcChargedVec_part_0_param_2","default description",61, -12.9221, 19.1955);
		hmcChargedVec_part_0_param_3 = new TH1D("hmcChargedVec_part_0_param_3","default description",61, 0.743525, 20);
		hmcChargedVec_part_1_param_0 = new TH1D("hmcChargedVec_part_1_param_0","default description",61, -14.4676, 16.9976);
		hmcChargedVec_part_1_param_1 = new TH1D("hmcChargedVec_part_1_param_1","default description",61, -18.3343, 12.7397);
		hmcChargedVec_part_1_param_2 = new TH1D("hmcChargedVec_part_1_param_2","default description",61, -18.6003, 19.5444);
		hmcChargedVec_part_1_param_3 = new TH1D("hmcChargedVec_part_1_param_3","default description",61, 0.531725, 20);
		hmcChargedParamVec_part_0_param_0 = new TH1D("hmcChargedParamVec_part_0_param_0","default description",61, -2.59542, 3.09774);
		hmcChargedParamVec_part_0_param_1 = new TH1D("hmcChargedParamVec_part_0_param_1","default description",61, 0.116264, 3.03111);
		hmcChargedParamVec_part_0_param_2 = new TH1D("hmcChargedParamVec_part_0_param_2","default description",61, -3.1397, 3.14128);
		hmcChargedParamVec_part_1_param_0 = new TH1D("hmcChargedParamVec_part_1_param_0","default description",61, -3.80851, 2.13999);
		hmcChargedParamVec_part_1_param_1 = new TH1D("hmcChargedParamVec_part_1_param_1","default description",61, 0.115764, 3.01593);
		hmcChargedParamVec_part_1_param_2 = new TH1D("hmcChargedParamVec_part_1_param_2","default description",61, -3.13894, 3.1388);
		hmcNeutralVec_part_0_param_0 = new TH1D("hmcNeutralVec_part_0_param_0","default description",61, -16.0469, 14.5626);
		hmcNeutralVec_part_0_param_1 = new TH1D("hmcNeutralVec_part_0_param_1","default description",61, -14.9646, 12.2102);
		hmcNeutralVec_part_0_param_2 = new TH1D("hmcNeutralVec_part_0_param_2","default description",61, -11.8096, 19.2511);
		hmcNeutralVec_part_0_param_3 = new TH1D("hmcNeutralVec_part_0_param_3","default description",61, 0.0355843, 20);
		hmcNeutralVec_part_1_param_0 = new TH1D("hmcNeutralVec_part_1_param_0","default description",61, -9.71411, 10.6686);
		hmcNeutralVec_part_1_param_1 = new TH1D("hmcNeutralVec_part_1_param_1","default description",61, -16.6411, 19.4386);
		hmcNeutralVec_part_1_param_2 = new TH1D("hmcNeutralVec_part_1_param_2","default description",61, -10.3978, 10.0592);
		hmcNeutralVec_part_1_param_3 = new TH1D("hmcNeutralVec_part_1_param_3","default description",61, 0.0690334, 20);
		hmcNeutralParamVec_part_0_param_0 = new TH1D("hmcNeutralParamVec_part_0_param_0","default description",61, 0.0355843, 20);
		hmcNeutralParamVec_part_0_param_1 = new TH1D("hmcNeutralParamVec_part_0_param_1","default description",61, 0.0712951, 3.07219);
		hmcNeutralParamVec_part_0_param_2 = new TH1D("hmcNeutralParamVec_part_0_param_2","default description",61, -3.13986, 3.14044);
		hmcNeutralParamVec_part_1_param_0 = new TH1D("hmcNeutralParamVec_part_1_param_0","default description",61, 0.0690334, 20);
		hmcNeutralParamVec_part_1_param_1 = new TH1D("hmcNeutralParamVec_part_1_param_1","default description",61, 0.109383, 3.081);
		hmcNeutralParamVec_part_1_param_2 = new TH1D("hmcNeutralParamVec_part_1_param_2","default description",61, -3.13982, 3.1407);
		hmeasgen_NeutralPulls_part_0_param_0 = new TH1D("hmeasgen_NeutralPulls_part_0_param_0","default description",61, -5, 5);
		hmeasgen_NeutralPulls_part_0_param_1 = new TH1D("hmeasgen_NeutralPulls_part_0_param_1","default description",61, -5, 5);
		hmeasgen_NeutralPulls_part_0_param_2 = new TH1D("hmeasgen_NeutralPulls_part_0_param_2","default description",61, -5, 5);
		hmeasgen_NeutralPulls_part_1_param_0 = new TH1D("hmeasgen_NeutralPulls_part_1_param_0","default description",61, -5, 5);
		hmeasgen_NeutralPulls_part_1_param_1 = new TH1D("hmeasgen_NeutralPulls_part_1_param_1","default description",61, -5, 5);
		hmeasgen_NeutralPulls_part_1_param_2 = new TH1D("hmeasgen_NeutralPulls_part_1_param_2","default description",61, -5, 5);
		hmeasgen_ChargedPulls_part_0_param_0 = new TH1D("hmeasgen_ChargedPulls_part_0_param_0","default description",61, -5, 5);
		hmeasgen_ChargedPulls_part_0_param_1 = new TH1D("hmeasgen_ChargedPulls_part_0_param_1","default description",61, -5, 5);
		hmeasgen_ChargedPulls_part_0_param_2 = new TH1D("hmeasgen_ChargedPulls_part_0_param_2","default description",61, -5, 5);
		hmeasgen_ChargedPulls_part_1_param_0 = new TH1D("hmeasgen_ChargedPulls_part_1_param_0","default description",61, -5, 5);
		hmeasgen_ChargedPulls_part_1_param_1 = new TH1D("hmeasgen_ChargedPulls_part_1_param_1","default description",61, -5, 5);
		hmeasgen_ChargedPulls_part_1_param_2 = new TH1D("hmeasgen_ChargedPulls_part_1_param_2","default description",61, -5, 5);
}
