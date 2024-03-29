{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:54 2013) by ROOT version5.32/00
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
   upper->Range(-3.613924,-0.1102385,3.348101,5.401689);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
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
   stack->SetMaximum(4.881993);
   
   TH1F *taueta_1_stack_6 = new TH1F("taueta_1_stack_6","stack",20,-5,5);
   taueta_1_stack_6->SetBinContent(0,33.97595);
   taueta_1_stack_6->SetBinContent(6,0.05824418);
   taueta_1_stack_6->SetBinContent(7,2.019954);
   taueta_1_stack_6->SetBinContent(11,0.06014713);
   taueta_1_stack_6->SetBinError(0,7.369125);
   taueta_1_stack_6->SetBinError(6,0.05824418);
   taueta_1_stack_6->SetBinError(7,2.019954);
   taueta_1_stack_6->SetBinError(11,0.06014713);
   taueta_1_stack_6->SetMinimum(0);
   taueta_1_stack_6->SetMaximum(5.126092);
   taueta_1_stack_6->SetEntries(113);
   taueta_1_stack_6->SetStats(0);
   taueta_1_stack_6->SetFillColor(4);
   taueta_1_stack_6->SetLineColor(4);
   taueta_1_stack_6->SetLineWidth(2);
   taueta_1_stack_6->SetMarkerColor(4);
   taueta_1_stack_6->SetMarkerStyle(21);
   taueta_1_stack_6->SetMarkerSize(0.8);
   taueta_1_stack_6->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1_stack_6->GetXaxis()->SetRange(6,16);
   taueta_1_stack_6->GetXaxis()->SetLabelFont(42);
   taueta_1_stack_6->GetXaxis()->SetLabelOffset(0.007);
   taueta_1_stack_6->GetXaxis()->SetLabelSize(0);
   taueta_1_stack_6->GetXaxis()->SetTitleSize(0);
   taueta_1_stack_6->GetXaxis()->SetTickLength(0.02);
   taueta_1_stack_6->GetXaxis()->SetTitleOffset(0.9);
   taueta_1_stack_6->GetXaxis()->SetTitleFont(42);
   taueta_1_stack_6->GetYaxis()->SetTitle("Events");
   taueta_1_stack_6->GetYaxis()->SetLabelFont(42);
   taueta_1_stack_6->GetYaxis()->SetLabelOffset(0.007);
   taueta_1_stack_6->GetYaxis()->SetLabelSize(0.035);
   taueta_1_stack_6->GetYaxis()->SetTitleSize(0.045);
   taueta_1_stack_6->GetYaxis()->SetTickLength(0.02);
   taueta_1_stack_6->GetYaxis()->SetTitleOffset(1.55);
   taueta_1_stack_6->GetYaxis()->SetTitleFont(42);
   taueta_1_stack_6->GetZaxis()->SetLabelFont(42);
   taueta_1_stack_6->GetZaxis()->SetLabelOffset(0.007);
   taueta_1_stack_6->GetZaxis()->SetLabelSize(0.035);
   taueta_1_stack_6->GetZaxis()->SetTitleSize(0.045);
   taueta_1_stack_6->GetZaxis()->SetTickLength(0.02);
   taueta_1_stack_6->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taueta_1_stack_6);
   
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,33.97595);
   taueta_1->SetBinContent(6,0.05824418);
   taueta_1->SetBinContent(7,2.019954);
   taueta_1->SetBinContent(11,0.06014713);
   taueta_1->SetBinError(0,7.369125);
   taueta_1->SetBinError(6,0.05824418);
   taueta_1->SetBinError(7,2.019954);
   taueta_1->SetBinError(11,0.06014713);
   taueta_1->SetMaximum(6.6);
   taueta_1->SetEntries(113);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(4);
   taueta_1->SetLineColor(4);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(4);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1->GetXaxis()->SetRange(6,16);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0);
   taueta_1->GetXaxis()->SetTitleSize(0);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetTitle("Events");
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"HIST");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,144.4903);
   taueta_1->SetBinContent(8,0.7491011);
   taueta_1->SetBinContent(10,1.366874);
   taueta_1->SetBinContent(11,0.5885086);
   taueta_1->SetBinContent(12,0.06975458);
   taueta_1->SetBinContent(13,0.9885096);
   taueta_1->SetBinContent(14,0.6924754);
   taueta_1->SetBinError(0,9.586238);
   taueta_1->SetBinError(8,0.7491011);
   taueta_1->SetBinError(10,0.9668085);
   taueta_1->SetBinError(11,0.5885086);
   taueta_1->SetBinError(12,0.06975458);
   taueta_1->SetBinError(13,0.9885096);
   taueta_1->SetBinError(14,0.4899244);
   taueta_1->SetEntries(316);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(5);
   taueta_1->SetLineColor(5);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(5);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,600.6732);
   taueta_1->SetBinContent(6,0.8948611);
   taueta_1->SetBinContent(7,0.3741321);
   taueta_1->SetBinContent(8,0.3074979);
   taueta_1->SetBinContent(9,1.161039);
   taueta_1->SetBinContent(10,1.142773);
   taueta_1->SetBinContent(11,0.3391078);
   taueta_1->SetBinContent(12,0.5272756);
   taueta_1->SetBinContent(13,0.5595715);
   taueta_1->SetBinContent(14,0.4117143);
   taueta_1->SetBinContent(15,0.8880337);
   taueta_1->SetBinError(0,20.0262);
   taueta_1->SetBinError(6,0.6529507);
   taueta_1->SetBinError(7,0.3741321);
   taueta_1->SetBinError(8,0.3074979);
   taueta_1->SetBinError(9,1.079885);
   taueta_1->SetBinError(10,1.142773);
   taueta_1->SetBinError(11,0.3391078);
   taueta_1->SetBinError(12,0.5272756);
   taueta_1->SetBinError(13,0.4032609);
   taueta_1->SetBinError(14,0.3881055);
   taueta_1->SetBinError(15,0.524463);
   taueta_1->SetEntries(1364);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(6);
   taueta_1->SetLineColor(6);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(6);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,182.763);
   taueta_1->SetBinContent(6,0.1715631);
   taueta_1->SetBinContent(7,0.08894375);
   taueta_1->SetBinContent(8,0.1679361);
   taueta_1->SetBinContent(9,0.1645923);
   taueta_1->SetBinContent(10,0.1506675);
   taueta_1->SetBinContent(11,0.122404);
   taueta_1->SetBinContent(12,0.1380397);
   taueta_1->SetBinContent(13,0.1691714);
   taueta_1->SetBinContent(14,0.1825992);
   taueta_1->SetBinContent(15,0.1676931);
   taueta_1->SetBinError(0,1.886353);
   taueta_1->SetBinError(6,0.0529706);
   taueta_1->SetBinError(7,0.03998827);
   taueta_1->SetBinError(8,0.06068202);
   taueta_1->SetBinError(9,0.05259598);
   taueta_1->SetBinError(10,0.05669577);
   taueta_1->SetBinError(11,0.04345092);
   taueta_1->SetBinError(12,0.0519178);
   taueta_1->SetBinError(13,0.05518391);
   taueta_1->SetBinError(14,0.05764405);
   taueta_1->SetBinError(15,0.05460009);
   taueta_1->SetEntries(11206);
   taueta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   taueta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   taueta_1->SetLineColor(ci);
   taueta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   taueta_1->SetMarkerColor(ci);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,0.1562384);
   taueta_1->SetBinError(0,0.1562384);
   taueta_1->SetEntries(1);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,7.686452);
   taueta_1->SetBinContent(6,0.1062881);
   taueta_1->SetBinContent(7,0.0001112825);
   taueta_1->SetBinContent(8,0.2389804);
   taueta_1->SetBinContent(9,0.2026035);
   taueta_1->SetBinContent(10,0.2494414);
   taueta_1->SetBinContent(11,0.04720286);
   taueta_1->SetBinContent(12,0.07827361);
   taueta_1->SetBinContent(13,0.06427041);
   taueta_1->SetBinContent(14,0.001534395);
   taueta_1->SetBinError(0,0.9023147);
   taueta_1->SetBinError(6,0.1062881);
   taueta_1->SetBinError(7,0.0001112825);
   taueta_1->SetBinError(8,0.200088);
   taueta_1->SetBinError(9,0.2026035);
   taueta_1->SetBinError(10,0.1440346);
   taueta_1->SetBinError(11,0.04720286);
   taueta_1->SetBinError(12,0.07827361);
   taueta_1->SetBinError(13,0.0510644);
   taueta_1->SetBinError(14,0.001534395);
   taueta_1->SetEntries(113);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,1.906136);
   taueta_1->SetBinContent(6,0.005871238);
   taueta_1->SetBinContent(7,0.01226116);
   taueta_1->SetBinContent(8,0.0192934);
   taueta_1->SetBinContent(9,0.03149582);
   taueta_1->SetBinContent(10,0.04902777);
   taueta_1->SetBinContent(11,0.07083599);
   taueta_1->SetBinContent(12,0.01756058);
   taueta_1->SetBinContent(13,0.006224718);
   taueta_1->SetBinContent(14,0.01166504);
   taueta_1->SetBinError(0,0.1098088);
   taueta_1->SetBinError(6,0.005871238);
   taueta_1->SetBinError(7,0.00867936);
   taueta_1->SetBinError(8,0.01116002);
   taueta_1->SetBinError(9,0.01418288);
   taueta_1->SetBinError(10,0.01692937);
   taueta_1->SetBinError(11,0.02116045);
   taueta_1->SetBinError(12,0.009191745);
   taueta_1->SetBinError(13,0.006224718);
   taueta_1->SetBinError(14,0.008250597);
   taueta_1->SetEntries(398);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   stack->Draw("hist");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,697);
   taueta_1->SetBinContent(6,2);
   taueta_1->SetBinContent(7,4);
   taueta_1->SetBinContent(8,1);
   taueta_1->SetBinContent(9,3);
   taueta_1->SetBinContent(11,1);
   taueta_1->SetBinContent(12,3);
   taueta_1->SetBinContent(13,4);
   taueta_1->SetBinContent(14,1);
   taueta_1->SetBinContent(15,3);
   taueta_1->SetBinError(0,26.40076);
   taueta_1->SetBinError(6,1.414214);
   taueta_1->SetBinError(7,2);
   taueta_1->SetBinError(8,1);
   taueta_1->SetBinError(9,1.732051);
   taueta_1->SetBinError(11,1);
   taueta_1->SetBinError(12,1.732051);
   taueta_1->SetBinError(13,2);
   taueta_1->SetBinError(14,1);
   taueta_1->SetBinError(15,1.732051);
   taueta_1->SetEntries(719);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(1);
   taueta_1->SetFillStyle(0);
   taueta_1->SetLineWidth(3);
   taueta_1->SetMarkerStyle(20);
   taueta_1->SetMarkerSize(1.3);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   taueta_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"MET");
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
   TLegendEntry *entry=leg->AddEntry("taueta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("taueta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("taueta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","Dibosons","f");
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
   lower->Range(-3.613924,-0.653951,3.348101,2.070845);
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
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,0.7433277);
   taueta_1->SetBinContent(6,1.696952);
   taueta_1->SetBinContent(7,8.413113);
   taueta_1->SetBinContent(8,0.6743957);
   taueta_1->SetBinContent(9,1.923409);
   taueta_1->SetBinContent(11,0.8561211);
   taueta_1->SetBinContent(12,3.610525);
   taueta_1->SetBinContent(13,2.237452);
   taueta_1->SetBinContent(14,0.7692378);
   taueta_1->SetBinContent(15,2.841644);
   taueta_1->SetBinError(0,0.03324584);
   taueta_1->SetBinError(6,1.533944);
   taueta_1->SetBinError(7,7.87705);
   taueta_1->SetBinError(8,0.774282);
   taueta_1->SetBinError(9,1.753132);
   taueta_1->SetBinError(11,0.9915783);
   taueta_1->SetBinError(12,3.139235);
   taueta_1->SetBinError(13,1.745213);
   taueta_1->SetBinError(14,0.8542236);
   taueta_1->SetBinError(15,2.169344);
   taueta_1->SetMinimum(0);
   taueta_1->SetMaximum(2);
   taueta_1->SetEntries(6.06512);
   taueta_1->SetStats(0);
   taueta_1->SetFillStyle(0);
   taueta_1->SetMarkerStyle(20);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1->GetXaxis()->SetRange(6,16);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.1);
   taueta_1->GetXaxis()->SetTitleSize(0.12);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetTitle("Data/MC");
   taueta_1->GetYaxis()->SetNdivisions(505);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.1);
   taueta_1->GetYaxis()->SetTitleSize(0.12);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(0.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   taueta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
