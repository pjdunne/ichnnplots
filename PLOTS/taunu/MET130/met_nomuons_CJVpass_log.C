{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:56:58 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.884058,1063.291,6.7271);
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
   stack->SetMaximum(687143.4);
   
   TH1F *met_nomuons_stack_13 = new TH1F("met_nomuons_stack_13","stack",50,0,1000);
   met_nomuons_stack_13->SetBinContent(7,2.04692);
   met_nomuons_stack_13->SetBinContent(8,0.1130864);
   met_nomuons_stack_13->SetBinContent(9,0.08594465);
   met_nomuons_stack_13->SetBinContent(10,0.4580717);
   met_nomuons_stack_13->SetBinContent(12,2.358177);
   met_nomuons_stack_13->SetBinContent(13,0.1287503);
   met_nomuons_stack_13->SetBinContent(17,0.1148367);
   met_nomuons_stack_13->SetBinError(7,2.019303);
   met_nomuons_stack_13->SetBinError(8,0.07992973);
   met_nomuons_stack_13->SetBinError(9,0.08289729);
   met_nomuons_stack_13->SetBinError(10,0.2535972);
   met_nomuons_stack_13->SetBinError(12,2.248562);
   met_nomuons_stack_13->SetBinError(13,0.1287503);
   met_nomuons_stack_13->SetBinError(17,0.1148367);
   met_nomuons_stack_13->SetMinimum(0.00203313);
   met_nomuons_stack_13->SetMaximum(1764179);
   met_nomuons_stack_13->SetEntries(15);
   met_nomuons_stack_13->SetStats(0);
   met_nomuons_stack_13->SetFillColor(4);
   met_nomuons_stack_13->SetLineColor(4);
   met_nomuons_stack_13->SetLineWidth(2);
   met_nomuons_stack_13->SetMarkerColor(4);
   met_nomuons_stack_13->SetMarkerStyle(21);
   met_nomuons_stack_13->SetMarkerSize(0.8);
   met_nomuons_stack_13->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons_stack_13->GetXaxis()->SetLabelFont(42);
   met_nomuons_stack_13->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_13->GetXaxis()->SetLabelSize(0);
   met_nomuons_stack_13->GetXaxis()->SetTitleSize(0);
   met_nomuons_stack_13->GetXaxis()->SetTickLength(0.02);
   met_nomuons_stack_13->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons_stack_13->GetXaxis()->SetTitleFont(42);
   met_nomuons_stack_13->GetYaxis()->SetTitle("Events");
   met_nomuons_stack_13->GetYaxis()->SetLabelFont(42);
   met_nomuons_stack_13->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_13->GetYaxis()->SetLabelSize(0.035);
   met_nomuons_stack_13->GetYaxis()->SetTitleSize(0.045);
   met_nomuons_stack_13->GetYaxis()->SetTickLength(0.02);
   met_nomuons_stack_13->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons_stack_13->GetYaxis()->SetTitleFont(42);
   met_nomuons_stack_13->GetZaxis()->SetLabelFont(42);
   met_nomuons_stack_13->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_13->GetZaxis()->SetLabelSize(0.035);
   met_nomuons_stack_13->GetZaxis()->SetTitleSize(0.045);
   met_nomuons_stack_13->GetZaxis()->SetTickLength(0.02);
   met_nomuons_stack_13->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_nomuons_stack_13);
   
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,2.04692);
   met_nomuons->SetBinContent(8,0.1130864);
   met_nomuons->SetBinContent(9,0.08594465);
   met_nomuons->SetBinContent(10,0.4580717);
   met_nomuons->SetBinContent(12,2.358177);
   met_nomuons->SetBinContent(13,0.1287503);
   met_nomuons->SetBinContent(17,0.1148367);
   met_nomuons->SetBinError(7,2.019303);
   met_nomuons->SetBinError(8,0.07992973);
   met_nomuons->SetBinError(9,0.08289729);
   met_nomuons->SetBinError(10,0.2535972);
   met_nomuons->SetBinError(12,2.248562);
   met_nomuons->SetBinError(13,0.1287503);
   met_nomuons->SetBinError(17,0.1148367);
   met_nomuons->SetMinimum(0.01);
   met_nomuons->SetMaximum(750000);
   met_nomuons->SetEntries(15);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(4);
   met_nomuons->SetLineColor(4);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(4);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0);
   met_nomuons->GetXaxis()->SetTitleSize(0);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetTitle("Events");
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"HIST");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,3.803033);
   met_nomuons->SetBinContent(8,6.48787);
   met_nomuons->SetBinContent(9,3.37389);
   met_nomuons->SetBinContent(10,2.454888);
   met_nomuons->SetBinContent(11,3.617021);
   met_nomuons->SetBinContent(12,2.857487);
   met_nomuons->SetBinContent(13,1.647278);
   met_nomuons->SetBinContent(14,0.811636);
   met_nomuons->SetBinContent(16,0.3253647);
   met_nomuons->SetBinContent(20,0.2285386);
   met_nomuons->SetBinError(7,1.684573);
   met_nomuons->SetBinError(8,2.082023);
   met_nomuons->SetBinError(9,1.52722);
   met_nomuons->SetBinError(10,1.195517);
   met_nomuons->SetBinError(11,1.660551);
   met_nomuons->SetBinError(12,1.438148);
   met_nomuons->SetBinError(13,0.7745424);
   met_nomuons->SetBinError(14,0.811636);
   met_nomuons->SetBinError(16,0.3253647);
   met_nomuons->SetBinError(20,0.2285386);
   met_nomuons->SetEntries(47);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(5);
   met_nomuons->SetLineColor(5);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(5);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,13.37566);
   met_nomuons->SetBinContent(8,26.21038);
   met_nomuons->SetBinContent(9,15.12477);
   met_nomuons->SetBinContent(10,8.474808);
   met_nomuons->SetBinContent(11,7.216643);
   met_nomuons->SetBinContent(12,9.269858);
   met_nomuons->SetBinContent(13,2.261991);
   met_nomuons->SetBinContent(14,5.264005);
   met_nomuons->SetBinContent(15,2.550257);
   met_nomuons->SetBinContent(16,0.7591474);
   met_nomuons->SetBinContent(17,1.529297);
   met_nomuons->SetBinContent(18,0.5957716);
   met_nomuons->SetBinContent(19,0.2622543);
   met_nomuons->SetBinContent(20,0.8052918);
   met_nomuons->SetBinContent(23,0.4269495);
   met_nomuons->SetBinError(7,3.100106);
   met_nomuons->SetBinError(8,4.25925);
   met_nomuons->SetBinError(9,3.29295);
   met_nomuons->SetBinError(10,2.381749);
   met_nomuons->SetBinError(11,2.078587);
   met_nomuons->SetBinError(12,2.932145);
   met_nomuons->SetBinError(13,1.180019);
   met_nomuons->SetBinError(14,1.894644);
   met_nomuons->SetBinError(15,1.298904);
   met_nomuons->SetBinError(16,0.5379793);
   met_nomuons->SetBinError(17,0.9062808);
   met_nomuons->SetBinError(18,0.5957715);
   met_nomuons->SetBinError(19,0.2622543);
   met_nomuons->SetBinError(20,0.5695587);
   met_nomuons->SetBinError(23,0.4269495);
   met_nomuons->SetEntries(189);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(6);
   met_nomuons->SetLineColor(6);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(6);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(6,0.02004131);
   met_nomuons->SetBinContent(7,5.868807);
   met_nomuons->SetBinContent(8,9.18732);
   met_nomuons->SetBinContent(9,7.141038);
   met_nomuons->SetBinContent(10,5.0756);
   met_nomuons->SetBinContent(11,3.806445);
   met_nomuons->SetBinContent(12,2.788968);
   met_nomuons->SetBinContent(13,2.386831);
   met_nomuons->SetBinContent(14,1.535804);
   met_nomuons->SetBinContent(15,0.8101872);
   met_nomuons->SetBinContent(16,0.4431272);
   met_nomuons->SetBinContent(17,0.4897784);
   met_nomuons->SetBinContent(18,0.4068956);
   met_nomuons->SetBinContent(19,0.2816595);
   met_nomuons->SetBinContent(20,0.3223533);
   met_nomuons->SetBinContent(21,0.1270107);
   met_nomuons->SetBinContent(22,0.0577902);
   met_nomuons->SetBinContent(23,0.01808601);
   met_nomuons->SetBinContent(24,0.1928422);
   met_nomuons->SetBinContent(25,0.02822141);
   met_nomuons->SetBinContent(28,0.02571436);
   met_nomuons->SetBinContent(29,0.02075988);
   met_nomuons->SetBinContent(34,0.02021044);
   met_nomuons->SetBinError(6,0.02004131);
   met_nomuons->SetBinError(7,0.3332072);
   met_nomuons->SetBinError(8,0.4305166);
   met_nomuons->SetBinError(9,0.3869868);
   met_nomuons->SetBinError(10,0.3248567);
   met_nomuons->SetBinError(11,0.280892);
   met_nomuons->SetBinError(12,0.2429618);
   met_nomuons->SetBinError(13,0.2206715);
   met_nomuons->SetBinError(14,0.1761903);
   met_nomuons->SetBinError(15,0.131181);
   met_nomuons->SetBinError(16,0.09557961);
   met_nomuons->SetBinError(17,0.09566787);
   met_nomuons->SetBinError(18,0.08987906);
   met_nomuons->SetBinError(19,0.07695658);
   met_nomuons->SetBinError(20,0.08129037);
   met_nomuons->SetBinError(21,0.05006303);
   met_nomuons->SetBinError(22,0.03122948);
   met_nomuons->SetBinError(23,0.01808601);
   met_nomuons->SetBinError(24,0.06437123);
   met_nomuons->SetBinError(25,0.02822141);
   met_nomuons->SetBinError(28,0.02571436);
   met_nomuons->SetBinError(29,0.02075988);
   met_nomuons->SetBinError(34,0.02021045);
   met_nomuons->SetEntries(2326);
   met_nomuons->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met_nomuons->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met_nomuons->SetLineColor(ci);
   met_nomuons->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met_nomuons->SetMarkerColor(ci);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.8383085);
   met_nomuons->SetBinContent(8,1.705259);
   met_nomuons->SetBinContent(9,0.8412673);
   met_nomuons->SetBinContent(10,1.393777);
   met_nomuons->SetBinContent(11,0.181549);
   met_nomuons->SetBinContent(12,0.1178789);
   met_nomuons->SetBinContent(14,0.3786782);
   met_nomuons->SetBinContent(21,0.1106946);
   met_nomuons->SetBinError(7,0.3320283);
   met_nomuons->SetBinError(8,0.8280644);
   met_nomuons->SetBinError(9,0.3560516);
   met_nomuons->SetBinError(10,0.7927884);
   met_nomuons->SetBinError(11,0.181475);
   met_nomuons->SetBinError(12,0.1178789);
   met_nomuons->SetBinError(14,0.267773);
   met_nomuons->SetBinError(21,0.1106946);
   met_nomuons->SetEntries(34);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.9066061);
   met_nomuons->SetBinContent(8,1.644819);
   met_nomuons->SetBinContent(9,0.7304143);
   met_nomuons->SetBinContent(10,0.829496);
   met_nomuons->SetBinContent(11,0.1885207);
   met_nomuons->SetBinContent(12,0.2651309);
   met_nomuons->SetBinContent(13,0.09030132);
   met_nomuons->SetBinContent(14,0.08979817);
   met_nomuons->SetBinContent(15,0.04757737);
   met_nomuons->SetBinError(7,0.3129696);
   met_nomuons->SetBinError(8,0.472519);
   met_nomuons->SetBinError(9,0.2917794);
   met_nomuons->SetBinError(10,0.2969191);
   met_nomuons->SetBinError(11,0.1202778);
   met_nomuons->SetBinError(12,0.1787294);
   met_nomuons->SetBinError(13,0.09030132);
   met_nomuons->SetBinError(14,0.08979817);
   met_nomuons->SetBinError(15,0.04757737);
   met_nomuons->SetEntries(52);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(6,0.003308099);
   met_nomuons->SetBinContent(7,0.3648907);
   met_nomuons->SetBinContent(8,0.4608212);
   met_nomuons->SetBinContent(9,0.2433474);
   met_nomuons->SetBinContent(10,0.2089604);
   met_nomuons->SetBinContent(11,0.1028575);
   met_nomuons->SetBinContent(12,0.0727826);
   met_nomuons->SetBinContent(13,0.05592573);
   met_nomuons->SetBinContent(14,0.06643098);
   met_nomuons->SetBinContent(15,0.0173073);
   met_nomuons->SetBinContent(16,0.01164037);
   met_nomuons->SetBinContent(17,0.009856352);
   met_nomuons->SetBinContent(20,0.006107889);
   met_nomuons->SetBinContent(23,0.01246771);
   met_nomuons->SetBinError(6,0.003308099);
   met_nomuons->SetBinError(7,0.05025342);
   met_nomuons->SetBinError(8,0.05704576);
   met_nomuons->SetBinError(9,0.04267228);
   met_nomuons->SetBinError(10,0.04100422);
   met_nomuons->SetBinError(11,0.03031774);
   met_nomuons->SetBinError(12,0.02502273);
   met_nomuons->SetBinError(13,0.01857605);
   met_nomuons->SetBinError(14,0.02326079);
   met_nomuons->SetBinError(15,0.01012708);
   met_nomuons->SetBinError(16,0.01164037);
   met_nomuons->SetBinError(17,0.007314439);
   met_nomuons->SetBinError(20,0.006107889);
   met_nomuons->SetBinError(23,0.01246771);
   met_nomuons->SetEntries(269);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   stack->Draw("hist");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,50);
   met_nomuons->SetBinContent(8,46);
   met_nomuons->SetBinContent(9,30);
   met_nomuons->SetBinContent(10,13);
   met_nomuons->SetBinContent(11,12);
   met_nomuons->SetBinContent(12,6);
   met_nomuons->SetBinContent(13,7);
   met_nomuons->SetBinContent(14,5);
   met_nomuons->SetBinContent(15,1);
   met_nomuons->SetBinError(7,7.071068);
   met_nomuons->SetBinError(8,6.78233);
   met_nomuons->SetBinError(9,5.477226);
   met_nomuons->SetBinError(10,3.605551);
   met_nomuons->SetBinError(11,3.464102);
   met_nomuons->SetBinError(12,2.44949);
   met_nomuons->SetBinError(13,2.645751);
   met_nomuons->SetBinError(14,2.236068);
   met_nomuons->SetBinError(15,1);
   met_nomuons->SetEntries(170);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(1);
   met_nomuons->SetFillStyle(0);
   met_nomuons->SetLineWidth(3);
   met_nomuons->SetMarkerStyle(20);
   met_nomuons->SetMarkerSize(1.3);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   met_nomuons->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVpass");
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
   TLegendEntry *entry=leg->AddEntry("met_nomuons","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met_nomuons","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","EWK W+jets","f");

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
   entry=leg->AddEntry("met_nomuons","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","Dibosons","f");
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
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,1.987494);
   met_nomuons->SetBinContent(8,1.006642);
   met_nomuons->SetBinContent(9,1.092708);
   met_nomuons->SetBinContent(10,0.7050837);
   met_nomuons->SetBinContent(11,0.7940165);
   met_nomuons->SetBinContent(12,0.3903174);
   met_nomuons->SetBinContent(13,1.086564);
   met_nomuons->SetBinContent(14,0.6137717);
   met_nomuons->SetBinContent(15,0.2919427);
   met_nomuons->SetBinError(7,0.3983801);
   met_nomuons->SetBinError(8,0.1829439);
   met_nomuons->SetBinError(9,0.2474828);
   met_nomuons->SetBinError(10,0.2232327);
   met_nomuons->SetBinError(11,0.2691225);
   met_nomuons->SetBinError(12,0.1798212);
   met_nomuons->SetBinError(13,0.4764055);
   met_nomuons->SetBinError(14,0.3163729);
   met_nomuons->SetBinError(15,0.3124558);
   met_nomuons->SetMinimum(0);
   met_nomuons->SetMaximum(2);
   met_nomuons->SetEntries(76.25501);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillStyle(0);
   met_nomuons->SetMarkerStyle(20);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.1);
   met_nomuons->GetXaxis()->SetTitleSize(0.12);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetTitle("Data/MC");
   met_nomuons->GetYaxis()->SetNdivisions(505);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.1);
   met_nomuons->GetYaxis()->SetTitleSize(0.12);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(0.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   met_nomuons->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
