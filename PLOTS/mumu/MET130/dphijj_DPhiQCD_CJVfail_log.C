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
   upper->Range(-0.6362734,-2.867909,3.340435,6.467328);
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
   stack->SetMaximum(397368.3);
   
   TH1F *dphijj_stack_12 = new TH1F("dphijj_stack_12","stack",50,0,3.1416);
   dphijj_stack_12->SetBinContent(44,0.04163286);
   dphijj_stack_12->SetBinContent(46,0.03584622);
   dphijj_stack_12->SetBinContent(48,0.03273334);
   dphijj_stack_12->SetBinError(44,0.04163286);
   dphijj_stack_12->SetBinError(46,0.03584622);
   dphijj_stack_12->SetBinError(48,0.03273334);
   dphijj_stack_12->SetMinimum(0.002083508);
   dphijj_stack_12->SetMaximum(1001304);
   dphijj_stack_12->SetEntries(3);
   dphijj_stack_12->SetStats(0);
   dphijj_stack_12->SetFillColor(4);
   dphijj_stack_12->SetLineColor(4);
   dphijj_stack_12->SetLineWidth(2);
   dphijj_stack_12->SetMarkerColor(4);
   dphijj_stack_12->SetMarkerStyle(21);
   dphijj_stack_12->SetMarkerSize(0.8);
   dphijj_stack_12->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj_stack_12->GetXaxis()->SetLabelFont(42);
   dphijj_stack_12->GetXaxis()->SetLabelOffset(0.007);
   dphijj_stack_12->GetXaxis()->SetLabelSize(0);
   dphijj_stack_12->GetXaxis()->SetTitleSize(0);
   dphijj_stack_12->GetXaxis()->SetTickLength(0.02);
   dphijj_stack_12->GetXaxis()->SetTitleOffset(0.9);
   dphijj_stack_12->GetXaxis()->SetTitleFont(42);
   dphijj_stack_12->GetYaxis()->SetTitle("Events");
   dphijj_stack_12->GetYaxis()->SetLabelFont(42);
   dphijj_stack_12->GetYaxis()->SetLabelOffset(0.007);
   dphijj_stack_12->GetYaxis()->SetLabelSize(0.035);
   dphijj_stack_12->GetYaxis()->SetTitleSize(0.045);
   dphijj_stack_12->GetYaxis()->SetTickLength(0.02);
   dphijj_stack_12->GetYaxis()->SetTitleOffset(1.55);
   dphijj_stack_12->GetYaxis()->SetTitleFont(42);
   dphijj_stack_12->GetZaxis()->SetLabelFont(42);
   dphijj_stack_12->GetZaxis()->SetLabelOffset(0.007);
   dphijj_stack_12->GetZaxis()->SetLabelSize(0.035);
   dphijj_stack_12->GetZaxis()->SetTitleSize(0.045);
   dphijj_stack_12->GetZaxis()->SetTickLength(0.02);
   dphijj_stack_12->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dphijj_stack_12);
   
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(44,0.04163286);
   dphijj->SetBinContent(46,0.03584622);
   dphijj->SetBinContent(48,0.03273334);
   dphijj->SetBinError(44,0.04163286);
   dphijj->SetBinError(46,0.03584622);
   dphijj->SetBinError(48,0.03273334);
   dphijj->SetMinimum(0.01);
   dphijj->SetMaximum(300000);
   dphijj->SetEntries(3);
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
   dphijj->SetBinContent(43,0.7296048);
   dphijj->SetBinContent(44,0.7040896);
   dphijj->SetBinContent(46,0.7287824);
   dphijj->SetBinContent(49,0.790862);
   dphijj->SetBinError(43,0.7296048);
   dphijj->SetBinError(44,0.7040896);
   dphijj->SetBinError(46,0.7287823);
   dphijj->SetBinError(49,0.790862);
   dphijj->SetEntries(4);
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
   dphijj->SetBinContent(42,0.7007569);
   dphijj->SetBinContent(43,0.4680078);
   dphijj->SetBinContent(44,1.380987);
   dphijj->SetBinContent(45,0.7815078);
   dphijj->SetBinContent(46,0.9944589);
   dphijj->SetBinContent(47,1.346262);
   dphijj->SetBinContent(48,1.010266);
   dphijj->SetBinContent(49,0.6219611);
   dphijj->SetBinContent(50,0.5050941);
   dphijj->SetBinError(42,0.240134);
   dphijj->SetBinError(43,0.1895147);
   dphijj->SetBinError(44,0.3635795);
   dphijj->SetBinError(45,0.3018773);
   dphijj->SetBinError(46,0.3082728);
   dphijj->SetBinError(47,0.3753037);
   dphijj->SetBinError(48,0.2965463);
   dphijj->SetBinError(49,0.2479092);
   dphijj->SetBinError(50,0.2067691);
   dphijj->SetEntries(95);
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
   dphijj->SetBinContent(42,0.3083682);
   dphijj->SetBinContent(43,0.3300639);
   dphijj->SetBinContent(44,0.522413);
   dphijj->SetBinContent(45,0.4267915);
   dphijj->SetBinContent(46,0.434105);
   dphijj->SetBinContent(47,0.4429523);
   dphijj->SetBinContent(48,0.2969321);
   dphijj->SetBinContent(49,0.3636614);
   dphijj->SetBinContent(50,0.4326569);
   dphijj->SetBinError(42,0.05738671);
   dphijj->SetBinError(43,0.06054687);
   dphijj->SetBinError(44,0.07523408);
   dphijj->SetBinError(45,0.06811766);
   dphijj->SetBinError(46,0.06650187);
   dphijj->SetBinError(47,0.06978909);
   dphijj->SetBinError(48,0.05370456);
   dphijj->SetBinError(49,0.06224595);
   dphijj->SetBinError(50,0.07076149);
   dphijj->SetEntries(424);
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
   dphijj->SetBinContent(42,2);
   dphijj->SetBinContent(43,2);
   dphijj->SetBinContent(44,2);
   dphijj->SetBinContent(45,1);
   dphijj->SetBinContent(46,1);
   dphijj->SetBinContent(47,2);
   dphijj->SetBinContent(48,2);
   dphijj->SetBinContent(49,1);
   dphijj->SetBinError(42,1.414214);
   dphijj->SetBinError(43,1.414214);
   dphijj->SetBinError(44,1.414214);
   dphijj->SetBinError(45,1);
   dphijj->SetBinError(46,1);
   dphijj->SetBinError(47,1.414214);
   dphijj->SetBinError(48,1.414214);
   dphijj->SetBinError(49,1);
   dphijj->SetEntries(13);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVfail");
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
   dphijj->SetBinContent(42,1.981915);
   dphijj->SetBinContent(43,1.309178);
   dphijj->SetBinContent(44,0.7670214);
   dphijj->SetBinContent(45,0.8276095);
   dphijj->SetBinContent(46,0.4635324);
   dphijj->SetBinContent(47,1.117809);
   dphijj->SetBinContent(48,1.52999);
   dphijj->SetBinContent(49,0.5629095);
   dphijj->SetBinError(42,1.482944);
   dphijj->SetBinError(43,1.130036);
   dphijj->SetBinError(44,0.5907504);
   dphijj->SetBinError(45,0.8543225);
   dphijj->SetBinError(46,0.4939367);
   dphijj->SetBinError(47,0.8256066);
   dphijj->SetBinError(48,1.137917);
   dphijj->SetBinError(49,0.6214711);
   dphijj->SetMinimum(0);
   dphijj->SetMaximum(2);
   dphijj->SetEntries(10.23132);
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
