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
   upper->Range(-2.810127,-3.04116,2.253165,9.470961);
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
   stack->SetMaximum(2.28029e+08);
   
   TH1F *mudz_all_stack_2 = new TH1F("mudz_all_stack_2","stack",100,-2,2);
   mudz_all_stack_2->SetBinContent(48,0.291418);
   mudz_all_stack_2->SetBinContent(49,0.3693888);
   mudz_all_stack_2->SetBinContent(50,425.6901);
   mudz_all_stack_2->SetBinContent(51,430.9969);
   mudz_all_stack_2->SetBinContent(52,1.804392);
   mudz_all_stack_2->SetBinContent(53,0.04428651);
   mudz_all_stack_2->SetBinContent(54,0.03152234);
   mudz_all_stack_2->SetBinError(48,0.2537475);
   mudz_all_stack_2->SetBinError(49,0.1175435);
   mudz_all_stack_2->SetBinError(50,19.58534);
   mudz_all_stack_2->SetBinError(51,20.45753);
   mudz_all_stack_2->SetBinError(52,1.07757);
   mudz_all_stack_2->SetBinError(53,0.03865561);
   mudz_all_stack_2->SetBinError(54,0.03152127);
   mudz_all_stack_2->SetMinimum(0.001618386);
   mudz_all_stack_2->SetMaximum(7.004135e+08);
   mudz_all_stack_2->SetEntries(11415);
   mudz_all_stack_2->SetStats(0);
   mudz_all_stack_2->SetFillColor(4);
   mudz_all_stack_2->SetLineColor(4);
   mudz_all_stack_2->SetLineWidth(2);
   mudz_all_stack_2->SetMarkerColor(4);
   mudz_all_stack_2->SetMarkerStyle(21);
   mudz_all_stack_2->SetMarkerSize(0.8);
   mudz_all_stack_2->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all_stack_2->GetXaxis()->SetLabelFont(42);
   mudz_all_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mudz_all_stack_2->GetXaxis()->SetLabelSize(0);
   mudz_all_stack_2->GetXaxis()->SetTitleSize(0);
   mudz_all_stack_2->GetXaxis()->SetTickLength(0.02);
   mudz_all_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mudz_all_stack_2->GetXaxis()->SetTitleFont(42);
   mudz_all_stack_2->GetYaxis()->SetTitle("Events");
   mudz_all_stack_2->GetYaxis()->SetLabelFont(42);
   mudz_all_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mudz_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   mudz_all_stack_2->GetYaxis()->SetTitleSize(0.045);
   mudz_all_stack_2->GetYaxis()->SetTickLength(0.02);
   mudz_all_stack_2->GetYaxis()->SetTitleOffset(1.55);
   mudz_all_stack_2->GetYaxis()->SetTitleFont(42);
   mudz_all_stack_2->GetZaxis()->SetLabelFont(42);
   mudz_all_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mudz_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   mudz_all_stack_2->GetZaxis()->SetTitleSize(0.045);
   mudz_all_stack_2->GetZaxis()->SetTickLength(0.02);
   mudz_all_stack_2->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mudz_all_stack_2);
   
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(48,0.291418);
   mudz_all->SetBinContent(49,0.3693888);
   mudz_all->SetBinContent(50,425.6901);
   mudz_all->SetBinContent(51,430.9969);
   mudz_all->SetBinContent(52,1.804392);
   mudz_all->SetBinContent(53,0.04428651);
   mudz_all->SetBinContent(54,0.03152234);
   mudz_all->SetBinError(48,0.2537475);
   mudz_all->SetBinError(49,0.1175435);
   mudz_all->SetBinError(50,19.58534);
   mudz_all->SetBinError(51,20.45753);
   mudz_all->SetBinError(52,1.07757);
   mudz_all->SetBinError(53,0.03865561);
   mudz_all->SetBinError(54,0.03152127);
   mudz_all->SetMinimum(0.01);
   mudz_all->SetMaximum(1.8213e+08);
   mudz_all->SetEntries(11415);
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
   mudz_all->SetBinContent(46,0.2141935);
   mudz_all->SetBinContent(47,0.6224555);
   mudz_all->SetBinContent(48,0.1008071);
   mudz_all->SetBinContent(49,5.29533);
   mudz_all->SetBinContent(50,2525.018);
   mudz_all->SetBinContent(51,2493.087);
   mudz_all->SetBinContent(52,4.129615);
   mudz_all->SetBinContent(53,2.28341);
   mudz_all->SetBinError(46,0.1952294);
   mudz_all->SetBinError(47,0.5092998);
   mudz_all->SetBinError(48,0.08208888);
   mudz_all->SetBinError(49,1.460844);
   mudz_all->SetBinError(50,30.71563);
   mudz_all->SetBinError(51,30.29229);
   mudz_all->SetBinError(52,1.225053);
   mudz_all->SetBinError(53,0.8539378);
   mudz_all->SetEntries(27402);
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
   mudz_all->SetBinContent(46,0.04061129);
   mudz_all->SetBinContent(47,1.51093);
   mudz_all->SetBinContent(48,9.78451);
   mudz_all->SetBinContent(49,31.86893);
   mudz_all->SetBinContent(50,10150.35);
   mudz_all->SetBinContent(51,10309.3);
   mudz_all->SetBinContent(52,36.53008);
   mudz_all->SetBinContent(53,5.656724);
   mudz_all->SetBinContent(54,1.469125);
   mudz_all->SetBinContent(55,0.007100384);
   mudz_all->SetBinError(46,0.04061129);
   mudz_all->SetBinError(47,0.6063356);
   mudz_all->SetBinError(48,4.468336);
   mudz_all->SetBinError(49,3.683081);
   mudz_all->SetBinError(50,75.51734);
   mudz_all->SetBinError(51,77.23268);
   mudz_all->SetBinError(52,4.212908);
   mudz_all->SetBinError(53,2.067855);
   mudz_all->SetBinError(54,0.6512916);
   mudz_all->SetBinError(55,0.007100384);
   mudz_all->SetEntries(108838);
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
   mudz_all->SetBinContent(46,0.08218739);
   mudz_all->SetBinContent(47,0.2075071);
   mudz_all->SetBinContent(48,0.4907388);
   mudz_all->SetBinContent(49,2.667947);
   mudz_all->SetBinContent(50,1055.556);
   mudz_all->SetBinContent(51,1056.817);
   mudz_all->SetBinContent(52,3.100451);
   mudz_all->SetBinContent(53,0.4971694);
   mudz_all->SetBinContent(54,0.2498792);
   mudz_all->SetBinContent(55,0.08688511);
   mudz_all->SetBinError(46,0.03281094);
   mudz_all->SetBinError(47,0.0577592);
   mudz_all->SetBinError(48,0.08781195);
   mudz_all->SetBinError(49,0.2104295);
   mudz_all->SetBinError(50,4.136971);
   mudz_all->SetBinError(51,4.143021);
   mudz_all->SetBinError(52,0.226128);
   mudz_all->SetBinError(53,0.09365941);
   mudz_all->SetBinError(54,0.06239604);
   mudz_all->SetBinError(55,0.03772991);
   mudz_all->SetEntries(195784);
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
   mudz_all->SetBinContent(50,0.03548905);
   mudz_all->SetBinContent(51,0.05156378);
   mudz_all->SetBinError(50,0.0353526);
   mudz_all->SetBinError(51,0.05156378);
   mudz_all->SetEntries(3);
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
   mudz_all->SetBinContent(46,0.07451796);
   mudz_all->SetBinContent(47,0.1598136);
   mudz_all->SetBinContent(48,1.396356);
   mudz_all->SetBinContent(49,7.044873);
   mudz_all->SetBinContent(50,818.6172);
   mudz_all->SetBinContent(51,829.8203);
   mudz_all->SetBinContent(52,5.736737);
   mudz_all->SetBinContent(53,1.209279);
   mudz_all->SetBinContent(54,0.2549713);
   mudz_all->SetBinError(46,0.05493954);
   mudz_all->SetBinError(47,0.06717847);
   mudz_all->SetBinError(48,0.299021);
   mudz_all->SetBinError(49,0.8697649);
   mudz_all->SetBinError(50,8.184022);
   mudz_all->SetBinError(51,8.499063);
   mudz_all->SetBinError(52,0.6860956);
   mudz_all->SetBinError(53,0.5322865);
   mudz_all->SetBinError(54,0.1266073);
   mudz_all->SetEntries(51948);
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
   mudz_all->SetBinContent(46,0.004972823);
   mudz_all->SetBinContent(47,0.0511324);
   mudz_all->SetBinContent(48,0.04705102);
   mudz_all->SetBinContent(49,0.2888385);
   mudz_all->SetBinContent(50,79.16821);
   mudz_all->SetBinContent(51,81.8602);
   mudz_all->SetBinContent(52,0.2668144);
   mudz_all->SetBinContent(53,0.02463149);
   mudz_all->SetBinContent(54,0.01171728);
   mudz_all->SetBinError(46,0.003574541);
   mudz_all->SetBinError(47,0.01677692);
   mudz_all->SetBinError(48,0.01664512);
   mudz_all->SetBinError(49,0.04271679);
   mudz_all->SetBinError(50,0.7613958);
   mudz_all->SetBinError(51,0.7806599);
   mudz_all->SetBinError(52,0.03942567);
   mudz_all->SetBinError(53,0.009875504);
   mudz_all->SetBinError(54,0.006413219);
   mudz_all->SetEntries(37654);
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
   mudz_all->SetBinContent(46,12);
   mudz_all->SetBinContent(47,16);
   mudz_all->SetBinContent(48,39);
   mudz_all->SetBinContent(49,132);
   mudz_all->SetBinContent(50,11811);
   mudz_all->SetBinContent(51,12142);
   mudz_all->SetBinContent(52,116);
   mudz_all->SetBinContent(53,43);
   mudz_all->SetBinContent(54,24);
   mudz_all->SetBinContent(55,6);
   mudz_all->SetBinError(46,3.464102);
   mudz_all->SetBinError(47,4);
   mudz_all->SetBinError(48,6.244998);
   mudz_all->SetBinError(49,11.48913);
   mudz_all->SetBinError(50,108.6784);
   mudz_all->SetBinError(51,110.1907);
   mudz_all->SetBinError(52,10.77033);
   mudz_all->SetBinError(53,6.557439);
   mudz_all->SetBinError(54,4.898979);
   mudz_all->SetBinError(55,2.44949);
   mudz_all->SetEntries(24341);
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
   TLatex *   tex = new TLatex(0.95,0.965,"WSelection");
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
   mudz_all->SetBinContent(46,28.8127);
   mudz_all->SetBinContent(47,6.269989);
   mudz_all->SetBinContent(48,3.299642);
   mudz_all->SetBinContent(49,2.798631);
   mudz_all->SetBinContent(50,0.8073828);
   mudz_all->SetBinContent(51,0.8220196);
   mudz_all->SetBinContent(52,2.331017);
   mudz_all->SetBinContent(53,4.446184);
   mudz_all->SetBinContent(54,12.08646);
   mudz_all->SetBinContent(55,63.83964);
   mudz_all->SetBinError(46,16.70779);
   mudz_all->SetBinError(47,2.508298);
   mudz_all->SetBinError(48,1.357704);
   mudz_all->SetBinError(49,0.3426869);
   mudz_all->SetBinError(50,0.008700276);
   mudz_all->SetBinError(51,0.008788936);
   mudz_all->SetBinError(52,0.3003765);
   mudz_all->SetBinError(53,1.256731);
   mudz_all->SetBinError(54,4.747819);
   mudz_all->SetBinError(55,36.86878);
   mudz_all->SetMinimum(0);
   mudz_all->SetMaximum(2);
   mudz_all->SetEntries(9.428141);
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
