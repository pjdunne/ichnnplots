{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:57:07 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.82956,765.5696,5.867048);
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
   stack->SetMaximum(112252);
   
   TH1F *met_stack_8 = new TH1F("met_stack_8","stack",50,0,1000);
   met_stack_8->SetBinContent(7,0.02780752);
   met_stack_8->SetBinContent(9,0.003105557);
   met_stack_8->SetBinContent(11,0.1243847);
   met_stack_8->SetBinContent(12,2.358177);
   met_stack_8->SetBinContent(17,0.1148367);
   met_stack_8->SetBinError(7,0.02780752);
   met_stack_8->SetBinError(9,0.003105557);
   met_stack_8->SetBinError(11,0.1243847);
   met_stack_8->SetBinError(12,2.248562);
   met_stack_8->SetBinError(17,0.1148367);
   met_stack_8->SetMinimum(0.002209897);
   met_stack_8->SetMaximum(270531.6);
   met_stack_8->SetEntries(6);
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
   met->SetBinContent(7,0.02780752);
   met->SetBinContent(9,0.003105557);
   met->SetBinContent(11,0.1243847);
   met->SetBinContent(12,2.358177);
   met->SetBinContent(17,0.1148367);
   met->SetBinError(7,0.02780752);
   met->SetBinError(9,0.003105557);
   met->SetBinError(11,0.1243847);
   met->SetBinError(12,2.248562);
   met->SetBinError(17,0.1148367);
   met->SetMinimum(0.01);
   met->SetMaximum(90000);
   met->SetEntries(6);
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
   met->SetBinContent(7,0.2943209);
   met->SetBinContent(8,1.943483);
   met->SetBinContent(9,1.622574);
   met->SetBinContent(10,0.9408131);
   met->SetBinContent(11,1.451849);
   met->SetBinContent(12,1.391903);
   met->SetBinContent(13,0.5285816);
   met->SetBinContent(14,0.3381283);
   met->SetBinContent(15,0.811636);
   met->SetBinContent(21,0.2285386);
   met->SetBinError(7,0.2943209);
   met->SetBinError(8,0.9275369);
   met->SetBinError(9,1.034052);
   met->SetBinError(10,0.7459363);
   met->SetBinError(11,0.9148354);
   met->SetBinError(12,0.9955648);
   met->SetBinError(13,0.4106246);
   met->SetBinError(14,0.3381283);
   met->SetBinError(15,0.811636);
   met->SetBinError(21,0.2285386);
   met->SetEntries(22);
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
   met->SetBinContent(7,0.5573766);
   met->SetBinContent(8,2.843592);
   met->SetBinContent(9,2.34382);
   met->SetBinContent(10,3.197576);
   met->SetBinContent(11,2.354614);
   met->SetBinContent(12,2.474279);
   met->SetBinContent(13,0.7807001);
   met->SetBinContent(14,2.981123);
   met->SetBinContent(15,1.662129);
   met->SetBinContent(16,0.404766);
   met->SetBinContent(17,0.410497);
   met->SetBinContent(23,0.4269495);
   met->SetBinError(7,0.4369244);
   met->SetBinError(8,1.457816);
   met->SetBinError(9,0.8863295);
   met->SetBinError(10,1.404984);
   met->SetBinError(11,1.220682);
   met->SetBinError(12,1.169849);
   met->SetBinError(13,0.7794431);
   met->SetBinError(14,1.594171);
   met->SetBinError(15,1.176878);
   met->SetBinError(16,0.404766);
   met->SetBinError(17,0.410497);
   met->SetBinError(23,0.4269495);
   met->SetEntries(44);
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
   met->SetBinContent(7,0.551984);
   met->SetBinContent(8,1.126991);
   met->SetBinContent(9,1.329903);
   met->SetBinContent(10,1.32145);
   met->SetBinContent(11,1.026443);
   met->SetBinContent(12,1.138219);
   met->SetBinContent(13,0.9173046);
   met->SetBinContent(14,0.5941766);
   met->SetBinContent(15,0.3323745);
   met->SetBinContent(16,0.1843466);
   met->SetBinContent(17,0.2184767);
   met->SetBinContent(18,0.1796154);
   met->SetBinContent(19,0.1050844);
   met->SetBinContent(20,0.2049257);
   met->SetBinContent(21,0.01986454);
   met->SetBinContent(22,0.007431335);
   met->SetBinContent(24,0.1214996);
   met->SetBinContent(25,0.01081811);
   met->SetBinContent(28,0.02571436);
   met->SetBinContent(29,0.02075988);
   met->SetBinContent(34,0.02021044);
   met->SetBinError(7,0.1038299);
   met->SetBinError(8,0.1569382);
   met->SetBinError(9,0.1708792);
   met->SetBinError(10,0.1665119);
   met->SetBinError(11,0.1463498);
   met->SetBinError(12,0.1552856);
   met->SetBinError(13,0.1354653);
   met->SetBinError(14,0.1112945);
   met->SetBinError(15,0.08556067);
   met->SetBinError(16,0.06368863);
   met->SetBinError(17,0.06544173);
   met->SetBinError(18,0.05788485);
   met->SetBinError(19,0.04385854);
   met->SetBinError(20,0.06586477);
   met->SetBinError(21,0.01404671);
   met->SetBinError(22,0.007431335);
   met->SetBinError(24,0.05120087);
   met->SetBinError(25,0.01081811);
   met->SetBinError(28,0.02571436);
   met->SetBinError(29,0.02075988);
   met->SetBinError(34,0.02021045);
   met->SetEntries(522);
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
   met->SetBinContent(7,0.311921);
   met->SetBinContent(8,0.7346147);
   met->SetBinContent(11,7.392823e-05);
   met->SetBinContent(14,0.3786782);
   met->SetBinContent(21,0.1106946);
   met->SetBinError(7,0.1878766);
   met->SetBinError(8,0.7346147);
   met->SetBinError(11,7.392823e-05);
   met->SetBinError(14,0.267773);
   met->SetBinError(21,0.1106946);
   met->SetEntries(8);
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
   met->SetBinContent(7,0.1340863);
   met->SetBinContent(8,0.1998293);
   met->SetBinContent(9,0.09354786);
   met->SetBinContent(10,0.1087172);
   met->SetBinContent(11,0.02105234);
   met->SetBinContent(12,0.1015098);
   met->SetBinError(7,0.1340863);
   met->SetBinError(8,0.1420572);
   met->SetBinError(9,0.09354786);
   met->SetBinError(10,0.1087172);
   met->SetBinError(11,0.02105234);
   met->SetBinError(12,0.07191883);
   met->SetEntries(8);
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
   met->SetBinContent(7,0.02163413);
   met->SetBinContent(8,0.04108987);
   met->SetBinContent(9,0.1126647);
   met->SetBinContent(10,0.04317209);
   met->SetBinContent(11,0.007037451);
   met->SetBinContent(12,0.01937711);
   met->SetBinContent(13,0.02574162);
   met->SetBinContent(14,0.02568544);
   met->SetBinContent(15,0.01111403);
   met->SetBinContent(16,0.01164037);
   met->SetBinContent(18,0.003358593);
   met->SetBinContent(23,0.01246771);
   met->SetBinError(7,0.01086557);
   met->SetBinError(8,0.01570933);
   met->SetBinError(9,0.02714938);
   met->SetBinError(10,0.01838798);
   met->SetBinError(11,0.006538441);
   met->SetBinError(12,0.0112248);
   met->SetBinError(13,0.01287386);
   met->SetBinError(14,0.01262825);
   met->SetBinError(15,0.008012555);
   met->SetBinError(16,0.01164037);
   met->SetBinError(18,0.003358593);
   met->SetBinError(23,0.01246771);
   met->SetEntries(60);
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
   met->SetBinContent(8,5);
   met->SetBinContent(9,6);
   met->SetBinContent(10,2);
   met->SetBinContent(11,4);
   met->SetBinContent(12,2);
   met->SetBinContent(13,5);
   met->SetBinContent(14,2);
   met->SetBinContent(15,1);
   met->SetBinError(7,2.236068);
   met->SetBinError(8,2.236068);
   met->SetBinError(9,2.44949);
   met->SetBinError(10,1.414214);
   met->SetBinError(11,2);
   met->SetBinError(12,1.414214);
   met->SetBinError(13,2.236068);
   met->SetBinError(14,1.414214);
   met->SetBinError(15,1);
   met->SetEntries(32);
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
   met->SetBinContent(7,2.671906);
   met->SetBinContent(8,0.7257316);
   met->SetBinContent(9,1.090411);
   met->SetBinContent(10,0.3563964);
   met->SetBinContent(11,0.8228641);
   met->SetBinContent(12,0.3902219);
   met->SetBinContent(13,2.219926);
   met->SetBinContent(14,0.4631998);
   met->SetBinContent(15,0.3549556);
   met->SetBinError(7,1.457544);
   met->SetBinError(8,0.3807266);
   met->SetBinError(9,0.5220391);
   met->SetBinError(10,0.2718018);
   met->SetBinError(11,0.4863976);
   met->SetBinError(12,0.2999761);
   met->SetBinError(13,1.325736);
   met->SetBinError(14,0.3725714);
   met->SetBinError(15,0.3981892);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(16.55499);
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
