{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:57 2013) by ROOT version5.32/00
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
   upper->Range(-2.810127,-2.866426,2.253165,6.443678);
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
   stack->SetMaximum(378048);
   
   TH1F *edz_all_stack_12 = new TH1F("edz_all_stack_12","stack",100,-2,2);
   edz_all_stack_12->SetBinContent(51,0.0420392);
   edz_all_stack_12->SetBinError(51,0.0420392);
   edz_all_stack_12->SetMinimum(0.002088217);
   edz_all_stack_12->SetMaximum(950983.2);
   edz_all_stack_12->SetEntries(1);
   edz_all_stack_12->SetStats(0);
   edz_all_stack_12->SetFillColor(4);
   edz_all_stack_12->SetLineColor(4);
   edz_all_stack_12->SetLineWidth(2);
   edz_all_stack_12->SetMarkerColor(4);
   edz_all_stack_12->SetMarkerStyle(21);
   edz_all_stack_12->SetMarkerSize(0.8);
   edz_all_stack_12->GetXaxis()->SetTitle("Electron d_{z}");
   edz_all_stack_12->GetXaxis()->SetLabelFont(42);
   edz_all_stack_12->GetXaxis()->SetLabelOffset(0.007);
   edz_all_stack_12->GetXaxis()->SetLabelSize(0);
   edz_all_stack_12->GetXaxis()->SetTitleSize(0);
   edz_all_stack_12->GetXaxis()->SetTickLength(0.02);
   edz_all_stack_12->GetXaxis()->SetTitleOffset(0.9);
   edz_all_stack_12->GetXaxis()->SetTitleFont(42);
   edz_all_stack_12->GetYaxis()->SetTitle("Events");
   edz_all_stack_12->GetYaxis()->SetLabelFont(42);
   edz_all_stack_12->GetYaxis()->SetLabelOffset(0.007);
   edz_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   edz_all_stack_12->GetYaxis()->SetTitleSize(0.045);
   edz_all_stack_12->GetYaxis()->SetTickLength(0.02);
   edz_all_stack_12->GetYaxis()->SetTitleOffset(1.55);
   edz_all_stack_12->GetYaxis()->SetTitleFont(42);
   edz_all_stack_12->GetZaxis()->SetLabelFont(42);
   edz_all_stack_12->GetZaxis()->SetLabelOffset(0.007);
   edz_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   edz_all_stack_12->GetZaxis()->SetTitleSize(0.045);
   edz_all_stack_12->GetZaxis()->SetTickLength(0.02);
   edz_all_stack_12->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(edz_all_stack_12);
   
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(51,0.0420392);
   edz_all->SetBinError(51,0.0420392);
   edz_all->SetMinimum(0.01);
   edz_all->SetMaximum(315000);
   edz_all->SetEntries(1);
   edz_all->SetStats(0);
   edz_all->SetFillColor(4);
   edz_all->SetLineColor(4);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(4);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetTitle("Electron d_{z}");
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0);
   edz_all->GetXaxis()->SetTitleSize(0);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetTitle("Events");
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"HIST");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,7.72538);
   edz_all->SetBinContent(51,5.191473);
   edz_all->SetBinError(50,2.346452);
   edz_all->SetBinError(51,1.849757);
   edz_all->SetEntries(21);
   edz_all->SetStats(0);
   edz_all->SetFillColor(5);
   edz_all->SetLineColor(5);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(5);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(49,0.3599512);
   edz_all->SetBinContent(50,15.31686);
   edz_all->SetBinContent(51,15.13011);
   edz_all->SetBinContent(52,0.3945709);
   edz_all->SetBinError(49,0.3599512);
   edz_all->SetBinError(50,2.575106);
   edz_all->SetBinError(51,2.684208);
   edz_all->SetBinError(52,0.3945709);
   edz_all->SetEntries(81);
   edz_all->SetStats(0);
   edz_all->SetFillColor(6);
   edz_all->SetLineColor(6);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(6);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(49,0.06077668);
   edz_all->SetBinContent(50,1.937997);
   edz_all->SetBinContent(51,2.79088);
   edz_all->SetBinContent(52,0.03532305);
   edz_all->SetBinError(49,0.03512243);
   edz_all->SetBinError(50,0.1928334);
   edz_all->SetBinError(51,0.2359673);
   edz_all->SetBinError(52,0.02252681);
   edz_all->SetEntries(292);
   edz_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   edz_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   edz_all->SetLineColor(ci);
   edz_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   edz_all->SetMarkerColor(ci);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetStats(0);
   edz_all->SetFillColor(3);
   edz_all->SetLineColor(3);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(3);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,0.1437476);
   edz_all->SetBinContent(51,0.06212462);
   edz_all->SetBinError(50,0.09361382);
   edz_all->SetBinError(51,0.06212462);
   edz_all->SetEntries(4);
   edz_all->SetStats(0);
   edz_all->SetFillColor(3);
   edz_all->SetLineColor(3);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(3);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,0.07921325);
   edz_all->SetBinContent(51,0.02348572);
   edz_all->SetBinError(50,0.02128415);
   edz_all->SetBinError(51,0.0114501);
   edz_all->SetEntries(22);
   edz_all->SetStats(0);
   edz_all->SetFillColor(3);
   edz_all->SetLineColor(3);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(3);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   stack->Draw("hist");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,16);
   edz_all->SetBinContent(51,21);
   edz_all->SetBinError(50,4);
   edz_all->SetBinError(51,4.582576);
   edz_all->SetEntries(37);
   edz_all->SetStats(0);
   edz_all->SetFillColor(1);
   edz_all->SetFillStyle(0);
   edz_all->SetLineWidth(3);
   edz_all->SetMarkerStyle(20);
   edz_all->SetMarkerSize(1.3);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   edz_all->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("edz_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("edz_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edz_all","EWK W+jets","f");

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
   entry=leg->AddEntry("edz_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edz_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edz_all","Dibosons","f");
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
   lower->Range(-2.810127,-0.653951,2.253165,2.070845);
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
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,0.6348401);
   edz_all->SetBinContent(51,0.9052476);
   edz_all->SetBinError(50,0.1814359);
   edz_all->SetBinError(51,0.2351491);
   edz_all->SetMinimum(0);
   edz_all->SetMaximum(2);
   edz_all->SetEntries(26.88766);
   edz_all->SetStats(0);
   edz_all->SetFillStyle(0);
   edz_all->SetMarkerStyle(20);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetTitle("Electron d_{z}");
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.1);
   edz_all->GetXaxis()->SetTitleSize(0.12);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetTitle("Data/MC");
   edz_all->GetYaxis()->SetNdivisions(505);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.1);
   edz_all->GetYaxis()->SetTitleSize(0.12);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(0.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   edz_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
