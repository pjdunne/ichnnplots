{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:03 2013) by ROOT version5.32/00
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
   upper->Range(-4.253164,-2.923357,22.32911,7.376652);
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
   stack->SetMaximum(2706858);
   
   TH1F *n_jetsingap_stack_4 = new TH1F("n_jetsingap_stack_4","stack",50,0,50);
   n_jetsingap_stack_4->SetBinContent(1,0.4700677);
   n_jetsingap_stack_4->SetBinContent(2,5.232918);
   n_jetsingap_stack_4->SetBinContent(3,7.59244);
   n_jetsingap_stack_4->SetBinError(1,0.2275169);
   n_jetsingap_stack_4->SetBinError(2,3.065065);
   n_jetsingap_stack_4->SetBinError(3,3.636454);
   n_jetsingap_stack_4->SetMinimum(0.001917092);
   n_jetsingap_stack_4->SetMaximum(7271954);
   n_jetsingap_stack_4->SetEntries(41);
   n_jetsingap_stack_4->SetStats(0);
   n_jetsingap_stack_4->SetFillColor(4);
   n_jetsingap_stack_4->SetLineColor(4);
   n_jetsingap_stack_4->SetLineWidth(2);
   n_jetsingap_stack_4->SetMarkerColor(4);
   n_jetsingap_stack_4->SetMarkerStyle(21);
   n_jetsingap_stack_4->SetMarkerSize(0.8);
   n_jetsingap_stack_4->GetXaxis()->SetTitle("Number of jets in rapidity gap");
   n_jetsingap_stack_4->GetXaxis()->SetRange(1,21);
   n_jetsingap_stack_4->GetXaxis()->SetLabelFont(42);
   n_jetsingap_stack_4->GetXaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_4->GetXaxis()->SetLabelSize(0);
   n_jetsingap_stack_4->GetXaxis()->SetTitleSize(0);
   n_jetsingap_stack_4->GetXaxis()->SetTickLength(0.02);
   n_jetsingap_stack_4->GetXaxis()->SetTitleOffset(0.9);
   n_jetsingap_stack_4->GetXaxis()->SetTitleFont(42);
   n_jetsingap_stack_4->GetYaxis()->SetTitle("Events");
   n_jetsingap_stack_4->GetYaxis()->SetLabelFont(42);
   n_jetsingap_stack_4->GetYaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_4->GetYaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_4->GetYaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_4->GetYaxis()->SetTickLength(0.02);
   n_jetsingap_stack_4->GetYaxis()->SetTitleOffset(1.55);
   n_jetsingap_stack_4->GetYaxis()->SetTitleFont(42);
   n_jetsingap_stack_4->GetZaxis()->SetLabelFont(42);
   n_jetsingap_stack_4->GetZaxis()->SetLabelOffset(0.007);
   n_jetsingap_stack_4->GetZaxis()->SetLabelSize(0.035);
   n_jetsingap_stack_4->GetZaxis()->SetTitleSize(0.045);
   n_jetsingap_stack_4->GetZaxis()->SetTickLength(0.02);
   n_jetsingap_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_jetsingap_stack_4);
   
   
   TH1F *n_jetsingap = new TH1F("n_jetsingap","n_jetsingap",50,0,50);
   n_jetsingap->SetBinContent(1,0.4700677);
   n_jetsingap->SetBinContent(2,5.232918);
   n_jetsingap->SetBinContent(3,7.59244);
   n_jetsingap->SetBinError(1,0.2275169);
   n_jetsingap->SetBinError(2,3.065065);
   n_jetsingap->SetBinError(3,3.636454);
   n_jetsingap->SetMinimum(0.01);
   n_jetsingap->SetMaximum(2445000);
   n_jetsingap->SetEntries(41);
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
   n_jetsingap->SetBinContent(1,1.161103);
   n_jetsingap->SetBinContent(2,14.76906);
   n_jetsingap->SetBinContent(3,15.85396);
   n_jetsingap->SetBinContent(4,14.03731);
   n_jetsingap->SetBinContent(5,7.192821);
   n_jetsingap->SetBinContent(6,3.153097);
   n_jetsingap->SetBinContent(7,3.149469);
   n_jetsingap->SetBinError(1,0.791524);
   n_jetsingap->SetBinError(2,3.197168);
   n_jetsingap->SetBinError(3,3.194734);
   n_jetsingap->SetBinError(4,3.071431);
   n_jetsingap->SetBinError(5,2.275505);
   n_jetsingap->SetBinError(6,1.477646);
   n_jetsingap->SetBinError(7,1.575945);
   n_jetsingap->SetEntries(113);
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
   n_jetsingap->SetBinContent(1,51.40206);
   n_jetsingap->SetBinContent(2,100.8652);
   n_jetsingap->SetBinContent(3,58.39666);
   n_jetsingap->SetBinContent(4,17.47561);
   n_jetsingap->SetBinContent(5,3.06918);
   n_jetsingap->SetBinContent(6,0.4111646);
   n_jetsingap->SetBinContent(7,0.5459984);
   n_jetsingap->SetBinError(1,6.747573);
   n_jetsingap->SetBinError(2,8.578817);
   n_jetsingap->SetBinError(3,5.552243);
   n_jetsingap->SetBinError(4,2.713263);
   n_jetsingap->SetBinError(5,1.091933);
   n_jetsingap->SetBinError(6,0.4111646);
   n_jetsingap->SetBinError(7,0.5459984);
   n_jetsingap->SetEntries(488);
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
   n_jetsingap->SetBinContent(1,14.58941);
   n_jetsingap->SetBinContent(2,48.47075);
   n_jetsingap->SetBinContent(3,10.81911);
   n_jetsingap->SetBinContent(4,1.780685);
   n_jetsingap->SetBinContent(5,0.3637556);
   n_jetsingap->SetBinContent(6,0.01998663);
   n_jetsingap->SetBinError(1,0.5379411);
   n_jetsingap->SetBinError(2,0.9930213);
   n_jetsingap->SetBinError(3,0.4705992);
   n_jetsingap->SetBinError(4,0.1832179);
   n_jetsingap->SetBinError(5,0.08867277);
   n_jetsingap->SetBinError(6,0.01998663);
   n_jetsingap->SetEntries(4395);
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
   n_jetsingap->SetBinContent(1,6.269282);
   n_jetsingap->SetBinContent(2,3.712103);
   n_jetsingap->SetBinContent(3,1.197684);
   n_jetsingap->SetBinContent(4,0.8832458);
   n_jetsingap->SetBinError(1,1.448593);
   n_jetsingap->SetBinError(2,0.7269977);
   n_jetsingap->SetBinError(3,0.4034583);
   n_jetsingap->SetBinError(4,0.3535688);
   n_jetsingap->SetEntries(88);
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
   n_jetsingap->SetBinContent(1,1.575857);
   n_jetsingap->SetBinContent(2,5.813581);
   n_jetsingap->SetBinContent(3,3.305584);
   n_jetsingap->SetBinContent(4,1.738521);
   n_jetsingap->SetBinContent(5,0.395044);
   n_jetsingap->SetBinContent(7,0.08349333);
   n_jetsingap->SetBinError(1,0.4716016);
   n_jetsingap->SetBinError(2,0.8893219);
   n_jetsingap->SetBinError(3,0.6146176);
   n_jetsingap->SetBinError(4,0.4032813);
   n_jetsingap->SetBinError(5,0.1947863);
   n_jetsingap->SetBinError(7,0.08349333);
   n_jetsingap->SetEntries(143);
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
   n_jetsingap->SetBinContent(1,0.5295432);
   n_jetsingap->SetBinContent(2,1.593526);
   n_jetsingap->SetBinContent(3,0.8493326);
   n_jetsingap->SetBinContent(4,0.2077216);
   n_jetsingap->SetBinContent(5,0.03853719);
   n_jetsingap->SetBinContent(6,0.006042105);
   n_jetsingap->SetBinError(1,0.06922259);
   n_jetsingap->SetBinError(2,0.1041535);
   n_jetsingap->SetBinError(3,0.07597981);
   n_jetsingap->SetBinError(4,0.03926008);
   n_jetsingap->SetBinError(5,0.01519165);
   n_jetsingap->SetBinError(6,0.006042105);
   n_jetsingap->SetEntries(557);
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
   n_jetsingap->SetBinContent(1,79);
   n_jetsingap->SetBinContent(2,163);
   n_jetsingap->SetBinContent(3,103);
   n_jetsingap->SetBinContent(4,47);
   n_jetsingap->SetBinContent(5,13);
   n_jetsingap->SetBinContent(6,4);
   n_jetsingap->SetBinContent(7,5);
   n_jetsingap->SetBinError(1,8.888194);
   n_jetsingap->SetBinError(2,12.76715);
   n_jetsingap->SetBinError(3,10.14889);
   n_jetsingap->SetBinError(4,6.855655);
   n_jetsingap->SetBinError(5,3.605551);
   n_jetsingap->SetBinError(6,2);
   n_jetsingap->SetBinError(7,2.236068);
   n_jetsingap->SetEntries(414);
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
   n_jetsingap->SetBinContent(1,0.8872117);
   n_jetsingap->SetBinContent(2,0.7464651);
   n_jetsingap->SetBinError(1,0.5417646);
   n_jetsingap->SetBinError(2,0.4626399);
   n_jetsingap->SetEntries(6);
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
   TLatex *   tex = new TLatex(0.95,0.965,"AN");
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
   n_jetsingap->SetBinContent(1,1.04598);
   n_jetsingap->SetBinContent(2,0.9302365);
   n_jetsingap->SetBinContent(3,1.139099);
   n_jetsingap->SetBinContent(4,1.301107);
   n_jetsingap->SetBinContent(5,1.175477);
   n_jetsingap->SetBinContent(6,1.114116);
   n_jetsingap->SetBinContent(7,1.323115);
   n_jetsingap->SetBinError(1,0.1523259);
   n_jetsingap->SetBinError(2,0.08795692);
   n_jetsingap->SetBinError(3,0.1386772);
   n_jetsingap->SetBinError(4,0.2413027);
   n_jetsingap->SetBinError(5,0.4228169);
   n_jetsingap->SetBinError(6,0.7327263);
   n_jetsingap->SetBinError(7,0.8318586);
   n_jetsingap->SetMinimum(0);
   n_jetsingap->SetMaximum(2);
   n_jetsingap->SetEntries(42.523);
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
