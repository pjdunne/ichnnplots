{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:07 2013) by ROOT version5.32/00
   TCanvas *canv = new TCanvas("canv", "canv",0,0,700,700);
   gStyle->SetOptFit(1);
   gStyle->SetOptTitle(0);
   canv->SetHighLightColor(2);
   canv->Range(0,0,1,1);
   canv->SetFillColor(0);
   canv->SetBorderMode(0);
   canv->SetBorderSize(2);
   canv->SetTickx(1);
   canv->SetTicky(1);
   canv->SetLeftMargin(0.16);
   canv->SetRightMargin(0.05);
   canv->SetTopMargin(0.05);
   canv->SetFrameFillStyle(0);
   canv->SetFrameLineStyle(0);
   canv->SetFrameLineWidth(2);
   canv->SetFrameBorderMode(0);
   canv->SetFrameBorderSize(10);
  
// ------------>Primitives in pad: upper
   TPad *upper = new TPad("upper", "pad",0,0.26,1,1);
   upper->Draw();
   upper->cd();
   upper->Range(-4.253164,-2.98143,22.32911,8.381542);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetLogy();
   upper->SetTickx(1);
   upper->SetTicky(1);
   upper->SetLeftMargin(0.16);
   upper->SetRightMargin(0.05);
   upper->SetTopMargin(0.05);
   upper->SetBottomMargin(0.02);
   upper->SetFrameFillStyle(0);
   upper->SetFrameLineStyle(0);
   upper->SetFrameLineWidth(2);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderSize(10);
   upper->SetFrameFillStyle(0);
   upper->SetFrameLineStyle(0);
   upper->SetFrameLineWidth(2);
   upper->SetFrameBorderMode(0);
   upper->SetFrameBorderSize(10);
   
   THStack *stack = new THStack();
   stack->SetName("stack");
   stack->SetTitle("stack");
   stack->SetMinimum(0.01);
   stack->SetMaximum(2.266469e+07);
   
   TH1F *n_jetsingap_stack_7 = new TH1F("n_jetsingap_stack_7","stack",50,0,50);
   n_jetsingap_stack_7->SetBinContent(1,44.82449);
   n_jetsingap_stack_7->SetBinContent(2,29.5421);
   n_jetsingap_stack_7->SetBinContent(3,5.531238);
   n_jetsingap_stack_7->SetBinContent(4,2.810991);
   n_jetsingap_stack_7->SetBinError(1,9.043457);
   n_jetsingap_stack_7->SetBinError(2,7.286743);
   n_jetsingap_stack_7->SetBinError(3,2.956583);
   n_jetsingap_stack_7->SetBinError(4,1.799134);
   n_jetsingap_stack_7->SetMinimum(0.001761284);
   n_jetsingap_stack_7->SetMaximum(6.507191e+07);
   n_jetsingap_stack_7->SetEntries(176);
   n_jetsingap_stack_7->SetStats(0);
   n_jetsingap_stack_7->SetFillColor(4);
   n_jetsingap_stack_7->SetLineColor(4);
   n_jetsingap_stack_7->SetLineWidth(2);
   n_jetsingap_stack_7->SetMarkerColor(4);
   n_jetsingap_stack_7->SetMarkerStyle(21);
   n_jetsingap_stack_7->SetMarkerSize(0.8);
   n_jetsingap_stack_7->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap_stack_7->GetXaxis()->SetRange(1,21);
   n_jetsingap_stack_7->GetXaxis()->SetLabelFont(42);
   n_jetsingap_stack_7->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_7->GetXaxis()->SetLabelSize(0);
   n_jetsingap_stack_7->GetXaxis()->SetTitleSize(0);
   n_jetsingap_stack_7->GetXaxis()->SetTickLength(0.02);
   n_jetsingap_stack_7->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap_stack_7->GetXaxis()->SetTitleFont(42);
   n_jetsingap_stack_7->GetYaxis()->SetTitle("Events");
   n_jetsingap_stack_7->GetYaxis()->SetLabelFont(42);
   n_jetsingap_stack_7->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_7->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_7->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_7->GetYaxis()->SetTickLength(0.02);
   n_jetsingap_stack_7->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap_stack_7->GetYaxis()->SetTitleFont(42);
   n_jetsingap_stack_7->GetZaxis()->SetLabelFont(42);
   n_jetsingap_stack_7->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_7->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_7->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_7->GetZaxis()->SetTickLength(0.02);
   n_jetsingap_stack_7->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_jetsingap_stack_7);
   
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,44.82449);
   n_jetsingap->SetBinContent(2,29.5421);
   n_jetsingap->SetBinContent(3,5.531238);
   n_jetsingap->SetBinContent(4,2.810991);
   n_jetsingap->SetBinError(1,9.043457);
   n_jetsingap->SetBinError(2,7.286743);
   n_jetsingap->SetBinError(3,2.956583);
   n_jetsingap->SetBinError(4,1.799134);
   n_jetsingap->SetMinimum(0.01);
   n_jetsingap->SetMaximum(1.533e+07);
   n_jetsingap->SetEntries(176);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(4);
   n_jetsingap->SetLineColor(4);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(4);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap->GetXaxis()->SetRange(1,21);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0);
   n_jetsingap->GetXaxis()->SetTitleSize(0);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetTitle("Events");
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"HIST");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,36.23715);
   n_jetsingap->SetBinContent(2,76.71046);
   n_jetsingap->SetBinContent(3,77.81918);
   n_jetsingap->SetBinContent(4,62.34122);
   n_jetsingap->SetBinContent(5,38.17885);
   n_jetsingap->SetBinContent(6,14.06629);
   n_jetsingap->SetBinContent(7,4.115035);
   n_jetsingap->SetBinContent(8,0.7344728);
   n_jetsingap->SetBinError(1,4.460963);
   n_jetsingap->SetBinError(2,6.939077);
   n_jetsingap->SetBinError(3,7.648175);
   n_jetsingap->SetBinError(4,6.901454);
   n_jetsingap->SetBinError(5,5.251328);
   n_jetsingap->SetBinError(6,3.270969);
   n_jetsingap->SetBinError(7,1.667121);
   n_jetsingap->SetBinError(8,0.7344728);
   n_jetsingap->SetEntries(580);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(5);
   n_jetsingap->SetLineColor(5);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(5);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,888.9892);
   n_jetsingap->SetBinContent(2,567.0734);
   n_jetsingap->SetBinContent(3,185.0216);
   n_jetsingap->SetBinContent(4,39.58522);
   n_jetsingap->SetBinContent(5,6.66025);
   n_jetsingap->SetBinContent(6,0.6699172);
   n_jetsingap->SetBinError(1,29.28973);
   n_jetsingap->SetBinError(2,18.69775);
   n_jetsingap->SetBinError(3,9.109013);
   n_jetsingap->SetBinError(4,4.048937);
   n_jetsingap->SetBinError(5,1.61607);
   n_jetsingap->SetBinError(6,0.4827463);
   n_jetsingap->SetEntries(3203);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(6);
   n_jetsingap->SetLineColor(6);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(6);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,481.7207);
   n_jetsingap->SetBinContent(2,96.887);
   n_jetsingap->SetBinContent(3,14.26681);
   n_jetsingap->SetBinContent(4,1.68999);
   n_jetsingap->SetBinContent(5,0.2081606);
   n_jetsingap->SetBinError(1,3.127073);
   n_jetsingap->SetBinError(2,1.408267);
   n_jetsingap->SetBinError(3,0.5435205);
   n_jetsingap->SetBinError(4,0.1853879);
   n_jetsingap->SetBinError(5,0.07047316);
   n_jetsingap->SetEntries(33754);
   n_jetsingap->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_jetsingap->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_jetsingap->SetLineColor(ci);
   n_jetsingap->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_jetsingap->SetMarkerColor(ci);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(3);
   n_jetsingap->SetLineColor(3);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(3);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,36.04763);
   n_jetsingap->SetBinContent(2,30.15773);
   n_jetsingap->SetBinContent(3,10.38056);
   n_jetsingap->SetBinContent(4,2.807485);
   n_jetsingap->SetBinContent(5,0.2559616);
   n_jetsingap->SetBinContent(6,0.2893502);
   n_jetsingap->SetBinError(1,2.285132);
   n_jetsingap->SetBinError(2,1.893279);
   n_jetsingap->SetBinError(3,1.014629);
   n_jetsingap->SetBinError(4,0.6585298);
   n_jetsingap->SetBinError(5,0.133199);
   n_jetsingap->SetBinError(6,0.167789);
   n_jetsingap->SetEntries(852);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(3);
   n_jetsingap->SetLineColor(3);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(3);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,23.16015);
   n_jetsingap->SetBinContent(2,8.675947);
   n_jetsingap->SetBinContent(3,1.752942);
   n_jetsingap->SetBinContent(4,0.1093753);
   n_jetsingap->SetBinContent(5,0.05159621);
   n_jetsingap->SetBinError(1,0.4843896);
   n_jetsingap->SetBinError(2,0.2884241);
   n_jetsingap->SetBinError(3,0.1312193);
   n_jetsingap->SetBinError(4,0.02903064);
   n_jetsingap->SetBinError(5,0.02071849);
   n_jetsingap->SetEntries(4388);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(3);
   n_jetsingap->SetLineColor(3);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(3);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   stack->Draw("hist");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,1022);
   n_jetsingap->SetBinContent(2,543);
   n_jetsingap->SetBinContent(3,311);
   n_jetsingap->SetBinContent(4,98);
   n_jetsingap->SetBinContent(5,47);
   n_jetsingap->SetBinContent(6,11);
   n_jetsingap->SetBinContent(7,2);
   n_jetsingap->SetBinContent(9,1);
   n_jetsingap->SetBinError(1,31.96873);
   n_jetsingap->SetBinError(2,23.30236);
   n_jetsingap->SetBinError(3,17.63519);
   n_jetsingap->SetBinError(4,9.899495);
   n_jetsingap->SetBinError(5,6.855655);
   n_jetsingap->SetBinError(6,3.316625);
   n_jetsingap->SetBinError(7,1.414214);
   n_jetsingap->SetBinError(9,1);
   n_jetsingap->SetEntries(2035);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(1);
   n_jetsingap->SetFillStyle(0);
   n_jetsingap->SetLineWidth(3);
   n_jetsingap->SetMarkerStyle(20);
   n_jetsingap->SetMarkerSize(1.3);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   n_jetsingap->Draw("SAMEPE1");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(1);
   n_jetsingap->SetFillStyle(0);
   n_jetsingap->SetLineStyle(2);
   n_jetsingap->SetLineWidth(3);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   n_jetsingap->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"TightMjj");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.965,"CMS Preliminary 2012, #sqrt{s} = 8 TeV, 19.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6,0.605,0.92,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("n_jetsingap","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_jetsingap","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","EWK W+jets","f");

   ci = TColor::GetColor("#660099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#660099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","Dibosons","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   upper->Modified();
   canv->cd();
  
// ------------>Primitives in pad: lower
   lower = new TPad("lower", "pad",0,0,1,0.26);
   lower->Draw();
   lower->cd();
   lower->Range(-4.253164,-0.653951,22.32911,2.070845);
   lower->SetFillColor(0);
   lower->SetBorderMode(0);
   lower->SetBorderSize(2);
   lower->SetGridy();
   lower->SetTickx(1);
   lower->SetTicky(1);
   lower->SetLeftMargin(0.16);
   lower->SetRightMargin(0.05);
   lower->SetTopMargin(0.026);
   lower->SetBottomMargin(0.24);
   lower->SetFrameFillStyle(0);
   lower->SetFrameLineStyle(0);
   lower->SetFrameLineWidth(2);
   lower->SetFrameBorderMode(0);
   lower->SetFrameBorderSize(10);
   lower->SetFrameFillStyle(0);
   lower->SetFrameLineStyle(0);
   lower->SetFrameLineWidth(2);
   lower->SetFrameBorderMode(0);
   lower->SetFrameBorderSize(10);
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,0.6970615);
   n_jetsingap->SetBinContent(2,0.6965963);
   n_jetsingap->SetBinContent(3,1.075228);
   n_jetsingap->SetBinContent(4,0.9199003);
   n_jetsingap->SetBinContent(5,1.036273);
   n_jetsingap->SetBinContent(6,0.732086);
   n_jetsingap->SetBinContent(7,0.4860227);
   n_jetsingap->SetBinError(1,0.02602485);
   n_jetsingap->SetBinError(2,0.03486829);
   n_jetsingap->SetBinError(3,0.07543827);
   n_jetsingap->SetBinError(4,0.1159461);
   n_jetsingap->SetBinError(5,0.1965186);
   n_jetsingap->SetBinError(6,0.2733893);
   n_jetsingap->SetBinError(7,0.39608);
   n_jetsingap->SetMinimum(0);
   n_jetsingap->SetMaximum(2);
   n_jetsingap->SetEntries(109.3334);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillStyle(0);
   n_jetsingap->SetMarkerStyle(20);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap->GetXaxis()->SetRange(1,21);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.1);
   n_jetsingap->GetXaxis()->SetTitleSize(0.12);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetTitle("Data/MC");
   n_jetsingap->GetYaxis()->SetNdivisions(505);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.1);
   n_jetsingap->GetYaxis()->SetTitleSize(0.12);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(0.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   n_jetsingap->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
