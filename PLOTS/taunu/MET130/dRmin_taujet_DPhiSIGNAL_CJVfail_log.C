{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:57:27 2013) by ROOT version5.32/00
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
   upper->Range(-0.9316455,-2.67296,4.891139,3.656363);
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
   stack->SetMaximum(1089.562);
   
   TH1F *dRmin_taujet_stack_11 = new TH1F("dRmin_taujet_stack_11","stack",50,0,10);
   dRmin_taujet_stack_11->SetBinContent(13,2.248855);
   dRmin_taujet_stack_11->SetBinContent(17,0.3516484);
   dRmin_taujet_stack_11->SetBinError(13,2.245752);
   dRmin_taujet_stack_11->SetBinError(17,0.2032212);
   dRmin_taujet_stack_11->SetMinimum(0.002842018);
   dRmin_taujet_stack_11->SetMaximum(2187.242);
   dRmin_taujet_stack_11->SetEntries(5);
   dRmin_taujet_stack_11->SetStats(0);
   dRmin_taujet_stack_11->SetFillColor(4);
   dRmin_taujet_stack_11->SetLineColor(4);
   dRmin_taujet_stack_11->SetLineWidth(2);
   dRmin_taujet_stack_11->SetMarkerColor(4);
   dRmin_taujet_stack_11->SetMarkerStyle(21);
   dRmin_taujet_stack_11->SetMarkerSize(0.8);
   dRmin_taujet_stack_11->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet_stack_11->GetXaxis()->SetRange(1,23);
   dRmin_taujet_stack_11->GetXaxis()->SetLabelFont(42);
   dRmin_taujet_stack_11->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_11->GetXaxis()->SetLabelSize(0);
   dRmin_taujet_stack_11->GetXaxis()->SetTitleSize(0);
   dRmin_taujet_stack_11->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_11->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet_stack_11->GetXaxis()->SetTitleFont(42);
   dRmin_taujet_stack_11->GetYaxis()->SetTitle("Events");
   dRmin_taujet_stack_11->GetYaxis()->SetLabelFont(42);
   dRmin_taujet_stack_11->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_11->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_11->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_11->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_11->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet_stack_11->GetYaxis()->SetTitleFont(42);
   dRmin_taujet_stack_11->GetZaxis()->SetLabelFont(42);
   dRmin_taujet_stack_11->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_11->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_11->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_11->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_11->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet_stack_11);
   
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(13,2.248855);
   dRmin_taujet->SetBinContent(17,0.3516484);
   dRmin_taujet->SetBinError(13,2.245752);
   dRmin_taujet->SetBinError(17,0.2032212);
   dRmin_taujet->SetMinimum(0.01);
   dRmin_taujet->SetMaximum(1200);
   dRmin_taujet->SetEntries(5);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(4);
   dRmin_taujet->SetLineColor(4);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(4);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0);
   dRmin_taujet->GetXaxis()->SetTitleSize(0);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Events");
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"HIST");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(12,0.3381283);
   dRmin_taujet->SetBinContent(14,2.009798);
   dRmin_taujet->SetBinContent(15,1.66794);
   dRmin_taujet->SetBinContent(16,0.7724873);
   dRmin_taujet->SetBinContent(17,1.138623);
   dRmin_taujet->SetBinContent(18,3.480797);
   dRmin_taujet->SetBinContent(20,0.1440549);
   dRmin_taujet->SetBinError(12,0.3381283);
   dRmin_taujet->SetBinError(14,1.0275);
   dRmin_taujet->SetBinError(15,0.9302341);
   dRmin_taujet->SetBinError(16,0.7724873);
   dRmin_taujet->SetBinError(17,0.7960132);
   dRmin_taujet->SetBinError(18,1.451925);
   dRmin_taujet->SetBinError(20,0.144055);
   dRmin_taujet->SetEntries(22);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(5);
   dRmin_taujet->SetLineColor(5);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(5);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.8302932);
   dRmin_taujet->SetBinContent(9,0.4227996);
   dRmin_taujet->SetBinContent(10,0.3283066);
   dRmin_taujet->SetBinContent(12,0.4772014);
   dRmin_taujet->SetBinContent(13,4.471561);
   dRmin_taujet->SetBinContent(14,1.849709);
   dRmin_taujet->SetBinContent(15,3.832987);
   dRmin_taujet->SetBinContent(16,2.196416);
   dRmin_taujet->SetBinContent(17,0.711898);
   dRmin_taujet->SetBinContent(18,2.059129);
   dRmin_taujet->SetBinContent(19,0.8229011);
   dRmin_taujet->SetBinError(1,0.5871428);
   dRmin_taujet->SetBinError(9,0.4227997);
   dRmin_taujet->SetBinError(10,0.3283066);
   dRmin_taujet->SetBinError(12,0.3424223);
   dRmin_taujet->SetBinError(13,1.848407);
   dRmin_taujet->SetBinError(14,0.8646963);
   dRmin_taujet->SetBinError(15,1.538573);
   dRmin_taujet->SetBinError(16,1.116006);
   dRmin_taujet->SetBinError(17,0.6271601);
   dRmin_taujet->SetBinError(18,1.337774);
   dRmin_taujet->SetBinError(19,0.8229011);
   dRmin_taujet->SetEntries(37);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(6);
   dRmin_taujet->SetLineColor(6);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(6);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.04144821);
   dRmin_taujet->SetBinContent(6,0.02145564);
   dRmin_taujet->SetBinContent(9,0.02886031);
   dRmin_taujet->SetBinContent(10,0.05186138);
   dRmin_taujet->SetBinContent(11,0.006146);
   dRmin_taujet->SetBinContent(12,0.06044348);
   dRmin_taujet->SetBinContent(13,0.2852029);
   dRmin_taujet->SetBinContent(14,0.4334813);
   dRmin_taujet->SetBinContent(15,0.8150939);
   dRmin_taujet->SetBinContent(16,1.53841);
   dRmin_taujet->SetBinContent(17,1.782066);
   dRmin_taujet->SetBinContent(18,1.416102);
   dRmin_taujet->SetBinContent(19,0.9697421);
   dRmin_taujet->SetBinContent(20,0.3659241);
   dRmin_taujet->SetBinContent(21,0.1496294);
   dRmin_taujet->SetBinContent(22,0.05463748);
   dRmin_taujet->SetBinError(1,0.02932092);
   dRmin_taujet->SetBinError(6,0.02145564);
   dRmin_taujet->SetBinError(9,0.02236906);
   dRmin_taujet->SetBinError(10,0.03775431);
   dRmin_taujet->SetBinError(11,0.006146);
   dRmin_taujet->SetBinError(12,0.03415791);
   dRmin_taujet->SetBinError(13,0.07713095);
   dRmin_taujet->SetBinError(14,0.09164036);
   dRmin_taujet->SetBinError(15,0.1339727);
   dRmin_taujet->SetBinError(16,0.182053);
   dRmin_taujet->SetBinError(17,0.1926945);
   dRmin_taujet->SetBinError(18,0.1711887);
   dRmin_taujet->SetBinError(19,0.1404668);
   dRmin_taujet->SetBinError(20,0.08787127);
   dRmin_taujet->SetBinError(21,0.0572748);
   dRmin_taujet->SetBinError(22,0.03871884);
   dRmin_taujet->SetEntries(441);
   dRmin_taujet->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetLineColor(ci);
   dRmin_taujet->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetMarkerColor(ci);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(3,0.1907149);
   dRmin_taujet->SetBinContent(12,0.141974);
   dRmin_taujet->SetBinContent(15,0.06633901);
   dRmin_taujet->SetBinContent(17,0.1036819);
   dRmin_taujet->SetBinContent(18,0.1879632);
   dRmin_taujet->SetBinError(3,0.1907149);
   dRmin_taujet->SetBinError(12,0.141974);
   dRmin_taujet->SetBinError(15,0.06626513);
   dRmin_taujet->SetBinError(17,0.1036819);
   dRmin_taujet->SetBinError(18,0.1879632);
   dRmin_taujet->SetEntries(6);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(14,0.08956119);
   dRmin_taujet->SetBinContent(15,0.183702);
   dRmin_taujet->SetBinContent(16,0.1816637);
   dRmin_taujet->SetBinContent(18,0.09354786);
   dRmin_taujet->SetBinError(14,0.08956119);
   dRmin_taujet->SetBinError(15,0.123172);
   dRmin_taujet->SetBinError(16,0.142277);
   dRmin_taujet->SetBinError(18,0.09354786);
   dRmin_taujet->SetEntries(7);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(11,0.006258341);
   dRmin_taujet->SetBinContent(12,0.011136);
   dRmin_taujet->SetBinContent(13,0.01017699);
   dRmin_taujet->SetBinContent(14,0.01950704);
   dRmin_taujet->SetBinContent(15,0.04805746);
   dRmin_taujet->SetBinContent(16,0.055402);
   dRmin_taujet->SetBinContent(17,0.06994417);
   dRmin_taujet->SetBinContent(18,0.02620995);
   dRmin_taujet->SetBinContent(19,0.01959323);
   dRmin_taujet->SetBinContent(20,0.00860384);
   dRmin_taujet->SetBinContent(21,0.007865145);
   dRmin_taujet->SetBinError(11,0.006258341);
   dRmin_taujet->SetBinError(12,0.008030834);
   dRmin_taujet->SetBinError(13,0.007239057);
   dRmin_taujet->SetBinError(14,0.01022814);
   dRmin_taujet->SetBinError(15,0.01871598);
   dRmin_taujet->SetBinError(16,0.01929143);
   dRmin_taujet->SetBinError(17,0.02040965);
   dRmin_taujet->SetBinError(18,0.01310813);
   dRmin_taujet->SetBinError(19,0.01106154);
   dRmin_taujet->SetBinError(20,0.008603841);
   dRmin_taujet->SetBinError(21,0.007865145);
   dRmin_taujet->SetEntries(53);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   stack->Draw("hist");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,3);
   dRmin_taujet->SetBinContent(12,1);
   dRmin_taujet->SetBinContent(15,8);
   dRmin_taujet->SetBinContent(16,5);
   dRmin_taujet->SetBinContent(17,7);
   dRmin_taujet->SetBinContent(18,2);
   dRmin_taujet->SetBinError(1,1.732051);
   dRmin_taujet->SetBinError(12,1);
   dRmin_taujet->SetBinError(15,2.828427);
   dRmin_taujet->SetBinError(16,2.236068);
   dRmin_taujet->SetBinError(17,2.645751);
   dRmin_taujet->SetBinError(18,1.414214);
   dRmin_taujet->SetEntries(26);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(1);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetLineWidth(3);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(1.3);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("dRmin_taujet","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dRmin_taujet","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","EWK W+jets","f");

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
   entry=leg->AddEntry("dRmin_taujet","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","Dibosons","f");
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
   lower->Range(-0.9316455,-0.653951,4.891139,2.070845);
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
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,3.441387);
   dRmin_taujet->SetBinContent(12,0.9719277);
   dRmin_taujet->SetBinContent(15,1.209534);
   dRmin_taujet->SetBinContent(16,1.053879);
   dRmin_taujet->SetBinContent(17,1.839099);
   dRmin_taujet->SetBinContent(18,0.2753399);
   dRmin_taujet->SetBinError(1,3.055102);
   dRmin_taujet->SetBinError(12,1.081842);
   dRmin_taujet->SetBinError(15,0.5405924);
   dRmin_taujet->SetBinError(16,0.5618576);
   dRmin_taujet->SetBinError(17,0.8568671);
   dRmin_taujet->SetBinError(18,0.2088354);
   dRmin_taujet->SetMinimum(0);
   dRmin_taujet->SetMaximum(2);
   dRmin_taujet->SetEntries(6.500081);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Data/MC");
   dRmin_taujet->GetYaxis()->SetNdivisions(505);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(0.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
