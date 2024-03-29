{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:59 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.816263,1063.291,5.664368);
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
   stack->SetMaximum(73288.71);
   
   TH1F *met_noMuons_stack_8 = new TH1F("met_noMuons_stack_8","stack",100,0,1000);
   met_noMuons_stack_8->SetBinContent(13,0.02780752);
   met_noMuons_stack_8->SetBinContent(18,0.003105557);
   met_noMuons_stack_8->SetBinContent(20,0.1243847);
   met_noMuons_stack_8->SetBinContent(24,2.358177);
   met_noMuons_stack_8->SetBinContent(33,0.1148367);
   met_noMuons_stack_8->SetBinError(13,0.02780752);
   met_noMuons_stack_8->SetBinError(18,0.003105557);
   met_noMuons_stack_8->SetBinError(20,0.1243847);
   met_noMuons_stack_8->SetBinError(24,2.248562);
   met_noMuons_stack_8->SetBinError(33,0.1148367);
   met_noMuons_stack_8->SetMinimum(0.002256054);
   met_noMuons_stack_8->SetMaximum(173914.7);
   met_noMuons_stack_8->SetEntries(6);
   met_noMuons_stack_8->SetStats(0);
   met_noMuons_stack_8->SetFillColor(4);
   met_noMuons_stack_8->SetLineColor(4);
   met_noMuons_stack_8->SetLineWidth(2);
   met_noMuons_stack_8->SetMarkerColor(4);
   met_noMuons_stack_8->SetMarkerStyle(21);
   met_noMuons_stack_8->SetMarkerSize(0.8);
   met_noMuons_stack_8->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_noMuons_stack_8->GetXaxis()->SetLabelFont(42);
   met_noMuons_stack_8->GetXaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_8->GetXaxis()->SetLabelSize(0);
   met_noMuons_stack_8->GetXaxis()->SetTitleSize(0);
   met_noMuons_stack_8->GetXaxis()->SetTickLength(0.02);
   met_noMuons_stack_8->GetXaxis()->SetTitleOffset(0.9);
   met_noMuons_stack_8->GetXaxis()->SetTitleFont(42);
   met_noMuons_stack_8->GetYaxis()->SetTitle("Events");
   met_noMuons_stack_8->GetYaxis()->SetLabelFont(42);
   met_noMuons_stack_8->GetYaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_8->GetYaxis()->SetLabelSize(0.035);
   met_noMuons_stack_8->GetYaxis()->SetTitleSize(0.045);
   met_noMuons_stack_8->GetYaxis()->SetTickLength(0.02);
   met_noMuons_stack_8->GetYaxis()->SetTitleOffset(1.55);
   met_noMuons_stack_8->GetYaxis()->SetTitleFont(42);
   met_noMuons_stack_8->GetZaxis()->SetLabelFont(42);
   met_noMuons_stack_8->GetZaxis()->SetLabelOffset(0.007);
   met_noMuons_stack_8->GetZaxis()->SetLabelSize(0.035);
   met_noMuons_stack_8->GetZaxis()->SetTitleSize(0.045);
   met_noMuons_stack_8->GetZaxis()->SetTickLength(0.02);
   met_noMuons_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_noMuons_stack_8);
   
   
   TH1F *met_noMuons = new TH1F("met_noMuons","met_noMuons",100,0,1000);
   met_noMuons->SetBinContent(13,0.02780752);
   met_noMuons->SetBinContent(18,0.003105557);
   met_noMuons->SetBinContent(20,0.1243847);
   met_noMuons->SetBinContent(24,2.358177);
   met_noMuons->SetBinContent(33,0.1148367);
   met_noMuons->SetBinError(13,0.02780752);
   met_noMuons->SetBinError(18,0.003105557);
   met_noMuons->SetBinError(20,0.1243847);
   met_noMuons->SetBinError(24,2.248562);
   met_noMuons->SetBinError(33,0.1148367);
   met_noMuons->SetMinimum(0.01);
   met_noMuons->SetMaximum(75000);
   met_noMuons->SetEntries(6);
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
   met_noMuons->SetBinContent(14,0.5988805);
   met_noMuons->SetBinContent(15,1.111417);
   met_noMuons->SetBinContent(16,0.5275062);
   met_noMuons->SetBinContent(17,1.622574);
   met_noMuons->SetBinContent(19,0.8789251);
   met_noMuons->SetBinContent(20,0.3329369);
   met_noMuons->SetBinContent(21,0.7724873);
   met_noMuons->SetBinContent(22,0.4083132);
   met_noMuons->SetBinContent(23,0.5899982);
   met_noMuons->SetBinContent(24,0.8019049);
   met_noMuons->SetBinContent(25,0.5285816);
   met_noMuons->SetBinContent(26,0.3381283);
   met_noMuons->SetBinContent(28,0.811636);
   met_noMuons->SetBinContent(40,0.2285386);
   met_noMuons->SetBinError(14,0.4235344);
   met_noMuons->SetBinError(15,0.7923239);
   met_noMuons->SetBinError(16,0.3738863);
   met_noMuons->SetBinError(17,1.034052);
   met_noMuons->SetBinError(19,0.7433645);
   met_noMuons->SetBinError(20,0.2780245);
   met_noMuons->SetBinError(21,0.7724873);
   met_noMuons->SetBinError(22,0.4083132);
   met_noMuons->SetBinError(23,0.5899982);
   met_noMuons->SetBinError(24,0.8019049);
   met_noMuons->SetBinError(25,0.4106246);
   met_noMuons->SetBinError(26,0.3381283);
   met_noMuons->SetBinError(28,0.811636);
   met_noMuons->SetBinError(40,0.2285386);
   met_noMuons->SetEntries(22);
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
   met_noMuons->SetBinContent(14,1.571688);
   met_noMuons->SetBinContent(15,0.726315);
   met_noMuons->SetBinContent(16,1.680731);
   met_noMuons->SetBinContent(17,0.7242347);
   met_noMuons->SetBinContent(18,1.04182);
   met_noMuons->SetBinContent(19,2.368529);
   met_noMuons->SetBinContent(20,1.307576);
   met_noMuons->SetBinContent(21,1.046872);
   met_noMuons->SetBinContent(22,0.8292126);
   met_noMuons->SetBinContent(23,1.597431);
   met_noMuons->SetBinContent(24,0.8768487);
   met_noMuons->SetBinContent(25,0.7794421);
   met_noMuons->SetBinContent(26,0.001258005);
   met_noMuons->SetBinContent(27,2.280861);
   met_noMuons->SetBinContent(28,0.7002614);
   met_noMuons->SetBinContent(29,1.662129);
   met_noMuons->SetBinContent(31,0.404766);
   met_noMuons->SetBinContent(34,0.410497);
   met_noMuons->SetBinContent(46,0.4269495);
   met_noMuons->SetBinError(14,1.237831);
   met_noMuons->SetBinError(15,0.4684475);
   met_noMuons->SetBinError(16,0.8649289);
   met_noMuons->SetBinError(17,0.4808522);
   met_noMuons->SetBinError(18,0.6088696);
   met_noMuons->SetBinError(19,1.276562);
   met_noMuons->SetBinError(20,0.7572068);
   met_noMuons->SetBinError(21,0.7572851);
   met_noMuons->SetBinError(22,0.8292126);
   met_noMuons->SetBinError(23,0.9920012);
   met_noMuons->SetBinError(24,0.6200643);
   met_noMuons->SetBinError(25,0.7794421);
   met_noMuons->SetBinError(26,0.001258005);
   met_noMuons->SetBinError(27,1.432136);
   met_noMuons->SetBinError(28,0.7002614);
   met_noMuons->SetBinError(29,1.176878);
   met_noMuons->SetBinError(31,0.404766);
   met_noMuons->SetBinError(34,0.410497);
   met_noMuons->SetBinError(46,0.4269495);
   met_noMuons->SetEntries(44);
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
   met_noMuons->SetBinContent(13,0.1143868);
   met_noMuons->SetBinContent(14,0.5163625);
   met_noMuons->SetBinContent(15,0.5972295);
   met_noMuons->SetBinContent(16,0.4980888);
   met_noMuons->SetBinContent(17,0.5908935);
   met_noMuons->SetBinContent(18,0.7411799);
   met_noMuons->SetBinContent(19,0.7584761);
   met_noMuons->SetBinContent(20,0.5927687);
   met_noMuons->SetBinContent(21,0.5514181);
   met_noMuons->SetBinContent(22,0.4845675);
   met_noMuons->SetBinContent(23,0.3847024);
   met_noMuons->SetBinContent(24,0.8014067);
   met_noMuons->SetBinContent(25,0.3823645);
   met_noMuons->SetBinContent(26,0.4070065);
   met_noMuons->SetBinContent(27,0.352025);
   met_noMuons->SetBinContent(28,0.2734385);
   met_noMuons->SetBinContent(29,0.1459097);
   met_noMuons->SetBinContent(30,0.1382957);
   met_noMuons->SetBinContent(31,0.1288882);
   met_noMuons->SetBinContent(32,0.06378401);
   met_noMuons->SetBinContent(33,0.1174391);
   met_noMuons->SetBinContent(34,0.07969269);
   met_noMuons->SetBinContent(35,0.1388672);
   met_noMuons->SetBinContent(36,0.08436452);
   met_noMuons->SetBinContent(37,0.0589982);
   met_noMuons->SetBinContent(38,0.05172405);
   met_noMuons->SetBinContent(39,0.06370573);
   met_noMuons->SetBinContent(40,0.1133108);
   met_noMuons->SetBinContent(41,0.01000312);
   met_noMuons->SetBinContent(43,0.009861425);
   met_noMuons->SetBinContent(44,0.007431335);
   met_noMuons->SetBinContent(47,0.1031275);
   met_noMuons->SetBinContent(48,0.02919016);
   met_noMuons->SetBinContent(55,0.02571436);
   met_noMuons->SetBinContent(57,0.02075988);
   met_noMuons->SetBinContent(67,0.02021044);
   met_noMuons->SetBinError(13,0.04417116);
   met_noMuons->SetBinError(14,0.1041817);
   met_noMuons->SetBinError(15,0.1120885);
   met_noMuons->SetBinError(16,0.1036655);
   met_noMuons->SetBinError(17,0.110155);
   met_noMuons->SetBinError(18,0.1301423);
   met_noMuons->SetBinError(19,0.1277419);
   met_noMuons->SetBinError(20,0.1115781);
   met_noMuons->SetBinError(21,0.1065756);
   met_noMuons->SetBinError(22,0.09963366);
   met_noMuons->SetBinError(23,0.08912979);
   met_noMuons->SetBinError(24,0.1316771);
   met_noMuons->SetBinError(25,0.08675303);
   met_noMuons->SetBinError(26,0.09113177);
   met_noMuons->SetBinError(27,0.08722676);
   met_noMuons->SetBinError(28,0.07369537);
   met_noMuons->SetBinError(29,0.05958696);
   met_noMuons->SetBinError(30,0.05248481);
   met_noMuons->SetBinError(31,0.05408736);
   met_noMuons->SetBinError(32,0.03685888);
   met_noMuons->SetBinError(33,0.04720682);
   met_noMuons->SetBinError(34,0.03998164);
   met_noMuons->SetBinError(35,0.0501904);
   met_noMuons->SetBinError(36,0.04222797);
   met_noMuons->SetBinError(37,0.03432952);
   met_noMuons->SetBinError(38,0.03206187);
   met_noMuons->SetBinError(39,0.03681642);
   met_noMuons->SetBinError(40,0.04694461);
   met_noMuons->SetBinError(41,0.01000312);
   met_noMuons->SetBinError(43,0.009861426);
   met_noMuons->SetBinError(44,0.007431335);
   met_noMuons->SetBinError(47,0.04779118);
   met_noMuons->SetBinError(48,0.0213205);
   met_noMuons->SetBinError(55,0.02571436);
   met_noMuons->SetBinError(57,0.02075988);
   met_noMuons->SetBinError(67,0.02021045);
   met_noMuons->SetEntries(522);
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
   met_noMuons->SetBinContent(13,0.141974);
   met_noMuons->SetBinContent(14,0.169947);
   met_noMuons->SetBinContent(16,0.7346147);
   met_noMuons->SetBinContent(21,7.392823e-05);
   met_noMuons->SetBinContent(28,0.3786782);
   met_noMuons->SetBinContent(41,0.1106946);
   met_noMuons->SetBinError(13,0.141974);
   met_noMuons->SetBinError(14,0.1230488);
   met_noMuons->SetBinError(16,0.7346147);
   met_noMuons->SetBinError(21,7.392823e-05);
   met_noMuons->SetBinError(28,0.267773);
   met_noMuons->SetBinError(41,0.1106946);
   met_noMuons->SetEntries(8);
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
   met_noMuons->SetBinContent(14,0.1340863);
   met_noMuons->SetBinContent(15,0.1998293);
   met_noMuons->SetBinContent(16,0.09354786);
   met_noMuons->SetBinContent(20,0.1087172);
   met_noMuons->SetBinContent(22,0.02105234);
   met_noMuons->SetBinContent(23,0.05393247);
   met_noMuons->SetBinContent(24,0.04757737);
   met_noMuons->SetBinError(14,0.1340863);
   met_noMuons->SetBinError(15,0.1420572);
   met_noMuons->SetBinError(16,0.09354786);
   met_noMuons->SetBinError(20,0.1087172);
   met_noMuons->SetBinError(22,0.02105234);
   met_noMuons->SetBinError(23,0.05393247);
   met_noMuons->SetBinError(24,0.04757737);
   met_noMuons->SetEntries(8);
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
   met_noMuons->SetBinContent(13,0.006825708);
   met_noMuons->SetBinContent(14,0.01908613);
   met_noMuons->SetBinContent(15,0.0166162);
   met_noMuons->SetBinContent(16,0.03800962);
   met_noMuons->SetBinContent(17,0.0446903);
   met_noMuons->SetBinContent(18,0.0501608);
   met_noMuons->SetBinContent(19,0.03744479);
   met_noMuons->SetBinContent(20,0.005727304);
   met_noMuons->SetBinContent(21,0.0005196964);
   met_noMuons->SetBinContent(22,0.006517755);
   met_noMuons->SetBinContent(23,0.01937711);
   met_noMuons->SetBinContent(25,0.0149217);
   met_noMuons->SetBinContent(26,0.01281816);
   met_noMuons->SetBinContent(27,0.01326523);
   met_noMuons->SetBinContent(28,0.01042196);
   met_noMuons->SetBinContent(29,0.01111403);
   met_noMuons->SetBinContent(31,0.01164037);
   met_noMuons->SetBinContent(34,0.003358593);
   met_noMuons->SetBinContent(45,0.01246771);
   met_noMuons->SetBinError(13,0.006284006);
   met_noMuons->SetBinError(14,0.009876761);
   met_noMuons->SetBinError(15,0.009545184);
   met_noMuons->SetBinError(16,0.01557889);
   met_noMuons->SetBinError(17,0.01689256);
   met_noMuons->SetBinError(18,0.01859361);
   met_noMuons->SetBinError(19,0.01747329);
   met_noMuons->SetBinError(20,0.005727304);
   met_noMuons->SetBinError(21,0.0005196964);
   met_noMuons->SetBinError(22,0.006517755);
   met_noMuons->SetBinError(23,0.0112248);
   met_noMuons->SetBinError(25,0.00935697);
   met_noMuons->SetBinError(26,0.009065111);
   met_noMuons->SetBinError(27,0.009388599);
   met_noMuons->SetBinError(28,0.008205723);
   met_noMuons->SetBinError(29,0.008012555);
   met_noMuons->SetBinError(31,0.01164037);
   met_noMuons->SetBinError(34,0.003358593);
   met_noMuons->SetBinError(45,0.01246771);
   met_noMuons->SetEntries(60);
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
   met_noMuons->SetBinContent(14,5);
   met_noMuons->SetBinContent(15,4);
   met_noMuons->SetBinContent(16,1);
   met_noMuons->SetBinContent(17,4);
   met_noMuons->SetBinContent(18,2);
   met_noMuons->SetBinContent(20,2);
   met_noMuons->SetBinContent(21,2);
   met_noMuons->SetBinContent(22,2);
   met_noMuons->SetBinContent(23,1);
   met_noMuons->SetBinContent(24,1);
   met_noMuons->SetBinContent(25,3);
   met_noMuons->SetBinContent(26,2);
   met_noMuons->SetBinContent(27,1);
   met_noMuons->SetBinContent(28,1);
   met_noMuons->SetBinContent(30,1);
   met_noMuons->SetBinError(14,2.236068);
   met_noMuons->SetBinError(15,2);
   met_noMuons->SetBinError(16,1);
   met_noMuons->SetBinError(17,2);
   met_noMuons->SetBinError(18,1.414214);
   met_noMuons->SetBinError(20,1.414214);
   met_noMuons->SetBinError(21,1.414214);
   met_noMuons->SetBinError(22,1.414214);
   met_noMuons->SetBinError(23,1);
   met_noMuons->SetBinError(24,1);
   met_noMuons->SetBinError(25,1.732051);
   met_noMuons->SetBinError(26,1.414214);
   met_noMuons->SetBinError(27,1);
   met_noMuons->SetBinError(28,1);
   met_noMuons->SetBinError(30,1);
   met_noMuons->SetEntries(32);
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
   met_noMuons->SetBinContent(17,0.252451);
   met_noMuons->SetBinContent(21,0.3577591);
   met_noMuons->SetBinError(17,0.252451);
   met_noMuons->SetBinError(21,0.3577591);
   met_noMuons->SetEntries(2);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_noCJV");
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
   met_noMuons->SetBinContent(14,1.661102);
   met_noMuons->SetBinContent(15,1.508633);
   met_noMuons->SetBinContent(16,0.2799162);
   met_noMuons->SetBinContent(17,1.341205);
   met_noMuons->SetBinContent(18,1.091012);
   met_noMuons->SetBinContent(20,0.8518881);
   met_noMuons->SetBinContent(21,0.843394);
   met_noMuons->SetBinContent(22,1.143077);
   met_noMuons->SetBinContent(23,0.3780088);
   met_noMuons->SetBinContent(24,0.3956107);
   met_noMuons->SetBinContent(25,1.759211);
   met_noMuons->SetBinContent(26,2.634314);
   met_noMuons->SetBinContent(27,0.3779073);
   met_noMuons->SetBinContent(28,0.4598894);
   met_noMuons->SetBinContent(30,7.230881);
   met_noMuons->SetBinError(14,1.042366);
   met_noMuons->SetBinError(15,0.924075);
   met_noMuons->SetBinError(16,0.2953613);
   met_noMuons->SetBinError(17,0.8457098);
   met_noMuons->SetBinError(18,0.8559133);
   met_noMuons->SetBinError(20,0.6721053);
   met_noMuons->SetBinError(21,0.7107154);
   met_noMuons->SetBinError(22,1.011134);
   met_noMuons->SetBinError(23,0.4126919);
   met_noMuons->SetBinError(24,0.4267986);
   met_noMuons->SetBinError(25,1.365904);
   met_noMuons->SetBinError(26,2.224251);
   met_noMuons->SetBinError(27,0.4298872);
   met_noMuons->SetBinError(28,0.5160943);
   met_noMuons->SetBinError(30,7.734098);
   met_noMuons->SetMinimum(0);
   met_noMuons->SetMaximum(2);
   met_noMuons->SetEntries(6.613854);
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
