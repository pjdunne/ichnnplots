{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:56:16 2013) by ROOT version5.32/00
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
   upper->Range(-89.11392,-2.689165,467.8481,3.867425);
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
   stack->SetMaximum(1693.336);
   
   TH1F *mupt_1_stack_6 = new TH1F("mupt_1_stack_6","stack",25,0,1000);
   mupt_1_stack_6->SetBinContent(0,6.251138);
   mupt_1_stack_6->SetBinError(0,3.051512);
   mupt_1_stack_6->SetMinimum(0.002766733);
   mupt_1_stack_6->SetMaximum(3464.141);
   mupt_1_stack_6->SetEntries(35);
   mupt_1_stack_6->SetStats(0);
   mupt_1_stack_6->SetFillColor(4);
   mupt_1_stack_6->SetLineColor(4);
   mupt_1_stack_6->SetLineWidth(2);
   mupt_1_stack_6->SetMarkerColor(4);
   mupt_1_stack_6->SetMarkerStyle(21);
   mupt_1_stack_6->SetMarkerSize(0.8);
   mupt_1_stack_6->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1_stack_6->GetXaxis()->SetRange(1,11);
   mupt_1_stack_6->GetXaxis()->SetLabelFont(42);
   mupt_1_stack_6->GetXaxis()->SetLabelOffset(0.007);
   mupt_1_stack_6->GetXaxis()->SetLabelSize(0);
   mupt_1_stack_6->GetXaxis()->SetTitleSize(0);
   mupt_1_stack_6->GetXaxis()->SetTickLength(0.02);
   mupt_1_stack_6->GetXaxis()->SetTitleOffset(0.9);
   mupt_1_stack_6->GetXaxis()->SetTitleFont(42);
   mupt_1_stack_6->GetYaxis()->SetTitle("Events");
   mupt_1_stack_6->GetYaxis()->SetLabelFont(42);
   mupt_1_stack_6->GetYaxis()->SetLabelOffset(0.007);
   mupt_1_stack_6->GetYaxis()->SetLabelSize(0.035);
   mupt_1_stack_6->GetYaxis()->SetTitleSize(0.045);
   mupt_1_stack_6->GetYaxis()->SetTickLength(0.02);
   mupt_1_stack_6->GetYaxis()->SetTitleOffset(1.55);
   mupt_1_stack_6->GetYaxis()->SetTitleFont(42);
   mupt_1_stack_6->GetZaxis()->SetLabelFont(42);
   mupt_1_stack_6->GetZaxis()->SetLabelOffset(0.007);
   mupt_1_stack_6->GetZaxis()->SetLabelSize(0.035);
   mupt_1_stack_6->GetZaxis()->SetTitleSize(0.045);
   mupt_1_stack_6->GetZaxis()->SetTickLength(0.02);
   mupt_1_stack_6->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mupt_1_stack_6);
   
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,6.251138);
   mupt_1->SetBinError(0,3.051512);
   mupt_1->SetMinimum(0.01);
   mupt_1->SetMaximum(1693.336);
   mupt_1->SetEntries(35);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(4);
   mupt_1->SetLineColor(4);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(4);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1->GetXaxis()->SetRange(1,11);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0);
   mupt_1->GetXaxis()->SetTitleSize(0);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetTitle("Events");
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"HIST");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,40.09555);
   mupt_1->SetBinError(0,4.919438);
   mupt_1->SetEntries(89);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(5);
   mupt_1->SetLineColor(5);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(5);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,144.4551);
   mupt_1->SetBinError(0,9.875831);
   mupt_1->SetEntries(318);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(6);
   mupt_1->SetLineColor(6);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(6);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,47.79945);
   mupt_1->SetBinError(0,0.9758846);
   mupt_1->SetEntries(2812);
   mupt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mupt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mupt_1->SetLineColor(ci);
   mupt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mupt_1->SetMarkerColor(ci);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,10.76348);
   mupt_1->SetBinError(0,1.891124);
   mupt_1->SetEntries(67);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(3);
   mupt_1->SetLineColor(3);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(3);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,6.669404);
   mupt_1->SetBinError(0,0.8769145);
   mupt_1->SetEntries(77);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(3);
   mupt_1->SetLineColor(3);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(3);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,1.584643);
   mupt_1->SetBinContent(2,0.002873864);
   mupt_1->SetBinContent(3,0.07909194);
   mupt_1->SetBinContent(4,0.1128891);
   mupt_1->SetBinContent(5,0.05615797);
   mupt_1->SetBinContent(6,0.02959171);
   mupt_1->SetBinContent(7,0.01164037);
   mupt_1->SetBinContent(11,0.01246771);
   mupt_1->SetBinError(0,0.1008485);
   mupt_1->SetBinError(2,0.002873864);
   mupt_1->SetBinError(3,0.02937582);
   mupt_1->SetBinError(4,0.03671464);
   mupt_1->SetBinError(5,0.02681346);
   mupt_1->SetBinError(6,0.02101495);
   mupt_1->SetBinError(7,0.01164037);
   mupt_1->SetBinError(11,0.01246771);
   mupt_1->SetEntries(319);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(3);
   mupt_1->SetLineColor(3);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(3);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   stack->Draw("hist");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,248);
   mupt_1->SetBinError(0,15.74802);
   mupt_1->SetEntries(248);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(1);
   mupt_1->SetFillStyle(0);
   mupt_1->SetLineWidth(3);
   mupt_1->SetMarkerStyle(20);
   mupt_1->SetMarkerSize(1.3);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   mupt_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"MET");
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
   TLegendEntry *entry=leg->AddEntry("mupt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mupt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mupt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("mupt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mupt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mupt_1","Dibosons","f");
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
   lower->Range(-89.11392,-0.653951,467.8481,2.070845);
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
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(0,0.986603);
   mupt_1->SetBinError(0,0.07669436);
   mupt_1->SetMinimum(0);
   mupt_1->SetMaximum(2);
   mupt_1->SetStats(0);
   mupt_1->SetFillStyle(0);
   mupt_1->SetMarkerStyle(20);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1->GetXaxis()->SetRange(1,11);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.1);
   mupt_1->GetXaxis()->SetTitleSize(0.12);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetTitle("Data/MC");
   mupt_1->GetYaxis()->SetNdivisions(505);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.1);
   mupt_1->GetYaxis()->SetTitleSize(0.12);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(0.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   mupt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
