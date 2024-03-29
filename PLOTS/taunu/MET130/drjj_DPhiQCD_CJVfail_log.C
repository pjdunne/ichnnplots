{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:47 2013) by ROOT version5.32/00
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
   upper->Range(-2.025316,-2.894217,10.63291,6.892646);
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
   stack->SetMaximum(974331.5);
   
   TH1F *drjj_stack_12 = new TH1F("drjj_stack_12","stack",50,0,10);
   drjj_stack_12->SetMinimum(0.002002261);
   drjj_stack_12->SetMaximum(2531061);
   drjj_stack_12->SetStats(0);
   drjj_stack_12->SetFillColor(4);
   drjj_stack_12->SetLineColor(4);
   drjj_stack_12->SetLineWidth(2);
   drjj_stack_12->SetMarkerColor(4);
   drjj_stack_12->SetMarkerStyle(21);
   drjj_stack_12->SetMarkerSize(0.8);
   drjj_stack_12->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj_stack_12->GetXaxis()->SetLabelFont(42);
   drjj_stack_12->GetXaxis()->SetLabelOffset(0.007);
   drjj_stack_12->GetXaxis()->SetLabelSize(0);
   drjj_stack_12->GetXaxis()->SetTitleSize(0);
   drjj_stack_12->GetXaxis()->SetTickLength(0.02);
   drjj_stack_12->GetXaxis()->SetTitleOffset(0.9);
   drjj_stack_12->GetXaxis()->SetTitleFont(42);
   drjj_stack_12->GetYaxis()->SetTitle("Events");
   drjj_stack_12->GetYaxis()->SetLabelFont(42);
   drjj_stack_12->GetYaxis()->SetLabelOffset(0.007);
   drjj_stack_12->GetYaxis()->SetLabelSize(0.035);
   drjj_stack_12->GetYaxis()->SetTitleSize(0.045);
   drjj_stack_12->GetYaxis()->SetTickLength(0.02);
   drjj_stack_12->GetYaxis()->SetTitleOffset(1.55);
   drjj_stack_12->GetYaxis()->SetTitleFont(42);
   drjj_stack_12->GetZaxis()->SetLabelFont(42);
   drjj_stack_12->GetZaxis()->SetLabelOffset(0.007);
   drjj_stack_12->GetZaxis()->SetLabelSize(0.035);
   drjj_stack_12->GetZaxis()->SetTitleSize(0.045);
   drjj_stack_12->GetZaxis()->SetTickLength(0.02);
   drjj_stack_12->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(drjj_stack_12);
   
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetMinimum(0.01);
   drjj->SetMaximum(2550000);
   drjj->SetStats(0);
   drjj->SetFillColor(4);
   drjj->SetLineColor(4);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(4);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0);
   drjj->GetXaxis()->SetTitleSize(0);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetTitle("Events");
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"HIST");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(26,1.490752);
   drjj->SetBinContent(27,0.7724873);
   drjj->SetBinContent(28,0.7574646);
   drjj->SetBinError(26,1.055854);
   drjj->SetBinError(27,0.7724873);
   drjj->SetBinError(28,0.7574647);
   drjj->SetEntries(4);
   drjj->SetStats(0);
   drjj->SetFillColor(5);
   drjj->SetLineColor(5);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(5);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(26,2.817195);
   drjj->SetBinContent(27,4.144802);
   drjj->SetBinContent(28,3.862319);
   drjj->SetBinContent(29,3.453045);
   drjj->SetBinContent(30,0.3226544);
   drjj->SetBinContent(34,0.2624358);
   drjj->SetBinError(26,1.212691);
   drjj->SetBinError(27,1.514949);
   drjj->SetBinError(28,1.359828);
   drjj->SetBinError(29,1.364872);
   drjj->SetBinError(30,0.3226544);
   drjj->SetBinError(34,0.2624358);
   drjj->SetEntries(37);
   drjj->SetStats(0);
   drjj->SetFillColor(6);
   drjj->SetLineColor(6);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(6);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(25,0.003634267);
   drjj->SetBinContent(26,0.8662852);
   drjj->SetBinContent(27,0.9920564);
   drjj->SetBinContent(28,1.002149);
   drjj->SetBinContent(29,0.6461818);
   drjj->SetBinContent(30,0.40251);
   drjj->SetBinContent(31,0.3123472);
   drjj->SetBinContent(32,0.222479);
   drjj->SetBinContent(33,0.1549626);
   drjj->SetBinContent(34,0.03630206);
   drjj->SetBinContent(35,0.04186286);
   drjj->SetBinContent(36,0.01898834);
   drjj->SetBinContent(37,0.002499975);
   drjj->SetBinContent(39,0.02044235);
   drjj->SetBinError(25,0.003634267);
   drjj->SetBinError(26,0.1335069);
   drjj->SetBinError(27,0.1427633);
   drjj->SetBinError(28,0.1438944);
   drjj->SetBinError(29,0.1120067);
   drjj->SetBinError(30,0.08871374);
   drjj->SetBinError(31,0.08078446);
   drjj->SetBinError(32,0.06502999);
   drjj->SetBinError(33,0.05845167);
   drjj->SetBinError(34,0.02238556);
   drjj->SetBinError(35,0.02960239);
   drjj->SetBinError(36,0.01898834);
   drjj->SetBinError(37,0.002499975);
   drjj->SetBinError(39,0.02044235);
   drjj->SetEntries(280);
   drjj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   drjj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   drjj->SetLineColor(ci);
   drjj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   drjj->SetMarkerColor(ci);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(27,0.2843283);
   drjj->SetBinContent(30,0.2791876);
   drjj->SetBinContent(31,0.1697759);
   drjj->SetBinError(27,0.1692296);
   drjj->SetBinError(30,0.2026063);
   drjj->SetBinError(31,0.169776);
   drjj->SetEntries(6);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(26,0.2546645);
   drjj->SetBinContent(27,0.2519666);
   drjj->SetBinContent(28,0.4514232);
   drjj->SetBinContent(29,0.1076695);
   drjj->SetBinError(26,0.1470513);
   drjj->SetBinError(27,0.2334422);
   drjj->SetBinError(28,0.1952887);
   drjj->SetBinError(29,0.1076695);
   drjj->SetEntries(12);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(26,0.02034562);
   drjj->SetBinContent(27,0.0499033);
   drjj->SetBinContent(28,0.03106681);
   drjj->SetBinContent(29,0.02098771);
   drjj->SetBinContent(30,0.006223165);
   drjj->SetBinContent(31,0.01199432);
   drjj->SetBinContent(33,0.006884375);
   drjj->SetBinError(26,0.01148648);
   drjj->SetBinError(27,0.01906606);
   drjj->SetBinError(28,0.01391878);
   drjj->SetBinError(29,0.01548961);
   drjj->SetBinError(30,0.006223165);
   drjj->SetBinError(31,0.008483051);
   drjj->SetBinError(33,0.005815679);
   drjj->SetEntries(25);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   stack->Draw("hist");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(26,6);
   drjj->SetBinContent(27,17);
   drjj->SetBinContent(28,8);
   drjj->SetBinContent(29,4);
   drjj->SetBinContent(30,3);
   drjj->SetBinContent(31,5);
   drjj->SetBinContent(32,2);
   drjj->SetBinContent(35,1);
   drjj->SetBinContent(37,1);
   drjj->SetBinError(26,2.44949);
   drjj->SetBinError(27,4.123106);
   drjj->SetBinError(28,2.828427);
   drjj->SetBinError(29,2);
   drjj->SetBinError(30,1.732051);
   drjj->SetBinError(31,2.236068);
   drjj->SetBinError(32,1.414214);
   drjj->SetBinError(35,1);
   drjj->SetBinError(37,1);
   drjj->SetEntries(47);
   drjj->SetStats(0);
   drjj->SetFillColor(1);
   drjj->SetFillStyle(0);
   drjj->SetLineWidth(3);
   drjj->SetMarkerStyle(20);
   drjj->SetMarkerSize(1.3);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("SAMEPE1");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetStats(0);
   drjj->SetFillColor(1);
   drjj->SetFillStyle(0);
   drjj->SetLineStyle(2);
   drjj->SetLineWidth(3);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("drjj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("drjj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","EWK W+jets","f");

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
   entry=leg->AddEntry("drjj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","Dibosons","f");
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
   lower->Range(-2.025316,-0.653951,10.63291,2.070845);
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
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(26,1.10107);
   drjj->SetBinContent(27,2.617179);
   drjj->SetBinContent(28,1.310525);
   drjj->SetBinContent(29,0.9460999);
   drjj->SetBinContent(30,2.968607);
   drjj->SetBinContent(31,10.11905);
   drjj->SetBinContent(32,8.989612);
   drjj->SetBinContent(35,23.88752);
   drjj->SetBinContent(37,400.004);
   drjj->SetBinError(26,0.5560881);
   drjj->SetBinError(27,0.9430008);
   drjj->SetBinError(28,0.5736505);
   drjj->SetBinError(29,0.5641649);
   drjj->SetBinError(30,2.063578);
   drjj->SetBinError(31,5.944299);
   drjj->SetBinError(32,6.878302);
   drjj->SetBinError(35,29.2564);
   drjj->SetBinError(37,565.691);
   drjj->SetMinimum(0);
   drjj->SetMaximum(2);
   drjj->SetEntries(0.6363994);
   drjj->SetStats(0);
   drjj->SetFillStyle(0);
   drjj->SetMarkerStyle(20);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.1);
   drjj->GetXaxis()->SetTitleSize(0.12);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetTitle("Data/MC");
   drjj->GetYaxis()->SetNdivisions(505);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.1);
   drjj->GetYaxis()->SetTitleSize(0.12);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(0.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
