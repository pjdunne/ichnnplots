{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:45:09 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.824089,1063.291,5.783315);
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
   stack->SetMaximum(94121.15);
   
   TH1F *met_noMuons_stack_9 = new TH1F("met_noMuons_stack_9","stack",100,0,1000);
   met_noMuons_stack_9->SetBinContent(14,0.06857956);
   met_noMuons_stack_9->SetBinContent(22,0.04125056);
   met_noMuons_stack_9->SetBinContent(26,0.04163286);
   met_noMuons_stack_9->SetBinError(14,0.048543);
   met_noMuons_stack_9->SetBinError(22,0.04125056);
   met_noMuons_stack_9->SetBinError(26,0.04163286);
   met_noMuons_stack_9->SetMinimum(0.002228738);
   met_noMuons_stack_9->SetMaximum(225395.4);
   met_noMuons_stack_9->SetEntries(4);
   met_noMuons_stack_9->SetStats(0);
   met_noMuons_stack_9->SetFillColor(4);
   met_noMuons_stack_9->SetLineColor(4);
   met_noMuons_stack_9->SetLineWidth(2);
   met_noMuons_stack_9->SetMarkerColor(4);
   met_noMuons_stack_9->SetMarkerStyle(21);
   met_noMuons_stack_9->SetMarkerSize(0.8);
   met_noMuons_stack_9->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_noMuons_stack_9->GetXaxis()->SetLabelFont(42);
   met_noMuons_stack_9->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_9->GetXaxis()->SetLabelSize(0);
   met_noMuons_stack_9->GetXaxis()->SetTitleSize(0);
   met_noMuons_stack_9->GetXaxis()->SetTickLength(0.02);
   met_noMuons_stack_9->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons_stack_9->GetXaxis()->SetTitleFont(42);
   met_noMuons_stack_9->GetYaxis()->SetTitle("Events");
   met_noMuons_stack_9->GetYaxis()->SetLabelFont(42);
   met_noMuons_stack_9->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_9->GetYaxis()->SetLabelSize(0.035);
   met_noMuons_stack_9->GetYaxis()->SetTitleSize(0.045);
   met_noMuons_stack_9->GetYaxis()->SetTickLength(0.02);
   met_noMuons_stack_9->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons_stack_9->GetYaxis()->SetTitleFont(42);
   met_noMuons_stack_9->GetZaxis()->SetLabelFont(42);
   met_noMuons_stack_9->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_9->GetZaxis()->SetLabelSize(0.035);
   met_noMuons_stack_9->GetZaxis()->SetTitleSize(0.045);
   met_noMuons_stack_9->GetZaxis()->SetTickLength(0.02);
   met_noMuons_stack_9->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_noMuons_stack_9);
   
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,0.06857956);
   met_noMuons->SetBinContent(22,0.04125056);
   met_noMuons->SetBinContent(26,0.04163286);
   met_noMuons->SetBinError(14,0.048543);
   met_noMuons->SetBinError(22,0.04125056);
   met_noMuons->SetBinError(26,0.04163286);
   met_noMuons->SetMinimum(0.01);
   met_noMuons->SetMaximum(75000);
   met_noMuons->SetEntries(4);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(4);
   met_noMuons->SetLineColor(4);
   met_noMuons->SetLineWidth(2);
   met_noMuons->SetMarkerColor(4);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0);
   met_noMuons->GetXaxis()->SetTitleSize(0);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetTitle("Events");
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"HIST");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,0.7287824);
   met_noMuons->SetBinContent(15,0.7040896);
   met_noMuons->SetBinContent(17,0.790862);
   met_noMuons->SetBinContent(21,0.5210658);
   met_noMuons->SetBinContent(26,0.7296048);
   met_noMuons->SetBinError(14,0.7287823);
   met_noMuons->SetBinError(15,0.7040896);
   met_noMuons->SetBinError(17,0.790862);
   met_noMuons->SetBinError(21,0.5210658);
   met_noMuons->SetBinError(26,0.7296048);
   met_noMuons->SetEntries(5);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(5);
   met_noMuons->SetLineColor(5);
   met_noMuons->SetLineWidth(2);
   met_noMuons->SetMarkerColor(5);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(6);
   met_noMuons->SetLineColor(6);
   met_noMuons->SetLineWidth(2);
   met_noMuons->SetMarkerColor(6);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met_noMuons->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met_noMuons->SetLineColor(ci);
   met_noMuons->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met_noMuons->SetMarkerColor(ci);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(3);
   met_noMuons->SetLineColor(3);
   met_noMuons->SetLineWidth(2);
   met_noMuons->SetMarkerColor(3);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,2.45839);
   met_noMuons->SetBinContent(15,2.772368);
   met_noMuons->SetBinContent(16,3.163586);
   met_noMuons->SetBinContent(17,1.800457);
   met_noMuons->SetBinContent(18,1.272154);
   met_noMuons->SetBinContent(19,0.7002579);
   met_noMuons->SetBinContent(20,1.047198);
   met_noMuons->SetBinContent(21,0.7910464);
   met_noMuons->SetBinContent(22,0.422744);
   met_noMuons->SetBinContent(23,0.7415385);
   met_noMuons->SetBinContent(24,0.6472139);
   met_noMuons->SetBinContent(25,0.06387355);
   met_noMuons->SetBinContent(26,0.1312903);
   met_noMuons->SetBinContent(27,0.4452997);
   met_noMuons->SetBinContent(28,0.0898528);
   met_noMuons->SetBinContent(29,0.08627658);
   met_noMuons->SetBinContent(30,0.05004508);
   met_noMuons->SetBinContent(31,0.1888027);
   met_noMuons->SetBinContent(33,0.03505383);
   met_noMuons->SetBinContent(35,0.1645508);
   met_noMuons->SetBinContent(36,0.1197152);
   met_noMuons->SetBinContent(37,0.08274035);
   met_noMuons->SetBinContent(42,0.09118808);
   met_noMuons->SetBinError(14,0.5719745);
   met_noMuons->SetBinError(15,0.6042805);
   met_noMuons->SetBinError(16,0.5733789);
   met_noMuons->SetBinError(17,0.494218);
   met_noMuons->SetBinError(18,0.3967922);
   met_noMuons->SetBinError(19,0.2886936);
   met_noMuons->SetBinError(20,0.3677932);
   met_noMuons->SetBinError(21,0.3064181);
   met_noMuons->SetBinError(22,0.1927673);
   met_noMuons->SetBinError(23,0.2954725);
   met_noMuons->SetBinError(24,0.2697673);
   met_noMuons->SetBinError(25,0.04656941);
   met_noMuons->SetBinError(26,0.1312903);
   met_noMuons->SetBinError(27,0.2422987);
   met_noMuons->SetBinError(28,0.0898528);
   met_noMuons->SetBinError(29,0.08627658);
   met_noMuons->SetBinError(30,0.04833786);
   met_noMuons->SetBinError(31,0.1339652);
   met_noMuons->SetBinError(33,0.02892077);
   met_noMuons->SetBinError(35,0.1228617);
   met_noMuons->SetBinError(36,0.1197152);
   met_noMuons->SetBinError(37,0.06846288);
   met_noMuons->SetBinError(42,0.09118808);
   met_noMuons->SetEntries(181);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(3);
   met_noMuons->SetLineColor(3);
   met_noMuons->SetLineWidth(2);
   met_noMuons->SetMarkerColor(3);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,2.908612);
   met_noMuons->SetBinContent(15,2.798285);
   met_noMuons->SetBinContent(16,2.370752);
   met_noMuons->SetBinContent(17,2.030737);
   met_noMuons->SetBinContent(18,1.553116);
   met_noMuons->SetBinContent(19,1.390593);
   met_noMuons->SetBinContent(20,0.7991862);
   met_noMuons->SetBinContent(21,0.8582321);
   met_noMuons->SetBinContent(22,0.7574708);
   met_noMuons->SetBinContent(23,0.5901586);
   met_noMuons->SetBinContent(24,0.4524592);
   met_noMuons->SetBinContent(25,0.2827711);
   met_noMuons->SetBinContent(26,0.3569443);
   met_noMuons->SetBinContent(27,0.2880976);
   met_noMuons->SetBinContent(28,0.09318572);
   met_noMuons->SetBinContent(29,0.2587282);
   met_noMuons->SetBinContent(30,0.2076688);
   met_noMuons->SetBinContent(31,0.07597028);
   met_noMuons->SetBinContent(32,0.06182044);
   met_noMuons->SetBinContent(33,0.1934628);
   met_noMuons->SetBinContent(34,3.70753e-05);
   met_noMuons->SetBinContent(35,0.09083958);
   met_noMuons->SetBinContent(36,0.07501122);
   met_noMuons->SetBinContent(37,0.04589269);
   met_noMuons->SetBinContent(38,0.08570451);
   met_noMuons->SetBinContent(39,0.03888139);
   met_noMuons->SetBinContent(40,0.04398093);
   met_noMuons->SetBinContent(41,0.08212753);
   met_noMuons->SetBinContent(42,0.01819795);
   met_noMuons->SetBinContent(44,0.05870127);
   met_noMuons->SetBinContent(47,0.0204592);
   met_noMuons->SetBinContent(51,0.01848745);
   met_noMuons->SetBinContent(54,0.006012825);
   met_noMuons->SetBinContent(62,0.01069416);
   met_noMuons->SetBinError(14,0.1715543);
   met_noMuons->SetBinError(15,0.1722264);
   met_noMuons->SetBinError(16,0.1583717);
   met_noMuons->SetBinError(17,0.1492296);
   met_noMuons->SetBinError(18,0.1296678);
   met_noMuons->SetBinError(19,0.1237092);
   met_noMuons->SetBinError(20,0.0932966);
   met_noMuons->SetBinError(21,0.09763861);
   met_noMuons->SetBinError(22,0.08958986);
   met_noMuons->SetBinError(23,0.07988532);
   met_noMuons->SetBinError(24,0.06945446);
   met_noMuons->SetBinError(25,0.05332294);
   met_noMuons->SetBinError(26,0.06376236);
   met_noMuons->SetBinError(27,0.05449983);
   met_noMuons->SetBinError(28,0.03567008);
   met_noMuons->SetBinError(29,0.05233851);
   met_noMuons->SetBinError(30,0.04888798);
   met_noMuons->SetBinError(31,0.02688936);
   met_noMuons->SetBinError(32,0.0233474);
   met_noMuons->SetBinError(33,0.04595744);
   met_noMuons->SetBinError(34,2.753373e-05);
   met_noMuons->SetBinError(35,0.03035138);
   met_noMuons->SetBinError(36,0.02767868);
   met_noMuons->SetBinError(37,0.02480597);
   met_noMuons->SetBinError(38,0.0301887);
   met_noMuons->SetBinError(39,0.02051904);
   met_noMuons->SetBinError(40,0.02316759);
   met_noMuons->SetBinError(41,0.03060661);
   met_noMuons->SetBinError(42,0.0136019);
   met_noMuons->SetBinError(44,0.02518134);
   met_noMuons->SetBinError(47,0.01520019);
   met_noMuons->SetBinError(51,0.01373528);
   met_noMuons->SetBinError(54,0.004476332);
   met_noMuons->SetBinError(62,0.00796142);
   met_noMuons->SetEntries(2263);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(3);
   met_noMuons->SetLineColor(3);
   met_noMuons->SetLineWidth(2);
   met_noMuons->SetMarkerColor(3);
   met_noMuons->SetMarkerStyle(21);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_noMuons,"");
   stack->Draw("hist");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,2);
   met_noMuons->SetBinContent(15,1);
   met_noMuons->SetBinContent(16,5);
   met_noMuons->SetBinContent(17,1);
   met_noMuons->SetBinContent(19,1);
   met_noMuons->SetBinContent(20,2);
   met_noMuons->SetBinContent(23,1);
   met_noMuons->SetBinContent(24,1);
   met_noMuons->SetBinContent(25,1);
   met_noMuons->SetBinContent(31,1);
   met_noMuons->SetBinContent(32,1);
   met_noMuons->SetBinContent(35,1);
   met_noMuons->SetBinError(14,1.414214);
   met_noMuons->SetBinError(15,1);
   met_noMuons->SetBinError(16,2.236068);
   met_noMuons->SetBinError(17,1);
   met_noMuons->SetBinError(19,1);
   met_noMuons->SetBinError(20,1.414214);
   met_noMuons->SetBinError(23,1);
   met_noMuons->SetBinError(24,1);
   met_noMuons->SetBinError(25,1);
   met_noMuons->SetBinError(31,1);
   met_noMuons->SetBinError(32,1);
   met_noMuons->SetBinError(35,1);
   met_noMuons->SetEntries(18);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(1);
   met_noMuons->SetFillStyle(0);
   met_noMuons->SetLineWidth(3);
   met_noMuons->SetMarkerStyle(20);
   met_noMuons->SetMarkerSize(1.3);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   met_noMuons->Draw("SAMEPE1");
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillColor(1);
   met_noMuons->SetFillStyle(0);
   met_noMuons->SetLineStyle(2);
   met_noMuons->SetLineWidth(3);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.035);
   met_noMuons->GetXaxis()->SetTitleSize(0.045);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.035);
   met_noMuons->GetYaxis()->SetTitleSize(0.045);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   met_noMuons->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_noCJV");
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
   TLegendEntry *entry=leg->AddEntry("met_noMuons","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_noMuons","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met_noMuons","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_noMuons","EWK W+jets","f");

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
   entry=leg->AddEntry("met_noMuons","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_noMuons","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_noMuons","Dibosons","f");
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
   lower->Range(-202.5316,-0.653951,1063.291,2.070845);
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
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,0.3280956);
   met_noMuons->SetBinContent(15,0.1593691);
   met_noMuons->SetBinContent(16,0.9034504);
   met_noMuons->SetBinContent(17,0.2163539);
   met_noMuons->SetBinContent(19,0.4782741);
   met_noMuons->SetBinContent(20,1.083198);
   met_noMuons->SetBinContent(23,0.7509215);
   met_noMuons->SetBinContent(24,0.9093611);
   met_noMuons->SetBinContent(25,2.884799);
   met_noMuons->SetBinContent(31,3.77682);
   met_noMuons->SetBinContent(32,16.17588);
   met_noMuons->SetBinContent(35,3.915575);
   met_noMuons->SetBinError(14,0.2374763);
   met_noMuons->SetBinError(15,0.1611614);
   met_noMuons->SetBinError(16,0.4155407);
   met_noMuons->SetBinError(17,0.2208244);
   met_noMuons->SetBinError(19,0.4836402);
   met_noMuons->SetBinError(20,0.7976286);
   met_noMuons->SetBinError(23,0.770501);
   met_noMuons->SetBinError(24,0.9380839);
   met_noMuons->SetBinError(25,2.944347);
   met_noMuons->SetBinError(31,4.250075);
   met_noMuons->SetBinError(32,17.29103);
   met_noMuons->SetBinError(35,4.369957);
   met_noMuons->SetMinimum(0);
   met_noMuons->SetMaximum(2);
   met_noMuons->SetEntries(2.870662);
   met_noMuons->SetStats(0);
   met_noMuons->SetFillStyle(0);
   met_noMuons->SetMarkerStyle(20);
   met_noMuons->SetMarkerSize(0.8);
   met_noMuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_noMuons->GetXaxis()->SetLabelFont(42);
   met_noMuons->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons->GetXaxis()->SetLabelSize(0.1);
   met_noMuons->GetXaxis()->SetTitleSize(0.12);
   met_noMuons->GetXaxis()->SetTickLength(0.02);
   met_noMuons->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons->GetXaxis()->SetTitleFont(42);
   met_noMuons->GetYaxis()->SetTitle("Data/MC");
   met_noMuons->GetYaxis()->SetNdivisions(505);
   met_noMuons->GetYaxis()->SetLabelFont(42);
   met_noMuons->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons->GetYaxis()->SetLabelSize(0.1);
   met_noMuons->GetYaxis()->SetTitleSize(0.12);
   met_noMuons->GetYaxis()->SetTickLength(0.02);
   met_noMuons->GetYaxis()->SetTitleOffset(0.55);
   met_noMuons->GetYaxis()->SetTitleFont(42);
   met_noMuons->GetZaxis()->SetLabelFont(42);
   met_noMuons->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons->GetZaxis()->SetLabelSize(0.035);
   met_noMuons->GetZaxis()->SetTitleSize(0.045);
   met_noMuons->GetZaxis()->SetTickLength(0.02);
   met_noMuons->GetZaxis()->SetTitleFont(42);
   met_noMuons->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
