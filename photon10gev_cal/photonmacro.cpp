
#include "TFile.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TCanvas.h"
void photonmacro(){

	//TTree* tree=0;
	TFile *f = TFile::Open("PhotonCheck_10GeV_l4_1904_cal.root");
 	TFile *f2 = new TFile("formattedplots.root","RECREATE");
	//f->GetObject("tree",tree);
	TH1D* h1;
	TH1D* h2;
	TH1D* h3;
	h1 = (TH1D*)f->Get("hEpull");
	h2 = (TH1D*)f->Get("hthetapull");
	h3 = (TH1D*)f->Get("hphipull");
	

	h1->SetTitle("Uncalibrated Single Photon Energy Pull");
	h1->GetXaxis()->SetTitle("#frac{E_{g} - E_{m}}{ #sigma_{E_{m}}}");
	h1->GetYaxis()->SetTitle("Events Per 0.2 Bin");
	h1->Fit("gaus");


	h2->SetTitle("Calibrated Single Photon Theta Pull");
	h2->GetXaxis()->SetTitle("#frac{#theta_{g} - #theta_{m}}{ #sigma_{#theta_{m}}}");
	h2->GetYaxis()->SetTitle("Events Per 0.2 Bin");
	h2->Fit("gaus");

	h3->SetTitle("Calibrated Single Photon Phi Pull");
	h3->GetXaxis()->SetTitle("#frac{#phi_{g} - #phi_{m}}{ #sigma_{#phi_{m}}}");
	h3->GetYaxis()->SetTitle("Events Per 0.2 Bin");
	h3->Fit("gaus");

	TStyle *st1 = new TStyle("st1","my style");
    	st1->SetOptStat(111111);
	st1->SetOptFit(1);
	st1->SetStatW(0.18);
	st1->SetStatH(0.18);
	
	
    st1->cd();
	//f2->cd();
	//f2->Write();
	TCanvas *c1 = new TCanvas();
	h1->Draw();
	//TCanvas c2 = new TCanvas();
	TCanvas *c2 = new TCanvas();
	h2->Draw();
	//Tcanvas c3 = new TCanvas();
	TCanvas *c3 = new TCanvas();
	h3->Draw();
}
