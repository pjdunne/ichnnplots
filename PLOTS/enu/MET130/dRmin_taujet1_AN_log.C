{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:19 2013) by ROOT version5.32/00
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
   upper->Range(-1.336709,-2.639407,7.017722,3.232103);
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
   stack->SetMaximum(449.6168);
   
   TH1F *dRmin_taujet1_stack_4 = new TH1F("dRmin_taujet1_stack_4","stack",50,0,10);
   dRmin_taujet1_stack_4->SetBinContent(10,0.06014713);
   dRmin_taujet1_stack_4->SetBinContent(11,2.019954);
   dRmin_taujet1_stack_4->SetBinContent(12,0.1444726);
   dRmin_taujet1_stack_4->SetBinContent(15,0.05581639);
   dRmin_taujet1_stack_4->SetBinContent(51,43.32404);
   dRmin_taujet1_stack_4->SetBinError(10,0.06014713);
   dRmin_taujet1_stack_4->SetBinError(11,2.019954);
   dRmin_taujet1_stack_4->SetBinError(12,0.1444726);
   dRmin_taujet1_stack_4->SetBinError(15,0.05581639);
   dRmin_taujet1_stack_4->SetBinError(51,8.342846);
   dRmin_taujet1_stack_4->SetMinimum(0.003006234);
   dRmin_taujet1_stack_4->SetMaximum(868.016);
   dRmin_taujet1_stack_4->SetEntries(133);
   dRmin_taujet1_stack_4->SetStats(0);
   dRmin_taujet1_stack_4->SetFillColor(4);
   dRmin_taujet1_stack_4->SetLineColor(4);
   dRmin_taujet1_stack_4->SetLineWidth(2);
   dRmin_taujet1_stack_4->SetMarkerColor(4);
   dRmin_taujet1_stack_4->SetMarkerStyle(21);
   dRmin_taujet1_stack_4->SetMarkerSize(0.8);
   dRmin_taujet1_stack_4->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag1)");
   dRmin_taujet1_stack_4->GetXaxis()->SetRange(1,33);
   dRmin_taujet1_stack_4->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1_stack_4->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1_stack_4->GetXaxis()->SetLabelSize(0);
   dRmin_taujet1_stack_4->GetXaxis()->SetTitleSize(0);
   dRmin_taujet1_stack_4->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1_stack_4->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1_stack_4->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1_stack_4->GetYaxis()->SetTitle("Events");
   dRmin_taujet1_stack_4->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1_stack_4->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1_stack_4->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1_stack_4->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1_stack_4->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1_stack_4->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1_stack_4->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1_stack_4->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1_stack_4->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1_stack_4->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1_stack_4->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1_stack_4->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet1_stack_4);
   
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(10,0.06014713);
   dRmin_taujet1->SetBinContent(11,2.019954);
   dRmin_taujet1->SetBinContent(12,0.1444726);
   dRmin_taujet1->SetBinContent(15,0.05581639);
   dRmin_taujet1->SetBinContent(51,43.32404);
   dRmin_taujet1->SetBinError(10,0.06014713);
   dRmin_taujet1->SetBinError(11,2.019954);
   dRmin_taujet1->SetBinError(12,0.1444726);
   dRmin_taujet1->SetBinError(15,0.05581639);
   dRmin_taujet1->SetBinError(51,8.342846);
   dRmin_taujet1->SetMinimum(0.01);
   dRmin_taujet1->SetMaximum(600);
   dRmin_taujet1->SetEntries(133);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(4);
   dRmin_taujet1->SetLineColor(4);
   dRmin_taujet1->SetLineWidth(2);
   dRmin_taujet1->SetMarkerColor(4);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag1)");
   dRmin_taujet1->GetXaxis()->SetRange(1,33);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetTitle("Events");
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"HIST");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(13,0.7491011);
   dRmin_taujet1->SetBinContent(15,0.9885096);
   dRmin_taujet1->SetBinContent(18,0.6669036);
   dRmin_taujet1->SetBinContent(19,0.6999702);
   dRmin_taujet1->SetBinContent(20,0.9733826);
   dRmin_taujet1->SetBinContent(22,0.7870175);
   dRmin_taujet1->SetBinContent(23,0.2190596);
   dRmin_taujet1->SetBinContent(51,277.9291);
   dRmin_taujet1->SetBinError(13,0.7491011);
   dRmin_taujet1->SetBinError(15,0.9885096);
   dRmin_taujet1->SetBinError(18,0.6669035);
   dRmin_taujet1->SetBinError(19,0.6999702);
   dRmin_taujet1->SetBinError(20,0.7421416);
   dRmin_taujet1->SetBinError(22,0.7870176);
   dRmin_taujet1->SetBinError(23,0.2190596);
   dRmin_taujet1->SetBinError(51,13.94787);
   dRmin_taujet1->SetEntries(505);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(5);
   dRmin_taujet1->SetLineColor(5);
   dRmin_taujet1->SetLineWidth(2);
   dRmin_taujet1->SetMarkerColor(5);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(5,0.3873393);
   dRmin_taujet1->SetBinContent(8,1.494454);
   dRmin_taujet1->SetBinContent(10,0.3911398);
   dRmin_taujet1->SetBinContent(11,0.3741321);
   dRmin_taujet1->SetBinContent(12,0.4392132);
   dRmin_taujet1->SetBinContent(13,0.5866587);
   dRmin_taujet1->SetBinContent(14,0.1560488);
   dRmin_taujet1->SetBinContent(15,1.117638);
   dRmin_taujet1->SetBinContent(16,2.579865);
   dRmin_taujet1->SetBinContent(17,0.7131997);
   dRmin_taujet1->SetBinContent(18,0.1414908);
   dRmin_taujet1->SetBinContent(20,0.2742722);
   dRmin_taujet1->SetBinContent(22,0.9079725);
   dRmin_taujet1->SetBinContent(24,0.3074979);
   dRmin_taujet1->SetBinContent(25,0.3578835);
   dRmin_taujet1->SetBinContent(26,0.8414553);
   dRmin_taujet1->SetBinContent(27,0.4477674);
   dRmin_taujet1->SetBinContent(29,0.3528407);
   dRmin_taujet1->SetBinContent(51,915.8362);
   dRmin_taujet1->SetBinError(5,0.3873393);
   dRmin_taujet1->SetBinError(8,1.154833);
   dRmin_taujet1->SetBinError(10,0.3911398);
   dRmin_taujet1->SetBinError(11,0.3741321);
   dRmin_taujet1->SetBinError(12,0.438263);
   dRmin_taujet1->SetBinError(13,0.4558972);
   dRmin_taujet1->SetBinError(14,0.1560488);
   dRmin_taujet1->SetBinError(15,1.117639);
   dRmin_taujet1->SetBinError(16,1.685515);
   dRmin_taujet1->SetBinError(17,0.7131997);
   dRmin_taujet1->SetBinError(18,0.1414908);
   dRmin_taujet1->SetBinError(20,0.2742722);
   dRmin_taujet1->SetBinError(22,0.5671356);
   dRmin_taujet1->SetBinError(24,0.3074979);
   dRmin_taujet1->SetBinError(25,0.334398);
   dRmin_taujet1->SetBinError(26,0.6977813);
   dRmin_taujet1->SetBinError(27,0.3511562);
   dRmin_taujet1->SetBinError(29,0.3528407);
   dRmin_taujet1->SetBinError(51,24.50729);
   dRmin_taujet1->SetEntries(2004);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(6);
   dRmin_taujet1->SetLineColor(6);
   dRmin_taujet1->SetLineWidth(2);
   dRmin_taujet1->SetMarkerColor(6);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(1,0.2321205);
   dRmin_taujet1->SetBinContent(5,0.0186012);
   dRmin_taujet1->SetBinContent(6,0.03253146);
   dRmin_taujet1->SetBinContent(8,0.06005954);
   dRmin_taujet1->SetBinContent(9,0.006192909);
   dRmin_taujet1->SetBinContent(10,0.06044146);
   dRmin_taujet1->SetBinContent(11,0.0567345);
   dRmin_taujet1->SetBinContent(12,0.0454139);
   dRmin_taujet1->SetBinContent(13,0.0656472);
   dRmin_taujet1->SetBinContent(14,0.06801406);
   dRmin_taujet1->SetBinContent(15,0.1800614);
   dRmin_taujet1->SetBinContent(16,0.1501396);
   dRmin_taujet1->SetBinContent(17,0.1857358);
   dRmin_taujet1->SetBinContent(18,0.1912705);
   dRmin_taujet1->SetBinContent(19,0.07268229);
   dRmin_taujet1->SetBinContent(20,0.1359956);
   dRmin_taujet1->SetBinContent(21,0.1616044);
   dRmin_taujet1->SetBinContent(22,0.05099212);
   dRmin_taujet1->SetBinContent(23,0.001804599);
   dRmin_taujet1->SetBinContent(24,0.05918619);
   dRmin_taujet1->SetBinContent(25,0.08895781);
   dRmin_taujet1->SetBinContent(26,0.05910806);
   dRmin_taujet1->SetBinContent(27,0.03800654);
   dRmin_taujet1->SetBinContent(28,0.02563521);
   dRmin_taujet1->SetBinContent(29,0.001325945);
   dRmin_taujet1->SetBinContent(51,286.0894);
   dRmin_taujet1->SetBinError(1,0.0687597);
   dRmin_taujet1->SetBinError(5,0.0186012);
   dRmin_taujet1->SetBinError(6,0.02314675);
   dRmin_taujet1->SetBinError(8,0.0341216);
   dRmin_taujet1->SetBinError(9,0.005699195);
   dRmin_taujet1->SetBinError(10,0.03499814);
   dRmin_taujet1->SetBinError(11,0.03321451);
   dRmin_taujet1->SetBinError(12,0.02719007);
   dRmin_taujet1->SetBinError(13,0.03143781);
   dRmin_taujet1->SetBinError(14,0.03415262);
   dRmin_taujet1->SetBinError(15,0.05833734);
   dRmin_taujet1->SetBinError(16,0.05349271);
   dRmin_taujet1->SetBinError(17,0.05994675);
   dRmin_taujet1->SetBinError(18,0.05977153);
   dRmin_taujet1->SetBinError(19,0.03940538);
   dRmin_taujet1->SetBinError(20,0.04870399);
   dRmin_taujet1->SetBinError(21,0.05595068);
   dRmin_taujet1->SetBinError(22,0.02993115);
   dRmin_taujet1->SetBinError(23,0.001804599);
   dRmin_taujet1->SetBinError(24,0.02998251);
   dRmin_taujet1->SetBinError(25,0.04087528);
   dRmin_taujet1->SetBinError(26,0.03425598);
   dRmin_taujet1->SetBinError(27,0.02695699);
   dRmin_taujet1->SetBinError(28,0.02027767);
   dRmin_taujet1->SetBinError(29,0.001325945);
   dRmin_taujet1->SetBinError(51,2.388023);
   dRmin_taujet1->SetEntries(16955);
   dRmin_taujet1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dRmin_taujet1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dRmin_taujet1->SetLineColor(ci);
   dRmin_taujet1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dRmin_taujet1->SetMarkerColor(ci);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(51,0.1134007);
   dRmin_taujet1->SetBinError(51,0.1134007);
   dRmin_taujet1->SetEntries(1);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(3);
   dRmin_taujet1->SetLineColor(3);
   dRmin_taujet1->SetLineWidth(2);
   dRmin_taujet1->SetMarkerColor(3);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(10,0.1049591);
   dRmin_taujet1->SetBinContent(13,0.3664042);
   dRmin_taujet1->SetBinContent(14,0.09973028);
   dRmin_taujet1->SetBinContent(16,0.2312776);
   dRmin_taujet1->SetBinContent(18,0.04720286);
   dRmin_taujet1->SetBinContent(19,0.170922);
   dRmin_taujet1->SetBinContent(20,0.1054792);
   dRmin_taujet1->SetBinContent(22,0.2026035);
   dRmin_taujet1->SetBinContent(23,0.1706377);
   dRmin_taujet1->SetBinContent(51,13.23524);
   dRmin_taujet1->SetBinError(10,0.1049591);
   dRmin_taujet1->SetBinError(13,0.229845);
   dRmin_taujet1->SetBinError(14,0.08550864);
   dRmin_taujet1->SetBinError(16,0.1381235);
   dRmin_taujet1->SetBinError(18,0.04720286);
   dRmin_taujet1->SetBinError(19,0.1210096);
   dRmin_taujet1->SetBinError(20,0.07481437);
   dRmin_taujet1->SetBinError(22,0.2026035);
   dRmin_taujet1->SetBinError(23,0.120807);
   dRmin_taujet1->SetBinError(51,1.20121);
   dRmin_taujet1->SetEntries(176);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(3);
   dRmin_taujet1->SetLineColor(3);
   dRmin_taujet1->SetLineWidth(2);
   dRmin_taujet1->SetMarkerColor(3);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(4,0.006768879);
   dRmin_taujet1->SetBinContent(10,0.002348708);
   dRmin_taujet1->SetBinContent(11,0.01290104);
   dRmin_taujet1->SetBinContent(12,0.0142279);
   dRmin_taujet1->SetBinContent(13,0.01263203);
   dRmin_taujet1->SetBinContent(14,0.03594103);
   dRmin_taujet1->SetBinContent(15,0.06470093);
   dRmin_taujet1->SetBinContent(16,0.03616365);
   dRmin_taujet1->SetBinContent(17,0.07450379);
   dRmin_taujet1->SetBinContent(18,0.02933414);
   dRmin_taujet1->SetBinContent(19,0.04884435);
   dRmin_taujet1->SetBinContent(20,0.01682468);
   dRmin_taujet1->SetBinContent(21,0.01172591);
   dRmin_taujet1->SetBinContent(22,0.001017959);
   dRmin_taujet1->SetBinContent(23,0.004898197);
   dRmin_taujet1->SetBinContent(25,0.006438209);
   dRmin_taujet1->SetBinContent(27,0.005871238);
   dRmin_taujet1->SetBinContent(51,3.036667);
   dRmin_taujet1->SetBinError(4,0.006768879);
   dRmin_taujet1->SetBinError(10,0.002348708);
   dRmin_taujet1->SetBinError(11,0.0092335);
   dRmin_taujet1->SetBinError(12,0.01018541);
   dRmin_taujet1->SetBinError(13,0.007880358);
   dRmin_taujet1->SetBinError(14,0.01477709);
   dRmin_taujet1->SetBinError(15,0.02000539);
   dRmin_taujet1->SetBinError(16,0.014866);
   dRmin_taujet1->SetBinError(17,0.0209686);
   dRmin_taujet1->SetBinError(18,0.01470743);
   dRmin_taujet1->SetBinError(19,0.01678999);
   dRmin_taujet1->SetBinError(20,0.01047503);
   dRmin_taujet1->SetBinError(21,0.008291507);
   dRmin_taujet1->SetBinError(22,0.001017959);
   dRmin_taujet1->SetBinError(23,0.004801286);
   dRmin_taujet1->SetBinError(25,0.006416384);
   dRmin_taujet1->SetBinError(27,0.005871238);
   dRmin_taujet1->SetBinError(51,0.1392802);
   dRmin_taujet1->SetEntries(640);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(3);
   dRmin_taujet1->SetLineColor(3);
   dRmin_taujet1->SetLineWidth(2);
   dRmin_taujet1->SetMarkerColor(3);
   dRmin_taujet1->SetMarkerStyle(21);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet1,"");
   stack->Draw("hist");
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(1,1);
   dRmin_taujet1->SetBinContent(5,1);
   dRmin_taujet1->SetBinContent(8,1);
   dRmin_taujet1->SetBinContent(9,2);
   dRmin_taujet1->SetBinContent(10,1);
   dRmin_taujet1->SetBinContent(11,1);
   dRmin_taujet1->SetBinContent(12,2);
   dRmin_taujet1->SetBinContent(13,1);
   dRmin_taujet1->SetBinContent(14,4);
   dRmin_taujet1->SetBinContent(15,1);
   dRmin_taujet1->SetBinContent(19,1);
   dRmin_taujet1->SetBinContent(20,1);
   dRmin_taujet1->SetBinContent(23,2);
   dRmin_taujet1->SetBinContent(26,2);
   dRmin_taujet1->SetBinContent(51,1070);
   dRmin_taujet1->SetBinError(1,1);
   dRmin_taujet1->SetBinError(5,1);
   dRmin_taujet1->SetBinError(8,1);
   dRmin_taujet1->SetBinError(9,1.414214);
   dRmin_taujet1->SetBinError(10,1);
   dRmin_taujet1->SetBinError(11,1);
   dRmin_taujet1->SetBinError(12,1.414214);
   dRmin_taujet1->SetBinError(13,1);
   dRmin_taujet1->SetBinError(14,2);
   dRmin_taujet1->SetBinError(15,1);
   dRmin_taujet1->SetBinError(19,1);
   dRmin_taujet1->SetBinError(20,1);
   dRmin_taujet1->SetBinError(23,1.414214);
   dRmin_taujet1->SetBinError(26,1.414214);
   dRmin_taujet1->SetBinError(51,32.71085);
   dRmin_taujet1->SetEntries(1091);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillColor(1);
   dRmin_taujet1->SetFillStyle(0);
   dRmin_taujet1->SetLineWidth(3);
   dRmin_taujet1->SetMarkerStyle(20);
   dRmin_taujet1->SetMarkerSize(1.3);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   dRmin_taujet1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"AN");
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
   TLegendEntry *entry=leg->AddEntry("dRmin_taujet1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dRmin_taujet1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet1","EWK W+jets","f");

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
   entry=leg->AddEntry("dRmin_taujet1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet1","Dibosons","f");
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
   lower->Range(-1.336709,-0.653951,7.017722,2.070845);
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
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(1,4.308108);
   dRmin_taujet1->SetBinContent(5,2.463415);
   dRmin_taujet1->SetBinContent(8,0.6432881);
   dRmin_taujet1->SetBinContent(9,322.95);
   dRmin_taujet1->SetBinContent(10,1.789264);
   dRmin_taujet1->SetBinContent(11,2.253432);
   dRmin_taujet1->SetBinContent(12,4.009181);
   dRmin_taujet1->SetBinContent(13,0.5616578);
   dRmin_taujet1->SetBinContent(14,11.11932);
   dRmin_taujet1->SetBinContent(15,0.4253672);
   dRmin_taujet1->SetBinContent(19,1.007639);
   dRmin_taujet1->SetBinContent(20,0.6640308);
   dRmin_taujet1->SetBinContent(23,5.045407);
   dRmin_taujet1->SetBinContent(26,2.220832);
   dRmin_taujet1->SetBinContent(51,0.7151259);
   dRmin_taujet1->SetBinError(1,4.49315);
   dRmin_taujet1->SetBinError(5,3.406784);
   dRmin_taujet1->SetBinError(8,0.8014987);
   dRmin_taujet1->SetBinError(9,374.8044);
   dRmin_taujet1->SetBinError(10,2.212474);
   dRmin_taujet1->SetBinError(11,2.952615);
   dRmin_taujet1->SetBinError(12,4.527388);
   dRmin_taujet1->SetBinError(13,0.6303552);
   dRmin_taujet1->SetBinError(14,7.904695);
   dRmin_taujet1->SetBinError(15,0.5039304);
   dRmin_taujet1->SetBinError(19,1.23993);
   dRmin_taujet1->SetBinError(20,0.7511443);
   dRmin_taujet1->SetBinError(23,4.782338);
   dRmin_taujet1->SetBinError(26,2.331138);
   dRmin_taujet1->SetBinError(51,0.02571436);
   dRmin_taujet1->SetMinimum(0);
   dRmin_taujet1->SetMaximum(2);
   dRmin_taujet1->SetEntries(0.9187543);
   dRmin_taujet1->SetStats(0);
   dRmin_taujet1->SetFillStyle(0);
   dRmin_taujet1->SetMarkerStyle(20);
   dRmin_taujet1->SetMarkerSize(0.8);
   dRmin_taujet1->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag1)");
   dRmin_taujet1->GetXaxis()->SetRange(1,33);
   dRmin_taujet1->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetXaxis()->SetLabelSize(0.1);
   dRmin_taujet1->GetXaxis()->SetTitleSize(0.12);
   dRmin_taujet1->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1->GetYaxis()->SetTitle("Data/MC");
   dRmin_taujet1->GetYaxis()->SetNdivisions(505);
   dRmin_taujet1->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetYaxis()->SetLabelSize(0.1);
   dRmin_taujet1->GetYaxis()->SetTitleSize(0.12);
   dRmin_taujet1->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetYaxis()->SetTitleOffset(0.55);
   dRmin_taujet1->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1->GetZaxis()->SetTitleFont(42);
   dRmin_taujet1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
