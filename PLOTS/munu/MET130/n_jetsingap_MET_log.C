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
   upper->Range(-4.253164,-2.993829,22.32911,8.603049);
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
   stack->SetMaximum(3.622781e+07);
   
   TH1F *n_jetsingap_stack_6 = new TH1F("n_jetsingap_stack_6","stack",50,0,50);
   n_jetsingap_stack_6->SetBinContent(1,73.03564);
   n_jetsingap_stack_6->SetBinContent(2,41.70502);
   n_jetsingap_stack_6->SetBinContent(3,12.94668);
   n_jetsingap_stack_6->SetBinContent(4,3.016097);
   n_jetsingap_stack_6->SetBinError(1,10.92578);
   n_jetsingap_stack_6->SetBinError(2,8.265491);
   n_jetsingap_stack_6->SetBinError(3,4.645856);
   n_jetsingap_stack_6->SetBinError(4,1.802815);
   n_jetsingap_stack_6->SetMinimum(0.001730247);
   n_jetsingap_stack_6->SetMaximum(1.054884e+08);
   n_jetsingap_stack_6->SetEntries(450);
   n_jetsingap_stack_6->SetStats(0);
   n_jetsingap_stack_6->SetFillColor(4);
   n_jetsingap_stack_6->SetLineColor(4);
   n_jetsingap_stack_6->SetLineWidth(2);
   n_jetsingap_stack_6->SetMarkerColor(4);
   n_jetsingap_stack_6->SetMarkerStyle(21);
   n_jetsingap_stack_6->SetMarkerSize(0.8);
   n_jetsingap_stack_6->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap_stack_6->GetXaxis()->SetRange(1,21);
   n_jetsingap_stack_6->GetXaxis()->SetLabelFont(42);
   n_jetsingap_stack_6->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_6->GetXaxis()->SetLabelSize(0);
   n_jetsingap_stack_6->GetXaxis()->SetTitleSize(0);
   n_jetsingap_stack_6->GetXaxis()->SetTickLength(0.02);
   n_jetsingap_stack_6->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap_stack_6->GetXaxis()->SetTitleFont(42);
   n_jetsingap_stack_6->GetYaxis()->SetTitle("Events");
   n_jetsingap_stack_6->GetYaxis()->SetLabelFont(42);
   n_jetsingap_stack_6->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_6->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_6->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_6->GetYaxis()->SetTickLength(0.02);
   n_jetsingap_stack_6->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap_stack_6->GetYaxis()->SetTitleFont(42);
   n_jetsingap_stack_6->GetZaxis()->SetLabelFont(42);
   n_jetsingap_stack_6->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_6->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_6->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_6->GetZaxis()->SetTickLength(0.02);
   n_jetsingap_stack_6->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_jetsingap_stack_6);
   
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,73.03564);
   n_jetsingap->SetBinContent(2,41.70502);
   n_jetsingap->SetBinContent(3,12.94668);
   n_jetsingap->SetBinContent(4,3.016097);
   n_jetsingap->SetBinError(1,10.92578);
   n_jetsingap->SetBinError(2,8.265491);
   n_jetsingap->SetBinError(3,4.645856);
   n_jetsingap->SetBinError(4,1.802815);
   n_jetsingap->SetMinimum(0.01);
   n_jetsingap->SetMaximum(2.58e+07);
   n_jetsingap->SetEntries(450);
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
   n_jetsingap->SetBinContent(1,73.14908);
   n_jetsingap->SetBinContent(2,145.8024);
   n_jetsingap->SetBinContent(3,133.1429);
   n_jetsingap->SetBinContent(4,95.58238);
   n_jetsingap->SetBinContent(5,48.92839);
   n_jetsingap->SetBinContent(6,17.88315);
   n_jetsingap->SetBinContent(7,4.47309);
   n_jetsingap->SetBinContent(8,1.591591);
   n_jetsingap->SetBinError(1,5.882642);
   n_jetsingap->SetBinError(2,9.276418);
   n_jetsingap->SetBinError(3,9.458438);
   n_jetsingap->SetBinError(4,8.206113);
   n_jetsingap->SetBinError(5,5.846487);
   n_jetsingap->SetBinError(6,3.646005);
   n_jetsingap->SetBinError(7,1.705138);
   n_jetsingap->SetBinError(8,1.128761);
   n_jetsingap->SetEntries(1162);
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
   n_jetsingap->SetBinContent(1,1566.398);
   n_jetsingap->SetBinContent(2,924.613);
   n_jetsingap->SetBinContent(3,295.8059);
   n_jetsingap->SetBinContent(4,62.11395);
   n_jetsingap->SetBinContent(5,9.833764);
   n_jetsingap->SetBinContent(6,1.25831);
   n_jetsingap->SetBinError(1,37.26014);
   n_jetsingap->SetBinError(2,22.61234);
   n_jetsingap->SetBinError(3,10.99582);
   n_jetsingap->SetBinError(4,4.943261);
   n_jetsingap->SetBinError(5,1.911303);
   n_jetsingap->SetBinError(6,0.6391853);
   n_jetsingap->SetEntries(6393);
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
   n_jetsingap->SetBinContent(1,605.3173);
   n_jetsingap->SetBinContent(2,116.2542);
   n_jetsingap->SetBinContent(3,16.22199);
   n_jetsingap->SetBinContent(4,1.904781);
   n_jetsingap->SetBinContent(5,0.2081606);
   n_jetsingap->SetBinError(1,3.448777);
   n_jetsingap->SetBinError(2,1.522648);
   n_jetsingap->SetBinError(3,0.5725974);
   n_jetsingap->SetBinError(4,0.1942916);
   n_jetsingap->SetBinError(5,0.07047316);
   n_jetsingap->SetEntries(44506);
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
   n_jetsingap->SetBinContent(1,67.77437);
   n_jetsingap->SetBinContent(2,52.1402);
   n_jetsingap->SetBinContent(3,17.8637);
   n_jetsingap->SetBinContent(4,4.353792);
   n_jetsingap->SetBinContent(5,0.6430569);
   n_jetsingap->SetBinContent(6,0.4550595);
   n_jetsingap->SetBinContent(8,0.08821053);
   n_jetsingap->SetBinError(1,2.954294);
   n_jetsingap->SetBinError(2,2.346616);
   n_jetsingap->SetBinError(3,1.27024);
   n_jetsingap->SetBinError(4,0.747411);
   n_jetsingap->SetBinError(5,0.2146342);
   n_jetsingap->SetBinError(6,0.2141885);
   n_jetsingap->SetBinError(8,0.08821053);
   n_jetsingap->SetEntries(1811);
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
   n_jetsingap->SetBinContent(1,29.51217);
   n_jetsingap->SetBinContent(2,10.80137);
   n_jetsingap->SetBinContent(3,2.099182);
   n_jetsingap->SetBinContent(4,0.158335);
   n_jetsingap->SetBinContent(5,0.05159621);
   n_jetsingap->SetBinError(1,0.5353485);
   n_jetsingap->SetBinError(2,0.31803);
   n_jetsingap->SetBinError(3,0.1429368);
   n_jetsingap->SetBinError(4,0.03489765);
   n_jetsingap->SetBinError(5,0.02071849);
   n_jetsingap->SetEntries(5927);
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
   n_jetsingap->SetBinContent(1,1720);
   n_jetsingap->SetBinContent(2,926);
   n_jetsingap->SetBinContent(3,457);
   n_jetsingap->SetBinContent(4,152);
   n_jetsingap->SetBinContent(5,61);
   n_jetsingap->SetBinContent(6,14);
   n_jetsingap->SetBinContent(7,3);
   n_jetsingap->SetBinContent(9,1);
   n_jetsingap->SetBinError(1,41.47288);
   n_jetsingap->SetBinError(2,30.43025);
   n_jetsingap->SetBinError(3,21.37756);
   n_jetsingap->SetBinError(4,12.32883);
   n_jetsingap->SetBinError(5,7.81025);
   n_jetsingap->SetBinError(6,3.741657);
   n_jetsingap->SetBinError(7,1.732051);
   n_jetsingap->SetBinError(9,1);
   n_jetsingap->SetEntries(3334);
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
   TLatex *   tex = new TLatex(0.95,0.965,"MET");
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
   n_jetsingap->SetBinContent(1,0.7343675);
   n_jetsingap->SetBinContent(2,0.7410306);
   n_jetsingap->SetBinContent(3,0.9825131);
   n_jetsingap->SetBinContent(4,0.9261897);
   n_jetsingap->SetBinContent(5,1.022376);
   n_jetsingap->SetBinContent(6,0.7144125);
   n_jetsingap->SetBinContent(7,0.6706774);
   n_jetsingap->SetBinError(1,0.02134214);
   n_jetsingap->SetBinError(2,0.0283878);
   n_jetsingap->SetBinError(3,0.05531483);
   n_jetsingap->SetBinError(4,0.09265919);
   n_jetsingap->SetBinError(5,0.1681049);
   n_jetsingap->SetBinError(6,0.2339392);
   n_jetsingap->SetBinError(7,0.4640031);
   n_jetsingap->SetMinimum(0);
   n_jetsingap->SetMaximum(2);
   n_jetsingap->SetEntries(107.7861);
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
