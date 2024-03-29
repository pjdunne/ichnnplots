{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:43 2013) by ROOT version5.32/00
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
   upper->Range(-2.810127,-2.93274,2.253165,7.535383);
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
   stack->SetMaximum(3785364);
   
   TH1F *mudz_all_stack_15 = new TH1F("mudz_all_stack_15","stack",100,-2,2);
   mudz_all_stack_15->SetBinContent(50,5.674478);
   mudz_all_stack_15->SetBinContent(51,10.19044);
   mudz_all_stack_15->SetBinError(50,3.271539);
   mudz_all_stack_15->SetBinError(51,4.703026);
   mudz_all_stack_15->SetMinimum(0.001890697);
   mudz_all_stack_15->SetMaximum(1.027962e+07);
   mudz_all_stack_15->SetEntries(25);
   mudz_all_stack_15->SetStats(0);
   mudz_all_stack_15->SetFillColor(4);
   mudz_all_stack_15->SetLineColor(4);
   mudz_all_stack_15->SetLineWidth(2);
   mudz_all_stack_15->SetMarkerColor(4);
   mudz_all_stack_15->SetMarkerStyle(21);
   mudz_all_stack_15->SetMarkerSize(0.8);
   mudz_all_stack_15->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all_stack_15->GetXaxis()->SetLabelFont(42);
   mudz_all_stack_15->GetXaxis()->SetLabelOffset(0.007);
   mudz_all_stack_15->GetXaxis()->SetLabelSize(0);
   mudz_all_stack_15->GetXaxis()->SetTitleSize(0);
   mudz_all_stack_15->GetXaxis()->SetTickLength(0.02);
   mudz_all_stack_15->GetXaxis()->SetTitleOffset(0.9);
   mudz_all_stack_15->GetXaxis()->SetTitleFont(42);
   mudz_all_stack_15->GetYaxis()->SetTitle("Events");
   mudz_all_stack_15->GetYaxis()->SetLabelFont(42);
   mudz_all_stack_15->GetYaxis()->SetLabelOffset(0.007);
   mudz_all_stack_15->GetYaxis()->SetLabelSize(0.035);
   mudz_all_stack_15->GetYaxis()->SetTitleSize(0.045);
   mudz_all_stack_15->GetYaxis()->SetTickLength(0.02);
   mudz_all_stack_15->GetYaxis()->SetTitleOffset(1.55);
   mudz_all_stack_15->GetYaxis()->SetTitleFont(42);
   mudz_all_stack_15->GetZaxis()->SetLabelFont(42);
   mudz_all_stack_15->GetZaxis()->SetLabelOffset(0.007);
   mudz_all_stack_15->GetZaxis()->SetLabelSize(0.035);
   mudz_all_stack_15->GetZaxis()->SetTitleSize(0.045);
   mudz_all_stack_15->GetZaxis()->SetTickLength(0.02);
   mudz_all_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mudz_all_stack_15);
   
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,5.674478);
   mudz_all->SetBinContent(51,10.19044);
   mudz_all->SetBinError(50,3.271539);
   mudz_all->SetBinError(51,4.703026);
   mudz_all->SetMinimum(0.01);
   mudz_all->SetMaximum(2730000);
   mudz_all->SetEntries(25);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(4);
   mudz_all->SetLineColor(4);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(4);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0);
   mudz_all->GetXaxis()->SetTitleSize(0);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetTitle("Events");
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"HIST");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,25.96894);
   mudz_all->SetBinContent(51,25.24227);
   mudz_all->SetBinError(50,4.358969);
   mudz_all->SetBinError(51,4.126701);
   mudz_all->SetEntries(93);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(5);
   mudz_all->SetLineColor(5);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(5);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(49,2.002264);
   mudz_all->SetBinContent(50,156.7571);
   mudz_all->SetBinContent(51,140.5186);
   mudz_all->SetBinError(49,1.090406);
   mudz_all->SetBinError(50,11.23453);
   mudz_all->SetBinError(51,10.07091);
   mudz_all->SetEntries(586);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(6);
   mudz_all->SetLineColor(6);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(6);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(47,0.01660634);
   mudz_all->SetBinContent(48,0.01809883);
   mudz_all->SetBinContent(49,0.06911606);
   mudz_all->SetBinContent(50,53.40433);
   mudz_all->SetBinContent(51,53.06361);
   mudz_all->SetBinContent(52,0.1253942);
   mudz_all->SetBinContent(53,0.03748672);
   mudz_all->SetBinContent(54,0.03893501);
   mudz_all->SetBinError(47,0.01660634);
   mudz_all->SetBinError(48,0.01809883);
   mudz_all->SetBinError(49,0.03689618);
   mudz_all->SetBinError(50,1.036173);
   mudz_all->SetBinError(51,1.030175);
   mudz_all->SetBinError(52,0.05242667);
   mudz_all->SetBinError(53,0.02542514);
   mudz_all->SetBinError(54,0.02771416);
   mudz_all->SetEntries(6175);
   mudz_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mudz_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mudz_all->SetLineColor(ci);
   mudz_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mudz_all->SetMarkerColor(ci);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(3);
   mudz_all->SetLineColor(3);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(3);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(49,0.1013974);
   mudz_all->SetBinContent(50,7.617164);
   mudz_all->SetBinContent(51,6.458262);
   mudz_all->SetBinContent(52,0.1268985);
   mudz_all->SetBinError(49,0.1013974);
   mudz_all->SetBinError(50,1.038687);
   mudz_all->SetBinError(51,0.8688681);
   mudz_all->SetBinError(52,0.1268985);
   mudz_all->SetEntries(159);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(3);
   mudz_all->SetLineColor(3);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(3);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,2.935658);
   mudz_all->SetBinContent(51,2.703294);
   mudz_all->SetBinContent(52,0.01430104);
   mudz_all->SetBinError(50,0.1704952);
   mudz_all->SetBinError(51,0.164175);
   mudz_all->SetBinError(52,0.01012972);
   mudz_all->SetEntries(756);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(3);
   mudz_all->SetLineColor(3);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(3);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   stack->Draw("hist");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,182);
   mudz_all->SetBinContent(51,172);
   mudz_all->SetBinContent(52,1);
   mudz_all->SetBinError(50,13.49074);
   mudz_all->SetBinError(51,13.11488);
   mudz_all->SetBinError(52,1);
   mudz_all->SetEntries(355);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(1);
   mudz_all->SetFillStyle(0);
   mudz_all->SetLineWidth(3);
   mudz_all->SetMarkerStyle(20);
   mudz_all->SetMarkerSize(1.3);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   mudz_all->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVpass");
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
   TLegendEntry *entry=leg->AddEntry("mudz_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mudz_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudz_all","EWK W+jets","f");

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
   entry=leg->AddEntry("mudz_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudz_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudz_all","Dibosons","f");
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
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,0.7377886);
   mudz_all->SetBinContent(51,0.7544322);
   mudz_all->SetBinContent(52,3.751027);
   mudz_all->SetBinError(50,0.06564535);
   mudz_all->SetBinError(51,0.06801756);
   mudz_all->SetBinError(52,4.221684);
   mudz_all->SetMinimum(0);
   mudz_all->SetMaximum(2);
   mudz_all->SetEntries(1.541742);
   mudz_all->SetStats(0);
   mudz_all->SetFillStyle(0);
   mudz_all->SetMarkerStyle(20);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.1);
   mudz_all->GetXaxis()->SetTitleSize(0.12);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetTitle("Data/MC");
   mudz_all->GetYaxis()->SetNdivisions(505);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.1);
   mudz_all->GetYaxis()->SetTitleSize(0.12);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(0.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   mudz_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
