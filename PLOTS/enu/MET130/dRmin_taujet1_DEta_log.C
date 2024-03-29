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
   upper->Range(-1.336709,-2.653698,7.017722,3.410717);
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
   stack->SetMaximum(652.5202);
   
   TH1F *dRmin_taujet1_stack_5 = new TH1F("dRmin_taujet1_stack_5","stack",50,0,10);
   dRmin_taujet1_stack_5->SetBinContent(10,0.06014713);
   dRmin_taujet1_stack_5->SetBinContent(11,2.019954);
   dRmin_taujet1_stack_5->SetBinContent(12,0.08059248);
   dRmin_taujet1_stack_5->SetBinContent(13,0.1226271);
   dRmin_taujet1_stack_5->SetBinContent(15,0.05284607);
   dRmin_taujet1_stack_5->SetBinContent(20,0.0001113589);
   dRmin_taujet1_stack_5->SetBinContent(28,0.05824418);
   dRmin_taujet1_stack_5->SetBinContent(51,68.93362);
   dRmin_taujet1_stack_5->SetBinError(10,0.06014713);
   dRmin_taujet1_stack_5->SetBinError(11,2.019954);
   dRmin_taujet1_stack_5->SetBinError(12,0.07252239);
   dRmin_taujet1_stack_5->SetBinError(13,0.1226271);
   dRmin_taujet1_stack_5->SetBinError(15,0.05284607);
   dRmin_taujet1_stack_5->SetBinError(20,0.0001113589);
   dRmin_taujet1_stack_5->SetBinError(28,0.05824418);
   dRmin_taujet1_stack_5->SetBinError(51,9.411643);
   dRmin_taujet1_stack_5->SetMinimum(0.002934878);
   dRmin_taujet1_stack_5->SetMaximum(1280.844);
   dRmin_taujet1_stack_5->SetEntries(333);
   dRmin_taujet1_stack_5->SetStats(0);
   dRmin_taujet1_stack_5->SetFillColor(4);
   dRmin_taujet1_stack_5->SetLineColor(4);
   dRmin_taujet1_stack_5->SetLineWidth(2);
   dRmin_taujet1_stack_5->SetMarkerColor(4);
   dRmin_taujet1_stack_5->SetMarkerStyle(21);
   dRmin_taujet1_stack_5->SetMarkerSize(0.8);
   dRmin_taujet1_stack_5->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag1)");
   dRmin_taujet1_stack_5->GetXaxis()->SetRange(1,33);
   dRmin_taujet1_stack_5->GetXaxis()->SetLabelFont(42);
   dRmin_taujet1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet1_stack_5->GetXaxis()->SetLabelSize(0);
   dRmin_taujet1_stack_5->GetXaxis()->SetTitleSize(0);
   dRmin_taujet1_stack_5->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet1_stack_5->GetXaxis()->SetTitleFont(42);
   dRmin_taujet1_stack_5->GetYaxis()->SetTitle("Events");
   dRmin_taujet1_stack_5->GetYaxis()->SetLabelFont(42);
   dRmin_taujet1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet1_stack_5->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet1_stack_5->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet1_stack_5->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet1_stack_5->GetYaxis()->SetTitleFont(42);
   dRmin_taujet1_stack_5->GetZaxis()->SetLabelFont(42);
   dRmin_taujet1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet1_stack_5->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet1_stack_5->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet1_stack_5->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet1_stack_5);
   
   
   TH1F *dRmin_taujet1 = new TH1F("dRmin_taujet1","dRmin_taujet1",50,0,10);
   dRmin_taujet1->SetBinContent(10,0.06014713);
   dRmin_taujet1->SetBinContent(11,2.019954);
   dRmin_taujet1->SetBinContent(12,0.08059248);
   dRmin_taujet1->SetBinContent(13,0.1226271);
   dRmin_taujet1->SetBinContent(15,0.05284607);
   dRmin_taujet1->SetBinContent(20,0.0001113589);
   dRmin_taujet1->SetBinContent(28,0.05824418);
   dRmin_taujet1->SetBinContent(51,68.93362);
   dRmin_taujet1->SetBinError(10,0.06014713);
   dRmin_taujet1->SetBinError(11,2.019954);
   dRmin_taujet1->SetBinError(12,0.07252239);
   dRmin_taujet1->SetBinError(13,0.1226271);
   dRmin_taujet1->SetBinError(15,0.05284607);
   dRmin_taujet1->SetBinError(20,0.0001113589);
   dRmin_taujet1->SetBinError(28,0.05824418);
   dRmin_taujet1->SetBinError(51,9.411643);
   dRmin_taujet1->SetMinimum(0.01);
   dRmin_taujet1->SetMaximum(750);
   dRmin_taujet1->SetEntries(333);
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
   dRmin_taujet1->SetBinContent(1,0.5620171);
   dRmin_taujet1->SetBinContent(6,0.06238918);
   dRmin_taujet1->SetBinContent(8,0.2034453);
   dRmin_taujet1->SetBinContent(10,0.2018342);
   dRmin_taujet1->SetBinContent(11,0.8443081);
   dRmin_taujet1->SetBinContent(13,0.7491011);
   dRmin_taujet1->SetBinContent(14,0.5885086);
   dRmin_taujet1->SetBinContent(15,1.058264);
   dRmin_taujet1->SetBinContent(16,0.8467299);
   dRmin_taujet1->SetBinContent(17,0.6480854);
   dRmin_taujet1->SetBinContent(18,1.545517);
   dRmin_taujet1->SetBinContent(19,0.6999702);
   dRmin_taujet1->SetBinContent(20,0.6953513);
   dRmin_taujet1->SetBinContent(22,0.2512403);
   dRmin_taujet1->SetBinContent(24,0.02690129);
   dRmin_taujet1->SetBinContent(51,327.507);
   dRmin_taujet1->SetBinError(1,0.4119565);
   dRmin_taujet1->SetBinError(6,0.06238918);
   dRmin_taujet1->SetBinError(8,0.2034453);
   dRmin_taujet1->SetBinError(10,0.2018342);
   dRmin_taujet1->SetBinError(11,0.6046116);
   dRmin_taujet1->SetBinError(13,0.7491011);
   dRmin_taujet1->SetBinError(14,0.5885086);
   dRmin_taujet1->SetBinError(15,0.9909677);
   dRmin_taujet1->SetBinError(16,0.6068122);
   dRmin_taujet1->SetBinError(17,0.5449783);
   dRmin_taujet1->SetBinError(18,0.9090942);
   dRmin_taujet1->SetBinError(19,0.6999702);
   dRmin_taujet1->SetBinError(20,0.6005692);
   dRmin_taujet1->SetBinError(22,0.2512402);
   dRmin_taujet1->SetBinError(24,0.02690129);
   dRmin_taujet1->SetBinError(51,12.61044);
   dRmin_taujet1->SetEntries(1122);
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
   dRmin_taujet1->SetBinContent(1,0.16078);
   dRmin_taujet1->SetBinContent(4,0.6621164);
   dRmin_taujet1->SetBinContent(5,1.243537);
   dRmin_taujet1->SetBinContent(6,0.4037392);
   dRmin_taujet1->SetBinContent(7,0.07183419);
   dRmin_taujet1->SetBinContent(8,1.152737);
   dRmin_taujet1->SetBinContent(9,0.2278476);
   dRmin_taujet1->SetBinContent(10,0.8736447);
   dRmin_taujet1->SetBinContent(11,1.363339);
   dRmin_taujet1->SetBinContent(12,0.1561469);
   dRmin_taujet1->SetBinContent(13,0.4674715);
   dRmin_taujet1->SetBinContent(14,0.6833245);
   dRmin_taujet1->SetBinContent(15,0.636264);
   dRmin_taujet1->SetBinContent(16,2.068706);
   dRmin_taujet1->SetBinContent(17,0.1690618);
   dRmin_taujet1->SetBinContent(18,0.3391078);
   dRmin_taujet1->SetBinContent(19,0.1127742);
   dRmin_taujet1->SetBinContent(20,0.4429702);
   dRmin_taujet1->SetBinContent(21,0.915814);
   dRmin_taujet1->SetBinContent(22,2.559451);
   dRmin_taujet1->SetBinContent(23,1.365493);
   dRmin_taujet1->SetBinContent(24,0.839843);
   dRmin_taujet1->SetBinContent(25,0.4126439);
   dRmin_taujet1->SetBinContent(26,1.509201);
   dRmin_taujet1->SetBinContent(27,0.2206212);
   dRmin_taujet1->SetBinContent(29,0.04890946);
   dRmin_taujet1->SetBinContent(31,0.01421426);
   dRmin_taujet1->SetBinContent(51,1487.671);
   dRmin_taujet1->SetBinError(1,0.114578);
   dRmin_taujet1->SetBinError(4,0.382452);
   dRmin_taujet1->SetBinError(5,0.6461732);
   dRmin_taujet1->SetBinError(6,0.4037393);
   dRmin_taujet1->SetBinError(7,0.07183419);
   dRmin_taujet1->SetBinError(8,1.079268);
   dRmin_taujet1->SetBinError(9,0.1444093);
   dRmin_taujet1->SetBinError(10,0.5965555);
   dRmin_taujet1->SetBinError(11,0.913436);
   dRmin_taujet1->SetBinError(12,0.1561468);
   dRmin_taujet1->SetBinError(13,0.2680935);
   dRmin_taujet1->SetBinError(14,0.5498825);
   dRmin_taujet1->SetBinError(15,0.452093);
   dRmin_taujet1->SetBinError(16,1.245646);
   dRmin_taujet1->SetBinError(17,0.1690618);
   dRmin_taujet1->SetBinError(18,0.3391078);
   dRmin_taujet1->SetBinError(19,0.1127742);
   dRmin_taujet1->SetBinError(20,0.3172543);
   dRmin_taujet1->SetBinError(21,0.5081504);
   dRmin_taujet1->SetBinError(22,1.145678);
   dRmin_taujet1->SetBinError(23,0.7752456);
   dRmin_taujet1->SetBinError(24,0.4311721);
   dRmin_taujet1->SetBinError(25,0.338745);
   dRmin_taujet1->SetBinError(26,0.6628395);
   dRmin_taujet1->SetBinError(27,0.1780163);
   dRmin_taujet1->SetBinError(29,0.04890946);
   dRmin_taujet1->SetBinError(31,0.01421426);
   dRmin_taujet1->SetBinError(51,28.40536);
   dRmin_taujet1->SetEntries(4765);
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
   dRmin_taujet1->SetBinContent(1,0.4170149);
   dRmin_taujet1->SetBinContent(4,0.009249566);
   dRmin_taujet1->SetBinContent(5,0.0186012);
   dRmin_taujet1->SetBinContent(6,0.06920616);
   dRmin_taujet1->SetBinContent(7,0.05737501);
   dRmin_taujet1->SetBinContent(8,0.06454198);
   dRmin_taujet1->SetBinContent(9,0.05223814);
   dRmin_taujet1->SetBinContent(10,0.1567037);
   dRmin_taujet1->SetBinContent(11,0.1031136);
   dRmin_taujet1->SetBinContent(12,0.1274768);
   dRmin_taujet1->SetBinContent(13,0.1421096);
   dRmin_taujet1->SetBinContent(14,0.08299992);
   dRmin_taujet1->SetBinContent(15,0.3230039);
   dRmin_taujet1->SetBinContent(16,0.1429568);
   dRmin_taujet1->SetBinContent(17,0.2392113);
   dRmin_taujet1->SetBinContent(18,0.2204404);
   dRmin_taujet1->SetBinContent(19,0.1575114);
   dRmin_taujet1->SetBinContent(20,0.1382519);
   dRmin_taujet1->SetBinContent(21,0.1823741);
   dRmin_taujet1->SetBinContent(22,0.1084283);
   dRmin_taujet1->SetBinContent(23,0.061134);
   dRmin_taujet1->SetBinContent(24,0.1594163);
   dRmin_taujet1->SetBinContent(25,0.1610562);
   dRmin_taujet1->SetBinContent(26,0.1214283);
   dRmin_taujet1->SetBinContent(27,0.0747174);
   dRmin_taujet1->SetBinContent(28,0.0861381);
   dRmin_taujet1->SetBinContent(29,0.05559395);
   dRmin_taujet1->SetBinContent(30,0.04778908);
   dRmin_taujet1->SetBinContent(31,0.01675555);
   dRmin_taujet1->SetBinContent(32,0.009839214);
   dRmin_taujet1->SetBinContent(51,386.9268);
   dRmin_taujet1->SetBinError(1,0.07944982);
   dRmin_taujet1->SetBinError(4,0.009249566);
   dRmin_taujet1->SetBinError(5,0.0186012);
   dRmin_taujet1->SetBinError(6,0.0326833);
   dRmin_taujet1->SetBinError(7,0.02370533);
   dRmin_taujet1->SetBinError(8,0.03318248);
   dRmin_taujet1->SetBinError(9,0.02579468);
   dRmin_taujet1->SetBinError(10,0.04633151);
   dRmin_taujet1->SetBinError(11,0.03745667);
   dRmin_taujet1->SetBinError(12,0.03954503);
   dRmin_taujet1->SetBinError(13,0.04038858);
   dRmin_taujet1->SetBinError(14,0.03055746);
   dRmin_taujet1->SetBinError(15,0.06993152);
   dRmin_taujet1->SetBinError(16,0.04592276);
   dRmin_taujet1->SetBinError(17,0.05997911);
   dRmin_taujet1->SetBinError(18,0.05982064);
   dRmin_taujet1->SetBinError(19,0.04618091);
   dRmin_taujet1->SetBinError(20,0.04327725);
   dRmin_taujet1->SetBinError(21,0.05463668);
   dRmin_taujet1->SetBinError(22,0.04158523);
   dRmin_taujet1->SetBinError(23,0.02730548);
   dRmin_taujet1->SetBinError(24,0.04602365);
   dRmin_taujet1->SetBinError(25,0.04726323);
   dRmin_taujet1->SetBinError(26,0.04009908);
   dRmin_taujet1->SetBinError(27,0.03318791);
   dRmin_taujet1->SetBinError(28,0.0342376);
   dRmin_taujet1->SetBinError(29,0.0225755);
   dRmin_taujet1->SetBinError(30,0.02276421);
   dRmin_taujet1->SetBinError(31,0.01066269);
   dRmin_taujet1->SetBinError(32,0.009839214);
   dRmin_taujet1->SetBinError(51,2.463082);
   dRmin_taujet1->SetEntries(32662);
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
   dRmin_taujet1->SetBinContent(51,0.1728566);
   dRmin_taujet1->SetBinError(51,0.1571197);
   dRmin_taujet1->SetEntries(2);
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
   dRmin_taujet1->SetBinContent(4,0.05485561);
   dRmin_taujet1->SetBinContent(8,0.0804312);
   dRmin_taujet1->SetBinContent(9,0.001534395);
   dRmin_taujet1->SetBinContent(13,0.4277714);
   dRmin_taujet1->SetBinContent(14,0.4125016);
   dRmin_taujet1->SetBinContent(15,0.0001112825);
   dRmin_taujet1->SetBinContent(16,0.7140628);
   dRmin_taujet1->SetBinContent(17,0.0950151);
   dRmin_taujet1->SetBinContent(18,0.09613378);
   dRmin_taujet1->SetBinContent(19,0.08120943);
   dRmin_taujet1->SetBinContent(20,0.04860078);
   dRmin_taujet1->SetBinContent(21,0.1091541);
   dRmin_taujet1->SetBinContent(22,0.2026035);
   dRmin_taujet1->SetBinContent(23,0.06525799);
   dRmin_taujet1->SetBinContent(26,0.05101606);
   dRmin_taujet1->SetBinContent(28,0.07054319);
   dRmin_taujet1->SetBinContent(51,22.4094);
   dRmin_taujet1->SetBinError(4,0.05485561);
   dRmin_taujet1->SetBinError(8,0.0804312);
   dRmin_taujet1->SetBinError(9,0.001534395);
   dRmin_taujet1->SetBinError(13,0.2307122);
   dRmin_taujet1->SetBinError(14,0.1838854);
   dRmin_taujet1->SetBinError(15,0.0001112825);
   dRmin_taujet1->SetBinError(16,0.2769889);
   dRmin_taujet1->SetBinError(17,0.0794382);
   dRmin_taujet1->SetBinError(18,0.06798783);
   dRmin_taujet1->SetBinError(19,0.08120943);
   dRmin_taujet1->SetBinError(20,0.04860078);
   dRmin_taujet1->SetBinError(21,0.1091541);
   dRmin_taujet1->SetBinError(22,0.2026035);
   dRmin_taujet1->SetBinError(23,0.06525799);
   dRmin_taujet1->SetBinError(26,0.05101606);
   dRmin_taujet1->SetBinError(28,0.06001506);
   dRmin_taujet1->SetBinError(51,1.373411);
   dRmin_taujet1->SetEntries(460);
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
   dRmin_taujet1->SetBinContent(1,0.003977085);
   dRmin_taujet1->SetBinContent(4,0.006768879);
   dRmin_taujet1->SetBinContent(10,0.003272609);
   dRmin_taujet1->SetBinContent(11,0.01941916);
   dRmin_taujet1->SetBinContent(12,0.006326453);
   dRmin_taujet1->SetBinContent(13,0.007285549);
   dRmin_taujet1->SetBinContent(14,0.02563108);
   dRmin_taujet1->SetBinContent(15,0.04303915);
   dRmin_taujet1->SetBinContent(16,0.05312443);
   dRmin_taujet1->SetBinContent(17,0.07189485);
   dRmin_taujet1->SetBinContent(18,0.04178606);
   dRmin_taujet1->SetBinContent(19,0.04757079);
   dRmin_taujet1->SetBinContent(20,0.03892626);
   dRmin_taujet1->SetBinContent(21,0.04169036);
   dRmin_taujet1->SetBinContent(22,0.01318929);
   dRmin_taujet1->SetBinContent(23,0.02457552);
   dRmin_taujet1->SetBinContent(24,0.01715308);
   dRmin_taujet1->SetBinContent(25,0.01744158);
   dRmin_taujet1->SetBinContent(27,0.01430717);
   dRmin_taujet1->SetBinContent(51,4.047078);
   dRmin_taujet1->SetBinError(1,0.002823586);
   dRmin_taujet1->SetBinError(4,0.006768879);
   dRmin_taujet1->SetBinError(10,0.003272609);
   dRmin_taujet1->SetBinError(11,0.01033829);
   dRmin_taujet1->SetBinError(12,0.006326453);
   dRmin_taujet1->SetBinError(13,0.005186445);
   dRmin_taujet1->SetBinError(14,0.01095453);
   dRmin_taujet1->SetBinError(15,0.01544602);
   dRmin_taujet1->SetBinError(16,0.01678599);
   dRmin_taujet1->SetBinError(17,0.01954598);
   dRmin_taujet1->SetBinError(18,0.01532318);
   dRmin_taujet1->SetBinError(19,0.01585634);
   dRmin_taujet1->SetBinError(20,0.01472608);
   dRmin_taujet1->SetBinError(21,0.01383078);
   dRmin_taujet1->SetBinError(22,0.006773295);
   dRmin_taujet1->SetBinError(23,0.009931757);
   dRmin_taujet1->SetBinError(24,0.008876377);
   dRmin_taujet1->SetBinError(25,0.009043279);
   dRmin_taujet1->SetBinError(27,0.008793357);
   dRmin_taujet1->SetBinError(51,0.1451465);
   dRmin_taujet1->SetEntries(1132);
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
   dRmin_taujet1->SetBinContent(1,4);
   dRmin_taujet1->SetBinContent(4,1);
   dRmin_taujet1->SetBinContent(5,2);
   dRmin_taujet1->SetBinContent(8,1);
   dRmin_taujet1->SetBinContent(9,3);
   dRmin_taujet1->SetBinContent(10,2);
   dRmin_taujet1->SetBinContent(11,3);
   dRmin_taujet1->SetBinContent(12,2);
   dRmin_taujet1->SetBinContent(13,3);
   dRmin_taujet1->SetBinContent(14,3);
   dRmin_taujet1->SetBinContent(15,2);
   dRmin_taujet1->SetBinContent(16,1);
   dRmin_taujet1->SetBinContent(17,2);
   dRmin_taujet1->SetBinContent(19,1);
   dRmin_taujet1->SetBinContent(20,3);
   dRmin_taujet1->SetBinContent(21,1);
   dRmin_taujet1->SetBinContent(23,5);
   dRmin_taujet1->SetBinContent(26,4);
   dRmin_taujet1->SetBinContent(28,1);
   dRmin_taujet1->SetBinContent(30,1);
   dRmin_taujet1->SetBinContent(51,2018);
   dRmin_taujet1->SetBinError(1,2);
   dRmin_taujet1->SetBinError(4,1);
   dRmin_taujet1->SetBinError(5,1.414214);
   dRmin_taujet1->SetBinError(8,1);
   dRmin_taujet1->SetBinError(9,1.732051);
   dRmin_taujet1->SetBinError(10,1.414214);
   dRmin_taujet1->SetBinError(11,1.732051);
   dRmin_taujet1->SetBinError(12,1.414214);
   dRmin_taujet1->SetBinError(13,1.732051);
   dRmin_taujet1->SetBinError(14,1.732051);
   dRmin_taujet1->SetBinError(15,1.414214);
   dRmin_taujet1->SetBinError(16,1);
   dRmin_taujet1->SetBinError(17,1.414214);
   dRmin_taujet1->SetBinError(19,1);
   dRmin_taujet1->SetBinError(20,1.732051);
   dRmin_taujet1->SetBinError(21,1);
   dRmin_taujet1->SetBinError(23,2.236068);
   dRmin_taujet1->SetBinError(26,2);
   dRmin_taujet1->SetBinError(28,1);
   dRmin_taujet1->SetBinError(30,1);
   dRmin_taujet1->SetBinError(51,44.92215);
   dRmin_taujet1->SetEntries(2063);
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
   dRmin_taujet1->SetBinContent(1,3.497148);
   dRmin_taujet1->SetBinContent(4,1.364274);
   dRmin_taujet1->SetBinContent(5,1.584613);
   dRmin_taujet1->SetBinContent(8,0.6661534);
   dRmin_taujet1->SetBinContent(9,10.65265);
   dRmin_taujet1->SetBinContent(10,1.618837);
   dRmin_taujet1->SetBinContent(11,1.287454);
   dRmin_taujet1->SetBinContent(12,6.897738);
   dRmin_taujet1->SetBinContent(13,1.672484);
   dRmin_taujet1->SetBinContent(14,1.673205);
   dRmin_taujet1->SetBinContent(15,0.9705523);
   dRmin_taujet1->SetBinContent(16,0.2613983);
   dRmin_taujet1->SetBinContent(17,1.634964);
   dRmin_taujet1->SetBinContent(19,0.9098882);
   dRmin_taujet1->SetBinContent(20,2.199252);
   dRmin_taujet1->SetBinContent(21,0.8006196);
   dRmin_taujet1->SetBinContent(23,3.297152);
   dRmin_taujet1->SetBinContent(26,2.378623);
   dRmin_taujet1->SetBinContent(28,6.382382);
   dRmin_taujet1->SetBinContent(30,20.92528);
   dRmin_taujet1->SetBinContent(51,0.9054468);
   dRmin_taujet1->SetBinError(1,2.196775);
   dRmin_taujet1->SetBinError(4,1.542347);
   dRmin_taujet1->SetBinError(5,1.383547);
   dRmin_taujet1->SetBinError(8,0.8263061);
   dRmin_taujet1->SetBinError(9,8.283732);
   dRmin_taujet1->SetBinError(10,1.412438);
   dRmin_taujet1->SetBinError(11,0.9587876);
   dRmin_taujet1->SetBinError(12,6.204483);
   dRmin_taujet1->SetBinError(13,1.237115);
   dRmin_taujet1->SetBinError(14,1.236332);
   dRmin_taujet1->SetBinError(15,0.8574971);
   dRmin_taujet1->SetBinError(16,0.278679);
   dRmin_taujet1->SetBinError(17,1.3916);
   dRmin_taujet1->SetBinError(19,1.08563);
   dRmin_taujet1->SetBinError(20,1.680165);
   dRmin_taujet1->SetBinError(21,0.8679204);
   dRmin_taujet1->SetBinError(23,2.244887);
   dRmin_taujet1->SetBinError(26,1.517204);
   dRmin_taujet1->SetBinError(28,6.975418);
   dRmin_taujet1->SetBinError(30,23.17806);
   dRmin_taujet1->SetBinError(51,0.02381173);
   dRmin_taujet1->SetMinimum(0);
   dRmin_taujet1->SetMaximum(2);
   dRmin_taujet1->SetEntries(6.90271);
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
