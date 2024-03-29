{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:19 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.812571,5.632911,5.608593);
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
   stack->SetMaximum(65178.42);
   
   TH1F *jeta_1_stack_12 = new TH1F("jeta_1_stack_12","stack",20,-5,5);
   jeta_1_stack_12->SetMinimum(0.002269091);
   jeta_1_stack_12->SetMaximum(154004.9);
   jeta_1_stack_12->SetStats(0);
   jeta_1_stack_12->SetFillColor(4);
   jeta_1_stack_12->SetLineColor(4);
   jeta_1_stack_12->SetLineWidth(2);
   jeta_1_stack_12->SetMarkerColor(4);
   jeta_1_stack_12->SetMarkerStyle(21);
   jeta_1_stack_12->SetMarkerSize(0.8);
   jeta_1_stack_12->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1_stack_12->GetXaxis()->SetLabelFont(42);
   jeta_1_stack_12->GetXaxis()->SetLabelOffset(0.007);
   jeta_1_stack_12->GetXaxis()->SetLabelSize(0);
   jeta_1_stack_12->GetXaxis()->SetTitleSize(0);
   jeta_1_stack_12->GetXaxis()->SetTickLength(0.02);
   jeta_1_stack_12->GetXaxis()->SetTitleOffset(0.9);
   jeta_1_stack_12->GetXaxis()->SetTitleFont(42);
   jeta_1_stack_12->GetYaxis()->SetTitle("Events");
   jeta_1_stack_12->GetYaxis()->SetLabelFont(42);
   jeta_1_stack_12->GetYaxis()->SetLabelOffset(0.007);
   jeta_1_stack_12->GetYaxis()->SetLabelSize(0.035);
   jeta_1_stack_12->GetYaxis()->SetTitleSize(0.045);
   jeta_1_stack_12->GetYaxis()->SetTickLength(0.02);
   jeta_1_stack_12->GetYaxis()->SetTitleOffset(1.55);
   jeta_1_stack_12->GetYaxis()->SetTitleFont(42);
   jeta_1_stack_12->GetZaxis()->SetLabelFont(42);
   jeta_1_stack_12->GetZaxis()->SetLabelOffset(0.007);
   jeta_1_stack_12->GetZaxis()->SetLabelSize(0.035);
   jeta_1_stack_12->GetZaxis()->SetTitleSize(0.045);
   jeta_1_stack_12->GetZaxis()->SetTickLength(0.02);
   jeta_1_stack_12->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_1_stack_12);
   
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetMinimum(0.01);
   jeta_1->SetMaximum(105000);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(4);
   jeta_1->SetLineColor(4);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(4);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0);
   jeta_1->GetXaxis()->SetTitleSize(0);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Events");
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"HIST");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,1.490752);
   jeta_1->SetBinContent(6,0.7724873);
   jeta_1->SetBinContent(13,0.7574646);
   jeta_1->SetBinError(5,1.055854);
   jeta_1->SetBinError(6,0.7724873);
   jeta_1->SetBinError(13,0.7574647);
   jeta_1->SetEntries(4);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(5);
   jeta_1->SetLineColor(5);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(5);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,1.103263);
   jeta_1->SetBinContent(6,2.533779);
   jeta_1->SetBinContent(7,1.574624);
   jeta_1->SetBinContent(8,1.246162);
   jeta_1->SetBinContent(9,0.874603);
   jeta_1->SetBinContent(13,1.893704);
   jeta_1->SetBinContent(14,0.9595494);
   jeta_1->SetBinContent(15,2.659091);
   jeta_1->SetBinContent(16,1.640922);
   jeta_1->SetBinContent(18,0.3767549);
   jeta_1->SetBinError(5,0.6253461);
   jeta_1->SetBinError(6,1.269768);
   jeta_1->SetBinError(7,0.7972476);
   jeta_1->SetBinError(8,0.9171344);
   jeta_1->SetBinError(9,0.874603);
   jeta_1->SetBinError(13,1.113841);
   jeta_1->SetBinError(14,0.5904213);
   jeta_1->SetBinError(15,1.003673);
   jeta_1->SetBinError(16,0.816759);
   jeta_1->SetBinError(18,0.3767549);
   jeta_1->SetEntries(37);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(6);
   jeta_1->SetLineColor(6);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(6);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(4,0.03798997);
   jeta_1->SetBinContent(5,0.3386139);
   jeta_1->SetBinContent(6,0.6913095);
   jeta_1->SetBinContent(7,0.7384535);
   jeta_1->SetBinContent(8,0.4356011);
   jeta_1->SetBinContent(9,0.2129486);
   jeta_1->SetBinContent(12,0.09781799);
   jeta_1->SetBinContent(13,0.3499284);
   jeta_1->SetBinContent(14,0.527406);
   jeta_1->SetBinContent(15,0.9181844);
   jeta_1->SetBinContent(16,0.3254538);
   jeta_1->SetBinContent(17,0.04899399);
   jeta_1->SetBinError(4,0.02694084);
   jeta_1->SetBinError(5,0.08056936);
   jeta_1->SetBinError(6,0.1207089);
   jeta_1->SetBinError(7,0.1245884);
   jeta_1->SetBinError(8,0.09186081);
   jeta_1->SetBinError(9,0.06580515);
   jeta_1->SetBinError(12,0.04790259);
   jeta_1->SetBinError(13,0.08085628);
   jeta_1->SetBinError(14,0.1044473);
   jeta_1->SetBinError(15,0.1332537);
   jeta_1->SetBinError(16,0.08518167);
   jeta_1->SetBinError(17,0.02899466);
   jeta_1->SetEntries(280);
   jeta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jeta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jeta_1->SetLineColor(ci);
   jeta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jeta_1->SetMarkerColor(ci);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(6,0.2942627);
   jeta_1->SetBinContent(7,0.09741174);
   jeta_1->SetBinContent(15,0.1718414);
   jeta_1->SetBinContent(17,0.1697759);
   jeta_1->SetBinError(6,0.2109831);
   jeta_1->SetBinError(7,0.09741173);
   jeta_1->SetBinError(15,0.12524);
   jeta_1->SetBinError(17,0.169776);
   jeta_1->SetEntries(6);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.09466803);
   jeta_1->SetBinContent(6,0.03338007);
   jeta_1->SetBinContent(7,0.1911628);
   jeta_1->SetBinContent(8,0.08684289);
   jeta_1->SetBinContent(9,0.08432826);
   jeta_1->SetBinContent(12,0.08375853);
   jeta_1->SetBinContent(15,0.3795535);
   jeta_1->SetBinContent(16,0.1120297);
   jeta_1->SetBinError(5,0.09466803);
   jeta_1->SetBinError(6,0.03338007);
   jeta_1->SetBinError(7,0.1362492);
   jeta_1->SetBinError(8,0.08684289);
   jeta_1->SetBinError(9,0.08432826);
   jeta_1->SetBinError(12,0.06726859);
   jeta_1->SetBinError(15,0.2558924);
   jeta_1->SetBinError(16,0.1120297);
   jeta_1->SetEntries(12);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.01363121);
   jeta_1->SetBinContent(6,0.0200092);
   jeta_1->SetBinContent(7,0.02001371);
   jeta_1->SetBinContent(8,0.006663088);
   jeta_1->SetBinContent(9,0.006475113);
   jeta_1->SetBinContent(12,0.01339059);
   jeta_1->SetBinContent(13,0.02113924);
   jeta_1->SetBinContent(14,0.006230633);
   jeta_1->SetBinContent(15,0.02393504);
   jeta_1->SetBinContent(16,0.01022531);
   jeta_1->SetBinContent(17,0.005692167);
   jeta_1->SetBinError(5,0.01363121);
   jeta_1->SetBinError(6,0.011537);
   jeta_1->SetBinError(7,0.01121705);
   jeta_1->SetBinError(8,0.006211066);
   jeta_1->SetBinError(9,0.006475113);
   jeta_1->SetBinError(12,0.009468923);
   jeta_1->SetBinError(13,0.0123273);
   jeta_1->SetBinError(14,0.006230633);
   jeta_1->SetBinError(15,0.01144493);
   jeta_1->SetBinError(16,0.01022531);
   jeta_1->SetBinError(17,0.005692167);
   jeta_1->SetEntries(25);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   stack->Draw("hist");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(4,3);
   jeta_1->SetBinContent(5,3);
   jeta_1->SetBinContent(6,5);
   jeta_1->SetBinContent(7,4);
   jeta_1->SetBinContent(8,5);
   jeta_1->SetBinContent(9,1);
   jeta_1->SetBinContent(12,1);
   jeta_1->SetBinContent(13,1);
   jeta_1->SetBinContent(14,7);
   jeta_1->SetBinContent(15,6);
   jeta_1->SetBinContent(16,6);
   jeta_1->SetBinContent(17,4);
   jeta_1->SetBinContent(18,1);
   jeta_1->SetBinError(4,1.732051);
   jeta_1->SetBinError(5,1.732051);
   jeta_1->SetBinError(6,2.236068);
   jeta_1->SetBinError(7,2);
   jeta_1->SetBinError(8,2.236068);
   jeta_1->SetBinError(9,1);
   jeta_1->SetBinError(12,1);
   jeta_1->SetBinError(13,1);
   jeta_1->SetBinError(14,2.645751);
   jeta_1->SetBinError(15,2.44949);
   jeta_1->SetBinError(16,2.44949);
   jeta_1->SetBinError(17,2);
   jeta_1->SetBinError(18,1);
   jeta_1->SetEntries(47);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(1.3);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEPE1");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineStyle(2);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("jeta_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jeta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jeta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Dibosons","f");
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
   lower->Range(-7.025316,-0.653951,5.632911,2.070845);
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
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(4,78.96821);
   jeta_1->SetBinContent(5,0.9865411);
   jeta_1->SetBinContent(6,1.150688);
   jeta_1->SetBinContent(7,1.525748);
   jeta_1->SetBinContent(8,2.816475);
   jeta_1->SetBinContent(9,0.8486407);
   jeta_1->SetBinContent(12,5.12907);
   jeta_1->SetBinContent(13,0.3308809);
   jeta_1->SetBinContent(14,4.687963);
   jeta_1->SetBinContent(15,1.444876);
   jeta_1->SetBinContent(16,2.872695);
   jeta_1->SetBinContent(17,17.82038);
   jeta_1->SetBinContent(18,2.654246);
   jeta_1->SetBinError(4,72.21324);
   jeta_1->SetBinError(5,0.6961035);
   jeta_1->SetBinError(6,0.6511243);
   jeta_1->SetBinError(7,0.9011407);
   jeta_1->SetBinError(8,1.934933);
   jeta_1->SetBinError(9,1.059669);
   jeta_1->SetBinError(12,5.575768);
   jeta_1->SetBinError(13,0.3623676);
   jeta_1->SetBinError(14,2.585261);
   jeta_1->SetBinError(15,0.6941849);
   jeta_1->SetBinError(16,1.635548);
   jeta_1->SetBinError(17,16.32702);
   jeta_1->SetBinError(18,3.75367);
   jeta_1->SetMinimum(0);
   jeta_1->SetMaximum(2);
   jeta_1->SetEntries(2.651651);
   jeta_1->SetStats(0);
   jeta_1->SetFillStyle(0);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.1);
   jeta_1->GetXaxis()->SetTitleSize(0.12);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Data/MC");
   jeta_1->GetYaxis()->SetNdivisions(505);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.1);
   jeta_1->GetYaxis()->SetTitleSize(0.12);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(0.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
