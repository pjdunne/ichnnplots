{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:28 2013) by ROOT version5.32/00
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
   upper->Range(-0.9316455,-2.602496,4.891139,2.784983);
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
   stack->SetMaximum(177.218);
   
   TH1F *dRmin_taujet_stack_15 = new TH1F("dRmin_taujet_stack_15","stack",50,0,10);
   dRmin_taujet_stack_15->SetBinContent(51,15.86491);
   dRmin_taujet_stack_15->SetBinError(51,5.728998);
   dRmin_taujet_stack_15->SetMinimum(0.003200764);
   dRmin_taujet_stack_15->SetMaximum(327.8004);
   dRmin_taujet_stack_15->SetEntries(25);
   dRmin_taujet_stack_15->SetStats(0);
   dRmin_taujet_stack_15->SetFillColor(4);
   dRmin_taujet_stack_15->SetLineColor(4);
   dRmin_taujet_stack_15->SetLineWidth(2);
   dRmin_taujet_stack_15->SetMarkerColor(4);
   dRmin_taujet_stack_15->SetMarkerStyle(21);
   dRmin_taujet_stack_15->SetMarkerSize(0.8);
   dRmin_taujet_stack_15->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet_stack_15->GetXaxis()->SetRange(1,23);
   dRmin_taujet_stack_15->GetXaxis()->SetLabelFont(42);
   dRmin_taujet_stack_15->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_15->GetXaxis()->SetLabelSize(0);
   dRmin_taujet_stack_15->GetXaxis()->SetTitleSize(0);
   dRmin_taujet_stack_15->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_15->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet_stack_15->GetXaxis()->SetTitleFont(42);
   dRmin_taujet_stack_15->GetYaxis()->SetTitle("Events");
   dRmin_taujet_stack_15->GetYaxis()->SetLabelFont(42);
   dRmin_taujet_stack_15->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_15->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_15->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_15->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_15->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet_stack_15->GetYaxis()->SetTitleFont(42);
   dRmin_taujet_stack_15->GetZaxis()->SetLabelFont(42);
   dRmin_taujet_stack_15->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_15->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_15->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_15->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet_stack_15);
   
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(51,15.86491);
   dRmin_taujet->SetBinError(51,5.728998);
   dRmin_taujet->SetMinimum(0.01);
   dRmin_taujet->SetMaximum(300);
   dRmin_taujet->SetEntries(25);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(4);
   dRmin_taujet->SetLineColor(4);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(4);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0);
   dRmin_taujet->GetXaxis()->SetTitleSize(0);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Events");
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"HIST");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(5,0.3639371);
   dRmin_taujet->SetBinContent(14,1.09027);
   dRmin_taujet->SetBinContent(18,0.1555932);
   dRmin_taujet->SetBinContent(51,49.60141);
   dRmin_taujet->SetBinError(5,0.3639371);
   dRmin_taujet->SetBinError(14,1.09027);
   dRmin_taujet->SetBinError(18,0.1555932);
   dRmin_taujet->SetBinError(51,5.889391);
   dRmin_taujet->SetEntries(93);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(5);
   dRmin_taujet->SetLineColor(5);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(5);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.8211787);
   dRmin_taujet->SetBinContent(15,0.4069748);
   dRmin_taujet->SetBinContent(51,298.0498);
   dRmin_taujet->SetBinError(1,0.5809259);
   dRmin_taujet->SetBinError(15,0.4069748);
   dRmin_taujet->SetBinError(51,15.11039);
   dRmin_taujet->SetEntries(586);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(6);
   dRmin_taujet->SetLineColor(6);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(6);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.1643124);
   dRmin_taujet->SetBinContent(4,0.01416327);
   dRmin_taujet->SetBinContent(11,0.01564573);
   dRmin_taujet->SetBinContent(15,0.02171711);
   dRmin_taujet->SetBinContent(16,0.01700399);
   dRmin_taujet->SetBinContent(51,106.5408);
   dRmin_taujet->SetBinError(1,0.05518088);
   dRmin_taujet->SetBinError(4,0.01416327);
   dRmin_taujet->SetBinError(11,0.01564573);
   dRmin_taujet->SetBinError(15,0.0217171);
   dRmin_taujet->SetBinError(16,0.01700399);
   dRmin_taujet->SetBinError(51,1.461777);
   dRmin_taujet->SetEntries(6175);
   dRmin_taujet->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetLineColor(ci);
   dRmin_taujet->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetMarkerColor(ci);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.036511);
   dRmin_taujet->SetBinContent(11,0.2920513);
   dRmin_taujet->SetBinContent(12,0.08621742);
   dRmin_taujet->SetBinContent(13,0.2165491);
   dRmin_taujet->SetBinContent(14,0.07769009);
   dRmin_taujet->SetBinContent(15,0.0353444);
   dRmin_taujet->SetBinContent(17,0.02605036);
   dRmin_taujet->SetBinContent(51,13.53331);
   dRmin_taujet->SetBinError(1,0.036511);
   dRmin_taujet->SetBinError(11,0.2215603);
   dRmin_taujet->SetBinError(12,0.08621742);
   dRmin_taujet->SetBinError(13,0.1535306);
   dRmin_taujet->SetBinError(14,0.07769008);
   dRmin_taujet->SetBinError(15,0.0353444);
   dRmin_taujet->SetBinError(17,0.02605036);
   dRmin_taujet->SetBinError(51,1.330712);
   dRmin_taujet->SetEntries(159);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.01863464);
   dRmin_taujet->SetBinContent(5,0.006550794);
   dRmin_taujet->SetBinContent(10,0.002327822);
   dRmin_taujet->SetBinContent(13,0.008423794);
   dRmin_taujet->SetBinContent(14,0.01349323);
   dRmin_taujet->SetBinContent(15,0.01712381);
   dRmin_taujet->SetBinContent(16,0.02336278);
   dRmin_taujet->SetBinContent(51,5.563339);
   dRmin_taujet->SetBinError(1,0.01388042);
   dRmin_taujet->SetBinError(5,0.006550794);
   dRmin_taujet->SetBinError(10,0.002327822);
   dRmin_taujet->SetBinError(13,0.006761429);
   dRmin_taujet->SetBinError(14,0.009611882);
   dRmin_taujet->SetBinError(15,0.009929622);
   dRmin_taujet->SetBinError(16,0.01258907);
   dRmin_taujet->SetBinError(51,0.2355599);
   dRmin_taujet->SetEntries(756);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   stack->Draw("hist");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,2);
   dRmin_taujet->SetBinContent(5,1);
   dRmin_taujet->SetBinContent(11,1);
   dRmin_taujet->SetBinContent(16,1);
   dRmin_taujet->SetBinContent(51,350);
   dRmin_taujet->SetBinError(1,1.414214);
   dRmin_taujet->SetBinError(5,1);
   dRmin_taujet->SetBinError(11,1);
   dRmin_taujet->SetBinError(16,1);
   dRmin_taujet->SetBinError(51,18.70829);
   dRmin_taujet->SetEntries(355);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(1);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetLineWidth(3);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(1.3);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVpass");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.965,"CMS Preliminary 2012, #sqrt{s} = 8 TeV, 19.6 fb^{-1}");
tex->SetNDC();
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6,0.65,0.92,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("dRmin_taujet","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dRmin_taujet","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","EWK W+jets","f");

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
   entry=leg->AddEntry("dRmin_taujet","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","Dibosons","f");
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
   lower->Range(-0.9316455,-0.653951,4.891139,2.070845);
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
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,1.9219);
   dRmin_taujet->SetBinContent(5,2.699143);
   dRmin_taujet->SetBinContent(11,3.24995);
   dRmin_taujet->SetBinContent(16,24.77285);
   dRmin_taujet->SetBinContent(51,0.7395064);
   dRmin_taujet->SetBinError(1,1.735949);
   dRmin_taujet->SetBinError(5,3.78387);
   dRmin_taujet->SetBinError(11,4.008221);
   dRmin_taujet->SetBinError(16,27.96921);
   dRmin_taujet->SetBinError(51,0.04705591);
   dRmin_taujet->SetMinimum(0);
   dRmin_taujet->SetMaximum(2);
   dRmin_taujet->SetEntries(1.306429);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Data/MC");
   dRmin_taujet->GetYaxis()->SetNdivisions(505);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(0.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
