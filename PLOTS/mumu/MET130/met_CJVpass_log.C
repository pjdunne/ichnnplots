{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:45:05 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.866012,1063.291,6.437079);
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
   stack->SetMaximum(372827.1);
   
   TH1F *met_stack_13 = new TH1F("met_stack_13","stack",100,0,1000);
   met_stack_13->SetBinContent(1,0.03886721);
   met_stack_13->SetBinContent(2,0.1859191);
   met_stack_13->SetBinContent(3,0.2030954);
   met_stack_13->SetBinContent(4,0.04069758);
   met_stack_13->SetBinContent(5,0.04896582);
   met_stack_13->SetBinContent(6,0.03723304);
   met_stack_13->SetBinContent(9,0.1088731);
   met_stack_13->SetBinContent(13,0.0720261);
   met_stack_13->SetBinContent(14,0.1100826);
   met_stack_13->SetBinContent(19,0.04053154);
   met_stack_13->SetBinError(1,0.03886721);
   met_stack_13->SetBinError(2,0.1116473);
   met_stack_13->SetBinError(3,0.1063415);
   met_stack_13->SetBinError(4,0.04069758);
   met_stack_13->SetBinError(5,0.04196586);
   met_stack_13->SetBinError(6,0.03723304);
   met_stack_13->SetBinError(9,0.1088731);
   met_stack_13->SetBinError(13,0.0720261);
   met_stack_13->SetBinError(14,0.1100826);
   met_stack_13->SetBinError(19,0.04053154);
   met_stack_13->SetMinimum(0.002089535);
   met_stack_13->SetMaximum(937399.7);
   met_stack_13->SetEntries(16);
   met_stack_13->SetStats(0);
   met_stack_13->SetFillColor(4);
   met_stack_13->SetLineColor(4);
   met_stack_13->SetLineWidth(2);
   met_stack_13->SetMarkerColor(4);
   met_stack_13->SetMarkerStyle(21);
   met_stack_13->SetMarkerSize(0.8);
   met_stack_13->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_13->GetXaxis()->SetLabelFont(42);
   met_stack_13->GetXaxis()->SetLabelOffset(0.007);
   met_stack_13->GetXaxis()->SetLabelSize(0);
   met_stack_13->GetXaxis()->SetTitleSize(0);
   met_stack_13->GetXaxis()->SetTickLength(0.02);
   met_stack_13->GetXaxis()->SetTitleOffset(0.9);
   met_stack_13->GetXaxis()->SetTitleFont(42);
   met_stack_13->GetYaxis()->SetTitle("Events");
   met_stack_13->GetYaxis()->SetLabelFont(42);
   met_stack_13->GetYaxis()->SetLabelOffset(0.007);
   met_stack_13->GetYaxis()->SetLabelSize(0.035);
   met_stack_13->GetYaxis()->SetTitleSize(0.045);
   met_stack_13->GetYaxis()->SetTickLength(0.02);
   met_stack_13->GetYaxis()->SetTitleOffset(1.55);
   met_stack_13->GetYaxis()->SetTitleFont(42);
   met_stack_13->GetZaxis()->SetLabelFont(42);
   met_stack_13->GetZaxis()->SetLabelOffset(0.007);
   met_stack_13->GetZaxis()->SetLabelSize(0.035);
   met_stack_13->GetZaxis()->SetTitleSize(0.045);
   met_stack_13->GetZaxis()->SetTickLength(0.02);
   met_stack_13->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_13);
   
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,0.03886721);
   met->SetBinContent(2,0.1859191);
   met->SetBinContent(3,0.2030954);
   met->SetBinContent(4,0.04069758);
   met->SetBinContent(5,0.04896582);
   met->SetBinContent(6,0.03723304);
   met->SetBinContent(9,0.1088731);
   met->SetBinContent(13,0.0720261);
   met->SetBinContent(14,0.1100826);
   met->SetBinContent(19,0.04053154);
   met->SetBinError(1,0.03886721);
   met->SetBinError(2,0.1116473);
   met->SetBinError(3,0.1063415);
   met->SetBinError(4,0.04069758);
   met->SetBinError(5,0.04196586);
   met->SetBinError(6,0.03723304);
   met->SetBinError(9,0.1088731);
   met->SetBinError(13,0.0720261);
   met->SetBinError(14,0.1100826);
   met->SetBinError(19,0.04053154);
   met->SetMinimum(0.01);
   met->SetMaximum(270000);
   met->SetEntries(16);
   met->SetStats(0);
   met->SetFillColor(4);
   met->SetLineColor(4);
   met->SetLineWidth(2);
   met->SetMarkerColor(4);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0);
   met->GetXaxis()->SetTitleSize(0);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Events");
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"HIST");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(6,0.7474956);
   met->SetBinContent(15,0.5210658);
   met->SetBinError(6,0.7474956);
   met->SetBinError(15,0.5210658);
   met->SetEntries(2);
   met->SetStats(0);
   met->SetFillColor(5);
   met->SetLineColor(5);
   met->SetLineWidth(2);
   met->SetMarkerColor(5);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);
   met->SetFillColor(6);
   met->SetLineColor(6);
   met->SetLineWidth(2);
   met->SetMarkerColor(6);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met->SetLineColor(ci);
   met->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met->SetMarkerColor(ci);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,5.234997);
   met->SetBinContent(2,17.52503);
   met->SetBinContent(3,14.63807);
   met->SetBinContent(4,9.951754);
   met->SetBinContent(5,5.227242);
   met->SetBinContent(6,3.551621);
   met->SetBinContent(7,1.301167);
   met->SetBinContent(8,0.931302);
   met->SetBinContent(9,0.1912332);
   met->SetBinContent(10,0.08004747);
   met->SetBinContent(12,0.2492724);
   met->SetBinContent(16,0.296572);
   met->SetBinError(1,0.8828904);
   met->SetBinError(2,1.621746);
   met->SetBinError(3,1.392105);
   met->SetBinError(4,1.160799);
   met->SetBinError(5,0.8644252);
   met->SetBinError(6,0.689486);
   met->SetBinError(7,0.3571062);
   met->SetBinError(8,0.3952133);
   met->SetBinError(9,0.1353784);
   met->SetBinError(10,0.08004747);
   met->SetBinError(12,0.2492724);
   met->SetBinError(16,0.2174596);
   met->SetEntries(533);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,3.181875);
   met->SetBinContent(2,7.144192);
   met->SetBinContent(3,7.007609);
   met->SetBinContent(4,4.998765);
   met->SetBinContent(5,2.885251);
   met->SetBinContent(6,1.23576);
   met->SetBinContent(7,0.6855738);
   met->SetBinContent(8,0.3139019);
   met->SetBinContent(9,0.1089937);
   met->SetBinContent(10,0.09476282);
   met->SetBinContent(11,0.07207665);
   met->SetBinContent(12,0.02191235);
   met->SetBinContent(13,0.0374901);
   met->SetBinContent(14,4.815876);
   met->SetBinContent(15,5.087201);
   met->SetBinContent(16,4.693796);
   met->SetBinContent(17,4.257821);
   met->SetBinContent(18,3.92619);
   met->SetBinContent(19,3.456995);
   met->SetBinContent(20,2.708953);
   met->SetBinContent(21,2.908059);
   met->SetBinContent(22,2.496915);
   met->SetBinContent(23,2.252441);
   met->SetBinContent(24,2.052256);
   met->SetBinContent(25,1.600698);
   met->SetBinContent(26,1.696146);
   met->SetBinContent(27,1.470515);
   met->SetBinContent(28,0.9570263);
   met->SetBinContent(29,0.9284405);
   met->SetBinContent(30,0.8326901);
   met->SetBinContent(31,0.7348664);
   met->SetBinContent(32,0.4978403);
   met->SetBinContent(33,0.4747739);
   met->SetBinContent(34,0.380279);
   met->SetBinContent(35,0.4376172);
   met->SetBinContent(36,0.3434808);
   met->SetBinContent(37,0.3008641);
   met->SetBinContent(38,0.3359362);
   met->SetBinContent(39,0.2577325);
   met->SetBinContent(40,0.1558352);
   met->SetBinContent(41,0.1384942);
   met->SetBinContent(42,0.08698126);
   met->SetBinContent(43,0.1177188);
   met->SetBinContent(44,0.1073185);
   met->SetBinContent(45,0.09419134);
   met->SetBinContent(46,0.102813);
   met->SetBinContent(47,0.0833221);
   met->SetBinContent(48,0.02262921);
   met->SetBinContent(49,0.03820845);
   met->SetBinContent(50,0.03066522);
   met->SetBinContent(51,0.03370444);
   met->SetBinContent(53,0.04679125);
   met->SetBinContent(55,0.01313781);
   met->SetBinContent(58,0.01337302);
   met->SetBinContent(59,0.02764606);
   met->SetBinContent(62,0.007107997);
   met->SetBinContent(64,0.01295078);
   met->SetBinContent(65,0.009689085);
   met->SetBinError(1,0.1461301);
   met->SetBinError(2,0.218805);
   met->SetBinError(3,0.2137693);
   met->SetBinError(4,0.1805007);
   met->SetBinError(5,0.1371865);
   met->SetBinError(6,0.08768173);
   met->SetBinError(7,0.06510812);
   met->SetBinError(8,0.04415548);
   met->SetBinError(9,0.0267568);
   met->SetBinError(10,0.02451684);
   met->SetBinError(11,0.02272194);
   met->SetBinError(12,0.01103929);
   met->SetBinError(13,0.01459082);
   met->SetBinError(14,0.2421385);
   met->SetBinError(15,0.2564555);
   met->SetBinError(16,0.2447048);
   met->SetBinError(17,0.2363369);
   met->SetBinError(18,0.2295102);
   met->SetBinError(19,0.2159707);
   met->SetBinError(20,0.1879991);
   met->SetBinError(21,0.1964938);
   met->SetBinError(22,0.1801044);
   met->SetBinError(23,0.1731343);
   met->SetBinError(24,0.1654722);
   met->SetBinError(25,0.147564);
   met->SetBinError(26,0.1512371);
   met->SetBinError(27,0.1398012);
   met->SetBinError(28,0.1128075);
   met->SetBinError(29,0.1094046);
   met->SetBinError(30,0.1045811);
   met->SetBinError(31,0.09962316);
   met->SetBinError(32,0.08034604);
   met->SetBinError(33,0.0767745);
   met->SetBinError(34,0.06899689);
   met->SetBinError(35,0.07497378);
   met->SetBinError(36,0.0660208);
   met->SetBinError(37,0.06388881);
   met->SetBinError(38,0.0654919);
   met->SetBinError(39,0.05625478);
   met->SetBinError(40,0.04741933);
   met->SetBinError(41,0.04429777);
   met->SetBinError(42,0.03597648);
   met->SetBinError(43,0.04157765);
   met->SetBinError(44,0.03698793);
   met->SetBinError(45,0.03354978);
   met->SetBinError(46,0.03697746);
   met->SetBinError(47,0.03452728);
   met->SetBinError(48,0.02262921);
   met->SetBinError(49,0.02204794);
   met->SetBinError(50,0.0189102);
   met->SetBinError(51,0.01964829);
   met->SetBinError(53,0.02779731);
   met->SetBinError(55,0.01313781);
   met->SetBinError(58,0.01337302);
   met->SetBinError(59,0.01971659);
   met->SetBinError(62,0.007107997);
   met->SetBinError(64,0.01295078);
   met->SetBinError(65,0.009689085);
   met->SetEntries(9409);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   stack->Draw("hist");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,8);
   met->SetBinContent(2,18);
   met->SetBinContent(3,14);
   met->SetBinContent(4,12);
   met->SetBinContent(5,6);
   met->SetBinContent(6,3);
   met->SetBinContent(13,1);
   met->SetBinContent(14,1);
   met->SetBinContent(17,1);
   met->SetBinError(1,2.828427);
   met->SetBinError(2,4.242641);
   met->SetBinError(3,3.741657);
   met->SetBinError(4,3.464102);
   met->SetBinError(5,2.44949);
   met->SetBinError(6,1.732051);
   met->SetBinError(13,1);
   met->SetBinError(14,1);
   met->SetBinError(17,1);
   met->SetEntries(64);
   met->SetStats(0);
   met->SetFillColor(1);
   met->SetFillStyle(0);
   met->SetLineWidth(3);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(1.3);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("SAMEPE1");
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetStats(0);
   met->SetFillColor(1);
   met->SetFillStyle(0);
   met->SetLineStyle(2);
   met->SetLineWidth(3);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVpass");
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
   TLegendEntry *entry=leg->AddEntry("met","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","EWK W+jets","f");

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
   entry=leg->AddEntry("met","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","Dibosons","f");
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
   
   TH1F *met = new TH1F("met","met",100,0,1000);
   met->SetBinContent(1,0.9504719);
   met->SetBinContent(2,0.7296542);
   met->SetBinContent(3,0.6467803);
   met->SetBinContent(4,0.8026478);
   met->SetBinContent(5,0.7396001);
   met->SetBinContent(6,0.5420175);
   met->SetBinContent(13,26.67371);
   met->SetBinContent(14,0.2076466);
   met->SetBinContent(17,0.2348619);
   met->SetBinError(1,0.3509088);
   met->SetBinError(2,0.1786624);
   met->SetBinError(3,0.1779084);
   met->SetBinError(4,0.2401346);
   met->SetBinError(5,0.3123062);
   met->SetBinError(6,0.3285097);
   met->SetBinError(13,28.62264);
   met->SetBinError(14,0.2079089);
   met->SetBinError(17,0.2352234);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(1.212456);
   met->SetStats(0);
   met->SetFillStyle(0);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.1);
   met->GetXaxis()->SetTitleSize(0.12);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Data/MC");
   met->GetYaxis()->SetNdivisions(505);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.1);
   met->GetYaxis()->SetTitleSize(0.12);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(0.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
