{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:09 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.942566,765.5696,7.7031);
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
   stack->SetMaximum(5395740);
   
   TH1F *met_stack_4 = new TH1F("met_stack_4","stack",50,0,1000);
   met_stack_4->SetBinContent(7,4.271937);
   met_stack_4->SetBinContent(8,11.99755);
   met_stack_4->SetBinContent(9,3.545794);
   met_stack_4->SetBinContent(10,7.642717);
   met_stack_4->SetBinContent(11,8.608253);
   met_stack_4->SetBinContent(12,0.7386779);
   met_stack_4->SetBinContent(13,2.634369);
   met_stack_4->SetBinContent(15,1.891787);
   met_stack_4->SetBinContent(16,0.3137336);
   met_stack_4->SetBinContent(17,0.06048273);
   met_stack_4->SetBinContent(18,0.1079199);
   met_stack_4->SetBinContent(19,2.269329);
   met_stack_4->SetBinContent(20,0.06794821);
   met_stack_4->SetBinContent(22,0.2307088);
   met_stack_4->SetBinContent(23,0.1641716);
   met_stack_4->SetBinContent(25,2.493825);
   met_stack_4->SetBinContent(26,0.1217584);
   met_stack_4->SetBinError(7,2.356184);
   met_stack_4->SetBinError(8,4.376783);
   met_stack_4->SetBinError(9,2.054892);
   met_stack_4->SetBinError(10,3.652541);
   met_stack_4->SetBinError(11,4.066807);
   met_stack_4->SetBinError(12,0.2650634);
   met_stack_4->SetBinError(13,1.991723);
   met_stack_4->SetBinError(15,1.291597);
   met_stack_4->SetBinError(16,0.1852039);
   met_stack_4->SetBinError(17,0.06048273);
   met_stack_4->SetBinError(18,0.08182962);
   met_stack_4->SetBinError(19,2.159643);
   met_stack_4->SetBinError(20,0.06794822);
   met_stack_4->SetBinError(22,0.1637284);
   met_stack_4->SetBinError(23,0.1226729);
   met_stack_4->SetBinError(25,2.493825);
   met_stack_4->SetBinError(26,0.1217584);
   met_stack_4->SetMinimum(0.001863577);
   met_stack_4->SetMaximum(1.481891e+07);
   met_stack_4->SetEntries(136);
   met_stack_4->SetStats(0);
   met_stack_4->SetFillColor(4);
   met_stack_4->SetLineColor(4);
   met_stack_4->SetLineWidth(2);
   met_stack_4->SetMarkerColor(4);
   met_stack_4->SetMarkerStyle(21);
   met_stack_4->SetMarkerSize(0.8);
   met_stack_4->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_4->GetXaxis()->SetRange(1,36);
   met_stack_4->GetXaxis()->SetLabelFont(42);
   met_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_stack_4->GetXaxis()->SetLabelSize(0);
   met_stack_4->GetXaxis()->SetTitleSize(0);
   met_stack_4->GetXaxis()->SetTickLength(0.02);
   met_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_stack_4->GetXaxis()->SetTitleFont(42);
   met_stack_4->GetYaxis()->SetTitle("Events");
   met_stack_4->GetYaxis()->SetLabelFont(42);
   met_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_stack_4->GetYaxis()->SetLabelSize(0.035);
   met_stack_4->GetYaxis()->SetTitleSize(0.045);
   met_stack_4->GetYaxis()->SetTickLength(0.02);
   met_stack_4->GetYaxis()->SetTitleOffset(1.55);
   met_stack_4->GetYaxis()->SetTitleFont(42);
   met_stack_4->GetZaxis()->SetLabelFont(42);
   met_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_stack_4->GetZaxis()->SetLabelSize(0.035);
   met_stack_4->GetZaxis()->SetTitleSize(0.045);
   met_stack_4->GetZaxis()->SetTickLength(0.02);
   met_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_4);
   
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,4.271937);
   met->SetBinContent(8,11.99755);
   met->SetBinContent(9,3.545794);
   met->SetBinContent(10,7.642717);
   met->SetBinContent(11,8.608253);
   met->SetBinContent(12,0.7386779);
   met->SetBinContent(13,2.634369);
   met->SetBinContent(15,1.891787);
   met->SetBinContent(16,0.3137336);
   met->SetBinContent(17,0.06048273);
   met->SetBinContent(18,0.1079199);
   met->SetBinContent(19,2.269329);
   met->SetBinContent(20,0.06794821);
   met->SetBinContent(22,0.2307088);
   met->SetBinContent(23,0.1641716);
   met->SetBinContent(25,2.493825);
   met->SetBinContent(26,0.1217584);
   met->SetBinError(7,2.356184);
   met->SetBinError(8,4.376783);
   met->SetBinError(9,2.054892);
   met->SetBinError(10,3.652541);
   met->SetBinError(11,4.066807);
   met->SetBinError(12,0.2650634);
   met->SetBinError(13,1.991723);
   met->SetBinError(15,1.291597);
   met->SetBinError(16,0.1852039);
   met->SetBinError(17,0.06048273);
   met->SetBinError(18,0.08182962);
   met->SetBinError(19,2.159643);
   met->SetBinError(20,0.06794822);
   met->SetBinError(22,0.1637284);
   met->SetBinError(23,0.1226729);
   met->SetBinError(25,2.493825);
   met->SetBinError(26,0.1217584);
   met->SetMinimum(0.01);
   met->SetMaximum(3675000);
   met->SetEntries(136);
   met->SetStats(0);
   met->SetFillColor(4);
   met->SetLineColor(4);
   met->SetLineWidth(2);
   met->SetMarkerColor(4);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,44.37546);
   met->SetBinContent(8,66.36674);
   met->SetBinContent(9,44.14092);
   met->SetBinContent(10,37.88634);
   met->SetBinContent(11,31.12592);
   met->SetBinContent(12,13.93117);
   met->SetBinContent(13,13.42174);
   met->SetBinContent(14,10.81662);
   met->SetBinContent(15,9.387012);
   met->SetBinContent(16,5.596012);
   met->SetBinContent(17,2.432212);
   met->SetBinContent(18,1.022651);
   met->SetBinContent(19,0.7803122);
   met->SetBinContent(21,2.832041);
   met->SetBinContent(22,1.424753);
   met->SetBinContent(24,0.516127);
   met->SetBinContent(27,0.7252759);
   met->SetBinError(7,5.258972);
   met->SetBinError(8,6.641015);
   met->SetBinError(9,5.720785);
   met->SetBinError(10,5.304984);
   met->SetBinError(11,4.639786);
   met->SetBinError(12,3.085987);
   met->SetBinError(13,3.05673);
   met->SetBinError(14,2.839758);
   met->SetBinError(15,2.682656);
   met->SetBinError(16,2.051521);
   met->SetBinError(17,1.411439);
   met->SetBinError(18,0.8053651);
   met->SetBinError(19,0.7276954);
   met->SetBinError(21,1.506622);
   met->SetBinError(22,1.116093);
   met->SetBinError(24,0.516127);
   met->SetBinError(27,0.7252759);
   met->SetEntries(519);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,137.8862);
   met->SetBinContent(8,214.4933);
   met->SetBinContent(9,158.3627);
   met->SetBinContent(10,133.7697);
   met->SetBinContent(11,84.21968);
   met->SetBinContent(12,51.22394);
   met->SetBinContent(13,39.5125);
   met->SetBinContent(14,36.13777);
   met->SetBinContent(15,19.87675);
   met->SetBinContent(16,18.35951);
   met->SetBinContent(17,16.43547);
   met->SetBinContent(18,10.9818);
   met->SetBinContent(19,3.547779);
   met->SetBinContent(20,5.608276);
   met->SetBinContent(21,6.18829);
   met->SetBinContent(22,2.625427);
   met->SetBinContent(23,2.027759);
   met->SetBinContent(24,0.86181);
   met->SetBinContent(25,0.6893657);
   met->SetBinContent(26,0.6558322);
   met->SetBinContent(27,1.611367);
   met->SetBinContent(28,0.154503);
   met->SetBinContent(35,0.223412);
   met->SetBinContent(46,0.7308969);
   met->SetBinError(7,9.735218);
   met->SetBinError(8,11.97018);
   met->SetBinError(9,10.11796);
   met->SetBinError(10,9.778056);
   met->SetBinError(11,7.556039);
   met->SetBinError(12,5.867082);
   met->SetBinError(13,4.614607);
   met->SetBinError(14,5.06872);
   met->SetBinError(15,3.359713);
   met->SetBinError(16,3.195553);
   met->SetBinError(17,3.323642);
   met->SetBinError(18,2.488618);
   met->SetBinError(19,1.570025);
   met->SetBinError(20,1.633717);
   met->SetBinError(21,1.987358);
   met->SetBinError(22,1.468796);
   met->SetBinError(23,1.013561);
   met->SetBinError(24,0.5769642);
   met->SetBinError(25,0.5021958);
   met->SetBinError(26,0.6558322);
   met->SetBinError(27,1.26651);
   met->SetBinError(28,0.1542713);
   met->SetBinError(35,0.223412);
   met->SetBinError(46,0.730897);
   met->SetEntries(2045);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,36.73153);
   met->SetBinContent(8,62.27435);
   met->SetBinContent(9,48.08656);
   met->SetBinContent(10,35.62825);
   met->SetBinContent(11,24.70541);
   met->SetBinContent(12,20.08602);
   met->SetBinContent(13,16.02253);
   met->SetBinContent(14,11.36876);
   met->SetBinContent(15,8.311313);
   met->SetBinContent(16,6.752922);
   met->SetBinContent(17,5.071816);
   met->SetBinContent(18,3.756527);
   met->SetBinContent(19,2.912703);
   met->SetBinContent(20,2.48202);
   met->SetBinContent(21,1.864259);
   met->SetBinContent(22,1.468556);
   met->SetBinContent(23,1.041982);
   met->SetBinContent(24,0.8831545);
   met->SetBinContent(25,0.9021951);
   met->SetBinContent(26,0.5406785);
   met->SetBinContent(27,0.3841887);
   met->SetBinContent(28,0.3225513);
   met->SetBinContent(29,0.1511524);
   met->SetBinContent(30,0.2440148);
   met->SetBinContent(31,0.1018886);
   met->SetBinContent(32,0.1268721);
   met->SetBinContent(33,0.06830256);
   met->SetBinContent(34,0.1226105);
   met->SetBinContent(35,0.09923062);
   met->SetBinContent(36,0.04448105);
   met->SetBinContent(37,0.01378316);
   met->SetBinContent(38,0.04176528);
   met->SetBinContent(39,0.02153135);
   met->SetBinContent(41,0.04776538);
   met->SetBinContent(43,0.02387816);
   met->SetBinContent(44,0.01634591);
   met->SetBinContent(45,0.0130149);
   met->SetBinContent(51,0.01598822);
   met->SetBinError(7,0.8206348);
   met->SetBinError(8,1.099989);
   met->SetBinError(9,0.9810878);
   met->SetBinError(10,0.8525662);
   met->SetBinError(11,0.7128533);
   met->SetBinError(12,0.6371367);
   met->SetBinError(13,0.5740027);
   met->SetBinError(14,0.4830808);
   met->SetBinError(15,0.4085586);
   met->SetBinError(16,0.3740916);
   met->SetBinError(17,0.3258021);
   met->SetBinError(18,0.2776121);
   met->SetBinError(19,0.2406505);
   met->SetBinError(20,0.2218007);
   met->SetBinError(21,0.193543);
   met->SetBinError(22,0.1744407);
   met->SetBinError(23,0.1457895);
   met->SetBinError(24,0.1349096);
   met->SetBinError(25,0.1383296);
   met->SetBinError(26,0.1055754);
   met->SetBinError(27,0.08598166);
   met->SetBinError(28,0.07872088);
   met->SetBinError(29,0.05646933);
   met->SetBinError(30,0.07032674);
   met->SetBinError(31,0.04276846);
   met->SetBinError(32,0.05233341);
   met->SetBinError(33,0.0362806);
   met->SetBinError(34,0.05296324);
   met->SetBinError(35,0.04476041);
   met->SetBinError(36,0.03169108);
   met->SetBinError(37,0.01090636);
   met->SetBinError(38,0.02958033);
   met->SetBinError(39,0.02153135);
   met->SetBinError(41,0.02798864);
   met->SetBinError(43,0.02387816);
   met->SetBinError(44,0.01634591);
   met->SetBinError(45,0.0130149);
   met->SetBinError(51,0.01598822);
   met->SetEntries(17267);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(11,0.1134007);
   met->SetBinError(11,0.1134007);
   met->SetEntries(1);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,1.94593);
   met->SetBinContent(8,3.685814);
   met->SetBinContent(9,3.177557);
   met->SetBinContent(10,2.669487);
   met->SetBinContent(11,1.292385);
   met->SetBinContent(12,0.5198159);
   met->SetBinContent(13,0.5040124);
   met->SetBinContent(14,0.6058882);
   met->SetBinContent(15,0.2671033);
   met->SetBinContent(16,0.1738408);
   met->SetBinContent(17,0.1680148);
   met->SetBinContent(23,0.009488277);
   met->SetBinContent(24,0.1579146);
   met->SetBinError(7,0.4251763);
   met->SetBinError(8,0.6655235);
   met->SetBinError(9,0.5967332);
   met->SetBinError(10,0.5589918);
   met->SetBinError(11,0.3871424);
   met->SetBinError(12,0.2078226);
   met->SetBinError(13,0.2280717);
   met->SetBinError(14,0.2358658);
   met->SetBinError(15,0.1554407);
   met->SetBinError(16,0.12294);
   met->SetBinError(17,0.1185874);
   met->SetBinError(23,0.009488277);
   met->SetBinError(24,0.1579146);
   met->SetEntries(182);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,0.4972707);
   met->SetBinContent(8,0.898196);
   met->SetBinContent(9,0.5713814);
   met->SetBinContent(10,0.4912593);
   met->SetBinContent(11,0.2930951);
   met->SetBinContent(12,0.2323533);
   met->SetBinContent(13,0.1529346);
   met->SetBinContent(14,0.1335726);
   met->SetBinContent(15,0.07385227);
   met->SetBinContent(16,0.0538828);
   met->SetBinContent(17,0.01727345);
   met->SetBinContent(18,0.05366663);
   met->SetBinContent(19,0.02059066);
   met->SetBinContent(20,0.003464723);
   met->SetBinContent(22,0.005729478);
   met->SetBinContent(23,0.006761344);
   met->SetBinContent(24,0.006451479);
   met->SetBinContent(25,0.0004501181);
   met->SetBinContent(27,0.007446413);
   met->SetBinError(7,0.05327097);
   met->SetBinError(8,0.07470529);
   met->SetBinError(9,0.05984859);
   met->SetBinError(10,0.05796039);
   met->SetBinError(11,0.04478116);
   met->SetBinError(12,0.03985996);
   met->SetBinError(13,0.03072973);
   met->SetBinError(14,0.02941461);
   met->SetBinError(15,0.0215675);
   met->SetBinError(16,0.01882043);
   met->SetBinError(17,0.009502644);
   met->SetBinError(18,0.01816512);
   met->SetBinError(19,0.01106771);
   met->SetBinError(20,0.003464722);
   met->SetBinError(22,0.005453686);
   met->SetBinError(23,0.006761344);
   met->SetBinError(24,0.006020752);
   met->SetBinError(25,0.0004501181);
   met->SetBinError(27,0.006134752);
   met->SetEntries(663);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,185);
   met->SetBinContent(8,245);
   met->SetBinContent(9,186);
   met->SetBinContent(10,120);
   met->SetBinContent(11,105);
   met->SetBinContent(12,70);
   met->SetBinContent(13,49);
   met->SetBinContent(14,37);
   met->SetBinContent(15,22);
   met->SetBinContent(16,21);
   met->SetBinContent(17,8);
   met->SetBinContent(18,10);
   met->SetBinContent(19,9);
   met->SetBinContent(20,6);
   met->SetBinContent(21,4);
   met->SetBinContent(22,3);
   met->SetBinContent(23,3);
   met->SetBinContent(24,3);
   met->SetBinContent(25,2);
   met->SetBinContent(28,1);
   met->SetBinContent(29,1);
   met->SetBinContent(32,1);
   met->SetBinError(7,13.60147);
   met->SetBinError(8,15.65248);
   met->SetBinError(9,13.63818);
   met->SetBinError(10,10.95445);
   met->SetBinError(11,10.24695);
   met->SetBinError(12,8.3666);
   met->SetBinError(13,7);
   met->SetBinError(14,6.082763);
   met->SetBinError(15,4.690416);
   met->SetBinError(16,4.582576);
   met->SetBinError(17,2.828427);
   met->SetBinError(18,3.162278);
   met->SetBinError(19,3);
   met->SetBinError(20,2.44949);
   met->SetBinError(21,2);
   met->SetBinError(22,1.732051);
   met->SetBinError(23,1.732051);
   met->SetBinError(24,1.732051);
   met->SetBinError(25,1.414214);
   met->SetBinError(28,1);
   met->SetBinError(29,1);
   met->SetBinError(32,1);
   met->SetEntries(1091);
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
   TLegendEntry *entry=leg->AddEntry("met","Data","lp");
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
   lower->Range(-145.8228,-0.653951,765.5696,2.070845);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,0.8354543);
   met->SetBinContent(8,0.7045931);
   met->SetBinContent(9,0.7313071);
   met->SetBinContent(10,0.5702201);
   met->SetBinContent(11,0.7407413);
   met->SetBinContent(12,0.8140169);
   met->SetBinContent(13,0.7038842);
   met->SetBinContent(14,0.6264538);
   met->SetBinContent(15,0.5802295);
   met->SetBinContent(16,0.6788172);
   met->SetBinContent(17,0.3316092);
   met->SetBinContent(18,0.6323251);
   met->SetBinContent(19,1.239433);
   met->SetBinContent(20,0.7413118);
   met->SetBinContent(21,0.367492);
   met->SetBinContent(22,0.5430388);
   met->SetBinContent(23,0.9721353);
   met->SetBinContent(24,1.23688);
   met->SetBinContent(25,1.256273);
   met->SetBinContent(28,2.096198);
   met->SetBinContent(29,6.615839);
   met->SetBinContent(32,7.881956);
   met->SetBinError(7,0.07434954);
   met->SetBinError(8,0.05293924);
   met->SetBinError(9,0.06327081);
   met->SetBinError(10,0.06021485);
   met->SetBinError(11,0.08597121);
   met->SetBinError(12,0.1159494);
   met->SetBinError(13,0.1152509);
   met->SetBinError(14,0.1201532);
   met->SetBinError(15,0.1402732);
   met->SetBinError(16,0.1701774);
   met->SetBinError(17,0.1274043);
   met->SetBinError(18,0.2259317);
   met->SetBinError(19,0.509532);
   met->SetBinError(20,0.3382209);
   met->SetBinError(21,0.2022251);
   met->SetBinError(22,0.3625913);
   met->SetBinError(23,0.6473662);
   met->SetBinError(24,0.8228185);
   met->SetBinError(25,0.9788107);
   met->SetBinError(28,2.230069);
   met->SetBinError(29,7.062453);
   met->SetBinError(32,8.526177);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(7.326298);
   met->SetStats(0);
   met->SetFillStyle(0);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
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
