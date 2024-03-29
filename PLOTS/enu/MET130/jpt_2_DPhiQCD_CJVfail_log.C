{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:13 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.861079,1063.291,6.358692);
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
   stack->SetMaximum(316061.6);
   
   TH1F *jpt_2_stack_12 = new TH1F("jpt_2_stack_12","stack",25,0,1000);
   jpt_2_stack_12->SetBinContent(2,0.0420392);
   jpt_2_stack_12->SetBinError(2,0.0420392);
   jpt_2_stack_12->SetMinimum(0.002105314);
   jpt_2_stack_12->SetMaximum(790139.5);
   jpt_2_stack_12->SetEntries(1);
   jpt_2_stack_12->SetStats(0);
   jpt_2_stack_12->SetFillColor(4);
   jpt_2_stack_12->SetLineColor(4);
   jpt_2_stack_12->SetLineWidth(2);
   jpt_2_stack_12->SetMarkerColor(4);
   jpt_2_stack_12->SetMarkerStyle(21);
   jpt_2_stack_12->SetMarkerSize(0.8);
   jpt_2_stack_12->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2_stack_12->GetXaxis()->SetLabelFont(42);
   jpt_2_stack_12->GetXaxis()->SetLabelOffset(0.007);
   jpt_2_stack_12->GetXaxis()->SetLabelSize(0);
   jpt_2_stack_12->GetXaxis()->SetTitleSize(0);
   jpt_2_stack_12->GetXaxis()->SetTickLength(0.02);
   jpt_2_stack_12->GetXaxis()->SetTitleOffset(0.9);
   jpt_2_stack_12->GetXaxis()->SetTitleFont(42);
   jpt_2_stack_12->GetYaxis()->SetTitle("Events");
   jpt_2_stack_12->GetYaxis()->SetLabelFont(42);
   jpt_2_stack_12->GetYaxis()->SetLabelOffset(0.007);
   jpt_2_stack_12->GetYaxis()->SetLabelSize(0.035);
   jpt_2_stack_12->GetYaxis()->SetTitleSize(0.045);
   jpt_2_stack_12->GetYaxis()->SetTickLength(0.02);
   jpt_2_stack_12->GetYaxis()->SetTitleOffset(1.55);
   jpt_2_stack_12->GetYaxis()->SetTitleFont(42);
   jpt_2_stack_12->GetZaxis()->SetLabelFont(42);
   jpt_2_stack_12->GetZaxis()->SetLabelOffset(0.007);
   jpt_2_stack_12->GetZaxis()->SetLabelSize(0.035);
   jpt_2_stack_12->GetZaxis()->SetTitleSize(0.045);
   jpt_2_stack_12->GetZaxis()->SetTickLength(0.02);
   jpt_2_stack_12->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_2_stack_12);
   
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,0.0420392);
   jpt_2->SetBinError(2,0.0420392);
   jpt_2->SetMinimum(0.01);
   jpt_2->SetMaximum(270000);
   jpt_2->SetEntries(1);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(4);
   jpt_2->SetLineColor(4);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(4);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0);
   jpt_2->GetXaxis()->SetTitleSize(0);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetTitle("Events");
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"HIST");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,2.498014);
   jpt_2->SetBinContent(3,7.436982);
   jpt_2->SetBinContent(4,2.200313);
   jpt_2->SetBinContent(5,0.7815437);
   jpt_2->SetBinError(2,1.315402);
   jpt_2->SetBinError(3,2.228913);
   jpt_2->SetBinError(4,1.27212);
   jpt_2->SetBinError(5,0.7815437);
   jpt_2->SetEntries(21);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(5);
   jpt_2->SetLineColor(5);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(5);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,13.28401);
   jpt_2->SetBinContent(3,11.80701);
   jpt_2->SetBinContent(4,4.428612);
   jpt_2->SetBinContent(5,1.590872);
   jpt_2->SetBinContent(6,0.09098659);
   jpt_2->SetBinError(2,2.47876);
   jpt_2->SetBinError(3,2.373812);
   jpt_2->SetBinError(4,1.309104);
   jpt_2->SetBinError(5,0.7874811);
   jpt_2->SetBinError(6,0.09098659);
   jpt_2->SetEntries(81);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(6);
   jpt_2->SetLineColor(6);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(6);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,1.497035);
   jpt_2->SetBinContent(3,1.689871);
   jpt_2->SetBinContent(4,0.9641721);
   jpt_2->SetBinContent(5,0.2878274);
   jpt_2->SetBinContent(6,0.2470586);
   jpt_2->SetBinContent(7,0.06209695);
   jpt_2->SetBinContent(8,0.03265895);
   jpt_2->SetBinContent(9,0.01267048);
   jpt_2->SetBinContent(10,0.01298065);
   jpt_2->SetBinContent(11,0.01860529);
   jpt_2->SetBinError(2,0.1711377);
   jpt_2->SetBinError(3,0.1798565);
   jpt_2->SetBinError(4,0.1417554);
   jpt_2->SetBinError(5,0.07313161);
   jpt_2->SetBinError(6,0.07019902);
   jpt_2->SetBinError(7,0.03708216);
   jpt_2->SetBinError(8,0.02342714);
   jpt_2->SetBinError(9,0.01267048);
   jpt_2->SetBinError(10,0.01298065);
   jpt_2->SetBinError(11,0.01860529);
   jpt_2->SetEntries(292);
   jpt_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_2->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_2->SetLineColor(ci);
   jpt_2->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_2->SetMarkerColor(ci);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,0.08170766);
   jpt_2->SetBinContent(3,0.1241645);
   jpt_2->SetBinError(2,0.08170767);
   jpt_2->SetBinError(3,0.07711597);
   jpt_2->SetEntries(4);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,0.05577087);
   jpt_2->SetBinContent(3,0.01274014);
   jpt_2->SetBinContent(4,0.01680758);
   jpt_2->SetBinContent(5,0.01147865);
   jpt_2->SetBinContent(6,0.005901728);
   jpt_2->SetBinError(2,0.01784027);
   jpt_2->SetBinError(3,0.008274028);
   jpt_2->SetBinError(4,0.009832036);
   jpt_2->SetBinError(5,0.008117001);
   jpt_2->SetBinError(6,0.005901728);
   jpt_2->SetEntries(22);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   stack->Draw("hist");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,18);
   jpt_2->SetBinContent(3,11);
   jpt_2->SetBinContent(4,6);
   jpt_2->SetBinContent(5,1);
   jpt_2->SetBinContent(6,1);
   jpt_2->SetBinError(2,4.242641);
   jpt_2->SetBinError(3,3.316625);
   jpt_2->SetBinError(4,2.44949);
   jpt_2->SetBinError(5,1);
   jpt_2->SetBinError(6,1);
   jpt_2->SetEntries(37);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(1);
   jpt_2->SetFillStyle(0);
   jpt_2->SetLineWidth(3);
   jpt_2->SetMarkerStyle(20);
   jpt_2->SetMarkerSize(1.3);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("SAMEPE1");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(1);
   jpt_2->SetFillStyle(0);
   jpt_2->SetLineStyle(2);
   jpt_2->SetLineWidth(3);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("jpt_2","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_2","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_2","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","Dibosons","f");
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
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,1.0335);
   jpt_2->SetBinContent(3,0.5220501);
   jpt_2->SetBinContent(4,0.7884461);
   jpt_2->SetBinContent(5,0.3742905);
   jpt_2->SetBinContent(6,2.907425);
   jpt_2->SetBinError(2,0.29529);
   jpt_2->SetBinError(3,0.1769414);
   jpt_2->SetBinError(4,0.3736211);
   jpt_2->SetBinError(5,0.4054111);
   jpt_2->SetBinError(6,3.065825);
   jpt_2->SetMinimum(0);
   jpt_2->SetMaximum(2);
   jpt_2->SetEntries(3.222305);
   jpt_2->SetStats(0);
   jpt_2->SetFillStyle(0);
   jpt_2->SetMarkerStyle(20);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.1);
   jpt_2->GetXaxis()->SetTitleSize(0.12);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetTitle("Data/MC");
   jpt_2->GetYaxis()->SetNdivisions(505);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.1);
   jpt_2->GetYaxis()->SetTitleSize(0.12);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(0.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
