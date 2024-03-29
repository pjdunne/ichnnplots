{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:45:16 2013) by ROOT version5.32/00
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
   upper->Range(-1.21519,-2.586268,6.379747,2.594828);
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
   stack->SetMaximum(119.3465);
   
   TH1F *n_taus_stack_15 = new TH1F("n_taus_stack_15","stack",10,0,10);
   n_taus_stack_15->SetBinContent(1,0.151463);
   n_taus_stack_15->SetBinError(1,0.07610076);
   n_taus_stack_15->SetMinimum(0.003291201);
   n_taus_stack_15->SetMaximum(216.6571);
   n_taus_stack_15->SetEntries(4);
   n_taus_stack_15->SetStats(0);
   n_taus_stack_15->SetFillColor(4);
   n_taus_stack_15->SetLineColor(4);
   n_taus_stack_15->SetLineWidth(2);
   n_taus_stack_15->SetMarkerColor(4);
   n_taus_stack_15->SetMarkerStyle(21);
   n_taus_stack_15->SetMarkerSize(0.8);
   n_taus_stack_15->GetXaxis()->SetTitle("Number of taus");
   n_taus_stack_15->GetXaxis()->SetRange(1,6);
   n_taus_stack_15->GetXaxis()->SetLabelFont(42);
   n_taus_stack_15->GetXaxis()->SetLabelOffset(0.007);
   n_taus_stack_15->GetXaxis()->SetLabelSize(0);
   n_taus_stack_15->GetXaxis()->SetTitleSize(0);
   n_taus_stack_15->GetXaxis()->SetTickLength(0.02);
   n_taus_stack_15->GetXaxis()->SetTitleOffset(0.9);
   n_taus_stack_15->GetXaxis()->SetTitleFont(42);
   n_taus_stack_15->GetYaxis()->SetTitle("Events");
   n_taus_stack_15->GetYaxis()->SetLabelFont(42);
   n_taus_stack_15->GetYaxis()->SetLabelOffset(0.007);
   n_taus_stack_15->GetYaxis()->SetLabelSize(0.035);
   n_taus_stack_15->GetYaxis()->SetTitleSize(0.045);
   n_taus_stack_15->GetYaxis()->SetTickLength(0.02);
   n_taus_stack_15->GetYaxis()->SetTitleOffset(1.55);
   n_taus_stack_15->GetYaxis()->SetTitleFont(42);
   n_taus_stack_15->GetZaxis()->SetLabelFont(42);
   n_taus_stack_15->GetZaxis()->SetLabelOffset(0.007);
   n_taus_stack_15->GetZaxis()->SetLabelSize(0.035);
   n_taus_stack_15->GetZaxis()->SetTitleSize(0.045);
   n_taus_stack_15->GetZaxis()->SetTickLength(0.02);
   n_taus_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_taus_stack_15);
   
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,0.151463);
   n_taus->SetBinError(1,0.07610076);
   n_taus->SetMinimum(0.01);
   n_taus->SetMaximum(56.69535);
   n_taus->SetEntries(4);
   n_taus->SetStats(0);
   n_taus->SetFillColor(4);
   n_taus->SetLineColor(4);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(4);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetTitle("Number of taus");
   n_taus->GetXaxis()->SetRange(1,6);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0);
   n_taus->GetXaxis()->SetTitleSize(0);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetTitle("Events");
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"HIST");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,3.474405);
   n_taus->SetBinError(1,1.567215);
   n_taus->SetEntries(5);
   n_taus->SetStats(0);
   n_taus->SetFillColor(5);
   n_taus->SetLineColor(5);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(5);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetStats(0);
   n_taus->SetFillColor(6);
   n_taus->SetLineColor(6);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(6);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_taus->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_taus->SetLineColor(ci);
   n_taus->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_taus->SetMarkerColor(ci);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetStats(0);
   n_taus->SetFillColor(3);
   n_taus->SetLineColor(3);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(3);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,17.25785);
   n_taus->SetBinContent(2,0.1077964);
   n_taus->SetBinError(1,1.441553);
   n_taus->SetBinError(2,0.1077964);
   n_taus->SetEntries(181);
   n_taus->SetStats(0);
   n_taus->SetFillColor(3);
   n_taus->SetLineColor(3);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(3);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,18.89845);
   n_taus->SetBinContent(2,0.02483382);
   n_taus->SetBinError(1,0.4493096);
   n_taus->SetBinError(2,0.01561668);
   n_taus->SetEntries(2263);
   n_taus->SetStats(0);
   n_taus->SetFillColor(3);
   n_taus->SetLineColor(3);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(3);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   stack->Draw("hist");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,18);
   n_taus->SetBinError(1,4.242641);
   n_taus->SetEntries(18);
   n_taus->SetStats(0);
   n_taus->SetFillColor(1);
   n_taus->SetFillStyle(0);
   n_taus->SetLineWidth(3);
   n_taus->SetMarkerStyle(20);
   n_taus->SetMarkerSize(1.3);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   n_taus->Draw("SAMEPE1");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetStats(0);
   n_taus->SetFillColor(1);
   n_taus->SetFillStyle(0);
   n_taus->SetLineStyle(2);
   n_taus->SetLineWidth(3);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   n_taus->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("n_taus","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_taus","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","EWK W+jets","f");

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
   entry=leg->AddEntry("n_taus","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","Dibosons","f");
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
   lower->Range(-1.21519,-0.653951,6.379747,2.070845);
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
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,0.4541933);
   n_taus->SetBinError(1,0.1099214);
   n_taus->SetMinimum(0);
   n_taus->SetMaximum(2);
   n_taus->SetEntries(17.07328);
   n_taus->SetStats(0);
   n_taus->SetFillStyle(0);
   n_taus->SetMarkerStyle(20);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetTitle("Number of taus");
   n_taus->GetXaxis()->SetRange(1,6);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.1);
   n_taus->GetXaxis()->SetTitleSize(0.12);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetTitle("Data/MC");
   n_taus->GetYaxis()->SetNdivisions(505);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.1);
   n_taus->GetYaxis()->SetTitleSize(0.12);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(0.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   n_taus->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
