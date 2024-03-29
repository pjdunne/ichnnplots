{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:48 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.884529,1063.291,6.734747);
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
   stack->SetMaximum(698315);
   
   TH1F *met_noMuons_stack_10 = new TH1F("met_noMuons_stack_10","stack",100,0,1000);
   met_noMuons_stack_10->SetBinContent(14,0.09954202);
   met_noMuons_stack_10->SetBinContent(15,0.2422546);
   met_noMuons_stack_10->SetBinContent(16,1.990229);
   met_noMuons_stack_10->SetBinContent(17,2.265459);
   met_noMuons_stack_10->SetBinContent(18,0.1306029);
   met_noMuons_stack_10->SetBinContent(19,2.019954);
   met_noMuons_stack_10->SetBinContent(20,0.1486307);
   met_noMuons_stack_10->SetBinContent(21,1.936148);
   met_noMuons_stack_10->SetBinContent(22,2.171408);
   met_noMuons_stack_10->SetBinContent(28,0.6096776);
   met_noMuons_stack_10->SetBinError(14,0.0712311);
   met_noMuons_stack_10->SetBinError(15,0.1459235);
   met_noMuons_stack_10->SetBinError(16,1.926785);
   met_noMuons_stack_10->SetBinError(17,2.12431);
   met_noMuons_stack_10->SetBinError(18,0.1025071);
   met_noMuons_stack_10->SetBinError(19,2.019954);
   met_noMuons_stack_10->SetBinError(20,0.1051125);
   met_noMuons_stack_10->SetBinError(21,1.936148);
   met_noMuons_stack_10->SetBinError(22,2.171408);
   met_noMuons_stack_10->SetBinError(28,0.6096775);
   met_noMuons_stack_10->SetMinimum(0.002031684);
   met_noMuons_stack_10->SetMaximum(1793839);
   met_noMuons_stack_10->SetEntries(19);
   met_noMuons_stack_10->SetStats(0);
   met_noMuons_stack_10->SetFillColor(4);
   met_noMuons_stack_10->SetLineColor(4);
   met_noMuons_stack_10->SetLineWidth(2);
   met_noMuons_stack_10->SetMarkerColor(4);
   met_noMuons_stack_10->SetMarkerStyle(21);
   met_noMuons_stack_10->SetMarkerSize(0.8);
   met_noMuons_stack_10->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_noMuons_stack_10->GetXaxis()->SetLabelFont(42);
   met_noMuons_stack_10->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_10->GetXaxis()->SetLabelSize(0);
   met_noMuons_stack_10->GetXaxis()->SetTitleSize(0);
   met_noMuons_stack_10->GetXaxis()->SetTickLength(0.02);
   met_noMuons_stack_10->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons_stack_10->GetXaxis()->SetTitleFont(42);
   met_noMuons_stack_10->GetYaxis()->SetTitle("Events");
   met_noMuons_stack_10->GetYaxis()->SetLabelFont(42);
   met_noMuons_stack_10->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_10->GetYaxis()->SetLabelSize(0.035);
   met_noMuons_stack_10->GetYaxis()->SetTitleSize(0.045);
   met_noMuons_stack_10->GetYaxis()->SetTickLength(0.02);
   met_noMuons_stack_10->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons_stack_10->GetYaxis()->SetTitleFont(42);
   met_noMuons_stack_10->GetZaxis()->SetLabelFont(42);
   met_noMuons_stack_10->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_10->GetZaxis()->SetLabelSize(0.035);
   met_noMuons_stack_10->GetZaxis()->SetTitleSize(0.045);
   met_noMuons_stack_10->GetZaxis()->SetTickLength(0.02);
   met_noMuons_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_noMuons_stack_10);
   
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(14,0.09954202);
   met_noMuons->SetBinContent(15,0.2422546);
   met_noMuons->SetBinContent(16,1.990229);
   met_noMuons->SetBinContent(17,2.265459);
   met_noMuons->SetBinContent(18,0.1306029);
   met_noMuons->SetBinContent(19,2.019954);
   met_noMuons->SetBinContent(20,0.1486307);
   met_noMuons->SetBinContent(21,1.936148);
   met_noMuons->SetBinContent(22,2.171408);
   met_noMuons->SetBinContent(28,0.6096776);
   met_noMuons->SetBinError(14,0.0712311);
   met_noMuons->SetBinError(15,0.1459235);
   met_noMuons->SetBinError(16,1.926785);
   met_noMuons->SetBinError(17,2.12431);
   met_noMuons->SetBinError(18,0.1025071);
   met_noMuons->SetBinError(19,2.019954);
   met_noMuons->SetBinError(20,0.1051125);
   met_noMuons->SetBinError(21,1.936148);
   met_noMuons->SetBinError(22,2.171408);
   met_noMuons->SetBinError(28,0.6096775);
   met_noMuons->SetMinimum(0.01);
   met_noMuons->SetMaximum(525000);
   met_noMuons->SetEntries(19);
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
   met_noMuons->SetBinContent(13,4.596408);
   met_noMuons->SetBinContent(14,14.80023);
   met_noMuons->SetBinContent(15,13.41272);
   met_noMuons->SetBinContent(16,7.283834);
   met_noMuons->SetBinContent(17,6.935033);
   met_noMuons->SetBinContent(18,5.117684);
   met_noMuons->SetBinContent(19,7.844678);
   met_noMuons->SetBinContent(20,7.328042);
   met_noMuons->SetBinContent(21,5.964149);
   met_noMuons->SetBinContent(22,5.031092);
   met_noMuons->SetBinContent(23,2.512707);
   met_noMuons->SetBinContent(24,1.859301);
   met_noMuons->SetBinContent(25,0.7491011);
   met_noMuons->SetBinContent(26,0.7935151);
   met_noMuons->SetBinContent(27,1.197037);
   met_noMuons->SetBinContent(28,1.73189);
   met_noMuons->SetBinContent(30,1.063904);
   met_noMuons->SetBinContent(31,1.075731);
   met_noMuons->SetBinContent(33,0.7141592);
   met_noMuons->SetBinContent(42,1.074504);
   met_noMuons->SetBinContent(43,0.3727424);
   met_noMuons->SetBinError(13,1.808983);
   met_noMuons->SetBinError(14,3.006523);
   met_noMuons->SetBinError(15,2.932524);
   met_noMuons->SetBinError(16,2.412861);
   met_noMuons->SetBinError(17,2.064238);
   met_noMuons->SetBinError(18,1.87044);
   met_noMuons->SetBinError(19,2.335789);
   met_noMuons->SetBinError(20,2.401142);
   met_noMuons->SetBinError(21,2.112796);
   met_noMuons->SetBinError(22,1.778173);
   met_noMuons->SetBinError(23,1.222284);
   met_noMuons->SetBinError(24,1.083514);
   met_noMuons->SetBinError(25,0.7491011);
   met_noMuons->SetBinError(26,0.7935151);
   met_noMuons->SetBinError(27,0.8857074);
   met_noMuons->SetBinError(28,1.05294);
   met_noMuons->SetBinError(30,1.063904);
   met_noMuons->SetBinError(31,1.075731);
   met_noMuons->SetBinError(33,0.7141592);
   met_noMuons->SetBinError(42,1.074504);
   met_noMuons->SetBinError(43,0.3727423);
   met_noMuons->SetEntries(165);
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
   met_noMuons->SetBinContent(13,4.345272);
   met_noMuons->SetBinContent(14,27.13391);
   met_noMuons->SetBinContent(15,22.84645);
   met_noMuons->SetBinContent(16,19.08519);
   met_noMuons->SetBinContent(17,22.74282);
   met_noMuons->SetBinContent(18,13.85572);
   met_noMuons->SetBinContent(19,13.08863);
   met_noMuons->SetBinContent(20,11.47828);
   met_noMuons->SetBinContent(21,10.44489);
   met_noMuons->SetBinContent(22,11.02784);
   met_noMuons->SetBinContent(23,2.904922);
   met_noMuons->SetBinContent(24,2.926424);
   met_noMuons->SetBinContent(25,1.905144);
   met_noMuons->SetBinContent(26,4.540894);
   met_noMuons->SetBinContent(27,2.09359);
   met_noMuons->SetBinContent(28,1.884961);
   met_noMuons->SetBinContent(29,2.324831);
   met_noMuons->SetBinContent(30,1.935537);
   met_noMuons->SetBinContent(31,1.35433);
   met_noMuons->SetBinContent(32,0.6812827);
   met_noMuons->SetBinContent(33,1.146417);
   met_noMuons->SetBinContent(34,1.310774);
   met_noMuons->SetBinContent(36,0.9079249);
   met_noMuons->SetBinContent(38,0.4060623);
   met_noMuons->SetBinContent(39,1.264508);
   met_noMuons->SetBinContent(41,0.4243258);
   met_noMuons->SetBinContent(42,1.160121);
   met_noMuons->SetBinError(13,1.276464);
   met_noMuons->SetBinError(14,3.612705);
   met_noMuons->SetBinError(15,3.429723);
   met_noMuons->SetBinError(16,2.872394);
   met_noMuons->SetBinError(17,3.430096);
   met_noMuons->SetBinError(18,2.680977);
   met_noMuons->SetBinError(19,2.622938);
   met_noMuons->SetBinError(20,2.616903);
   met_noMuons->SetBinError(21,2.368458);
   met_noMuons->SetBinError(22,2.364182);
   met_noMuons->SetBinError(23,1.364562);
   met_noMuons->SetBinError(24,1.072928);
   met_noMuons->SetBinError(25,0.8539664);
   met_noMuons->SetBinError(26,1.753845);
   met_noMuons->SetBinError(27,0.8426857);
   met_noMuons->SetBinError(28,0.9887251);
   met_noMuons->SetBinError(29,1.100015);
   met_noMuons->SetBinError(30,0.8670037);
   met_noMuons->SetBinError(31,0.6852589);
   met_noMuons->SetBinError(32,0.5707337);
   met_noMuons->SetBinError(33,0.7315737);
   met_noMuons->SetBinError(34,0.9543836);
   met_noMuons->SetBinError(36,0.6471394);
   met_noMuons->SetBinError(38,0.4060623);
   met_noMuons->SetBinError(39,0.9168079);
   met_noMuons->SetBinError(41,0.4243258);
   met_noMuons->SetBinError(42,1.160121);
   met_noMuons->SetEntries(460);
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
   met_noMuons->SetBinContent(12,0.04435837);
   met_noMuons->SetBinContent(13,0.9440445);
   met_noMuons->SetBinContent(14,3.740323);
   met_noMuons->SetBinContent(15,3.702243);
   met_noMuons->SetBinContent(16,3.306492);
   met_noMuons->SetBinContent(17,2.777078);
   met_noMuons->SetBinContent(18,2.263855);
   met_noMuons->SetBinContent(19,2.029533);
   met_noMuons->SetBinContent(20,1.938796);
   met_noMuons->SetBinContent(21,1.761875);
   met_noMuons->SetBinContent(22,1.260163);
   met_noMuons->SetBinContent(23,1.301507);
   met_noMuons->SetBinContent(24,0.8624557);
   met_noMuons->SetBinContent(25,0.8083487);
   met_noMuons->SetBinContent(26,0.8549548);
   met_noMuons->SetBinContent(27,0.680272);
   met_noMuons->SetBinContent(28,0.6004824);
   met_noMuons->SetBinContent(29,0.3775764);
   met_noMuons->SetBinContent(30,0.3119099);
   met_noMuons->SetBinContent(31,0.4078893);
   met_noMuons->SetBinContent(32,0.2349917);
   met_noMuons->SetBinContent(33,0.2150051);
   met_noMuons->SetBinContent(34,0.1805332);
   met_noMuons->SetBinContent(35,0.211571);
   met_noMuons->SetBinContent(36,0.1292047);
   met_noMuons->SetBinContent(37,0.07828561);
   met_noMuons->SetBinContent(38,0.1239935);
   met_noMuons->SetBinContent(39,0.09971898);
   met_noMuons->SetBinContent(40,0.06068554);
   met_noMuons->SetBinContent(41,0.01941757);
   met_noMuons->SetBinContent(42,0.1020147);
   met_noMuons->SetBinContent(43,0.06285015);
   met_noMuons->SetBinContent(44,0.08752366);
   met_noMuons->SetBinContent(45,0.04192523);
   met_noMuons->SetBinContent(46,0.02776693);
   met_noMuons->SetBinContent(47,0.05454065);
   met_noMuons->SetBinContent(50,0.05982388);
   met_noMuons->SetBinContent(52,0.02318903);
   met_noMuons->SetBinContent(53,0.0162683);
   met_noMuons->SetBinError(12,0.02256035);
   met_noMuons->SetBinError(13,0.131863);
   met_noMuons->SetBinError(14,0.2634584);
   met_noMuons->SetBinError(15,0.2707508);
   met_noMuons->SetBinError(16,0.2532511);
   met_noMuons->SetBinError(17,0.2340383);
   met_noMuons->SetBinError(18,0.2142707);
   met_noMuons->SetBinError(19,0.2084175);
   met_noMuons->SetBinError(20,0.2048992);
   met_noMuons->SetBinError(21,0.1877799);
   met_noMuons->SetBinError(22,0.1620148);
   met_noMuons->SetBinError(23,0.1612786);
   met_noMuons->SetBinError(24,0.1338381);
   met_noMuons->SetBinError(25,0.1317395);
   met_noMuons->SetBinError(26,0.1343103);
   met_noMuons->SetBinError(27,0.1171206);
   met_noMuons->SetBinError(28,0.1144879);
   met_noMuons->SetBinError(29,0.09133696);
   met_noMuons->SetBinError(30,0.08066904);
   met_noMuons->SetBinError(31,0.09311081);
   met_noMuons->SetBinError(32,0.07578074);
   met_noMuons->SetBinError(33,0.06575218);
   met_noMuons->SetBinError(34,0.06023594);
   met_noMuons->SetBinError(35,0.06702636);
   met_noMuons->SetBinError(36,0.05795126);
   met_noMuons->SetBinError(37,0.03922208);
   met_noMuons->SetBinError(38,0.05491346);
   met_noMuons->SetBinError(39,0.04649647);
   met_noMuons->SetBinError(40,0.0350676);
   met_noMuons->SetBinError(41,0.01941757);
   met_noMuons->SetBinError(42,0.04852763);
   met_noMuons->SetBinError(43,0.03632269);
   met_noMuons->SetBinError(44,0.04391742);
   met_noMuons->SetBinError(45,0.02968939);
   met_noMuons->SetBinError(46,0.02069726);
   met_noMuons->SetBinError(47,0.03961712);
   met_noMuons->SetBinError(50,0.0345703);
   met_noMuons->SetBinError(52,0.02318903);
   met_noMuons->SetBinError(53,0.0162683);
   met_noMuons->SetEntries(1830);
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
   met_noMuons->SetBinContent(13,0.1897722);
   met_noMuons->SetBinContent(14,0.6645356);
   met_noMuons->SetBinContent(15,0.5383443);
   met_noMuons->SetBinContent(16,0.3124025);
   met_noMuons->SetBinContent(17,0.09041137);
   met_noMuons->SetBinContent(18,0.6098331);
   met_noMuons->SetBinContent(19,0.3553735);
   met_noMuons->SetBinContent(20,0.006221783);
   met_noMuons->SetBinContent(21,0.08701482);
   met_noMuons->SetBinContent(22,0.04288836);
   met_noMuons->SetBinContent(23,0.1165597);
   met_noMuons->SetBinContent(24,0.02199414);
   met_noMuons->SetBinContent(26,0.08303766);
   met_noMuons->SetBinContent(29,0.08120943);
   met_noMuons->SetBinError(13,0.1369854);
   met_noMuons->SetBinError(14,0.218444);
   met_noMuons->SetBinError(15,0.229606);
   met_noMuons->SetBinError(16,0.1439902);
   met_noMuons->SetBinError(17,0.08451009);
   met_noMuons->SetBinError(18,0.2826659);
   met_noMuons->SetBinError(19,0.1913209);
   met_noMuons->SetBinError(20,0.006221784);
   met_noMuons->SetBinError(21,0.08381041);
   met_noMuons->SetBinError(22,0.04288836);
   met_noMuons->SetBinError(23,0.1165597);
   met_noMuons->SetBinError(24,0.02199414);
   met_noMuons->SetBinError(26,0.08303766);
   met_noMuons->SetBinError(29,0.08120943);
   met_noMuons->SetEntries(46);
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
   met_noMuons->SetBinContent(13,0.04259291);
   met_noMuons->SetBinContent(14,0.1157904);
   met_noMuons->SetBinContent(15,0.1026729);
   met_noMuons->SetBinContent(16,0.08974198);
   met_noMuons->SetBinContent(17,0.09230407);
   met_noMuons->SetBinContent(18,0.03662256);
   met_noMuons->SetBinContent(19,0.06082268);
   met_noMuons->SetBinContent(20,0.03706214);
   met_noMuons->SetBinContent(21,0.0521428);
   met_noMuons->SetBinContent(22,0.03799982);
   met_noMuons->SetBinContent(23,0.04874163);
   met_noMuons->SetBinContent(24,0.03825184);
   met_noMuons->SetBinContent(25,0.03370051);
   met_noMuons->SetBinContent(26,0.03365676);
   met_noMuons->SetBinContent(27,0.01272686);
   met_noMuons->SetBinContent(28,0.01359155);
   met_noMuons->SetBinContent(29,0.01086684);
   met_noMuons->SetBinContent(30,0.006769409);
   met_noMuons->SetBinContent(32,0.01234612);
   met_noMuons->SetBinContent(35,0.01190025);
   met_noMuons->SetBinError(13,0.01629722);
   met_noMuons->SetBinError(14,0.02627408);
   met_noMuons->SetBinError(15,0.02451455);
   met_noMuons->SetBinError(16,0.02261716);
   met_noMuons->SetBinError(17,0.02419548);
   met_noMuons->SetBinError(18,0.01506383);
   met_noMuons->SetBinError(19,0.01968818);
   met_noMuons->SetBinError(20,0.01678798);
   met_noMuons->SetBinError(21,0.01936103);
   met_noMuons->SetBinError(22,0.01511234);
   met_noMuons->SetBinError(23,0.01854532);
   met_noMuons->SetBinError(24,0.01609168);
   met_noMuons->SetBinError(25,0.0143849);
   met_noMuons->SetBinError(26,0.01576321);
   met_noMuons->SetBinError(27,0.008999462);
   met_noMuons->SetBinError(28,0.01011821);
   met_noMuons->SetBinError(29,0.007948733);
   met_noMuons->SetBinError(30,0.006769409);
   met_noMuons->SetBinError(32,0.008731894);
   met_noMuons->SetBinError(35,0.008693541);
   met_noMuons->SetEntries(163);
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
   met_noMuons->SetBinContent(14,33);
   met_noMuons->SetBinContent(15,35);
   met_noMuons->SetBinContent(16,30);
   met_noMuons->SetBinContent(17,21);
   met_noMuons->SetBinContent(18,14);
   met_noMuons->SetBinContent(19,11);
   met_noMuons->SetBinContent(20,9);
   met_noMuons->SetBinContent(21,15);
   met_noMuons->SetBinContent(22,5);
   met_noMuons->SetBinContent(23,12);
   met_noMuons->SetBinContent(24,4);
   met_noMuons->SetBinContent(25,4);
   met_noMuons->SetBinContent(26,5);
   met_noMuons->SetBinContent(27,4);
   met_noMuons->SetBinContent(28,3);
   met_noMuons->SetBinContent(29,1);
   met_noMuons->SetBinContent(30,1);
   met_noMuons->SetBinContent(31,2);
   met_noMuons->SetBinContent(32,1);
   met_noMuons->SetBinContent(37,2);
   met_noMuons->SetBinContent(41,1);
   met_noMuons->SetBinContent(46,1);
   met_noMuons->SetBinContent(55,1);
   met_noMuons->SetBinError(14,5.744563);
   met_noMuons->SetBinError(15,5.91608);
   met_noMuons->SetBinError(16,5.477226);
   met_noMuons->SetBinError(17,4.582576);
   met_noMuons->SetBinError(18,3.741657);
   met_noMuons->SetBinError(19,3.316625);
   met_noMuons->SetBinError(20,3);
   met_noMuons->SetBinError(21,3.872983);
   met_noMuons->SetBinError(22,2.236068);
   met_noMuons->SetBinError(23,3.464102);
   met_noMuons->SetBinError(24,2);
   met_noMuons->SetBinError(25,2);
   met_noMuons->SetBinError(26,2.236068);
   met_noMuons->SetBinError(27,2);
   met_noMuons->SetBinError(28,1.732051);
   met_noMuons->SetBinError(29,1);
   met_noMuons->SetBinError(30,1);
   met_noMuons->SetBinError(31,1.414214);
   met_noMuons->SetBinError(32,1);
   met_noMuons->SetBinError(37,1.414214);
   met_noMuons->SetBinError(41,1);
   met_noMuons->SetBinError(46,1);
   met_noMuons->SetBinError(55,1);
   met_noMuons->SetEntries(215);
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
   TLatex *   tex = new TLatex(0.95,0.965,"CJVfail");
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
   met_noMuons->SetBinContent(14,0.7103681);
   met_noMuons->SetBinContent(15,0.8620173);
   met_noMuons->SetBinContent(16,0.9974179);
   met_noMuons->SetBinContent(17,0.6434287);
   met_noMuons->SetBinContent(18,0.6397451);
   met_noMuons->SetBinContent(19,0.4705068);
   met_noMuons->SetBinContent(20,0.4329337);
   met_noMuons->SetBinContent(21,0.8192211);
   met_noMuons->SetBinContent(22,0.2873566);
   met_noMuons->SetBinContent(23,1.743062);
   met_noMuons->SetBinContent(24,0.7007185);
   met_noMuons->SetBinContent(25,1.144068);
   met_noMuons->SetBinContent(26,0.7928883);
   met_noMuons->SetBinContent(27,1.00411);
   met_noMuons->SetBinContent(28,0.7090648);
   met_noMuons->SetBinContent(29,0.3578479);
   met_noMuons->SetBinContent(30,0.3013754);
   met_noMuons->SetBinContent(31,0.7047341);
   met_noMuons->SetBinContent(32,1.076866);
   met_noMuons->SetBinContent(37,25.54748);
   met_noMuons->SetBinContent(41,2.253555);
   met_noMuons->SetBinContent(46,36.01406);
   met_noMuons->SetBinError(14,0.1431248);
   met_noMuons->SetBinError(15,0.1745453);
   met_noMuons->SetBinError(16,0.2207501);
   met_noMuons->SetBinError(17,0.1611441);
   met_noMuons->SetBinError(18,0.1961483);
   met_noMuons->SetBinError(19,0.1586);
   met_noMuons->SetBinError(20,0.1622182);
   met_noMuons->SetBinError(21,0.2549355);
   met_noMuons->SetBinError(22,0.137511);
   met_noMuons->SetBinError(23,0.68621);
   met_noMuons->SetBinError(24,0.3975781);
   met_noMuons->SetBinError(25,0.6835747);
   met_noMuons->SetBinError(26,0.4297854);
   met_noMuons->SetBinError(27,0.5898252);
   met_noMuons->SetBinError(28,0.4759813);
   met_noMuons->SetBinError(29,0.3848939);
   met_noMuons->SetBinError(30,0.3262208);
   met_noMuons->SetBinError(31,0.5909107);
   met_noMuons->SetBinError(32,1.267086);
   met_noMuons->SetBinError(37,22.13971);
   met_noMuons->SetBinError(41,3.119617);
   met_noMuons->SetBinError(46,44.91821);
   met_noMuons->SetMinimum(0);
   met_noMuons->SetMaximum(2);
   met_noMuons->SetEntries(2.425641);
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
