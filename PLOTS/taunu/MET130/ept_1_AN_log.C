{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:56:26 2013) by ROOT version5.32/00
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
   upper->Range(-89.11392,-0.02150538,467.8481,1.053763);
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
   stack->SetMaximum(0);
   
   TH1F *ept_1_stack_4 = new TH1F("ept_1_stack_4","stack",25,0,1000);
   ept_1_stack_4->SetBinContent(0,13.26762);
   ept_1_stack_4->SetBinError(0,4.761241);
   ept_1_stack_4->SetMinimum(-0);
   ept_1_stack_4->SetMaximum(nan);
   ept_1_stack_4->SetEntries(40);
   ept_1_stack_4->SetStats(0);
   ept_1_stack_4->SetFillColor(4);
   ept_1_stack_4->SetLineColor(4);
   ept_1_stack_4->SetLineWidth(2);
   ept_1_stack_4->SetMarkerColor(4);
   ept_1_stack_4->SetMarkerStyle(21);
   ept_1_stack_4->SetMarkerSize(0.8);
   ept_1_stack_4->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1_stack_4->GetXaxis()->SetRange(1,11);
   ept_1_stack_4->GetXaxis()->SetLabelFont(42);
   ept_1_stack_4->GetXaxis()->SetLabelOffset(0.007);
   ept_1_stack_4->GetXaxis()->SetLabelSize(0);
   ept_1_stack_4->GetXaxis()->SetTitleSize(0);
   ept_1_stack_4->GetXaxis()->SetTickLength(0.02);
   ept_1_stack_4->GetXaxis()->SetTitleOffset(0.9);
   ept_1_stack_4->GetXaxis()->SetTitleFont(42);
   ept_1_stack_4->GetYaxis()->SetTitle("Events");
   ept_1_stack_4->GetYaxis()->SetLabelFont(42);
   ept_1_stack_4->GetYaxis()->SetLabelOffset(0.007);
   ept_1_stack_4->GetYaxis()->SetLabelSize(0.035);
   ept_1_stack_4->GetYaxis()->SetTitleSize(0.045);
   ept_1_stack_4->GetYaxis()->SetTickLength(0.02);
   ept_1_stack_4->GetYaxis()->SetTitleOffset(1.55);
   ept_1_stack_4->GetYaxis()->SetTitleFont(42);
   ept_1_stack_4->GetZaxis()->SetLabelFont(42);
   ept_1_stack_4->GetZaxis()->SetLabelOffset(0.007);
   ept_1_stack_4->GetZaxis()->SetLabelSize(0.035);
   ept_1_stack_4->GetZaxis()->SetTitleSize(0.045);
   ept_1_stack_4->GetZaxis()->SetTickLength(0.02);
   ept_1_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(ept_1_stack_4);
   
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,13.26762);
   ept_1->SetBinError(0,4.761241);
   ept_1->SetMinimum(0.01);
   ept_1->SetMaximum(0);
   ept_1->SetEntries(40);
   ept_1->SetStats(0);
   ept_1->SetFillColor(4);
   ept_1->SetLineColor(4);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(4);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1->GetXaxis()->SetRange(1,11);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0);
   ept_1->GetXaxis()->SetTitleSize(0);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetTitle("Events");
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"HIST");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,57.01759);
   ept_1->SetBinError(0,6.206275);
   ept_1->SetEntries(109);
   ept_1->SetStats(0);
   ept_1->SetFillColor(5);
   ept_1->SetLineColor(5);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(5);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,228.9628);
   ept_1->SetBinError(0,12.48933);
   ept_1->SetEntries(485);
   ept_1->SetStats(0);
   ept_1->SetFillColor(6);
   ept_1->SetLineColor(6);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(6);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,75.31623);
   ept_1->SetBinError(0,1.235147);
   ept_1->SetEntries(4353);
   ept_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   ept_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   ept_1->SetLineColor(ci);
   ept_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   ept_1->SetMarkerColor(ci);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,12.00513);
   ept_1->SetBinError(0,1.7083);
   ept_1->SetEntries(87);
   ept_1->SetStats(0);
   ept_1->SetFillColor(3);
   ept_1->SetLineColor(3);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(3);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,12.46692);
   ept_1->SetBinError(0,1.239013);
   ept_1->SetEntries(139);
   ept_1->SetStats(0);
   ept_1->SetFillColor(3);
   ept_1->SetLineColor(3);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(3);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,3.169401);
   ept_1->SetBinError(0,0.1513437);
   ept_1->SetEntries(544);
   ept_1->SetStats(0);
   ept_1->SetFillColor(3);
   ept_1->SetLineColor(3);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(3);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   stack->Draw("hist");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,414);
   ept_1->SetBinError(0,20.34699);
   ept_1->SetEntries(414);
   ept_1->SetStats(0);
   ept_1->SetFillColor(1);
   ept_1->SetFillStyle(0);
   ept_1->SetLineWidth(3);
   ept_1->SetMarkerStyle(20);
   ept_1->SetMarkerSize(1.3);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   ept_1->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("ept_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("ept_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ept_1","EWK W+jets","f");

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
   entry=leg->AddEntry("ept_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ept_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ept_1","Dibosons","f");
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
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(0,1.064437);
   ept_1->SetBinError(0,0.06510403);
   ept_1->SetMinimum(0);
   ept_1->SetMaximum(2);
   ept_1->SetStats(0);
   ept_1->SetFillStyle(0);
   ept_1->SetMarkerStyle(20);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1->GetXaxis()->SetRange(1,11);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.1);
   ept_1->GetXaxis()->SetTitleSize(0.12);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetTitle("Data/MC");
   ept_1->GetYaxis()->SetNdivisions(505);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.1);
   ept_1->GetYaxis()->SetTitleSize(0.12);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(0.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   ept_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
