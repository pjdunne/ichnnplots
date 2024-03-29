{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:52:58 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-0.4727458,446.5823,23.16454);
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
   stack->SetMaximum(20.93589);
   
   TH1F *mt_taunu_stack_5 = new TH1F("mt_taunu_stack_5","stack",25,0,500);
   mt_taunu_stack_5->SetBinContent(0,194.4124);
   mt_taunu_stack_5->SetBinContent(1,0.06080693);
   mt_taunu_stack_5->SetBinContent(2,0.627924);
   mt_taunu_stack_5->SetBinContent(3,0.01372706);
   mt_taunu_stack_5->SetBinContent(4,0.1191688);
   mt_taunu_stack_5->SetBinContent(5,0.05763997);
   mt_taunu_stack_5->SetBinError(0,16.72038);
   mt_taunu_stack_5->SetBinError(1,0.0446824);
   mt_taunu_stack_5->SetBinError(2,0.5637053);
   mt_taunu_stack_5->SetBinError(3,0.01372706);
   mt_taunu_stack_5->SetBinError(4,0.1191688);
   mt_taunu_stack_5->SetBinError(5,0.05763997);
   mt_taunu_stack_5->SetMinimum(0);
   mt_taunu_stack_5->SetMaximum(21.98268);
   mt_taunu_stack_5->SetEntries(812);
   mt_taunu_stack_5->SetStats(0);
   mt_taunu_stack_5->SetFillColor(4);
   mt_taunu_stack_5->SetLineColor(4);
   mt_taunu_stack_5->SetLineWidth(2);
   mt_taunu_stack_5->SetMarkerColor(4);
   mt_taunu_stack_5->SetMarkerStyle(21);
   mt_taunu_stack_5->SetMarkerSize(0.8);
   mt_taunu_stack_5->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu_stack_5->GetXaxis()->SetRange(1,21);
   mt_taunu_stack_5->GetXaxis()->SetLabelFont(42);
   mt_taunu_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_5->GetXaxis()->SetLabelSize(0);
   mt_taunu_stack_5->GetXaxis()->SetTitleSize(0);
   mt_taunu_stack_5->GetXaxis()->SetTickLength(0.02);
   mt_taunu_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu_stack_5->GetXaxis()->SetTitleFont(42);
   mt_taunu_stack_5->GetYaxis()->SetTitle("Events");
   mt_taunu_stack_5->GetYaxis()->SetLabelFont(42);
   mt_taunu_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_5->GetYaxis()->SetLabelSize(0.035);
   mt_taunu_stack_5->GetYaxis()->SetTitleSize(0.045);
   mt_taunu_stack_5->GetYaxis()->SetTickLength(0.02);
   mt_taunu_stack_5->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu_stack_5->GetYaxis()->SetTitleFont(42);
   mt_taunu_stack_5->GetZaxis()->SetLabelFont(42);
   mt_taunu_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_5->GetZaxis()->SetLabelSize(0.035);
   mt_taunu_stack_5->GetZaxis()->SetTitleSize(0.045);
   mt_taunu_stack_5->GetZaxis()->SetTickLength(0.02);
   mt_taunu_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mt_taunu_stack_5);
   
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,194.4124);
   mt_taunu->SetBinContent(1,0.06080693);
   mt_taunu->SetBinContent(2,0.627924);
   mt_taunu->SetBinContent(3,0.01372706);
   mt_taunu->SetBinContent(4,0.1191688);
   mt_taunu->SetBinContent(5,0.05763997);
   mt_taunu->SetBinError(0,16.72038);
   mt_taunu->SetBinError(1,0.0446824);
   mt_taunu->SetBinError(2,0.5637053);
   mt_taunu->SetBinError(3,0.01372706);
   mt_taunu->SetBinError(4,0.1191688);
   mt_taunu->SetBinError(5,0.05763997);
   mt_taunu->SetMaximum(24.2);
   mt_taunu->SetEntries(812);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(4);
   mt_taunu->SetLineColor(4);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(4);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu->GetXaxis()->SetRange(1,21);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0);
   mt_taunu->GetXaxis()->SetTitleSize(0);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetTitle("Events");
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"HIST");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,758.6837);
   mt_taunu->SetBinContent(1,2.364233);
   mt_taunu->SetBinContent(2,2.81569);
   mt_taunu->SetBinContent(3,1.931521);
   mt_taunu->SetBinContent(4,0.9612755);
   mt_taunu->SetBinContent(5,4.406115);
   mt_taunu->SetBinContent(6,0.5455638);
   mt_taunu->SetBinContent(7,2.048603);
   mt_taunu->SetBinContent(8,0.7514696);
   mt_taunu->SetBinContent(9,0.1675706);
   mt_taunu->SetBinError(0,20.39006);
   mt_taunu->SetBinError(1,1.292337);
   mt_taunu->SetBinError(2,1.498206);
   mt_taunu->SetBinError(3,0.8840113);
   mt_taunu->SetBinError(4,0.6281616);
   mt_taunu->SetBinError(5,1.913034);
   mt_taunu->SetBinError(6,0.5455638);
   mt_taunu->SetBinError(7,1.26613);
   mt_taunu->SetBinError(8,0.7514696);
   mt_taunu->SetBinError(9,0.1675706);
   mt_taunu->SetEntries(2229);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(5);
   mt_taunu->SetLineColor(5);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(5);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,4650.125);
   mt_taunu->SetBinContent(1,4.797717);
   mt_taunu->SetBinContent(2,0.9283202);
   mt_taunu->SetBinContent(3,2.759949);
   mt_taunu->SetBinContent(4,4.030242);
   mt_taunu->SetBinContent(5,1.77184);
   mt_taunu->SetBinContent(6,2.431175);
   mt_taunu->SetBinContent(7,4.69529);
   mt_taunu->SetBinContent(8,0.6336042);
   mt_taunu->SetBinContent(9,2.263236);
   mt_taunu->SetBinContent(10,0.7332168);
   mt_taunu->SetBinContent(12,0.3406268);
   mt_taunu->SetBinError(0,54.16156);
   mt_taunu->SetBinError(1,1.569456);
   mt_taunu->SetBinError(2,0.5715056);
   mt_taunu->SetBinError(3,1.027265);
   mt_taunu->SetBinError(4,1.273103);
   mt_taunu->SetBinError(5,0.7720142);
   mt_taunu->SetBinError(6,1.464661);
   mt_taunu->SetBinError(7,2.274213);
   mt_taunu->SetBinError(8,0.6248186);
   mt_taunu->SetBinError(9,1.54686);
   mt_taunu->SetBinError(10,0.5812126);
   mt_taunu->SetBinError(12,0.3406268);
   mt_taunu->SetEntries(12858);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(6);
   mt_taunu->SetLineColor(6);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(6);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,1136.153);
   mt_taunu->SetBinContent(1,0.230751);
   mt_taunu->SetBinContent(2,0.3580001);
   mt_taunu->SetBinContent(3,0.2815197);
   mt_taunu->SetBinContent(4,0.4629169);
   mt_taunu->SetBinContent(5,0.4688448);
   mt_taunu->SetBinContent(6,0.3396228);
   mt_taunu->SetBinContent(7,0.2096216);
   mt_taunu->SetBinContent(8,0.227478);
   mt_taunu->SetBinContent(9,0.09103978);
   mt_taunu->SetBinContent(10,0.1159537);
   mt_taunu->SetBinContent(11,0.1569109);
   mt_taunu->SetBinContent(12,0.03244254);
   mt_taunu->SetBinContent(13,0.03951501);
   mt_taunu->SetBinContent(14,0.01948137);
   mt_taunu->SetBinContent(15,0.01931615);
   mt_taunu->SetBinContent(17,0.03623737);
   mt_taunu->SetBinContent(23,0.01802475);
   mt_taunu->SetBinError(0,4.443887);
   mt_taunu->SetBinError(1,0.05718186);
   mt_taunu->SetBinError(2,0.07030898);
   mt_taunu->SetBinError(3,0.06127395);
   mt_taunu->SetBinError(4,0.09054142);
   mt_taunu->SetBinError(5,0.0914226);
   mt_taunu->SetBinError(6,0.07353121);
   mt_taunu->SetBinError(7,0.05754992);
   mt_taunu->SetBinError(8,0.0598774);
   mt_taunu->SetBinError(9,0.03792793);
   mt_taunu->SetBinError(10,0.04496007);
   mt_taunu->SetBinError(11,0.05627389);
   mt_taunu->SetBinError(12,0.0230615);
   mt_taunu->SetBinError(13,0.02794834);
   mt_taunu->SetBinError(14,0.01948137);
   mt_taunu->SetBinError(15,0.01368831);
   mt_taunu->SetBinError(17,0.02595096);
   mt_taunu->SetBinError(23,0.01802475);
   mt_taunu->SetEntries(83601);
   mt_taunu->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mt_taunu->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mt_taunu->SetLineColor(ci);
   mt_taunu->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mt_taunu->SetMarkerColor(ci);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,0.05156378);
   mt_taunu->SetBinError(0,0.05156378);
   mt_taunu->SetEntries(1);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,326.4999);
   mt_taunu->SetBinContent(1,1.615498);
   mt_taunu->SetBinContent(2,2.630201);
   mt_taunu->SetBinContent(3,1.829605);
   mt_taunu->SetBinContent(4,1.806123);
   mt_taunu->SetBinContent(5,0.5977603);
   mt_taunu->SetBinContent(7,0.08378458);
   mt_taunu->SetBinError(0,5.649262);
   mt_taunu->SetBinError(1,0.383159);
   mt_taunu->SetBinError(2,0.500729);
   mt_taunu->SetBinError(3,0.4463254);
   mt_taunu->SetBinError(4,0.4501654);
   mt_taunu->SetBinError(5,0.2345752);
   mt_taunu->SetBinError(7,0.0594415);
   mt_taunu->SetEntries(5525);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,78.4236);
   mt_taunu->SetBinContent(1,0.4473053);
   mt_taunu->SetBinContent(2,0.4159966);
   mt_taunu->SetBinContent(3,0.3671321);
   mt_taunu->SetBinContent(4,0.2440532);
   mt_taunu->SetBinContent(5,0.09331003);
   mt_taunu->SetBinContent(6,0.03617339);
   mt_taunu->SetBinContent(7,0.06236227);
   mt_taunu->SetBinContent(8,0.01511967);
   mt_taunu->SetBinContent(9,0.02614357);
   mt_taunu->SetBinContent(10,0.0114367);
   mt_taunu->SetBinContent(17,0.01362553);
   mt_taunu->SetBinContent(21,0.006762422);
   mt_taunu->SetBinError(0,0.8049842);
   mt_taunu->SetBinError(1,0.05083198);
   mt_taunu->SetBinError(2,0.04696745);
   mt_taunu->SetBinError(3,0.04375621);
   mt_taunu->SetBinError(4,0.03790191);
   mt_taunu->SetBinError(5,0.02399605);
   mt_taunu->SetBinError(6,0.01321895);
   mt_taunu->SetBinError(7,0.0251711);
   mt_taunu->SetBinError(8,0.009183645);
   mt_taunu->SetBinError(9,0.0150664);
   mt_taunu->SetBinError(10,0.01139425);
   mt_taunu->SetBinError(17,0.01362553);
   mt_taunu->SetBinError(21,0.006762422);
   mt_taunu->SetEntries(14070);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   stack->Draw("hist");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,5964);
   mt_taunu->SetBinContent(1,5);
   mt_taunu->SetBinContent(2,5);
   mt_taunu->SetBinContent(3,7);
   mt_taunu->SetBinContent(4,11);
   mt_taunu->SetBinContent(5,4);
   mt_taunu->SetBinContent(6,2);
   mt_taunu->SetBinContent(7,2);
   mt_taunu->SetBinContent(8,2);
   mt_taunu->SetBinContent(9,2);
   mt_taunu->SetBinContent(10,1);
   mt_taunu->SetBinContent(11,2);
   mt_taunu->SetBinError(0,77.22694);
   mt_taunu->SetBinError(1,2.236068);
   mt_taunu->SetBinError(2,2.236068);
   mt_taunu->SetBinError(3,2.645751);
   mt_taunu->SetBinError(4,3.316625);
   mt_taunu->SetBinError(5,2);
   mt_taunu->SetBinError(6,1.414214);
   mt_taunu->SetBinError(7,1.414214);
   mt_taunu->SetBinError(8,1.414214);
   mt_taunu->SetBinError(9,1.414214);
   mt_taunu->SetBinError(10,1);
   mt_taunu->SetBinError(11,1.414214);
   mt_taunu->SetEntries(6007);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(1);
   mt_taunu->SetFillStyle(0);
   mt_taunu->SetLineWidth(3);
   mt_taunu->SetMarkerStyle(20);
   mt_taunu->SetMarkerSize(1.3);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   mt_taunu->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   TLegendEntry *entry=leg->AddEntry("mt_taunu","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mt_taunu","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","EWK W+jets","f");

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
   entry=leg->AddEntry("mt_taunu","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","Dibosons","f");
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
   lower->Range(-85.06329,-0.653951,446.5823,2.070845);
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
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,0.8581372);
   mt_taunu->SetBinContent(1,0.5287925);
   mt_taunu->SetBinContent(2,0.6994761);
   mt_taunu->SetBinContent(3,0.9763272);
   mt_taunu->SetBinContent(4,1.465766);
   mt_taunu->SetBinContent(5,0.5451174);
   mt_taunu->SetBinContent(6,0.5965636);
   mt_taunu->SetBinContent(7,0.2817036);
   mt_taunu->SetBinContent(8,1.228749);
   mt_taunu->SetBinContent(9,0.7849325);
   mt_taunu->SetBinContent(10,1.16197);
   mt_taunu->SetBinContent(11,12.74609);
   mt_taunu->SetBinError(0,0.01324136);
   mt_taunu->SetBinError(1,0.2633038);
   mt_taunu->SetBinError(2,0.3534727);
   mt_taunu->SetBinError(3,0.4171713);
   mt_taunu->SetBinError(4,0.5294302);
   mt_taunu->SetBinError(5,0.3132529);
   mt_taunu->SetBinError(6,0.5054425);
   mt_taunu->SetBinError(7,0.2244033);
   mt_taunu->SetBinError(8,1.14075);
   mt_taunu->SetBinError(9,0.7334564);
   mt_taunu->SetBinError(10,1.403535);
   mt_taunu->SetBinError(11,10.10581);
   mt_taunu->SetMinimum(0);
   mt_taunu->SetMaximum(2);
   mt_taunu->SetEntries(4.127998);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillStyle(0);
   mt_taunu->SetMarkerStyle(20);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu->GetXaxis()->SetRange(1,21);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.1);
   mt_taunu->GetXaxis()->SetTitleSize(0.12);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetTitle("Data/MC");
   mt_taunu->GetYaxis()->SetNdivisions(505);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.1);
   mt_taunu->GetYaxis()->SetTitleSize(0.12);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(0.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   mt_taunu->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
