{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:45:05 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.814903,1063.291,5.643793);
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
   stack->SetMaximum(70185.43);
   
   TH1F *met_stack_15 = new TH1F("met_stack_15","stack",100,0,1000);
   met_stack_15->SetBinContent(5,0.04125056);
   met_stack_15->SetBinError(5,0.04125056);
   met_stack_15->SetMinimum(0.002260846);
   met_stack_15->SetMaximum(166286.8);
   met_stack_15->SetEntries(1);
   met_stack_15->SetStats(0);
   met_stack_15->SetFillColor(4);
   met_stack_15->SetLineColor(4);
   met_stack_15->SetLineWidth(2);
   met_stack_15->SetMarkerColor(4);
   met_stack_15->SetMarkerStyle(21);
   met_stack_15->SetMarkerSize(0.8);
   met_stack_15->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_15->GetXaxis()->SetLabelFont(42);
   met_stack_15->GetXaxis()->SetLabelOffset(0.007);
   met_stack_15->GetXaxis()->SetLabelSize(0);
   met_stack_15->GetXaxis()->SetTitleSize(0);
   met_stack_15->GetXaxis()->SetTickLength(0.02);
   met_stack_15->GetXaxis()->SetTitleOffset(0.9);
   met_stack_15->GetXaxis()->SetTitleFont(42);
   met_stack_15->GetYaxis()->SetTitle("Events");
   met_stack_15->GetYaxis()->SetLabelFont(42);
   met_stack_15->GetYaxis()->SetLabelOffset(0.007);
   met_stack_15->GetYaxis()->SetLabelSize(0.035);
   met_stack_15->GetYaxis()->SetTitleSize(0.045);
   met_stack_15->GetYaxis()->SetTickLength(0.02);
   met_stack_15->GetYaxis()->SetTitleOffset(1.55);
   met_stack_15->GetYaxis()->SetTitleFont(42);
   met_stack_15->GetZaxis()->SetLabelFont(42);
   met_stack_15->GetZaxis()->SetLabelOffset(0.007);
   met_stack_15->GetZaxis()->SetLabelSize(0.035);
   met_stack_15->GetZaxis()->SetTitleSize(0.045);
   met_stack_15->GetZaxis()->SetTickLength(0.02);
   met_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_15);
   
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(5,0.04125056);
   met->SetBinError(5,0.04125056);
   met->SetMinimum(0.01);
   met->SetMaximum(48823.51);
   met->SetEntries(1);
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
   met->SetBinContent(15,0.5210658);
   met->SetBinError(15,0.5210658);
   met->SetEntries(1);
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
   met->SetBinContent(1,0.9671224);
   met->SetBinContent(2,3.2549);
   met->SetBinContent(3,2.452312);
   met->SetBinContent(4,1.334912);
   met->SetBinContent(5,0.4904428);
   met->SetBinContent(6,0.3301506);
   met->SetBinContent(7,0.3489348);
   met->SetBinContent(8,0.1282951);
   met->SetBinContent(12,0.2492724);
   met->SetBinError(1,0.3114619);
   met->SetBinError(2,0.7220579);
   met->SetBinError(3,0.5601218);
   met->SetBinError(4,0.4317729);
   met->SetBinError(5,0.2547762);
   met->SetBinError(6,0.2369564);
   met->SetBinError(7,0.1749615);
   met->SetBinError(8,0.1113979);
   met->SetBinError(12,0.2492724);
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
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,0.6115492);
   met->SetBinContent(2,1.424128);
   met->SetBinContent(3,1.259346);
   met->SetBinContent(4,0.9130169);
   met->SetBinContent(5,0.4996862);
   met->SetBinContent(6,0.2210707);
   met->SetBinContent(7,0.1905789);
   met->SetBinContent(8,0.04059242);
   met->SetBinContent(9,0.03223426);
   met->SetBinContent(10,0.02615548);
   met->SetBinContent(11,0.01872283);
   met->SetBinContent(12,0.005778855);
   met->SetBinContent(13,0.008778731);
   met->SetBinContent(14,1.47571);
   met->SetBinContent(15,1.578236);
   met->SetBinContent(16,1.22203);
   met->SetBinContent(17,1.12152);
   met->SetBinContent(18,0.9345542);
   met->SetBinContent(19,0.7341798);
   met->SetBinContent(20,0.3951029);
   met->SetBinContent(21,0.4998378);
   met->SetBinContent(22,0.3814272);
   met->SetBinContent(23,0.2947505);
   met->SetBinContent(24,0.2415768);
   met->SetBinContent(25,0.1181442);
   met->SetBinContent(26,0.1788684);
   met->SetBinContent(27,0.1543794);
   met->SetBinContent(28,0.04789274);
   met->SetBinContent(29,0.1702789);
   met->SetBinContent(30,0.09876689);
   met->SetBinContent(31,0.04593806);
   met->SetBinContent(32,0.03647636);
   met->SetBinContent(33,0.1022303);
   met->SetBinContent(34,2.448815e-05);
   met->SetBinContent(35,0.04706904);
   met->SetBinContent(36,0.02428388);
   met->SetBinContent(37,0.0304282);
   met->SetBinContent(38,0.03900449);
   met->SetBinContent(39,0.02589829);
   met->SetBinContent(40,0.01534891);
   met->SetBinContent(41,0.05424073);
   met->SetBinContent(44,0.02616766);
   met->SetBinContent(51,0.01222407);
   met->SetBinContent(62,0.007107997);
   met->SetBinError(1,0.06155824);
   met->SetBinError(2,0.09818449);
   met->SetBinError(3,0.08841545);
   met->SetBinError(4,0.07757012);
   met->SetBinError(5,0.0565952);
   met->SetBinError(6,0.03617613);
   met->SetBinError(7,0.03524758);
   met->SetBinError(8,0.0156605);
   met->SetBinError(9,0.01386795);
   met->SetBinError(10,0.01377138);
   met->SetBinError(11,0.01121543);
   met->SetBinError(12,0.005778855);
   met->SetBinError(13,0.006557422);
   met->SetBinError(14,0.1330267);
   met->SetBinError(15,0.1420785);
   met->SetBinError(16,0.1233953);
   met->SetBinError(17,0.1209755);
   met->SetBinError(18,0.1106508);
   met->SetBinError(19,0.0999079);
   met->SetBinError(20,0.07252493);
   met->SetBinError(21,0.08232963);
   met->SetBinError(22,0.06899911);
   met->SetBinError(23,0.06117549);
   met->SetBinError(24,0.05624446);
   met->SetBinError(25,0.03815804);
   met->SetBinError(26,0.04993043);
   met->SetBinError(27,0.04429021);
   met->SetBinError(28,0.0285748);
   met->SetBinError(29,0.04666363);
   met->SetBinError(30,0.03730602);
   met->SetBinError(31,0.02321786);
   met->SetBinError(32,0.01990863);
   met->SetBinError(33,0.03661686);
   met->SetBinError(34,2.448815e-05);
   met->SetBinError(35,0.02371889);
   met->SetBinError(36,0.01717235);
   met->SetBinError(37,0.02212652);
   met->SetBinError(38,0.02254524);
   met->SetBinError(39,0.01834439);
   met->SetBinError(40,0.01534891);
   met->SetBinError(41,0.02720972);
   met->SetBinError(44,0.01851593);
   met->SetBinError(51,0.01222407);
   met->SetBinError(62,0.007107997);
   met->SetEntries(1839);
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
   met->SetBinContent(1,1);
   met->SetBinContent(2,1);
   met->SetBinContent(4,2);
   met->SetBinContent(5,1);
   met->SetBinError(1,1);
   met->SetBinError(2,1);
   met->SetBinError(4,1.414214);
   met->SetBinError(5,1);
   met->SetEntries(5);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVpass");
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
   met->SetBinContent(1,0.633444);
   met->SetBinContent(2,0.2137196);
   met->SetBinContent(4,0.889708);
   met->SetBinContent(5,1.009969);
   met->SetBinError(1,0.6461269);
   met->SetBinError(2,0.2162959);
   met->SetBinError(4,0.6526382);
   met->SetBinError(5,1.044466);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(3.80854);
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
