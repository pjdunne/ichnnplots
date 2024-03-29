{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:46 2013) by ROOT version5.32/00
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
   upper->Range(-3.613924,-2.797553,3.348101,5.383911);
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
   stack->SetMaximum(40645.5);
   
   TH1F *taueta_1_stack_2 = new TH1F("taueta_1_stack_2","stack",20,-5,5);
   taueta_1_stack_2->SetBinContent(0,854.546);
   taueta_1_stack_2->SetBinContent(6,0.2742777);
   taueta_1_stack_2->SetBinContent(7,0.4081429);
   taueta_1_stack_2->SetBinContent(8,1.863655);
   taueta_1_stack_2->SetBinContent(9,0.4343804);
   taueta_1_stack_2->SetBinContent(10,0.1364231);
   taueta_1_stack_2->SetBinContent(11,0.2316333);
   taueta_1_stack_2->SetBinContent(12,0.4032148);
   taueta_1_stack_2->SetBinContent(13,0.3589579);
   taueta_1_stack_2->SetBinContent(14,0.2810974);
   taueta_1_stack_2->SetBinContent(15,0.2901139);
   taueta_1_stack_2->SetBinError(0,28.32642);
   taueta_1_stack_2->SetBinError(6,0.1125446);
   taueta_1_stack_2->SetBinError(7,0.2016657);
   taueta_1_stack_2->SetBinError(8,0.8954515);
   taueta_1_stack_2->SetBinError(9,0.1383757);
   taueta_1_stack_2->SetBinError(10,0.05049789);
   taueta_1_stack_2->SetBinError(11,0.09486143);
   taueta_1_stack_2->SetBinError(12,0.1400531);
   taueta_1_stack_2->SetBinError(13,0.1274964);
   taueta_1_stack_2->SetBinError(14,0.10653);
   taueta_1_stack_2->SetBinError(15,0.1370437);
   taueta_1_stack_2->SetMinimum(0.002323147);
   taueta_1_stack_2->SetMaximum(94370.82);
   taueta_1_stack_2->SetEntries(11415);
   taueta_1_stack_2->SetStats(0);
   taueta_1_stack_2->SetFillColor(4);
   taueta_1_stack_2->SetLineColor(4);
   taueta_1_stack_2->SetLineWidth(2);
   taueta_1_stack_2->SetMarkerColor(4);
   taueta_1_stack_2->SetMarkerStyle(21);
   taueta_1_stack_2->SetMarkerSize(0.8);
   taueta_1_stack_2->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1_stack_2->GetXaxis()->SetRange(6,16);
   taueta_1_stack_2->GetXaxis()->SetLabelFont(42);
   taueta_1_stack_2->GetXaxis()->SetLabelOffset(0.007);
   taueta_1_stack_2->GetXaxis()->SetLabelSize(0);
   taueta_1_stack_2->GetXaxis()->SetTitleSize(0);
   taueta_1_stack_2->GetXaxis()->SetTickLength(0.02);
   taueta_1_stack_2->GetXaxis()->SetTitleOffset(0.9);
   taueta_1_stack_2->GetXaxis()->SetTitleFont(42);
   taueta_1_stack_2->GetYaxis()->SetTitle("Events");
   taueta_1_stack_2->GetYaxis()->SetLabelFont(42);
   taueta_1_stack_2->GetYaxis()->SetLabelOffset(0.007);
   taueta_1_stack_2->GetYaxis()->SetLabelSize(0.035);
   taueta_1_stack_2->GetYaxis()->SetTitleSize(0.045);
   taueta_1_stack_2->GetYaxis()->SetTickLength(0.02);
   taueta_1_stack_2->GetYaxis()->SetTitleOffset(1.55);
   taueta_1_stack_2->GetYaxis()->SetTitleFont(42);
   taueta_1_stack_2->GetZaxis()->SetLabelFont(42);
   taueta_1_stack_2->GetZaxis()->SetLabelOffset(0.007);
   taueta_1_stack_2->GetZaxis()->SetLabelSize(0.035);
   taueta_1_stack_2->GetZaxis()->SetTitleSize(0.045);
   taueta_1_stack_2->GetZaxis()->SetTickLength(0.02);
   taueta_1_stack_2->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taueta_1_stack_2);
   
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,854.546);
   taueta_1->SetBinContent(6,0.2742777);
   taueta_1->SetBinContent(7,0.4081429);
   taueta_1->SetBinContent(8,1.863655);
   taueta_1->SetBinContent(9,0.4343804);
   taueta_1->SetBinContent(10,0.1364231);
   taueta_1->SetBinContent(11,0.2316333);
   taueta_1->SetBinContent(12,0.4032148);
   taueta_1->SetBinContent(13,0.3589579);
   taueta_1->SetBinContent(14,0.2810974);
   taueta_1->SetBinContent(15,0.2901139);
   taueta_1->SetBinError(0,28.32642);
   taueta_1->SetBinError(6,0.1125446);
   taueta_1->SetBinError(7,0.2016657);
   taueta_1->SetBinError(8,0.8954515);
   taueta_1->SetBinError(9,0.1383757);
   taueta_1->SetBinError(10,0.05049789);
   taueta_1->SetBinError(11,0.09486143);
   taueta_1->SetBinError(12,0.1400531);
   taueta_1->SetBinError(13,0.1274964);
   taueta_1->SetBinError(14,0.10653);
   taueta_1->SetBinError(15,0.1370437);
   taueta_1->SetMinimum(0.01);
   taueta_1->SetMaximum(51000);
   taueta_1->SetEntries(11415);
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
   taueta_1->SetBinContent(0,4946.36);
   taueta_1->SetBinContent(6,3.38887);
   taueta_1->SetBinContent(7,6.995815);
   taueta_1->SetBinContent(8,6.937134);
   taueta_1->SetBinContent(9,11.40159);
   taueta_1->SetBinContent(10,11.51976);
   taueta_1->SetBinContent(11,10.42944);
   taueta_1->SetBinContent(12,11.15681);
   taueta_1->SetBinContent(13,10.68591);
   taueta_1->SetBinContent(14,9.163615);
   taueta_1->SetBinContent(15,2.697371);
   taueta_1->SetBinError(0,42.81441);
   taueta_1->SetBinError(6,1.199085);
   taueta_1->SetBinError(7,1.625627);
   taueta_1->SetBinError(8,1.368748);
   taueta_1->SetBinError(9,1.915772);
   taueta_1->SetBinError(10,2.243128);
   taueta_1->SetBinError(11,1.791903);
   taueta_1->SetBinError(12,2.028703);
   taueta_1->SetBinError(13,2.341438);
   taueta_1->SetBinError(14,1.92975);
   taueta_1->SetBinError(15,1.215945);
   taueta_1->SetEntries(27402);
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
   taueta_1->SetBinContent(0,20462.8);
   taueta_1->SetBinContent(6,9.193149);
   taueta_1->SetBinContent(7,12.17838);
   taueta_1->SetBinContent(8,8.769037);
   taueta_1->SetBinContent(9,9.074167);
   taueta_1->SetBinContent(10,7.484634);
   taueta_1->SetBinContent(11,7.23753);
   taueta_1->SetBinContent(12,6.764306);
   taueta_1->SetBinContent(13,6.299116);
   taueta_1->SetBinContent(14,9.808128);
   taueta_1->SetBinContent(15,6.882475);
   taueta_1->SetBinError(0,108.1206);
   taueta_1->SetBinError(6,2.413839);
   taueta_1->SetBinError(7,2.522283);
   taueta_1->SetBinError(8,2.03486);
   taueta_1->SetBinError(9,1.599829);
   taueta_1->SetBinError(10,1.665736);
   taueta_1->SetBinError(11,1.254479);
   taueta_1->SetBinError(12,1.656553);
   taueta_1->SetBinError(13,1.29344);
   taueta_1->SetBinError(14,1.819705);
   taueta_1->SetBinError(15,1.751828);
   taueta_1->SetEntries(108838);
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
   taueta_1->SetBinContent(0,2113.235);
   taueta_1->SetBinContent(6,1.04789);
   taueta_1->SetBinContent(7,1.160796);
   taueta_1->SetBinContent(8,0.5887355);
   taueta_1->SetBinContent(9,0.339284);
   taueta_1->SetBinContent(10,0.2395897);
   taueta_1->SetBinContent(11,0.29901);
   taueta_1->SetBinContent(12,0.2226233);
   taueta_1->SetBinContent(13,0.6382732);
   taueta_1->SetBinContent(14,1.123923);
   taueta_1->SetBinContent(15,0.8369222);
   taueta_1->SetBinError(0,5.857083);
   taueta_1->SetBinError(6,0.1278776);
   taueta_1->SetBinError(7,0.1322895);
   taueta_1->SetBinError(8,0.08999897);
   taueta_1->SetBinError(9,0.06751413);
   taueta_1->SetBinError(10,0.05920938);
   taueta_1->SetBinError(11,0.06409701);
   taueta_1->SetBinError(12,0.05004056);
   taueta_1->SetBinError(13,0.09344795);
   taueta_1->SetBinError(14,0.1362311);
   taueta_1->SetBinError(15,0.106967);
   taueta_1->SetEntries(195784);
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
   taueta_1->SetBinContent(0,0.08705282);
   taueta_1->SetBinError(0,0.06251903);
   taueta_1->SetEntries(3);
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
   taueta_1->SetBinContent(0,1626.208);
   taueta_1->SetBinContent(6,2.675572);
   taueta_1->SetBinContent(7,3.295974);
   taueta_1->SetBinContent(8,3.432478);
   taueta_1->SetBinContent(9,5.276928);
   taueta_1->SetBinContent(10,3.652863);
   taueta_1->SetBinContent(11,4.375389);
   taueta_1->SetBinContent(12,5.243885);
   taueta_1->SetBinContent(13,3.758166);
   taueta_1->SetBinContent(14,4.489508);
   taueta_1->SetBinContent(15,1.902537);
   taueta_1->SetBinError(0,11.72468);
   taueta_1->SetBinError(6,0.8492256);
   taueta_1->SetBinError(7,0.5008797);
   taueta_1->SetBinError(8,0.45261);
   taueta_1->SetBinError(9,0.6428704);
   taueta_1->SetBinError(10,0.5026615);
   taueta_1->SetBinError(11,0.5614461);
   taueta_1->SetBinError(12,0.6038328);
   taueta_1->SetBinError(13,0.5669874);
   taueta_1->SetBinError(14,0.6428611);
   taueta_1->SetBinError(15,0.331987);
   taueta_1->SetEntries(51948);
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
   taueta_1->SetBinContent(0,157.8678);
   taueta_1->SetBinContent(6,0.1272661);
   taueta_1->SetBinContent(7,0.3169589);
   taueta_1->SetBinContent(8,0.3234501);
   taueta_1->SetBinContent(9,0.570644);
   taueta_1->SetBinContent(10,0.5496247);
   taueta_1->SetBinContent(11,0.5781356);
   taueta_1->SetBinContent(12,0.6153604);
   taueta_1->SetBinContent(13,0.3532717);
   taueta_1->SetBinContent(14,0.281901);
   taueta_1->SetBinContent(15,0.1392455);
   taueta_1->SetBinError(0,1.083008);
   taueta_1->SetBinError(6,0.02496337);
   taueta_1->SetBinError(7,0.04471772);
   taueta_1->SetBinError(8,0.04105051);
   taueta_1->SetBinError(9,0.05434836);
   taueta_1->SetBinError(10,0.05156445);
   taueta_1->SetBinError(11,0.05376562);
   taueta_1->SetBinError(12,0.05592556);
   taueta_1->SetBinError(13,0.04398795);
   taueta_1->SetBinError(14,0.03868482);
   taueta_1->SetBinError(15,0.03106998);
   taueta_1->SetEntries(37654);
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
   taueta_1->SetBinContent(0,24125);
   taueta_1->SetBinContent(6,16);
   taueta_1->SetBinContent(7,21);
   taueta_1->SetBinContent(8,19);
   taueta_1->SetBinContent(9,31);
   taueta_1->SetBinContent(10,20);
   taueta_1->SetBinContent(11,23);
   taueta_1->SetBinContent(12,20);
   taueta_1->SetBinContent(13,17);
   taueta_1->SetBinContent(14,34);
   taueta_1->SetBinContent(15,15);
   taueta_1->SetBinError(0,155.3222);
   taueta_1->SetBinError(6,4);
   taueta_1->SetBinError(7,4.582576);
   taueta_1->SetBinError(8,4.358899);
   taueta_1->SetBinError(9,5.567764);
   taueta_1->SetBinError(10,4.472136);
   taueta_1->SetBinError(11,4.795832);
   taueta_1->SetBinError(12,4.472136);
   taueta_1->SetBinError(13,4.123106);
   taueta_1->SetBinError(14,5.830952);
   taueta_1->SetBinError(15,3.872983);
   taueta_1->SetEntries(24341);
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
   TLatex *   tex = new TLatex(0.95,0.965,"WSelection");
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
   taueta_1->SetBinContent(0,0.8231946);
   taueta_1->SetBinContent(6,0.9736657);
   taueta_1->SetBinContent(7,0.8769027);
   taueta_1->SetBinContent(8,0.9475915);
   taueta_1->SetBinContent(9,1.162676);
   taueta_1->SetBinContent(10,0.853007);
   taueta_1->SetBinContent(11,1.003512);
   taueta_1->SetBinContent(12,0.8332297);
   taueta_1->SetBinContent(13,0.7821581);
   taueta_1->SetBinContent(14,1.36727);
   taueta_1->SetBinContent(15,1.203993);
   taueta_1->SetBinError(0,0.006236607);
   taueta_1->SetBinError(6,0.2955446);
   taueta_1->SetBinError(7,0.2214791);
   taueta_1->SetBinError(8,0.247328);
   taueta_1->SetBinError(9,0.2371776);
   taueta_1->SetBinError(10,0.2169237);
   taueta_1->SetBinError(11,0.2314613);
   taueta_1->SetBinError(12,0.2083891);
   taueta_1->SetBinError(13,0.2137359);
   taueta_1->SetBinError(14,0.2784991);
   taueta_1->SetBinError(15,0.3745059);
   taueta_1->SetMinimum(0);
   taueta_1->SetMaximum(2);
   taueta_1->SetEntries(151.3202);
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
