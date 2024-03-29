{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:12 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.899883,1063.291,6.985698);
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
   stack->SetMaximum(1185716);
   
   TH1F *jpt_1_stack_4 = new TH1F("jpt_1_stack_4","stack",25,0,1000);
   jpt_1_stack_4->SetBinContent(2,0.02780752);
   jpt_1_stack_4->SetBinContent(3,0.1588795);
   jpt_1_stack_4->SetBinContent(4,2.461418);
   jpt_1_stack_4->SetBinContent(5,4.513136);
   jpt_1_stack_4->SetBinContent(6,4.832054);
   jpt_1_stack_4->SetBinContent(7,0.5209836);
   jpt_1_stack_4->SetBinContent(8,0.5135506);
   jpt_1_stack_4->SetBinContent(9,0.1607135);
   jpt_1_stack_4->SetBinContent(10,0.05017002);
   jpt_1_stack_4->SetBinContent(11,0.04833613);
   jpt_1_stack_4->SetBinContent(12,0.008376744);
   jpt_1_stack_4->SetBinError(2,0.02780752);
   jpt_1_stack_4->SetBinError(3,0.1283061);
   jpt_1_stack_4->SetBinError(4,2.031289);
   jpt_1_stack_4->SetBinError(5,2.837354);
   jpt_1_stack_4->SetBinError(6,3.211764);
   jpt_1_stack_4->SetBinError(7,0.269154);
   jpt_1_stack_4->SetBinError(8,0.2611512);
   jpt_1_stack_4->SetBinError(9,0.1234501);
   jpt_1_stack_4->SetBinError(10,0.05017002);
   jpt_1_stack_4->SetBinError(11,0.04833613);
   jpt_1_stack_4->SetBinError(12,0.008376743);
   jpt_1_stack_4->SetMinimum(0.001985312);
   jpt_1_stack_4->SetMaximum(3100407);
   jpt_1_stack_4->SetEntries(41);
   jpt_1_stack_4->SetStats(0);
   jpt_1_stack_4->SetFillColor(4);
   jpt_1_stack_4->SetLineColor(4);
   jpt_1_stack_4->SetLineWidth(2);
   jpt_1_stack_4->SetMarkerColor(4);
   jpt_1_stack_4->SetMarkerStyle(21);
   jpt_1_stack_4->SetMarkerSize(0.8);
   jpt_1_stack_4->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_4->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_4->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_4->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_4->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_4->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_4->GetYaxis()->SetTitle("Events");
   jpt_1_stack_4->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_4->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_4->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_4->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_4->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_4->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_4->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_4->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_4->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_4->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_4);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.02780752);
   jpt_1->SetBinContent(3,0.1588795);
   jpt_1->SetBinContent(4,2.461418);
   jpt_1->SetBinContent(5,4.513136);
   jpt_1->SetBinContent(6,4.832054);
   jpt_1->SetBinContent(7,0.5209836);
   jpt_1->SetBinContent(8,0.5135506);
   jpt_1->SetBinContent(9,0.1607135);
   jpt_1->SetBinContent(10,0.05017002);
   jpt_1->SetBinContent(11,0.04833613);
   jpt_1->SetBinContent(12,0.008376744);
   jpt_1->SetBinError(2,0.02780752);
   jpt_1->SetBinError(3,0.1283061);
   jpt_1->SetBinError(4,2.031289);
   jpt_1->SetBinError(5,2.837354);
   jpt_1->SetBinError(6,3.211764);
   jpt_1->SetBinError(7,0.269154);
   jpt_1->SetBinError(8,0.2611512);
   jpt_1->SetBinError(9,0.1234501);
   jpt_1->SetBinError(10,0.05017002);
   jpt_1->SetBinError(11,0.04833613);
   jpt_1->SetBinError(12,0.008376743);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(1305000);
   jpt_1->SetEntries(41);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(4);
   jpt_1->SetLineColor(4);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(4);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0);
   jpt_1->GetXaxis()->SetTitleSize(0);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Events");
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"HIST");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(3,4.204999);
   jpt_1->SetBinContent(4,11.68553);
   jpt_1->SetBinContent(5,11.90679);
   jpt_1->SetBinContent(6,5.832519);
   jpt_1->SetBinContent(7,5.953408);
   jpt_1->SetBinContent(8,8.542245);
   jpt_1->SetBinContent(9,4.689901);
   jpt_1->SetBinContent(11,1.015087);
   jpt_1->SetBinContent(12,1.588037);
   jpt_1->SetBinContent(13,0.08863656);
   jpt_1->SetBinContent(14,2.329332);
   jpt_1->SetBinContent(15,0.7759352);
   jpt_1->SetBinContent(17,0.7044002);
   jpt_1->SetBinError(3,1.547528);
   jpt_1->SetBinError(4,2.962901);
   jpt_1->SetBinError(5,2.812673);
   jpt_1->SetBinError(6,1.91653);
   jpt_1->SetBinError(7,2.065994);
   jpt_1->SetBinError(8,2.363069);
   jpt_1->SetBinError(9,1.785089);
   jpt_1->SetBinError(11,0.5864255);
   jpt_1->SetBinError(12,1.126747);
   jpt_1->SetBinError(13,0.08863656);
   jpt_1->SetBinError(14,1.34796);
   jpt_1->SetBinError(15,0.7759352);
   jpt_1->SetBinError(17,0.7044002);
   jpt_1->SetEntries(113);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(5);
   jpt_1->SetLineColor(5);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(5);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.6204583);
   jpt_1->SetBinContent(3,8.189282);
   jpt_1->SetBinContent(4,32.02907);
   jpt_1->SetBinContent(5,44.15574);
   jpt_1->SetBinContent(6,36.62643);
   jpt_1->SetBinContent(7,35.6588);
   jpt_1->SetBinContent(8,24.64158);
   jpt_1->SetBinContent(9,19.38074);
   jpt_1->SetBinContent(10,10.99941);
   jpt_1->SetBinContent(11,8.815237);
   jpt_1->SetBinContent(12,4.609652);
   jpt_1->SetBinContent(13,1.081645);
   jpt_1->SetBinContent(14,0.836468);
   jpt_1->SetBinContent(15,0.99187);
   jpt_1->SetBinContent(16,1.199005);
   jpt_1->SetBinContent(17,0.6913855);
   jpt_1->SetBinContent(18,0.8402461);
   jpt_1->SetBinContent(19,0.798877);
   jpt_1->SetBinError(2,0.6204583);
   jpt_1->SetBinError(3,2.319845);
   jpt_1->SetBinError(4,4.662257);
   jpt_1->SetBinError(5,5.426688);
   jpt_1->SetBinError(6,5.120735);
   jpt_1->SetBinError(7,5.165694);
   jpt_1->SetBinError(8,4.019074);
   jpt_1->SetBinError(9,3.669557);
   jpt_1->SetBinError(10,2.599613);
   jpt_1->SetBinError(11,2.495601);
   jpt_1->SetBinError(12,1.921887);
   jpt_1->SetBinError(13,0.6319681);
   jpt_1->SetBinError(14,0.5883878);
   jpt_1->SetBinError(15,0.7293659);
   jpt_1->SetBinError(16,0.6413072);
   jpt_1->SetBinError(17,0.6913855);
   jpt_1->SetBinError(18,0.5759615);
   jpt_1->SetBinError(19,0.5649416);
   jpt_1->SetEntries(488);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(6);
   jpt_1->SetLineColor(6);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(6);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.04901723);
   jpt_1->SetBinContent(3,2.714684);
   jpt_1->SetBinContent(4,8.974305);
   jpt_1->SetBinContent(5,12.92602);
   jpt_1->SetBinContent(6,13.58293);
   jpt_1->SetBinContent(7,11.30945);
   jpt_1->SetBinContent(8,8.895464);
   jpt_1->SetBinContent(9,6.759135);
   jpt_1->SetBinContent(10,3.543813);
   jpt_1->SetBinContent(11,2.778289);
   jpt_1->SetBinContent(12,1.641916);
   jpt_1->SetBinContent(13,0.9085402);
   jpt_1->SetBinContent(14,0.6037884);
   jpt_1->SetBinContent(15,0.5944206);
   jpt_1->SetBinContent(16,0.2412677);
   jpt_1->SetBinContent(17,0.1545441);
   jpt_1->SetBinContent(18,0.03631438);
   jpt_1->SetBinContent(19,0.09023795);
   jpt_1->SetBinContent(20,0.06189471);
   jpt_1->SetBinContent(21,0.06664483);
   jpt_1->SetBinContent(22,0.01462788);
   jpt_1->SetBinContent(23,0.01999697);
   jpt_1->SetBinContent(26,0.07639699);
   jpt_1->SetBinError(2,0.02750699);
   jpt_1->SetBinError(3,0.2342867);
   jpt_1->SetBinError(4,0.4292126);
   jpt_1->SetBinError(5,0.5137309);
   jpt_1->SetBinError(6,0.5244418);
   jpt_1->SetBinError(7,0.475189);
   jpt_1->SetBinError(8,0.4230182);
   jpt_1->SetBinError(9,0.3686062);
   jpt_1->SetBinError(10,0.2657668);
   jpt_1->SetBinError(11,0.2384024);
   jpt_1->SetBinError(12,0.183498);
   jpt_1->SetBinError(13,0.134399);
   jpt_1->SetBinError(14,0.1160172);
   jpt_1->SetBinError(15,0.1105655);
   jpt_1->SetBinError(16,0.0666966);
   jpt_1->SetBinError(17,0.05497556);
   jpt_1->SetBinError(18,0.02554155);
   jpt_1->SetBinError(19,0.04149493);
   jpt_1->SetBinError(20,0.03474455);
   jpt_1->SetBinError(21,0.03335085);
   jpt_1->SetBinError(22,0.01386689);
   jpt_1->SetBinError(23,0.01999696);
   jpt_1->SetBinError(26,0.04092166);
   jpt_1->SetEntries(4395);
   jpt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_1->SetLineColor(ci);
   jpt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_1->SetMarkerColor(ci);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.7346147);
   jpt_1->SetBinContent(3,0.9593087);
   jpt_1->SetBinContent(4,3.511663);
   jpt_1->SetBinContent(5,2.576335);
   jpt_1->SetBinContent(6,1.7169);
   jpt_1->SetBinContent(7,1.170665);
   jpt_1->SetBinContent(8,0.2747434);
   jpt_1->SetBinContent(9,0.2862733);
   jpt_1->SetBinContent(10,0.1461942);
   jpt_1->SetBinContent(11,0.2247146);
   jpt_1->SetBinContent(12,0.2258642);
   jpt_1->SetBinContent(13,0.1007013);
   jpt_1->SetBinContent(14,0.1343361);
   jpt_1->SetBinError(2,0.7346147);
   jpt_1->SetBinError(3,0.3796595);
   jpt_1->SetBinError(4,1.153982);
   jpt_1->SetBinError(5,0.6109286);
   jpt_1->SetBinError(6,0.4868145);
   jpt_1->SetBinError(7,0.383614);
   jpt_1->SetBinError(8,0.1640592);
   jpt_1->SetBinError(9,0.1569587);
   jpt_1->SetBinError(10,0.1178464);
   jpt_1->SetBinError(11,0.1590048);
   jpt_1->SetBinError(12,0.1633124);
   jpt_1->SetBinError(13,0.1006256);
   jpt_1->SetBinError(14,0.1198444);
   jpt_1->SetEntries(88);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(3,0.1193958);
   jpt_1->SetBinContent(4,1.692814);
   jpt_1->SetBinContent(5,2.34005);
   jpt_1->SetBinContent(6,2.574077);
   jpt_1->SetBinContent(7,1.74805);
   jpt_1->SetBinContent(8,1.058069);
   jpt_1->SetBinContent(9,1.127569);
   jpt_1->SetBinContent(10,0.5517909);
   jpt_1->SetBinContent(11,0.8110462);
   jpt_1->SetBinContent(12,0.2687208);
   jpt_1->SetBinContent(13,0.2081415);
   jpt_1->SetBinContent(14,0.02938761);
   jpt_1->SetBinContent(16,0.09259171);
   jpt_1->SetBinContent(17,0.05940768);
   jpt_1->SetBinContent(19,0.02390038);
   jpt_1->SetBinContent(20,0.116272);
   jpt_1->SetBinContent(24,0.09079733);
   jpt_1->SetBinError(3,0.1193958);
   jpt_1->SetBinError(4,0.4443047);
   jpt_1->SetBinError(5,0.5950121);
   jpt_1->SetBinError(6,0.5897895);
   jpt_1->SetBinError(7,0.4474121);
   jpt_1->SetBinError(8,0.3453166);
   jpt_1->SetBinError(9,0.3420901);
   jpt_1->SetBinError(10,0.2586791);
   jpt_1->SetBinError(11,0.3000605);
   jpt_1->SetBinError(12,0.1840754);
   jpt_1->SetBinError(13,0.1506722);
   jpt_1->SetBinError(14,0.02511668);
   jpt_1->SetBinError(16,0.09259171);
   jpt_1->SetBinError(17,0.05940768);
   jpt_1->SetBinError(19,0.02390038);
   jpt_1->SetBinError(20,0.116272);
   jpt_1->SetBinError(24,0.09079733);
   jpt_1->SetEntries(143);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(3,0.07955913);
   jpt_1->SetBinContent(4,0.4227473);
   jpt_1->SetBinContent(5,0.6296837);
   jpt_1->SetBinContent(6,0.4869967);
   jpt_1->SetBinContent(7,0.5705108);
   jpt_1->SetBinContent(8,0.3499547);
   jpt_1->SetBinContent(9,0.1963258);
   jpt_1->SetBinContent(10,0.157598);
   jpt_1->SetBinContent(11,0.1033081);
   jpt_1->SetBinContent(12,0.07807016);
   jpt_1->SetBinContent(13,0.04220587);
   jpt_1->SetBinContent(14,0.03835661);
   jpt_1->SetBinContent(15,0.02926254);
   jpt_1->SetBinContent(16,0.006497758);
   jpt_1->SetBinContent(17,0.0002589318);
   jpt_1->SetBinContent(18,0.02103832);
   jpt_1->SetBinContent(19,0.006286487);
   jpt_1->SetBinContent(25,0.006042105);
   jpt_1->SetBinError(3,0.0238713);
   jpt_1->SetBinError(4,0.0557241);
   jpt_1->SetBinError(5,0.06810494);
   jpt_1->SetBinError(6,0.0596903);
   jpt_1->SetBinError(7,0.06462443);
   jpt_1->SetBinError(8,0.05040935);
   jpt_1->SetBinError(9,0.03608585);
   jpt_1->SetBinError(10,0.03499343);
   jpt_1->SetBinError(11,0.02642564);
   jpt_1->SetBinError(12,0.0210371);
   jpt_1->SetBinError(13,0.01598459);
   jpt_1->SetBinError(14,0.017051);
   jpt_1->SetBinError(15,0.01314854);
   jpt_1->SetBinError(16,0.006497758);
   jpt_1->SetBinError(17,0.0002589318);
   jpt_1->SetBinError(18,0.01107239);
   jpt_1->SetBinError(19,0.006286487);
   jpt_1->SetBinError(25,0.006042105);
   jpt_1->SetEntries(557);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   stack->Draw("hist");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,2);
   jpt_1->SetBinContent(3,23);
   jpt_1->SetBinContent(4,48);
   jpt_1->SetBinContent(5,78);
   jpt_1->SetBinContent(6,87);
   jpt_1->SetBinContent(7,58);
   jpt_1->SetBinContent(8,34);
   jpt_1->SetBinContent(9,31);
   jpt_1->SetBinContent(10,18);
   jpt_1->SetBinContent(11,11);
   jpt_1->SetBinContent(12,11);
   jpt_1->SetBinContent(13,4);
   jpt_1->SetBinContent(14,1);
   jpt_1->SetBinContent(15,3);
   jpt_1->SetBinContent(16,1);
   jpt_1->SetBinContent(17,1);
   jpt_1->SetBinContent(19,1);
   jpt_1->SetBinContent(20,1);
   jpt_1->SetBinContent(22,1);
   jpt_1->SetBinError(2,1.414214);
   jpt_1->SetBinError(3,4.795832);
   jpt_1->SetBinError(4,6.928203);
   jpt_1->SetBinError(5,8.831761);
   jpt_1->SetBinError(6,9.327379);
   jpt_1->SetBinError(7,7.615773);
   jpt_1->SetBinError(8,5.830952);
   jpt_1->SetBinError(9,5.567764);
   jpt_1->SetBinError(10,4.242641);
   jpt_1->SetBinError(11,3.316625);
   jpt_1->SetBinError(12,3.316625);
   jpt_1->SetBinError(13,2);
   jpt_1->SetBinError(14,1);
   jpt_1->SetBinError(15,1.732051);
   jpt_1->SetBinError(16,1);
   jpt_1->SetBinError(17,1);
   jpt_1->SetBinError(19,1);
   jpt_1->SetBinError(20,1);
   jpt_1->SetBinError(22,1);
   jpt_1->SetEntries(414);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(1.3);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEPE1");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(3,0.9875358);
   jpt_1->SetBinContent(4,0.1521269);
   jpt_1->SetBinContent(5,0.1280969);
   jpt_1->SetBinContent(6,0.3659172);
   jpt_1->SetBinError(3,0.5780119);
   jpt_1->SetBinError(4,0.1521269);
   jpt_1->SetBinError(5,0.1280969);
   jpt_1->SetBinError(6,0.3659172);
   jpt_1->SetEntries(6);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineStyle(2);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("jpt_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Dibosons","f");
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
   lower->Range(-202.5316,-0.653951,1063.291,2.070845);
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
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,1.42441);
   jpt_1->SetBinContent(3,1.413886);
   jpt_1->SetBinContent(4,0.8230999);
   jpt_1->SetBinContent(5,1.046493);
   jpt_1->SetBinContent(6,1.430454);
   jpt_1->SetBinContent(7,1.02817);
   jpt_1->SetBinContent(8,0.7769287);
   jpt_1->SetBinContent(9,0.9556119);
   jpt_1->SetBinContent(10,1.168922);
   jpt_1->SetBinContent(11,0.8001349);
   jpt_1->SetBinContent(12,1.307615);
   jpt_1->SetBinContent(13,1.646178);
   jpt_1->SetBinContent(14,0.2517833);
   jpt_1->SetBinContent(15,1.254449);
   jpt_1->SetBinContent(16,0.6496195);
   jpt_1->SetBinContent(17,0.6211194);
   jpt_1->SetBinContent(19,1.087782);
   jpt_1->SetBinContent(20,5.61272);
   jpt_1->SetBinContent(22,68.36263);
   jpt_1->SetBinError(2,1.402438);
   jpt_1->SetBinError(3,0.3837693);
   jpt_1->SetBinError(4,0.1433025);
   jpt_1->SetBinError(5,0.1469746);
   jpt_1->SetBinError(6,0.2013309);
   jpt_1->SetBinError(7,0.1694132);
   jpt_1->SetBinError(8,0.1571877);
   jpt_1->SetBinError(9,0.2101191);
   jpt_1->SetBinError(10,0.3401929);
   jpt_1->SetBinError(11,0.2846906);
   jpt_1->SetBinError(12,0.5269255);
   jpt_1->SetBinError(13,0.9422648);
   jpt_1->SetBinError(14,0.2687081);
   jpt_1->SetBinError(15,0.916511);
   jpt_1->SetBinError(16,0.7053903);
   jpt_1->SetBinError(17,0.7292166);
   jpt_1->SetBinError(19,1.278045);
   jpt_1->SetBinError(20,6.790972);
   jpt_1->SetBinError(22,94.19816);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(0.9412187);
   jpt_1->SetStats(0);
   jpt_1->SetFillStyle(0);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.1);
   jpt_1->GetXaxis()->SetTitleSize(0.12);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Data/MC");
   jpt_1->GetYaxis()->SetNdivisions(505);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.1);
   jpt_1->GetYaxis()->SetTitleSize(0.12);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(0.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
