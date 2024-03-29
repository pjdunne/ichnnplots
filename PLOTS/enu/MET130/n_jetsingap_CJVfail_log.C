{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:28:52 2013) by ROOT version5.32/00
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
   upper->Range(-4.253164,-2.925102,22.32911,7.406061);
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
   stack->SetMaximum(2880353);
   
   TH1F *n_jetsingap_stack_10 = new TH1F("n_jetsingap_stack_10","stack",50,0,50);
   n_jetsingap_stack_10->SetBinContent(2,11.41572);
   n_jetsingap_stack_10->SetBinContent(3,0.1406795);
   n_jetsingap_stack_10->SetBinContent(6,0.05750282);
   n_jetsingap_stack_10->SetBinError(2,4.601989);
   n_jetsingap_stack_10->SetBinError(3,0.08432841);
   n_jetsingap_stack_10->SetBinError(6,0.05750282);
   n_jetsingap_stack_10->SetMinimum(0.001912147);
   n_jetsingap_stack_10->SetMaximum(7753591);
   n_jetsingap_stack_10->SetEntries(19);
   n_jetsingap_stack_10->SetStats(0);
   n_jetsingap_stack_10->SetFillColor(4);
   n_jetsingap_stack_10->SetLineColor(4);
   n_jetsingap_stack_10->SetLineWidth(2);
   n_jetsingap_stack_10->SetMarkerColor(4);
   n_jetsingap_stack_10->SetMarkerStyle(21);
   n_jetsingap_stack_10->SetMarkerSize(0.8);
   n_jetsingap_stack_10->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap_stack_10->GetXaxis()->SetRange(1,21);
   n_jetsingap_stack_10->GetXaxis()->SetLabelFont(42);
   n_jetsingap_stack_10->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_10->GetXaxis()->SetLabelSize(0);
   n_jetsingap_stack_10->GetXaxis()->SetTitleSize(0);
   n_jetsingap_stack_10->GetXaxis()->SetTickLength(0.02);
   n_jetsingap_stack_10->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap_stack_10->GetXaxis()->SetTitleFont(42);
   n_jetsingap_stack_10->GetYaxis()->SetTitle("Events");
   n_jetsingap_stack_10->GetYaxis()->SetLabelFont(42);
   n_jetsingap_stack_10->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_10->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_10->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_10->GetYaxis()->SetTickLength(0.02);
   n_jetsingap_stack_10->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap_stack_10->GetYaxis()->SetTitleFont(42);
   n_jetsingap_stack_10->GetZaxis()->SetLabelFont(42);
   n_jetsingap_stack_10->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_10->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_10->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_10->GetZaxis()->SetTickLength(0.02);
   n_jetsingap_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_jetsingap_stack_10);
   
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,11.41572);
   n_jetsingap->SetBinContent(3,0.1406795);
   n_jetsingap->SetBinContent(6,0.05750282);
   n_jetsingap->SetBinError(2,4.601989);
   n_jetsingap->SetBinError(3,0.08432841);
   n_jetsingap->SetBinError(6,0.05750282);
   n_jetsingap->SetMinimum(0.01);
   n_jetsingap->SetMaximum(1927801);
   n_jetsingap->SetEntries(19);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(4);
   n_jetsingap->SetLineColor(4);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(4);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap->GetXaxis()->SetRange(1,21);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0);
   n_jetsingap->GetXaxis()->SetTitleSize(0);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetTitle("Events");
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"HIST");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,22.54813);
   n_jetsingap->SetBinContent(3,30.58629);
   n_jetsingap->SetBinContent(4,19.01129);
   n_jetsingap->SetBinContent(5,12.06669);
   n_jetsingap->SetBinContent(6,5.673929);
   n_jetsingap->SetBinContent(7,0.7786188);
   n_jetsingap->SetBinContent(8,0.7935151);
   n_jetsingap->SetBinError(2,3.819378);
   n_jetsingap->SetBinError(3,4.488915);
   n_jetsingap->SetBinError(4,3.694378);
   n_jetsingap->SetBinError(5,2.951304);
   n_jetsingap->SetBinError(6,2.202735);
   n_jetsingap->SetBinError(7,0.7786187);
   n_jetsingap->SetBinError(8,0.7935151);
   n_jetsingap->SetEntries(165);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(5);
   n_jetsingap->SetLineColor(5);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(5);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,128.52);
   n_jetsingap->SetBinContent(3,43.16044);
   n_jetsingap->SetBinContent(4,11.81205);
   n_jetsingap->SetBinContent(5,1.728561);
   n_jetsingap->SetBinError(2,8.412513);
   n_jetsingap->SetBinError(3,4.230181);
   n_jetsingap->SetBinError(4,2.223662);
   n_jetsingap->SetBinError(5,0.7903585);
   n_jetsingap->SetEntries(460);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(6);
   n_jetsingap->SetLineColor(6);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(6);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,26.92454);
   n_jetsingap->SetBinContent(3,4.387801);
   n_jetsingap->SetBinContent(4,0.4474742);
   n_jetsingap->SetBinContent(5,0.02193668);
   n_jetsingap->SetBinContent(6,0.02171837);
   n_jetsingap->SetBinError(2,0.7374034);
   n_jetsingap->SetBinError(3,0.2983127);
   n_jetsingap->SetBinError(4,0.09311061);
   n_jetsingap->SetBinError(5,0.02193668);
   n_jetsingap->SetBinError(6,0.02171837);
   n_jetsingap->SetEntries(1830);
   n_jetsingap->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_jetsingap->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_jetsingap->SetLineColor(ci);
   n_jetsingap->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_jetsingap->SetMarkerColor(ci);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(3);
   n_jetsingap->SetLineColor(3);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(3);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,1.883173);
   n_jetsingap->SetBinContent(3,1.002443);
   n_jetsingap->SetBinContent(4,0.2220766);
   n_jetsingap->SetBinContent(5,0.09190509);
   n_jetsingap->SetBinError(2,0.4298749);
   n_jetsingap->SetBinError(3,0.3004993);
   n_jetsingap->SetBinError(4,0.1284684);
   n_jetsingap->SetBinError(5,0.09190509);
   n_jetsingap->SetEntries(46);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(3);
   n_jetsingap->SetLineColor(3);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(3);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,0.7319461);
   n_jetsingap->SetBinContent(3,0.1399617);
   n_jetsingap->SetBinContent(4,0.01839651);
   n_jetsingap->SetBinError(2,0.06849895);
   n_jetsingap->SetBinError(3,0.0291704);
   n_jetsingap->SetBinError(4,0.01062617);
   n_jetsingap->SetEntries(163);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(3);
   n_jetsingap->SetLineColor(3);
   n_jetsingap->SetLineWidth(2);
   n_jetsingap->SetMarkerColor(3);
   n_jetsingap->SetMarkerStyle(21);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   stack->Add(n_jetsingap,"");
   stack->Draw("hist");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,125);
   n_jetsingap->SetBinContent(3,55);
   n_jetsingap->SetBinContent(4,21);
   n_jetsingap->SetBinContent(5,10);
   n_jetsingap->SetBinContent(6,3);
   n_jetsingap->SetBinContent(7,1);
   n_jetsingap->SetBinError(2,11.18034);
   n_jetsingap->SetBinError(3,7.416198);
   n_jetsingap->SetBinError(4,4.582576);
   n_jetsingap->SetBinError(5,3.162278);
   n_jetsingap->SetBinError(6,1.732051);
   n_jetsingap->SetBinError(7,1);
   n_jetsingap->SetEntries(215);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(1);
   n_jetsingap->SetFillStyle(0);
   n_jetsingap->SetLineWidth(3);
   n_jetsingap->SetMarkerStyle(20);
   n_jetsingap->SetMarkerSize(1.3);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   n_jetsingap->Draw("SAMEPE1");
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillColor(1);
   n_jetsingap->SetFillStyle(0);
   n_jetsingap->SetLineStyle(2);
   n_jetsingap->SetLineWidth(3);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.035);
   n_jetsingap->GetXaxis()->SetTitleSize(0.045);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   n_jetsingap->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("n_jetsingap","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_jetsingap","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","EWK W+jets","f");

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
   entry=leg->AddEntry("n_jetsingap","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_jetsingap","Dibosons","f");
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
   lower->Range(-4.253164,-0.653951,22.32911,2.070845);
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
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(2,0.6921073);
   n_jetsingap->SetBinContent(3,0.6937705);
   n_jetsingap->SetBinContent(4,0.666428);
   n_jetsingap->SetBinContent(5,0.7189544);
   n_jetsingap->SetBinContent(6,0.526718);
   n_jetsingap->SetBinContent(7,1.284326);
   n_jetsingap->SetBinError(2,0.07138872);
   n_jetsingap->SetBinError(3,0.1080678);
   n_jetsingap->SetBinError(4,0.1716869);
   n_jetsingap->SetBinError(5,0.2768652);
   n_jetsingap->SetBinError(6,0.3660276);
   n_jetsingap->SetBinError(7,1.816311);
   n_jetsingap->SetMinimum(0);
   n_jetsingap->SetMaximum(2);
   n_jetsingap->SetEntries(5.905033);
   n_jetsingap->SetStats(0);
   n_jetsingap->SetFillStyle(0);
   n_jetsingap->SetMarkerStyle(20);
   n_jetsingap->SetMarkerSize(0.8);
   n_jetsingap->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap->GetXaxis()->SetRange(1,21);
   n_jetsingap->GetXaxis()->SetLabelFont(42);
   n_jetsingap->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetXaxis()->SetLabelSize(0.1);
   n_jetsingap->GetXaxis()->SetTitleSize(0.12);
   n_jetsingap->GetXaxis()->SetTickLength(0.02);
   n_jetsingap->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap->GetXaxis()->SetTitleFont(42);
   n_jetsingap->GetYaxis()->SetTitle("Data/MC");
   n_jetsingap->GetYaxis()->SetNdivisions(505);
   n_jetsingap->GetYaxis()->SetLabelFont(42);
   n_jetsingap->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetYaxis()->SetLabelSize(0.1);
   n_jetsingap->GetYaxis()->SetTitleSize(0.12);
   n_jetsingap->GetYaxis()->SetTickLength(0.02);
   n_jetsingap->GetYaxis()->SetTitleOffset(0.55);
   n_jetsingap->GetYaxis()->SetTitleFont(42);
   n_jetsingap->GetZaxis()->SetLabelFont(42);
   n_jetsingap->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap->GetZaxis()->SetTickLength(0.02);
   n_jetsingap->GetZaxis()->SetTitleFont(42);
   n_jetsingap->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
