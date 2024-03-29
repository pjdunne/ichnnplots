{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:10 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.874686,765.5696,6.57584);
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
   stack->SetMaximum(499494.4);
   
   TH1F *met_stack_8 = new TH1F("met_stack_8","stack",50,0,1000);
   met_stack_8->SetBinContent(8,0.3491715);
   met_stack_8->SetBinContent(9,0.3803145);
   met_stack_8->SetBinContent(10,0.3202162);
   met_stack_8->SetBinContent(13,0.1074828);
   met_stack_8->SetBinContent(25,2.493825);
   met_stack_8->SetBinError(8,0.1809639);
   met_stack_8->SetBinError(9,0.1947067);
   met_stack_8->SetBinError(10,0.161276);
   met_stack_8->SetBinError(13,0.1074828);
   met_stack_8->SetBinError(25,2.493825);
   met_stack_8->SetMinimum(0.002062168);
   met_stack_8->SetMaximum(1268569);
   met_stack_8->SetEntries(15);
   met_stack_8->SetStats(0);
   met_stack_8->SetFillColor(4);
   met_stack_8->SetLineColor(4);
   met_stack_8->SetLineWidth(2);
   met_stack_8->SetMarkerColor(4);
   met_stack_8->SetMarkerStyle(21);
   met_stack_8->SetMarkerSize(0.8);
   met_stack_8->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_8->GetXaxis()->SetRange(1,36);
   met_stack_8->GetXaxis()->SetLabelFont(42);
   met_stack_8->GetXaxis()->SetLabelOffset(0.007);
   met_stack_8->GetXaxis()->SetLabelSize(0);
   met_stack_8->GetXaxis()->SetTitleSize(0);
   met_stack_8->GetXaxis()->SetTickLength(0.02);
   met_stack_8->GetXaxis()->SetTitleOffset(0.9);
   met_stack_8->GetXaxis()->SetTitleFont(42);
   met_stack_8->GetYaxis()->SetTitle("Events");
   met_stack_8->GetYaxis()->SetLabelFont(42);
   met_stack_8->GetYaxis()->SetLabelOffset(0.007);
   met_stack_8->GetYaxis()->SetLabelSize(0.035);
   met_stack_8->GetYaxis()->SetTitleSize(0.045);
   met_stack_8->GetYaxis()->SetTickLength(0.02);
   met_stack_8->GetYaxis()->SetTitleOffset(1.55);
   met_stack_8->GetYaxis()->SetTitleFont(42);
   met_stack_8->GetZaxis()->SetLabelFont(42);
   met_stack_8->GetZaxis()->SetLabelOffset(0.007);
   met_stack_8->GetZaxis()->SetLabelSize(0.035);
   met_stack_8->GetZaxis()->SetTitleSize(0.045);
   met_stack_8->GetZaxis()->SetTickLength(0.02);
   met_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_8);
   
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(8,0.3491715);
   met->SetBinContent(9,0.3803145);
   met->SetBinContent(10,0.3202162);
   met->SetBinContent(13,0.1074828);
   met->SetBinContent(25,2.493825);
   met->SetBinError(8,0.1809639);
   met->SetBinError(9,0.1947067);
   met->SetBinError(10,0.161276);
   met->SetBinError(13,0.1074828);
   met->SetBinError(25,2.493825);
   met->SetMinimum(0.01);
   met->SetMaximum(360000);
   met->SetEntries(15);
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
   met->SetBinContent(7,3.415942);
   met->SetBinContent(8,3.575592);
   met->SetBinContent(9,4.494686);
   met->SetBinContent(10,4.856565);
   met->SetBinContent(11,4.621384);
   met->SetBinContent(12,2.040075);
   met->SetBinContent(13,0.8414195);
   met->SetBinContent(14,1.125072);
   met->SetBinContent(15,1.075731);
   met->SetBinContent(17,0.7141592);
   met->SetBinContent(21,1.074504);
   met->SetBinContent(22,0.3727424);
   met->SetBinError(7,1.464089);
   met->SetBinError(8,1.47453);
   met->SetBinError(9,1.6729);
   met->SetBinError(10,1.845046);
   met->SetBinError(11,1.653316);
   met->SetBinError(12,0.9743651);
   met->SetBinError(13,0.5835046);
   met->SetBinError(14,0.860496);
   met->SetBinError(15,1.075731);
   met->SetBinError(17,0.7141592);
   met->SetBinError(21,1.074504);
   met->SetBinError(22,0.3727423);
   met->SetEntries(55);
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
   met->SetBinContent(7,10.04589);
   met->SetBinContent(8,23.1266);
   met->SetBinContent(9,19.5267);
   met->SetBinContent(10,20.39156);
   met->SetBinContent(11,14.67833);
   met->SetBinContent(12,6.959591);
   met->SetBinContent(13,2.084505);
   met->SetBinContent(14,2.837366);
   met->SetBinContent(15,1.356076);
   met->SetBinContent(16,3.26927);
   met->SetBinContent(17,3.894995);
   met->SetBinContent(18,0.5115196);
   met->SetBinContent(19,0.3401812);
   met->SetBinContent(20,1.264508);
   met->SetBinContent(21,0.6822766);
   met->SetBinError(7,2.756262);
   met->SetBinError(8,4.141726);
   met->SetBinError(9,3.608923);
   met->SetBinError(10,4.010048);
   met->SetBinError(11,3.427783);
   met->SetBinError(12,2.395932);
   met->SetBinError(13,0.8601528);
   met->SetBinError(14,1.056658);
   met->SetBinError(15,0.6884774);
   met->SetBinError(16,1.27404);
   met->SetBinError(17,2.086086);
   met->SetBinError(18,0.5115196);
   met->SetBinError(19,0.3401812);
   met->SetBinError(20,0.9168079);
   met->SetBinError(21,0.4965793);
   met->SetEntries(214);
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
   met->SetBinContent(7,2.921246);
   met->SetBinContent(8,5.599844);
   met->SetBinContent(9,5.642543);
   met->SetBinContent(10,5.225163);
   met->SetBinContent(11,4.362115);
   met->SetBinContent(12,3.580269);
   met->SetBinContent(13,3.129043);
   met->SetBinContent(14,2.338359);
   met->SetBinContent(15,1.778266);
   met->SetBinContent(16,1.210667);
   met->SetBinContent(17,0.8909281);
   met->SetBinContent(18,0.6236811);
   met->SetBinContent(19,0.4453658);
   met->SetBinContent(20,0.3315018);
   met->SetBinContent(21,0.2261493);
   met->SetBinContent(22,0.2991324);
   met->SetBinContent(23,0.1481181);
   met->SetBinContent(24,0.13095);
   met->SetBinContent(25,0.06701688);
   met->SetBinContent(26,0.04090991);
   met->SetBinContent(27,0.0887277);
   met->SetBinContent(28,0.0161028);
   met->SetBinContent(32,0.01887926);
   met->SetBinContent(34,0.02484072);
   met->SetBinContent(37,0.01035286);
   met->SetBinError(7,0.229621);
   met->SetBinError(8,0.3301189);
   met->SetBinError(9,0.3365409);
   met->SetBinError(10,0.3275968);
   met->SetBinError(11,0.3025658);
   met->SetBinError(12,0.2693413);
   met->SetBinError(13,0.2521634);
   met->SetBinError(14,0.2182312);
   met->SetBinError(15,0.1888353);
   met->SetBinError(16,0.1585915);
   met->SetBinError(17,0.1373951);
   met->SetBinError(18,0.1139093);
   met->SetBinError(19,0.09696485);
   met->SetBinError(20,0.08133233);
   met->SetBinError(21,0.06597202);
   met->SetBinError(22,0.07765881);
   met->SetBinError(23,0.05792786);
   met->SetBinError(24,0.0568975);
   met->SetBinError(25,0.03525667);
   met->SetBinError(26,0.02895556);
   met->SetBinError(27,0.04443941);
   met->SetBinError(28,0.0161028);
   met->SetBinError(32,0.01887926);
   met->SetBinError(34,0.02484072);
   met->SetBinError(37,0.01035286);
   met->SetEntries(2244);
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
   met->SetBinContent(7,0.06300837);
   met->SetBinContent(8,0.5425283);
   met->SetBinContent(9,0.08955003);
   met->SetBinContent(10,0.8335658);
   met->SetBinContent(11,0.2692219);
   met->SetBinContent(12,0.04288836);
   met->SetBinContent(13,0.08303766);
   met->SetBinContent(15,0.08120943);
   met->SetBinError(7,0.04592816);
   met->SetBinError(8,0.2464372);
   met->SetBinError(9,0.08955002);
   met->SetBinError(10,0.3336226);
   met->SetBinError(11,0.2054766);
   met->SetBinError(12,0.04288836);
   met->SetBinError(13,0.08303766);
   met->SetBinError(15,0.08120943);
   met->SetEntries(24);
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
   met->SetBinContent(7,0.03681655);
   met->SetBinContent(8,0.1058834);
   met->SetBinContent(9,0.08157865);
   met->SetBinContent(10,0.05617437);
   met->SetBinContent(11,0.07966159);
   met->SetBinContent(12,0.04179784);
   met->SetBinContent(13,0.02949938);
   met->SetBinContent(14,0.03222421);
   met->SetBinContent(16,0.0128385);
   met->SetBinContent(17,0.0135214);
   met->SetBinContent(18,0.007494417);
   met->SetBinContent(19,0.007593317);
   met->SetBinContent(27,0.001497151);
   met->SetBinError(7,0.01529319);
   met->SetBinError(8,0.02627143);
   met->SetBinError(9,0.02310755);
   met->SetBinError(10,0.02110944);
   met->SetBinError(11,0.02449772);
   met->SetBinError(12,0.01727483);
   met->SetBinError(13,0.01288);
   met->SetBinError(14,0.01368297);
   met->SetBinError(16,0.009079736);
   met->SetBinError(17,0.009063573);
   met->SetBinError(18,0.007494416);
   met->SetBinError(19,0.007593317);
   met->SetBinError(27,0.00149715);
   met->SetEntries(86);
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
   met->SetBinContent(7,5);
   met->SetBinContent(8,24);
   met->SetBinContent(9,24);
   met->SetBinContent(10,14);
   met->SetBinContent(11,16);
   met->SetBinContent(12,8);
   met->SetBinContent(13,9);
   met->SetBinContent(14,5);
   met->SetBinContent(15,4);
   met->SetBinContent(16,3);
   met->SetBinContent(17,1);
   met->SetBinContent(21,1);
   met->SetBinContent(22,2);
   met->SetBinContent(23,2);
   met->SetBinContent(28,1);
   met->SetBinError(7,2.236068);
   met->SetBinError(8,4.898979);
   met->SetBinError(9,4.898979);
   met->SetBinError(10,3.741657);
   met->SetBinError(11,4);
   met->SetBinError(12,2.828427);
   met->SetBinError(13,3);
   met->SetBinError(14,2.236068);
   met->SetBinError(15,2);
   met->SetBinError(16,1.732051);
   met->SetBinError(17,1);
   met->SetBinError(21,1);
   met->SetBinError(22,1.414214);
   met->SetBinError(23,1.414214);
   met->SetBinError(28,1);
   met->SetEntries(119);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_noCJV");
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
   met->SetBinContent(7,0.3033446);
   met->SetBinContent(8,0.7283663);
   met->SetBinContent(9,0.8044229);
   met->SetBinContent(10,0.4463855);
   met->SetBinContent(11,0.666369);
   met->SetBinContent(12,0.631681);
   met->SetBinContent(13,1.459261);
   met->SetBinContent(14,0.7895126);
   met->SetBinContent(15,0.9321223);
   met->SetBinContent(16,0.6677387);
   met->SetBinContent(17,0.1813696);
   met->SetBinContent(21,0.5043043);
   met->SetBinContent(22,2.976745);
   met->SetBinContent(23,13.50274);
   met->SetBinContent(28,62.101);
   met->SetBinError(7,0.1473814);
   met->SetBinError(8,0.177855);
   met->SetBinError(9,0.1963508);
   met->SetBinError(10,0.1349975);
   met->SetBinError(11,0.1975141);
   met->SetBinError(12,0.2582756);
   met->SetBinError(13,0.5486704);
   met->SetBinError(14,0.3927717);
   met->SetBinError(15,0.5442141);
   met->SetBinError(16,0.4301598);
   met->SetBinError(17,0.1953875);
   met->SetBinError(21,0.5875635);
   met->SetBinError(22,2.697431);
   met->SetBinError(23,10.91096);
   met->SetBinError(28,87.82408);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(0.9585707);
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
