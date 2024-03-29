{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:33 2013) by ROOT version5.32/00
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
   upper->Range(-0.6362734,-2.900341,3.340435,6.993238);
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
   stack->SetMaximum(1204737);
   
   TH1F *dphijj_stack_12 = new TH1F("dphijj_stack_12","stack",50,0,3.1416);
   dphijj_stack_12->SetBinContent(48,0.0420392);
   dphijj_stack_12->SetBinError(48,0.0420392);
   dphijj_stack_12->SetMinimum(0.001983951);
   dphijj_stack_12->SetMaximum(3151806);
   dphijj_stack_12->SetEntries(1);
   dphijj_stack_12->SetStats(0);
   dphijj_stack_12->SetFillColor(4);
   dphijj_stack_12->SetLineColor(4);
   dphijj_stack_12->SetLineWidth(2);
   dphijj_stack_12->SetMarkerColor(4);
   dphijj_stack_12->SetMarkerStyle(21);
   dphijj_stack_12->SetMarkerSize(0.8);
   dphijj_stack_12->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj_stack_12->GetXaxis()->SetLabelFont(42);
   dphijj_stack_12->GetXaxis()->SetLabelOffset(0.007);
   dphijj_stack_12->GetXaxis()->SetLabelSize(0);
   dphijj_stack_12->GetXaxis()->SetTitleSize(0);
   dphijj_stack_12->GetXaxis()->SetTickLength(0.02);
   dphijj_stack_12->GetXaxis()->SetTitleOffset(0.9);
   dphijj_stack_12->GetXaxis()->SetTitleFont(42);
   dphijj_stack_12->GetYaxis()->SetTitle("Events");
   dphijj_stack_12->GetYaxis()->SetLabelFont(42);
   dphijj_stack_12->GetYaxis()->SetLabelOffset(0.007);
   dphijj_stack_12->GetYaxis()->SetLabelSize(0.035);
   dphijj_stack_12->GetYaxis()->SetTitleSize(0.045);
   dphijj_stack_12->GetYaxis()->SetTickLength(0.02);
   dphijj_stack_12->GetYaxis()->SetTitleOffset(1.55);
   dphijj_stack_12->GetYaxis()->SetTitleFont(42);
   dphijj_stack_12->GetZaxis()->SetLabelFont(42);
   dphijj_stack_12->GetZaxis()->SetLabelOffset(0.007);
   dphijj_stack_12->GetZaxis()->SetLabelSize(0.035);
   dphijj_stack_12->GetZaxis()->SetTitleSize(0.045);
   dphijj_stack_12->GetZaxis()->SetTickLength(0.02);
   dphijj_stack_12->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dphijj_stack_12);
   
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(48,0.0420392);
   dphijj->SetBinError(48,0.0420392);
   dphijj->SetMinimum(0.01);
   dphijj->SetMaximum(1050000);
   dphijj->SetEntries(1);
   dphijj->SetStats(0);
   dphijj->SetFillColor(4);
   dphijj->SetLineColor(4);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(4);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0);
   dphijj->GetXaxis()->SetTitleSize(0);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetTitle("Events");
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"HIST");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,0.967979);
   dphijj->SetBinContent(43,3.108717);
   dphijj->SetBinContent(46,1.905546);
   dphijj->SetBinContent(47,0.6787807);
   dphijj->SetBinContent(48,2.669781);
   dphijj->SetBinContent(49,1.964667);
   dphijj->SetBinContent(50,1.621382);
   dphijj->SetBinError(42,0.7494279);
   dphijj->SetBinError(43,1.554444);
   dphijj->SetBinError(46,1.172876);
   dphijj->SetBinError(47,0.6787808);
   dphijj->SetBinError(48,1.344655);
   dphijj->SetBinError(49,1.144824);
   dphijj->SetBinError(50,0.9971946);
   dphijj->SetEntries(21);
   dphijj->SetStats(0);
   dphijj->SetFillColor(5);
   dphijj->SetLineColor(5);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(5);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,1.771737);
   dphijj->SetBinContent(43,3.612566);
   dphijj->SetBinContent(44,2.968614);
   dphijj->SetBinContent(45,2.769707);
   dphijj->SetBinContent(46,5.592835);
   dphijj->SetBinContent(47,5.212626);
   dphijj->SetBinContent(48,4.133899);
   dphijj->SetBinContent(49,1.714903);
   dphijj->SetBinContent(50,3.424609);
   dphijj->SetBinError(42,0.8183258);
   dphijj->SetBinError(43,1.29202);
   dphijj->SetBinError(44,1.133413);
   dphijj->SetBinError(45,1.035802);
   dphijj->SetBinError(46,1.502783);
   dphijj->SetBinError(47,1.560756);
   dphijj->SetBinError(48,1.434505);
   dphijj->SetBinError(49,1.021699);
   dphijj->SetBinError(50,1.276292);
   dphijj->SetEntries(81);
   dphijj->SetStats(0);
   dphijj->SetFillColor(6);
   dphijj->SetLineColor(6);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(6);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,0.4774248);
   dphijj->SetBinContent(43,0.6791906);
   dphijj->SetBinContent(44,0.663882);
   dphijj->SetBinContent(45,0.5351905);
   dphijj->SetBinContent(46,0.515041);
   dphijj->SetBinContent(47,0.4580346);
   dphijj->SetBinContent(48,0.5826936);
   dphijj->SetBinContent(49,0.6341894);
   dphijj->SetBinContent(50,0.2793306);
   dphijj->SetBinError(42,0.1004298);
   dphijj->SetBinError(43,0.1141872);
   dphijj->SetBinError(44,0.1175639);
   dphijj->SetBinError(45,0.1002518);
   dphijj->SetBinError(46,0.09773271);
   dphijj->SetBinError(47,0.09255487);
   dphijj->SetBinError(48,0.1036363);
   dphijj->SetBinError(49,0.1142829);
   dphijj->SetBinError(50,0.07543632);
   dphijj->SetEntries(292);
   dphijj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dphijj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dphijj->SetLineColor(ci);
   dphijj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dphijj->SetMarkerColor(ci);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(43,0.08170766);
   dphijj->SetBinContent(50,0.1241645);
   dphijj->SetBinError(43,0.08170767);
   dphijj->SetBinError(50,0.07711597);
   dphijj->SetEntries(4);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,0.01836888);
   dphijj->SetBinContent(43,0.01016773);
   dphijj->SetBinContent(45,0.01931534);
   dphijj->SetBinContent(46,0.0181559);
   dphijj->SetBinContent(47,0.01304054);
   dphijj->SetBinContent(48,0.0007010064);
   dphijj->SetBinContent(49,0.007027915);
   dphijj->SetBinContent(50,0.01592166);
   dphijj->SetBinError(42,0.01062331);
   dphijj->SetBinError(43,0.007148621);
   dphijj->SetBinError(45,0.01011591);
   dphijj->SetBinError(46,0.01051012);
   dphijj->SetBinError(47,0.009222193);
   dphijj->SetBinError(48,0.0007010064);
   dphijj->SetBinError(49,0.006008219);
   dphijj->SetBinError(50,0.009259009);
   dphijj->SetEntries(22);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   stack->Draw("hist");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,2);
   dphijj->SetBinContent(43,1);
   dphijj->SetBinContent(44,5);
   dphijj->SetBinContent(45,7);
   dphijj->SetBinContent(46,5);
   dphijj->SetBinContent(47,4);
   dphijj->SetBinContent(48,2);
   dphijj->SetBinContent(49,7);
   dphijj->SetBinContent(50,4);
   dphijj->SetBinError(42,1.414214);
   dphijj->SetBinError(43,1);
   dphijj->SetBinError(44,2.236068);
   dphijj->SetBinError(45,2.645751);
   dphijj->SetBinError(46,2.236068);
   dphijj->SetBinError(47,2);
   dphijj->SetBinError(48,1.414214);
   dphijj->SetBinError(49,2.645751);
   dphijj->SetBinError(50,2);
   dphijj->SetEntries(37);
   dphijj->SetStats(0);
   dphijj->SetFillColor(1);
   dphijj->SetFillStyle(0);
   dphijj->SetLineWidth(3);
   dphijj->SetMarkerStyle(20);
   dphijj->SetMarkerSize(1.3);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("SAMEPE1");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(1);
   dphijj->SetFillStyle(0);
   dphijj->SetLineStyle(2);
   dphijj->SetLineWidth(3);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("dphijj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dphijj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","EWK W+jets","f");

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
   entry=leg->AddEntry("dphijj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","Dibosons","f");
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
   lower->Range(-0.6362734,-0.653951,3.340435,2.070845);
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
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(42,0.6181406);
   dphijj->SetBinContent(43,0.1334695);
   dphijj->SetBinContent(44,1.376464);
   dphijj->SetBinContent(45,2.105762);
   dphijj->SetBinContent(46,0.6225427);
   dphijj->SetBinContent(47,0.6286855);
   dphijj->SetBinContent(48,0.2707432);
   dphijj->SetBinContent(49,1.620075);
   dphijj->SetBinContent(50,0.7318758);
   dphijj->SetBinError(42,0.486172);
   dphijj->SetBinError(43,0.1382639);
   dphijj->SetBinError(44,0.7519127);
   dphijj->SetBinError(45,1.033468);
   dphijj->SetBinError(46,0.3152829);
   dphijj->SetBinError(47,0.3566207);
   dphijj->SetBinError(48,0.2045932);
   dphijj->SetBinError(49,0.841309);
   dphijj->SetBinError(50,0.4256316);
   dphijj->SetMinimum(0);
   dphijj->SetMaximum(2);
   dphijj->SetEntries(21.57879);
   dphijj->SetStats(0);
   dphijj->SetFillStyle(0);
   dphijj->SetMarkerStyle(20);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.1);
   dphijj->GetXaxis()->SetTitleSize(0.12);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetTitle("Data/MC");
   dphijj->GetYaxis()->SetNdivisions(505);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.1);
   dphijj->GetYaxis()->SetTitleSize(0.12);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(0.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
