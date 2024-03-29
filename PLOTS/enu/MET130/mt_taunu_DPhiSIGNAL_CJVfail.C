{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:00 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-0.01084325,446.5823,0.5313191);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
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
   stack->SetMaximum(0.4802009);
   
   TH1F *mt_taunu_stack_11 = new TH1F("mt_taunu_stack_11","stack",25,0,500);
   mt_taunu_stack_11->SetBinContent(0,0.4873724);
   mt_taunu_stack_11->SetBinError(0,0.2041309);
   mt_taunu_stack_11->SetMinimum(0);
   mt_taunu_stack_11->SetMaximum(0.504211);
   mt_taunu_stack_11->SetEntries(7);
   mt_taunu_stack_11->SetStats(0);
   mt_taunu_stack_11->SetFillColor(4);
   mt_taunu_stack_11->SetLineColor(4);
   mt_taunu_stack_11->SetLineWidth(2);
   mt_taunu_stack_11->SetMarkerColor(4);
   mt_taunu_stack_11->SetMarkerStyle(21);
   mt_taunu_stack_11->SetMarkerSize(0.8);
   mt_taunu_stack_11->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu_stack_11->GetXaxis()->SetRange(1,21);
   mt_taunu_stack_11->GetXaxis()->SetLabelFont(42);
   mt_taunu_stack_11->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_11->GetXaxis()->SetLabelSize(0);
   mt_taunu_stack_11->GetXaxis()->SetTitleSize(0);
   mt_taunu_stack_11->GetXaxis()->SetTickLength(0.02);
   mt_taunu_stack_11->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu_stack_11->GetXaxis()->SetTitleFont(42);
   mt_taunu_stack_11->GetYaxis()->SetTitle("Events");
   mt_taunu_stack_11->GetYaxis()->SetLabelFont(42);
   mt_taunu_stack_11->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_11->GetYaxis()->SetLabelSize(0.035);
   mt_taunu_stack_11->GetYaxis()->SetTitleSize(0.045);
   mt_taunu_stack_11->GetYaxis()->SetTickLength(0.02);
   mt_taunu_stack_11->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu_stack_11->GetYaxis()->SetTitleFont(42);
   mt_taunu_stack_11->GetZaxis()->SetLabelFont(42);
   mt_taunu_stack_11->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_11->GetZaxis()->SetLabelSize(0.035);
   mt_taunu_stack_11->GetZaxis()->SetTitleSize(0.045);
   mt_taunu_stack_11->GetZaxis()->SetTickLength(0.02);
   mt_taunu_stack_11->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mt_taunu_stack_11);
   
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,0.4873724);
   mt_taunu->SetBinError(0,0.2041309);
   mt_taunu->SetMaximum(0.4802009);
   mt_taunu->SetEntries(7);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(4);
   mt_taunu->SetLineColor(4);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(4);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu->GetXaxis()->SetRange(1,21);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0);
   mt_taunu->GetXaxis()->SetTitleSize(0);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetTitle("Events");
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"HIST");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,25.35158);
   mt_taunu->SetBinError(0,4.116735);
   mt_taunu->SetEntries(47);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(5);
   mt_taunu->SetLineColor(5);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(5);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,53.87446);
   mt_taunu->SetBinError(0,5.495171);
   mt_taunu->SetEntries(126);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(6);
   mt_taunu->SetLineColor(6);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(6);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,8.163524);
   mt_taunu->SetBinContent(1,0.04781388);
   mt_taunu->SetBinContent(2,0.01954203);
   mt_taunu->SetBinContent(3,0.01956691);
   mt_taunu->SetBinContent(5,0.0177491);
   mt_taunu->SetBinContent(18,0.02094372);
   mt_taunu->SetBinError(0,0.4127736);
   mt_taunu->SetBinError(1,0.03437742);
   mt_taunu->SetBinError(2,0.01954203);
   mt_taunu->SetBinError(3,0.01956691);
   mt_taunu->SetBinError(5,0.0177491);
   mt_taunu->SetBinError(18,0.02094372);
   mt_taunu->SetEntries(461);
   mt_taunu->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mt_taunu->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mt_taunu->SetLineColor(ci);
   mt_taunu->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mt_taunu->SetMarkerColor(ci);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,0.5612751);
   mt_taunu->SetBinContent(3,0.08120943);
   mt_taunu->SetBinContent(4,0.2182731);
   mt_taunu->SetBinError(0,0.2101922);
   mt_taunu->SetBinError(3,0.08120943);
   mt_taunu->SetBinError(4,0.2032086);
   mt_taunu->SetEntries(13);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,0.1775634);
   mt_taunu->SetBinContent(1,0.01286049);
   mt_taunu->SetBinContent(2,0.03402806);
   mt_taunu->SetBinContent(3,0.01237747);
   mt_taunu->SetBinContent(5,0.006007128);
   mt_taunu->SetBinContent(7,0.006166301);
   mt_taunu->SetBinContent(9,0.006768879);
   mt_taunu->SetBinError(0,0.03565302);
   mt_taunu->SetBinError(1,0.009037547);
   mt_taunu->SetBinError(2,0.01566427);
   mt_taunu->SetBinError(3,0.008753633);
   mt_taunu->SetBinError(5,0.006007128);
   mt_taunu->SetBinError(7,0.006166301);
   mt_taunu->SetBinError(9,0.006768879);
   mt_taunu->SetEntries(41);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   stack->Draw("hist");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,55);
   mt_taunu->SetBinError(0,7.416198);
   mt_taunu->SetEntries(55);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(1);
   mt_taunu->SetFillStyle(0);
   mt_taunu->SetLineWidth(3);
   mt_taunu->SetMarkerStyle(20);
   mt_taunu->SetMarkerSize(1.3);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   mt_taunu->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("mt_taunu","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mt_taunu","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","EWK W+jets","f");

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
   entry=leg->AddEntry("mt_taunu","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","Dibosons","f");
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
   lower->Range(-85.06329,-0.653951,446.5823,2.070845);
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
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(0,0.6240894);
   mt_taunu->SetBinError(0,0.09724536);
   mt_taunu->SetMinimum(0);
   mt_taunu->SetMaximum(2);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillStyle(0);
   mt_taunu->SetMarkerStyle(20);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu->GetXaxis()->SetRange(1,21);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.1);
   mt_taunu->GetXaxis()->SetTitleSize(0.12);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetTitle("Data/MC");
   mt_taunu->GetYaxis()->SetNdivisions(505);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.1);
   mt_taunu->GetYaxis()->SetTitleSize(0.12);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(0.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   mt_taunu->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
