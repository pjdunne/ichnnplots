{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:55 2013) by ROOT version5.32/00
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
   upper->Range(-0.6362734,-2.879293,3.340435,6.65002);
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
   stack->SetMaximum(584055);
   
   TH1F *dphijj_stack_15 = new TH1F("dphijj_stack_15","stack",50,0,3.1416);
   dphijj_stack_15->SetBinContent(49,0.04125056);
   dphijj_stack_15->SetBinError(49,0.04125056);
   dphijj_stack_15->SetMinimum(0.002047826);
   dphijj_stack_15->SetMaximum(1491262);
   dphijj_stack_15->SetEntries(1);
   dphijj_stack_15->SetStats(0);
   dphijj_stack_15->SetFillColor(4);
   dphijj_stack_15->SetLineColor(4);
   dphijj_stack_15->SetLineWidth(2);
   dphijj_stack_15->SetMarkerColor(4);
   dphijj_stack_15->SetMarkerStyle(21);
   dphijj_stack_15->SetMarkerSize(0.8);
   dphijj_stack_15->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj_stack_15->GetXaxis()->SetLabelFont(42);
   dphijj_stack_15->GetXaxis()->SetLabelOffset(0.007);
   dphijj_stack_15->GetXaxis()->SetLabelSize(0);
   dphijj_stack_15->GetXaxis()->SetTitleSize(0);
   dphijj_stack_15->GetXaxis()->SetTickLength(0.02);
   dphijj_stack_15->GetXaxis()->SetTitleOffset(0.9);
   dphijj_stack_15->GetXaxis()->SetTitleFont(42);
   dphijj_stack_15->GetYaxis()->SetTitle("Events");
   dphijj_stack_15->GetYaxis()->SetLabelFont(42);
   dphijj_stack_15->GetYaxis()->SetLabelOffset(0.007);
   dphijj_stack_15->GetYaxis()->SetLabelSize(0.035);
   dphijj_stack_15->GetYaxis()->SetTitleSize(0.045);
   dphijj_stack_15->GetYaxis()->SetTickLength(0.02);
   dphijj_stack_15->GetYaxis()->SetTitleOffset(1.55);
   dphijj_stack_15->GetYaxis()->SetTitleFont(42);
   dphijj_stack_15->GetZaxis()->SetLabelFont(42);
   dphijj_stack_15->GetZaxis()->SetLabelOffset(0.007);
   dphijj_stack_15->GetZaxis()->SetLabelSize(0.035);
   dphijj_stack_15->GetZaxis()->SetTitleSize(0.045);
   dphijj_stack_15->GetZaxis()->SetTickLength(0.02);
   dphijj_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dphijj_stack_15);
   
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(49,0.04125056);
   dphijj->SetBinError(49,0.04125056);
   dphijj->SetMinimum(0.01);
   dphijj->SetMaximum(300000);
   dphijj->SetEntries(1);
   dphijj->SetStats(0);
   dphijj->SetFillColor(4);
   dphijj->SetLineColor(4);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(4);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0);
   dphijj->GetXaxis()->SetTitleSize(0);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetTitle("Events");
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"HIST");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(45,0.5210658);
   dphijj->SetBinError(45,0.5210658);
   dphijj->SetEntries(1);
   dphijj->SetStats(0);
   dphijj->SetFillColor(5);
   dphijj->SetLineColor(5);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(5);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(6);
   dphijj->SetLineColor(6);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(6);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dphijj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dphijj->SetLineColor(ci);
   dphijj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dphijj->SetMarkerColor(ci);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,0.6569335);
   dphijj->SetBinContent(43,1.694367);
   dphijj->SetBinContent(44,0.6269583);
   dphijj->SetBinContent(45,1.393711);
   dphijj->SetBinContent(46,1.176365);
   dphijj->SetBinContent(47,0.9766316);
   dphijj->SetBinContent(48,1.360055);
   dphijj->SetBinContent(49,1.146116);
   dphijj->SetBinContent(50,0.5252047);
   dphijj->SetBinError(42,0.3096913);
   dphijj->SetBinError(43,0.5108194);
   dphijj->SetBinError(44,0.2659016);
   dphijj->SetBinError(45,0.4586861);
   dphijj->SetBinError(46,0.4049349);
   dphijj->SetBinError(47,0.3553926);
   dphijj->SetBinError(48,0.4523334);
   dphijj->SetBinError(49,0.3910252);
   dphijj->SetBinError(50,0.2429678);
   dphijj->SetEntries(86);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,1.041508);
   dphijj->SetBinContent(43,1.826289);
   dphijj->SetBinContent(44,1.825102);
   dphijj->SetBinContent(45,1.978923);
   dphijj->SetBinContent(46,1.94992);
   dphijj->SetBinContent(47,1.806561);
   dphijj->SetBinContent(48,1.736104);
   dphijj->SetBinContent(49,1.413352);
   dphijj->SetBinContent(50,1.787575);
   dphijj->SetBinError(42,0.1037218);
   dphijj->SetBinError(43,0.1386023);
   dphijj->SetBinError(44,0.1399886);
   dphijj->SetBinError(45,0.1439406);
   dphijj->SetBinError(46,0.146377);
   dphijj->SetBinError(47,0.1408397);
   dphijj->SetBinError(48,0.136764);
   dphijj->SetBinError(49,0.1214956);
   dphijj->SetBinError(50,0.1370858);
   dphijj->SetEntries(1839);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   stack->Draw("hist");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(46,1);
   dphijj->SetBinContent(47,1);
   dphijj->SetBinContent(48,2);
   dphijj->SetBinContent(50,1);
   dphijj->SetBinError(46,1);
   dphijj->SetBinError(47,1);
   dphijj->SetBinError(48,1.414214);
   dphijj->SetBinError(50,1);
   dphijj->SetEntries(5);
   dphijj->SetStats(0);
   dphijj->SetFillColor(1);
   dphijj->SetFillStyle(0);
   dphijj->SetLineWidth(3);
   dphijj->SetMarkerStyle(20);
   dphijj->SetMarkerSize(1.3);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("SAMEPE1");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(1);
   dphijj->SetFillStyle(0);
   dphijj->SetLineStyle(2);
   dphijj->SetLineWidth(3);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("dphijj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dphijj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","EWK W+jets","f");

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
   entry=leg->AddEntry("dphijj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","Dibosons","f");
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
   lower->Range(-0.6362734,-0.653951,3.340435,2.070845);
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
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(46,0.3198685);
   dphijj->SetBinContent(47,0.3592996);
   dphijj->SetBinContent(48,0.6459616);
   dphijj->SetBinContent(50,0.4323801);
   dphijj->SetBinError(46,0.3228881);
   dphijj->SetBinError(47,0.3626731);
   dphijj->SetBinError(48,0.467283);
   dphijj->SetBinError(50,0.4355142);
   dphijj->SetMinimum(0);
   dphijj->SetMaximum(2);
   dphijj->SetEntries(4.797719);
   dphijj->SetStats(0);
   dphijj->SetFillStyle(0);
   dphijj->SetMarkerStyle(20);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.1);
   dphijj->GetXaxis()->SetTitleSize(0.12);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetTitle("Data/MC");
   dphijj->GetYaxis()->SetNdivisions(505);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.1);
   dphijj->GetYaxis()->SetTitleSize(0.12);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(0.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
