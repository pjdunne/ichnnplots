{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:45:04 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.903555,1063.291,7.046272);
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
   stack->SetMaximum(1347419);
   
   TH1F *met_stack_5 = new TH1F("met_stack_5","stack",100,0,1000);
   met_stack_5->SetBinContent(1,0.4219446);
   met_stack_5->SetBinContent(2,0.7991637);
   met_stack_5->SetBinContent(3,1.340666);
   met_stack_5->SetBinContent(4,0.3908707);
   met_stack_5->SetBinContent(5,0.3577687);
   met_stack_5->SetBinContent(6,0.2464088);
   met_stack_5->SetBinContent(7,0.1711745);
   met_stack_5->SetBinContent(8,0.0741664);
   met_stack_5->SetBinContent(9,0.2198562);
   met_stack_5->SetBinContent(13,0.1021305);
   met_stack_5->SetBinContent(14,0.1382876);
   met_stack_5->SetBinContent(17,0.05356907);
   met_stack_5->SetBinContent(18,0.02671324);
   met_stack_5->SetBinContent(19,0.04053154);
   met_stack_5->SetBinContent(20,0.09533451);
   met_stack_5->SetBinError(1,0.1520929);
   met_stack_5->SetBinError(2,0.2069184);
   met_stack_5->SetBinError(3,0.2813593);
   met_stack_5->SetBinError(4,0.1087397);
   met_stack_5->SetBinError(5,0.122896);
   met_stack_5->SetBinError(6,0.1019091);
   met_stack_5->SetBinError(7,0.09098674);
   met_stack_5->SetBinError(8,0.04382655);
   met_stack_5->SetBinError(9,0.1343172);
   met_stack_5->SetBinError(13,0.0780643);
   met_stack_5->SetBinError(14,0.1136384);
   met_stack_5->SetBinError(17,0.05356907);
   met_stack_5->SetBinError(18,0.02671324);
   met_stack_5->SetBinError(19,0.04053154);
   met_stack_5->SetBinError(20,0.08760179);
   met_stack_5->SetMinimum(0.001974431);
   met_stack_5->SetMaximum(3538188);
   met_stack_5->SetEntries(125);
   met_stack_5->SetStats(0);
   met_stack_5->SetFillColor(4);
   met_stack_5->SetLineColor(4);
   met_stack_5->SetLineWidth(2);
   met_stack_5->SetMarkerColor(4);
   met_stack_5->SetMarkerStyle(21);
   met_stack_5->SetMarkerSize(0.8);
   met_stack_5->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_5->GetXaxis()->SetLabelFont(42);
   met_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_stack_5->GetXaxis()->SetLabelSize(0);
   met_stack_5->GetXaxis()->SetTitleSize(0);
   met_stack_5->GetXaxis()->SetTickLength(0.02);
   met_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_stack_5->GetXaxis()->SetTitleFont(42);
   met_stack_5->GetYaxis()->SetTitle("Events");
   met_stack_5->GetYaxis()->SetLabelFont(42);
   met_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_stack_5->GetYaxis()->SetLabelSize(0.035);
   met_stack_5->GetYaxis()->SetTitleSize(0.045);
   met_stack_5->GetYaxis()->SetTickLength(0.02);
   met_stack_5->GetYaxis()->SetTitleOffset(1.55);
   met_stack_5->GetYaxis()->SetTitleFont(42);
   met_stack_5->GetZaxis()->SetLabelFont(42);
   met_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_stack_5->GetZaxis()->SetLabelSize(0.035);
   met_stack_5->GetZaxis()->SetTitleSize(0.045);
   met_stack_5->GetZaxis()->SetTickLength(0.02);
   met_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_5);
   
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,0.4219446);
   met->SetBinContent(2,0.7991637);
   met->SetBinContent(3,1.340666);
   met->SetBinContent(4,0.3908707);
   met->SetBinContent(5,0.3577687);
   met->SetBinContent(6,0.2464088);
   met->SetBinContent(7,0.1711745);
   met->SetBinContent(8,0.0741664);
   met->SetBinContent(9,0.2198562);
   met->SetBinContent(13,0.1021305);
   met->SetBinContent(14,0.1382876);
   met->SetBinContent(17,0.05356907);
   met->SetBinContent(18,0.02671324);
   met->SetBinContent(19,0.04053154);
   met->SetBinContent(20,0.09533451);
   met->SetBinError(1,0.1520929);
   met->SetBinError(2,0.2069184);
   met->SetBinError(3,0.2813593);
   met->SetBinError(4,0.1087397);
   met->SetBinError(5,0.122896);
   met->SetBinError(6,0.1019091);
   met->SetBinError(7,0.09098674);
   met->SetBinError(8,0.04382655);
   met->SetBinError(9,0.1343172);
   met->SetBinError(13,0.0780643);
   met->SetBinError(14,0.1136384);
   met->SetBinError(17,0.05356907);
   met->SetBinError(18,0.02671324);
   met->SetBinError(19,0.04053154);
   met->SetBinError(20,0.08760179);
   met->SetMinimum(0.01);
   met->SetMaximum(1305000);
   met->SetEntries(125);
   met->SetStats(0);
   met->SetFillColor(4);
   met->SetLineColor(4);
   met->SetLineWidth(2);
   met->SetMarkerColor(4);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0);
   met->GetXaxis()->SetTitleSize(0);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Events");
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"HIST");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,0.1606098);
   met->SetBinContent(2,0.1303602);
   met->SetBinContent(3,1.490729);
   met->SetBinContent(4,1.096368);
   met->SetBinContent(5,1.174652);
   met->SetBinContent(6,1.993568);
   met->SetBinContent(7,4.198682);
   met->SetBinContent(8,3.985964);
   met->SetBinContent(9,0.4449272);
   met->SetBinContent(10,2.030145);
   met->SetBinContent(11,1.853973);
   met->SetBinContent(12,1.336656);
   met->SetBinContent(13,1.720831);
   met->SetBinContent(14,2.030488);
   met->SetBinContent(15,3.052679);
   met->SetBinContent(16,1.25271);
   met->SetBinContent(17,1.477945);
   met->SetBinContent(18,0.3920908);
   met->SetBinContent(19,0.4177457);
   met->SetBinContent(22,0.3873039);
   met->SetBinContent(23,1.274596);
   met->SetBinContent(24,0.7135496);
   met->SetBinContent(29,0.5568294);
   met->SetBinError(1,0.1606098);
   met->SetBinError(2,0.1303602);
   met->SetBinError(3,0.9269601);
   met->SetBinError(4,0.6503553);
   met->SetBinError(5,0.8171843);
   met->SetBinError(6,1.152094);
   met->SetBinError(7,1.590914);
   met->SetBinError(8,1.43735);
   met->SetBinError(9,0.4358354);
   met->SetBinError(10,0.9571039);
   met->SetBinError(11,1.109767);
   met->SetBinError(12,0.9491231);
   met->SetBinError(13,1.001737);
   met->SetBinError(14,1.045533);
   met->SetBinError(15,1.388533);
   met->SetBinError(16,0.9085057);
   met->SetBinError(17,1.045135);
   met->SetBinError(18,0.3920908);
   met->SetBinError(19,0.3633549);
   met->SetBinError(22,0.3152841);
   met->SetBinError(23,1.274596);
   met->SetBinError(24,0.7135496);
   met->SetBinError(29,0.5568294);
   met->SetEntries(78);
   met->SetStats(0);
   met->SetFillColor(5);
   met->SetLineColor(5);
   met->SetLineWidth(2);
   met->SetMarkerColor(5);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);
   met->SetFillColor(6);
   met->SetLineColor(6);
   met->SetLineWidth(2);
   met->SetMarkerColor(6);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met->SetLineColor(ci);
   met->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met->SetMarkerColor(ci);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,30.67447);
   met->SetBinContent(2,69.98897);
   met->SetBinContent(3,70.99665);
   met->SetBinContent(4,49.00655);
   met->SetBinContent(5,25.8272);
   met->SetBinContent(6,13.45751);
   met->SetBinContent(7,5.266451);
   met->SetBinContent(8,2.513835);
   met->SetBinContent(9,1.188917);
   met->SetBinContent(10,0.2955445);
   met->SetBinContent(11,0.1058109);
   met->SetBinContent(12,0.3049259);
   met->SetBinContent(13,0.1092405);
   met->SetBinContent(14,0.1685724);
   met->SetBinContent(16,0.296572);
   met->SetBinContent(19,0.08905806);
   met->SetBinContent(20,0.08654539);
   met->SetBinError(1,1.77644);
   met->SetBinError(2,2.699848);
   met->SetBinError(3,2.651324);
   met->SetBinError(4,2.301719);
   met->SetBinError(5,1.624511);
   met->SetBinError(6,1.165966);
   met->SetBinError(7,0.7260445);
   met->SetBinError(8,0.5633016);
   met->SetBinError(9,0.3176265);
   met->SetBinError(10,0.1558918);
   met->SetBinError(11,0.1058109);
   met->SetBinError(12,0.2554096);
   met->SetBinError(13,0.09295781);
   met->SetBinError(14,0.1316836);
   met->SetBinError(16,0.2174596);
   met->SetBinError(19,0.08905805);
   met->SetBinError(20,0.08654539);
   met->SetEntries(3913);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,7.537366);
   met->SetBinContent(2,16.62155);
   met->SetBinContent(3,15.99987);
   met->SetBinContent(4,11.39169);
   met->SetBinContent(5,5.874591);
   met->SetBinContent(6,2.905932);
   met->SetBinContent(7,2.668359);
   met->SetBinContent(8,4.174219);
   met->SetBinContent(9,4.352548);
   met->SetBinContent(10,5.266066);
   met->SetBinContent(11,7.477018);
   met->SetBinContent(12,7.372904);
   met->SetBinContent(13,9.731573);
   met->SetBinContent(14,8.207006);
   met->SetBinContent(15,8.230975);
   met->SetBinContent(16,7.153476);
   met->SetBinContent(17,6.564536);
   met->SetBinContent(18,6.36763);
   met->SetBinContent(19,5.368033);
   met->SetBinContent(20,4.491387);
   met->SetBinContent(21,4.207467);
   met->SetBinContent(22,3.750785);
   met->SetBinContent(23,3.154795);
   met->SetBinContent(24,2.811743);
   met->SetBinContent(25,2.170496);
   met->SetBinContent(26,2.451253);
   met->SetBinContent(27,1.968357);
   met->SetBinContent(28,1.288435);
   met->SetBinContent(29,1.22331);
   met->SetBinContent(30,1.193756);
   met->SetBinContent(31,0.8936365);
   met->SetBinContent(32,0.7651987);
   met->SetBinContent(33,0.5931204);
   met->SetBinContent(34,0.5060056);
   met->SetBinContent(35,0.5751341);
   met->SetBinContent(36,0.4899718);
   met->SetBinContent(37,0.3724308);
   met->SetBinContent(38,0.4605669);
   met->SetBinContent(39,0.2898486);
   met->SetBinContent(40,0.2281146);
   met->SetBinContent(41,0.1649808);
   met->SetBinContent(42,0.1117524);
   met->SetBinContent(43,0.1560748);
   met->SetBinContent(44,0.1830417);
   met->SetBinContent(45,0.103656);
   met->SetBinContent(46,0.1475367);
   met->SetBinContent(47,0.1401435);
   met->SetBinContent(48,0.02262921);
   met->SetBinContent(49,0.05402837);
   met->SetBinContent(50,0.03823306);
   met->SetBinContent(51,0.04652416);
   met->SetBinContent(53,0.04679125);
   met->SetBinContent(54,0.003996492);
   met->SetBinContent(55,0.01313781);
   met->SetBinContent(58,0.01337302);
   met->SetBinContent(59,0.02764606);
   met->SetBinContent(62,0.007107997);
   met->SetBinContent(64,0.01295078);
   met->SetBinContent(65,0.009689085);
   met->SetBinError(1,0.2070927);
   met->SetBinError(2,0.3075007);
   met->SetBinError(3,0.299878);
   met->SetBinError(4,0.2547389);
   met->SetBinError(5,0.1835714);
   met->SetBinError(6,0.1292744);
   met->SetBinError(7,0.1335193);
   met->SetBinError(8,0.1759753);
   met->SetBinError(9,0.1579338);
   met->SetBinError(10,0.1725173);
   met->SetBinError(11,0.2514352);
   met->SetBinError(12,0.2492405);
   met->SetBinError(13,0.3354419);
   met->SetBinError(14,0.3070435);
   met->SetBinError(15,0.3204581);
   met->SetBinError(16,0.297173);
   met->SetBinError(17,0.2881796);
   met->SetBinError(18,0.2861597);
   met->SetBinError(19,0.2633465);
   met->SetBinError(20,0.2405249);
   met->SetBinError(21,0.2333377);
   met->SetBinError(22,0.2204663);
   met->SetBinError(23,0.2030381);
   met->SetBinError(24,0.1930492);
   met->SetBinError(25,0.1692151);
   met->SetBinError(26,0.1810182);
   met->SetBinError(27,0.16018);
   met->SetBinError(28,0.1302605);
   met->SetBinError(29,0.1250039);
   met->SetBinError(30,0.1256513);
   met->SetBinError(31,0.110127);
   met->SetBinError(32,0.1004219);
   met->SetBinError(33,0.08634581);
   met->SetBinError(34,0.08015208);
   met->SetBinError(35,0.08589338);
   met->SetBinError(36,0.07984296);
   met->SetBinError(37,0.07060206);
   met->SetBinError(38,0.07803986);
   met->SetBinError(39,0.05952113);
   met->SetBinError(40,0.05760395);
   met->SetBinError(41,0.04787545);
   met->SetBinError(42,0.0400146);
   met->SetBinError(43,0.04711332);
   met->SetBinError(44,0.0482401);
   met->SetBinError(45,0.03485923);
   met->SetBinError(46,0.04339101);
   met->SetBinError(47,0.04504873);
   met->SetBinError(48,0.02262921);
   met->SetBinError(49,0.02713635);
   met->SetBinError(50,0.02036831);
   met->SetBinError(51,0.02346061);
   met->SetBinError(53,0.02779731);
   met->SetBinError(54,0.003996492);
   met->SetBinError(55,0.01313781);
   met->SetBinError(58,0.01337302);
   met->SetBinError(59,0.01971659);
   met->SetBinError(62,0.007107997);
   met->SetBinError(64,0.01295078);
   met->SetBinError(65,0.009689085);
   met->SetEntries(27040);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   stack->Draw("hist");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,33);
   met->SetBinContent(2,77);
   met->SetBinContent(3,87);
   met->SetBinContent(4,63);
   met->SetBinContent(5,41);
   met->SetBinContent(6,13);
   met->SetBinContent(7,6);
   met->SetBinContent(8,5);
   met->SetBinContent(9,1);
   met->SetBinContent(10,4);
   met->SetBinContent(11,2);
   met->SetBinContent(12,3);
   met->SetBinContent(13,4);
   met->SetBinContent(14,6);
   met->SetBinContent(15,2);
   met->SetBinContent(16,1);
   met->SetBinContent(17,1);
   met->SetBinContent(20,1);
   met->SetBinError(1,5.744563);
   met->SetBinError(2,8.774964);
   met->SetBinError(3,9.327379);
   met->SetBinError(4,7.937254);
   met->SetBinError(5,6.403124);
   met->SetBinError(6,3.605551);
   met->SetBinError(7,2.44949);
   met->SetBinError(8,2.236068);
   met->SetBinError(9,1);
   met->SetBinError(10,2);
   met->SetBinError(11,1.414214);
   met->SetBinError(12,1.732051);
   met->SetBinError(13,2);
   met->SetBinError(14,2.44949);
   met->SetBinError(15,1.414214);
   met->SetBinError(16,1);
   met->SetBinError(17,1);
   met->SetBinError(20,1);
   met->SetEntries(350);
   met->SetStats(0);
   met->SetFillColor(1);
   met->SetFillStyle(0);
   met->SetLineWidth(3);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(1.3);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("SAMEPE1");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);
   met->SetFillColor(1);
   met->SetFillStyle(0);
   met->SetLineStyle(2);
   met->SetLineWidth(3);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   TLegendEntry *entry=leg->AddEntry("met","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","EWK W+jets","f");

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
   entry=leg->AddEntry("met","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","Dibosons","f");
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
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,0.8599922);
   met->SetBinContent(2,0.8877014);
   met->SetBinContent(3,0.9831925);
   met->SetBinContent(4,1.02448);
   met->SetBinContent(5,1.247093);
   met->SetBinContent(6,0.7081763);
   met->SetBinContent(7,0.4944991);
   met->SetBinContent(8,0.4684272);
   met->SetBinContent(9,0.1670455);
   met->SetBinContent(10,0.5268874);
   met->SetBinContent(11,0.2119362);
   met->SetBinContent(12,0.3327977);
   met->SetBinContent(13,0.3459716);
   met->SetBinContent(14,0.5765868);
   met->SetBinContent(15,0.1772476);
   met->SetBinContent(16,0.1149061);
   met->SetBinContent(17,0.1243397);
   met->SetBinContent(20,0.2184392);
   met->SetBinError(1,0.1550203);
   met->SetBinError(2,0.104924);
   met->SetBinError(3,0.1099825);
   met->SetBinError(4,0.1351499);
   met->SetBinError(5,0.2067351);
   met->SetBinError(6,0.2064013);
   met->SetBinError(7,0.2141587);
   met->SetBinError(8,0.2203051);
   met->SetBinError(9,0.1677799);
   met->SetBinError(10,0.2721678);
   met->SetBinError(11,0.1520434);
   met->SetBinError(12,0.1957536);
   met->SetBinError(13,0.1758725);
   met->SetBinError(14,0.2431203);
   met->SetBinError(15,0.1273163);
   met->SetBinError(16,0.1156328);
   met->SetBinError(17,0.1254644);
   met->SetBinError(20,0.2187795);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(151.4719);
   met->SetStats(0);
   met->SetFillStyle(0);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.1);
   met->GetXaxis()->SetTitleSize(0.12);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Data/MC");
   met->GetYaxis()->SetNdivisions(505);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.1);
   met->GetYaxis()->SetTitleSize(0.12);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(0.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
