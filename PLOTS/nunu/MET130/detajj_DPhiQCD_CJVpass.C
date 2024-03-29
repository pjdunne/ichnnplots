{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:09:33 2013) by ROOT version5.32/00
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
   upper->Range(-1.053165,-24608.1,5.529114,1205797);
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
   stack->SetMaximum(1089787);
   
   TH1F *detajj_stack_15 = new TH1F("detajj_stack_15","stack",50,0,10);
   detajj_stack_15->SetBinContent(22,2.455336);
   detajj_stack_15->SetBinContent(23,0.09487759);
   detajj_stack_15->SetBinContent(24,0.2206192);
   detajj_stack_15->SetBinContent(25,4.563829);
   detajj_stack_15->SetBinContent(26,1.965792);
   detajj_stack_15->SetBinContent(28,0.0618107);
   detajj_stack_15->SetBinContent(29,1.937317);
   detajj_stack_15->SetBinContent(30,0.06803624);
   detajj_stack_15->SetBinContent(31,0.03767521);
   detajj_stack_15->SetBinError(22,2.159513);
   detajj_stack_15->SetBinError(23,0.071464);
   detajj_stack_15->SetBinError(24,0.1059126);
   detajj_stack_15->SetBinError(25,2.985304);
   detajj_stack_15->SetBinError(26,1.878785);
   detajj_stack_15->SetBinError(28,0.0618107);
   detajj_stack_15->SetBinError(29,1.937317);
   detajj_stack_15->SetBinError(30,0.06803623);
   detajj_stack_15->SetBinError(31,0.03767521);
   detajj_stack_15->SetMinimum(0);
   detajj_stack_15->SetMaximum(1144277);
   detajj_stack_15->SetEntries(28);
   detajj_stack_15->SetStats(0);
   detajj_stack_15->SetFillColor(4);
   detajj_stack_15->SetLineColor(4);
   detajj_stack_15->SetLineWidth(2);
   detajj_stack_15->SetMarkerColor(4);
   detajj_stack_15->SetMarkerStyle(21);
   detajj_stack_15->SetMarkerSize(0.8);
   detajj_stack_15->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj_stack_15->GetXaxis()->SetRange(1,26);
   detajj_stack_15->GetXaxis()->SetLabelFont(42);
   detajj_stack_15->GetXaxis()->SetLabelOffset(0.007);
   detajj_stack_15->GetXaxis()->SetLabelSize(0);
   detajj_stack_15->GetXaxis()->SetTitleSize(0);
   detajj_stack_15->GetXaxis()->SetTickLength(0.02);
   detajj_stack_15->GetXaxis()->SetTitleOffset(0.9);
   detajj_stack_15->GetXaxis()->SetTitleFont(42);
   detajj_stack_15->GetYaxis()->SetTitle("Events");
   detajj_stack_15->GetYaxis()->SetLabelFont(42);
   detajj_stack_15->GetYaxis()->SetLabelOffset(0.007);
   detajj_stack_15->GetYaxis()->SetLabelSize(0.035);
   detajj_stack_15->GetYaxis()->SetTitleSize(0.045);
   detajj_stack_15->GetYaxis()->SetTickLength(0.02);
   detajj_stack_15->GetYaxis()->SetTitleOffset(1.55);
   detajj_stack_15->GetYaxis()->SetTitleFont(42);
   detajj_stack_15->GetZaxis()->SetLabelFont(42);
   detajj_stack_15->GetZaxis()->SetLabelOffset(0.007);
   detajj_stack_15->GetZaxis()->SetLabelSize(0.035);
   detajj_stack_15->GetZaxis()->SetTitleSize(0.045);
   detajj_stack_15->GetZaxis()->SetTickLength(0.02);
   detajj_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(detajj_stack_15);
   
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,2.455336);
   detajj->SetBinContent(23,0.09487759);
   detajj->SetBinContent(24,0.2206192);
   detajj->SetBinContent(25,4.563829);
   detajj->SetBinContent(26,1.965792);
   detajj->SetBinContent(28,0.0618107);
   detajj->SetBinContent(29,1.937317);
   detajj->SetBinContent(30,0.06803624);
   detajj->SetBinContent(31,0.03767521);
   detajj->SetBinError(22,2.159513);
   detajj->SetBinError(23,0.071464);
   detajj->SetBinError(24,0.1059126);
   detajj->SetBinError(25,2.985304);
   detajj->SetBinError(26,1.878785);
   detajj->SetBinError(28,0.0618107);
   detajj->SetBinError(29,1.937317);
   detajj->SetBinError(30,0.06803623);
   detajj->SetBinError(31,0.03767521);
   detajj->SetMaximum(8118000);
   detajj->SetEntries(28);
   detajj->SetStats(0);
   detajj->SetFillColor(4);
   detajj->SetLineColor(4);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(4);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj->GetXaxis()->SetRange(1,26);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0);
   detajj->GetXaxis()->SetTitleSize(0);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetTitle("Events");
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"HIST");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,1.908322);
   detajj->SetBinContent(23,2.099375);
   detajj->SetBinContent(24,0.6249095);
   detajj->SetBinContent(25,1.706363);
   detajj->SetBinContent(26,1.196113);
   detajj->SetBinContent(27,0.2508593);
   detajj->SetBinContent(28,0.791773);
   detajj->SetBinContent(29,0.1424603);
   detajj->SetBinContent(31,0.3931474);
   detajj->SetBinError(22,0.7458432);
   detajj->SetBinError(23,0.8404187);
   detajj->SetBinError(24,0.5009515);
   detajj->SetBinError(25,0.9329392);
   detajj->SetBinError(26,1.036531);
   detajj->SetBinError(27,0.2508593);
   detajj->SetBinError(28,0.5792557);
   detajj->SetBinError(29,0.1424603);
   detajj->SetBinError(31,0.3931474);
   detajj->SetEntries(30);
   detajj->SetStats(0);
   detajj->SetFillColor(5);
   detajj->SetLineColor(5);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(5);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,45.82174);
   detajj->SetBinContent(23,52.16812);
   detajj->SetBinContent(24,36.57465);
   detajj->SetBinContent(25,22.01787);
   detajj->SetBinContent(26,18.54789);
   detajj->SetBinContent(27,11.1599);
   detajj->SetBinContent(28,10.21561);
   detajj->SetBinContent(29,6.112011);
   detajj->SetBinContent(30,5.210678);
   detajj->SetBinContent(31,0.5137715);
   detajj->SetBinContent(32,1.936929);
   detajj->SetBinError(22,6.173137);
   detajj->SetBinError(23,7.045832);
   detajj->SetBinError(24,5.437441);
   detajj->SetBinError(25,4.068609);
   detajj->SetBinError(26,3.990929);
   detajj->SetBinError(27,2.994036);
   detajj->SetBinError(28,2.870288);
   detajj->SetBinError(29,1.996894);
   detajj->SetBinError(30,2.187195);
   detajj->SetBinError(31,0.5137715);
   detajj->SetBinError(32,1.936929);
   detajj->SetEntries(337);
   detajj->SetStats(0);
   detajj->SetFillColor(6);
   detajj->SetLineColor(6);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(6);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,11.42023);
   detajj->SetBinContent(23,11.00567);
   detajj->SetBinContent(24,10.47966);
   detajj->SetBinContent(25,8.316839);
   detajj->SetBinContent(26,6.278995);
   detajj->SetBinContent(27,4.527672);
   detajj->SetBinContent(28,3.223686);
   detajj->SetBinContent(29,2.34294);
   detajj->SetBinContent(30,1.631087);
   detajj->SetBinContent(31,0.9956319);
   detajj->SetBinContent(32,0.625377);
   detajj->SetBinContent(33,0.3521429);
   detajj->SetBinContent(34,0.1305013);
   detajj->SetBinContent(35,0.1075808);
   detajj->SetBinContent(36,0.01740943);
   detajj->SetBinError(22,0.4824919);
   detajj->SetBinError(23,0.4734463);
   detajj->SetBinError(24,0.4704592);
   detajj->SetBinError(25,0.4060784);
   detajj->SetBinError(26,0.3544157);
   detajj->SetBinError(27,0.3019006);
   detajj->SetBinError(28,0.2507349);
   detajj->SetBinError(29,0.217383);
   detajj->SetBinError(30,0.1782447);
   detajj->SetBinError(31,0.1371908);
   detajj->SetBinError(32,0.1146466);
   detajj->SetBinError(33,0.0825796);
   detajj->SetBinError(34,0.04942559);
   detajj->SetBinError(35,0.04784424);
   detajj->SetBinError(36,0.01740943);
   detajj->SetEntries(3538);
   detajj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   detajj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   detajj->SetLineColor(ci);
   detajj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   detajj->SetMarkerColor(ci);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,34.21269);
   detajj->SetBinContent(23,25.65849);
   detajj->SetBinContent(24,21.31444);
   detajj->SetBinContent(25,18.25447);
   detajj->SetBinContent(26,12.46131);
   detajj->SetBinContent(27,7.27065);
   detajj->SetBinContent(28,5.032268);
   detajj->SetBinContent(29,3.276604);
   detajj->SetBinContent(30,1.368343);
   detajj->SetBinContent(31,0.8458527);
   detajj->SetBinContent(32,0.209175);
   detajj->SetBinContent(33,0.1665415);
   detajj->SetBinError(22,2.256301);
   detajj->SetBinError(23,2.003408);
   detajj->SetBinError(24,1.796713);
   detajj->SetBinError(25,1.748816);
   detajj->SetBinError(26,1.574742);
   detajj->SetBinError(27,1.071791);
   detajj->SetBinError(28,0.8936642);
   detajj->SetBinError(29,0.9445403);
   detajj->SetBinError(30,0.45463);
   detajj->SetBinError(31,0.3794413);
   detajj->SetBinError(32,0.1614545);
   detajj->SetBinError(33,0.1665415);
   detajj->SetEntries(986);
   detajj->SetStats(0);
   detajj->SetFillColor(3);
   detajj->SetLineColor(3);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(3);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,0.2919832);
   detajj->SetBinContent(23,0.38534);
   detajj->SetBinContent(24,0.2728652);
   detajj->SetBinContent(25,0.3573561);
   detajj->SetBinContent(26,0.431762);
   detajj->SetBinContent(28,0.6527749);
   detajj->SetBinContent(29,0.07901323);
   detajj->SetBinError(22,0.1665763);
   detajj->SetBinError(23,0.2108998);
   detajj->SetBinError(24,0.1829701);
   detajj->SetBinError(25,0.1873699);
   detajj->SetBinError(26,0.2541186);
   detajj->SetBinError(28,0.4957783);
   detajj->SetBinError(29,0.07901323);
   detajj->SetEntries(24);
   detajj->SetStats(0);
   detajj->SetFillColor(3);
   detajj->SetLineColor(3);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(3);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,2.961272);
   detajj->SetBinContent(23,2.957842);
   detajj->SetBinContent(24,2.574497);
   detajj->SetBinContent(25,1.891302);
   detajj->SetBinContent(26,1.552378);
   detajj->SetBinContent(27,1.132782);
   detajj->SetBinContent(28,1.084854);
   detajj->SetBinContent(29,0.5272235);
   detajj->SetBinContent(30,0.4526092);
   detajj->SetBinContent(31,0.2295945);
   detajj->SetBinContent(32,0.1262652);
   detajj->SetBinContent(33,0.07414052);
   detajj->SetBinContent(34,0.0004654529);
   detajj->SetBinContent(35,0.01176093);
   detajj->SetBinError(22,0.1938672);
   detajj->SetBinError(23,0.1924346);
   detajj->SetBinError(24,0.1812072);
   detajj->SetBinError(25,0.1532362);
   detajj->SetBinError(26,0.1412989);
   detajj->SetBinError(27,0.1175027);
   detajj->SetBinError(28,0.1179692);
   detajj->SetBinError(29,0.08127233);
   detajj->SetBinError(30,0.0745376);
   detajj->SetBinError(31,0.05656506);
   detajj->SetBinError(32,0.03897839);
   detajj->SetBinError(33,0.03001027);
   detajj->SetBinError(34,0.0004654529);
   detajj->SetBinError(35,0.01176093);
   detajj->SetEntries(1440);
   detajj->SetStats(0);
   detajj->SetFillColor(3);
   detajj->SetLineColor(3);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(3);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   stack->Draw("hist");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,738);
   detajj->SetBinContent(23,597);
   detajj->SetBinContent(24,512);
   detajj->SetBinContent(25,340);
   detajj->SetBinContent(26,295);
   detajj->SetBinContent(27,204);
   detajj->SetBinContent(28,144);
   detajj->SetBinContent(29,84);
   detajj->SetBinContent(30,93);
   detajj->SetBinContent(31,29);
   detajj->SetBinContent(32,5);
   detajj->SetBinContent(33,1);
   detajj->SetBinContent(34,1);
   detajj->SetBinError(22,27.16616);
   detajj->SetBinError(23,24.43358);
   detajj->SetBinError(24,22.62742);
   detajj->SetBinError(25,18.43909);
   detajj->SetBinError(26,17.17556);
   detajj->SetBinError(27,14.28286);
   detajj->SetBinError(28,12);
   detajj->SetBinError(29,9.165151);
   detajj->SetBinError(30,9.643651);
   detajj->SetBinError(31,5.385165);
   detajj->SetBinError(32,2.236068);
   detajj->SetBinError(33,1);
   detajj->SetBinError(34,1);
   detajj->SetEntries(3043);
   detajj->SetStats(0);
   detajj->SetFillColor(1);
   detajj->SetFillStyle(0);
   detajj->SetLineWidth(3);
   detajj->SetMarkerStyle(20);
   detajj->SetMarkerSize(1.3);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   detajj->Draw("SAMEPE1");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,6.608164);
   detajj->SetBinContent(23,6.060782);
   detajj->SetBinContent(24,3.740051);
   detajj->SetBinContent(25,2.432304);
   detajj->SetBinContent(26,6.031099);
   detajj->SetBinContent(27,2.855486);
   detajj->SetBinContent(28,1.434978);
   detajj->SetBinContent(29,1.300145);
   detajj->SetBinContent(30,0.3668165);
   detajj->SetBinContent(31,1.489466);
   detajj->SetBinContent(32,0.5366533);
   detajj->SetBinError(22,1.566532);
   detajj->SetBinError(23,1.517866);
   detajj->SetBinError(24,1.061667);
   detajj->SetBinError(25,0.8253343);
   detajj->SetBinError(26,1.458442);
   detajj->SetBinError(27,0.9683639);
   detajj->SetBinError(28,0.6147164);
   detajj->SetBinError(29,0.6508403);
   detajj->SetBinError(30,0.3668165);
   detajj->SetBinError(31,0.747212);
   detajj->SetBinError(32,0.3959971);
   detajj->SetEntries(110);
   detajj->SetStats(0);
   detajj->SetFillColor(1);
   detajj->SetFillStyle(0);
   detajj->SetLineStyle(2);
   detajj->SetLineWidth(3);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   detajj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("detajj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("detajj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","EWK W+jets","f");

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
   entry=leg->AddEntry("detajj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","Dibosons","f");
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
   lower->Range(-1.053165,-0.653951,5.529114,2.070845);
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
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,7.638467);
   detajj->SetBinContent(23,6.332549);
   detajj->SetBinContent(24,7.126848);
   detajj->SetBinContent(25,6.470743);
   detajj->SetBinContent(26,7.289629);
   detajj->SetBinContent(27,8.380623);
   detajj->SetBinContent(28,6.856826);
   detajj->SetBinContent(29,6.730633);
   detajj->SetBinContent(30,10.73566);
   detajj->SetBinContent(31,9.738087);
   detajj->SetBinContent(32,1.725479);
   detajj->SetBinContent(33,1.686839);
   detajj->SetBinContent(34,7.635524);
   detajj->SetBinError(22,0.5953243);
   detajj->SetBinError(23,0.5602117);
   detajj->SetBinError(24,0.6536334);
   detajj->SetBinError(25,0.6611836);
   detajj->SetBinError(26,0.9050292);
   detajj->SetBinError(27,1.250171);
   detajj->SetBinError(28,1.16621);
   detajj->SetBinError(29,1.407816);
   detajj->SetBinError(30,2.993545);
   detajj->SetBinError(31,3.085498);
   detajj->SetBinError(32,1.392884);
   detajj->SetBinError(33,1.769885);
   detajj->SetBinError(34,8.161215);
   detajj->SetMinimum(0);
   detajj->SetMaximum(2);
   detajj->SetEntries(516.6828);
   detajj->SetStats(0);
   detajj->SetFillStyle(0);
   detajj->SetMarkerStyle(20);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj->GetXaxis()->SetRange(1,26);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.1);
   detajj->GetXaxis()->SetTitleSize(0.12);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetTitle("Data/MC");
   detajj->GetYaxis()->SetNdivisions(505);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.1);
   detajj->GetYaxis()->SetTitleSize(0.12);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(0.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   detajj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
