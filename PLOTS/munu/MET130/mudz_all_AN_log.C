{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:39 2013) by ROOT version5.32/00
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
   upper->Range(-2.810127,-2.998314,2.253165,8.68376);
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
   stack->SetMaximum(4.298182e+07);
   
   TH1F *mudz_all_stack_4 = new TH1F("mudz_all_stack_4","stack",100,-2,2);
   mudz_all_stack_4->SetBinContent(50,72.24606);
   mudz_all_stack_4->SetBinContent(51,84.70654);
   mudz_all_stack_4->SetBinContent(52,0.2383108);
   mudz_all_stack_4->SetBinError(50,11.47896);
   mudz_all_stack_4->SetBinError(51,11.97654);
   mudz_all_stack_4->SetBinError(52,0.1435098);
   mudz_all_stack_4->SetMinimum(0.001719205);
   mudz_all_stack_4->SetMaximum(1.25793e+08);
   mudz_all_stack_4->SetEntries(394);
   mudz_all_stack_4->SetStats(0);
   mudz_all_stack_4->SetFillColor(4);
   mudz_all_stack_4->SetLineColor(4);
   mudz_all_stack_4->SetLineWidth(2);
   mudz_all_stack_4->SetMarkerColor(4);
   mudz_all_stack_4->SetMarkerStyle(21);
   mudz_all_stack_4->SetMarkerSize(0.8);
   mudz_all_stack_4->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all_stack_4->GetXaxis()->SetLabelFont(42);
   mudz_all_stack_4->GetXaxis()->SetLabelOffset(0.007);
   mudz_all_stack_4->GetXaxis()->SetLabelSize(0);
   mudz_all_stack_4->GetXaxis()->SetTitleSize(0);
   mudz_all_stack_4->GetXaxis()->SetTickLength(0.02);
   mudz_all_stack_4->GetXaxis()->SetTitleOffset(0.9);
   mudz_all_stack_4->GetXaxis()->SetTitleFont(42);
   mudz_all_stack_4->GetYaxis()->SetTitle("Events");
   mudz_all_stack_4->GetYaxis()->SetLabelFont(42);
   mudz_all_stack_4->GetYaxis()->SetLabelOffset(0.007);
   mudz_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   mudz_all_stack_4->GetYaxis()->SetTitleSize(0.045);
   mudz_all_stack_4->GetYaxis()->SetTickLength(0.02);
   mudz_all_stack_4->GetYaxis()->SetTitleOffset(1.55);
   mudz_all_stack_4->GetYaxis()->SetTitleFont(42);
   mudz_all_stack_4->GetZaxis()->SetLabelFont(42);
   mudz_all_stack_4->GetZaxis()->SetLabelOffset(0.007);
   mudz_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   mudz_all_stack_4->GetZaxis()->SetTitleSize(0.045);
   mudz_all_stack_4->GetZaxis()->SetTickLength(0.02);
   mudz_all_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mudz_all_stack_4);
   
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,72.24606);
   mudz_all->SetBinContent(51,84.70654);
   mudz_all->SetBinContent(52,0.2383108);
   mudz_all->SetBinError(50,11.47896);
   mudz_all->SetBinError(51,11.97654);
   mudz_all->SetBinError(52,0.1435098);
   mudz_all->SetMinimum(0.01);
   mudz_all->SetMaximum(3.096e+07);
   mudz_all->SetEntries(394);
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
   mudz_all->SetBinContent(49,0.9631528);
   mudz_all->SetBinContent(50,407.2092);
   mudz_all->SetBinContent(51,375.2015);
   mudz_all->SetBinContent(52,0.7605003);
   mudz_all->SetBinContent(53,0.07123181);
   mudz_all->SetBinError(49,0.8162272);
   mudz_all->SetBinError(50,17.05409);
   mudz_all->SetBinError(51,16.37004);
   mudz_all->SetBinError(52,0.7605003);
   mudz_all->SetBinError(53,0.07123181);
   mudz_all->SetEntries(1429);
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
   mudz_all->SetBinContent(47,0.2187899);
   mudz_all->SetBinContent(48,0.4176556);
   mudz_all->SetBinContent(49,5.989968);
   mudz_all->SetBinContent(50,1743.249);
   mudz_all->SetBinContent(51,1785.182);
   mudz_all->SetBinContent(52,5.297513);
   mudz_all->SetBinContent(53,0.4849225);
   mudz_all->SetBinError(47,0.2187899);
   mudz_all->SetBinError(48,0.4176556);
   mudz_all->SetBinError(49,1.946962);
   mudz_all->SetBinError(50,35.39056);
   mudz_all->SetBinError(51,35.92063);
   mudz_all->SetBinError(52,1.660492);
   mudz_all->SetBinError(53,0.4849225);
   mudz_all->SetEntries(7249);
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
   mudz_all->SetBinContent(46,0.01690897);
   mudz_all->SetBinContent(47,0.1074475);
   mudz_all->SetBinContent(48,0.2840413);
   mudz_all->SetBinContent(49,1.357339);
   mudz_all->SetBinContent(50,497.5128);
   mudz_all->SetBinContent(51,501.1089);
   mudz_all->SetBinContent(52,1.50392);
   mudz_all->SetBinContent(53,0.3317367);
   mudz_all->SetBinContent(54,0.08935064);
   mudz_all->SetBinContent(55,0.05047395);
   mudz_all->SetBinError(46,0.01690897);
   mudz_all->SetBinError(47,0.04299);
   mudz_all->SetBinError(48,0.07263623);
   mudz_all->SetBinError(49,0.17003);
   mudz_all->SetBinError(50,3.183528);
   mudz_all->SetBinError(51,3.195829);
   mudz_all->SetBinError(52,0.1733849);
   mudz_all->SetBinError(53,0.08217312);
   mudz_all->SetBinError(54,0.04135053);
   mudz_all->SetBinError(55,0.02988571);
   mudz_all->SetEntries(57337);
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
   mudz_all->SetBinContent(47,0.02966289);
   mudz_all->SetBinContent(48,0.1857196);
   mudz_all->SetBinContent(49,0.9229058);
   mudz_all->SetBinContent(50,89.8275);
   mudz_all->SetBinContent(51,89.20479);
   mudz_all->SetBinContent(52,1.370706);
   mudz_all->SetBinContent(54,0.08751001);
   mudz_all->SetBinError(47,0.02966289);
   mudz_all->SetBinError(48,0.1333479);
   mudz_all->SetBinError(49,0.3686646);
   mudz_all->SetBinError(50,3.329188);
   mudz_all->SetBinError(51,3.255186);
   mudz_all->SetBinError(52,0.432431);
   mudz_all->SetBinError(54,0.08280827);
   mudz_all->SetEntries(2010);
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
   mudz_all->SetBinContent(47,0.02712629);
   mudz_all->SetBinContent(48,0.01836455);
   mudz_all->SetBinContent(49,0.1025724);
   mudz_all->SetBinContent(50,28.71961);
   mudz_all->SetBinContent(51,30.05033);
   mudz_all->SetBinContent(52,0.08892243);
   mudz_all->SetBinContent(53,0.008026335);
   mudz_all->SetBinContent(54,0.004873279);
   mudz_all->SetBinError(47,0.01330413);
   mudz_all->SetBinError(48,0.01148589);
   mudz_all->SetBinError(49,0.03074052);
   mudz_all->SetBinError(50,0.5320611);
   mudz_all->SetBinError(51,0.5497515);
   mudz_all->SetBinError(52,0.02793746);
   mudz_all->SetBinError(53,0.006473174);
   mudz_all->SetBinError(54,0.004873279);
   mudz_all->SetEntries(7811);
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
   mudz_all->SetBinContent(48,1);
   mudz_all->SetBinContent(49,13);
   mudz_all->SetBinContent(50,2064);
   mudz_all->SetBinContent(51,2036);
   mudz_all->SetBinContent(52,9);
   mudz_all->SetBinContent(53,4);
   mudz_all->SetBinContent(54,3);
   mudz_all->SetBinError(48,1);
   mudz_all->SetBinError(49,3.605551);
   mudz_all->SetBinError(50,45.43127);
   mudz_all->SetBinError(51,45.12206);
   mudz_all->SetBinError(52,3);
   mudz_all->SetBinError(53,2);
   mudz_all->SetBinError(54,1.732051);
   mudz_all->SetEntries(4130);
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
   mudz_all->SetBinContent(48,1.104019);
   mudz_all->SetBinContent(49,1.392468);
   mudz_all->SetBinContent(50,0.7460641);
   mudz_all->SetBinContent(51,0.7321771);
   mudz_all->SetBinContent(52,0.99761);
   mudz_all->SetBinContent(53,4.464697);
   mudz_all->SetBinContent(54,16.50765);
   mudz_all->SetBinError(48,1.229819);
   mudz_all->SetBinError(49,0.5019838);
   mudz_all->SetBinError(50,0.01958262);
   mudz_all->SetBinError(51,0.01930797);
   mudz_all->SetBinError(52,0.3924695);
   mudz_all->SetBinError(53,3.334344);
   mudz_all->SetBinError(54,12.71675);
   mudz_all->SetMinimum(0);
   mudz_all->SetMaximum(2);
   mudz_all->SetEntries(3.85188);
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
