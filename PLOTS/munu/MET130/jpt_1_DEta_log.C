{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:16 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.989754,1063.291,8.529984);
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
   stack->SetMaximum(3.10344e+07);
   
   TH1F *jpt_1_stack_5 = new TH1F("jpt_1_stack_5","stack",25,0,1000);
   jpt_1_stack_5->SetBinContent(2,10.32475);
   jpt_1_stack_5->SetBinContent(3,50.48593);
   jpt_1_stack_5->SetBinContent(4,46.62344);
   jpt_1_stack_5->SetBinContent(5,39.55527);
   jpt_1_stack_5->SetBinContent(6,13.63717);
   jpt_1_stack_5->SetBinContent(7,15.33736);
   jpt_1_stack_5->SetBinContent(8,9.160917);
   jpt_1_stack_5->SetBinContent(9,4.529193);
   jpt_1_stack_5->SetBinContent(10,5.262804);
   jpt_1_stack_5->SetBinContent(11,0.148691);
   jpt_1_stack_5->SetBinContent(14,0.06882724);
   jpt_1_stack_5->SetBinContent(24,0.1572778);
   jpt_1_stack_5->SetBinError(2,2.626332);
   jpt_1_stack_5->SetBinError(3,7.816255);
   jpt_1_stack_5->SetBinError(4,7.938136);
   jpt_1_stack_5->SetBinError(5,7.643385);
   jpt_1_stack_5->SetBinError(6,4.007864);
   jpt_1_stack_5->SetBinError(7,5.990293);
   jpt_1_stack_5->SetBinError(8,4.020093);
   jpt_1_stack_5->SetBinError(9,3.016945);
   jpt_1_stack_5->SetBinError(10,3.636014);
   jpt_1_stack_5->SetBinError(11,0.148691);
   jpt_1_stack_5->SetBinError(14,0.06882725);
   jpt_1_stack_5->SetBinError(24,0.1572778);
   jpt_1_stack_5->SetMinimum(0.001740365);
   jpt_1_stack_5->SetMaximum(8.994914e+07);
   jpt_1_stack_5->SetEntries(812);
   jpt_1_stack_5->SetStats(0);
   jpt_1_stack_5->SetFillColor(4);
   jpt_1_stack_5->SetLineColor(4);
   jpt_1_stack_5->SetLineWidth(2);
   jpt_1_stack_5->SetMarkerColor(4);
   jpt_1_stack_5->SetMarkerStyle(21);
   jpt_1_stack_5->SetMarkerSize(0.8);
   jpt_1_stack_5->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_5->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_5->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_5->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_5->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_5->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_5->GetYaxis()->SetTitle("Events");
   jpt_1_stack_5->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_5->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_5->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_5->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_5->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_5->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_5->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_5->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_5->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_5);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,10.32475);
   jpt_1->SetBinContent(3,50.48593);
   jpt_1->SetBinContent(4,46.62344);
   jpt_1->SetBinContent(5,39.55527);
   jpt_1->SetBinContent(6,13.63717);
   jpt_1->SetBinContent(7,15.33736);
   jpt_1->SetBinContent(8,9.160917);
   jpt_1->SetBinContent(9,4.529193);
   jpt_1->SetBinContent(10,5.262804);
   jpt_1->SetBinContent(11,0.148691);
   jpt_1->SetBinContent(14,0.06882724);
   jpt_1->SetBinContent(24,0.1572778);
   jpt_1->SetBinError(2,2.626332);
   jpt_1->SetBinError(3,7.816255);
   jpt_1->SetBinError(4,7.938136);
   jpt_1->SetBinError(5,7.643385);
   jpt_1->SetBinError(6,4.007864);
   jpt_1->SetBinError(7,5.990293);
   jpt_1->SetBinError(8,4.020093);
   jpt_1->SetBinError(9,3.016945);
   jpt_1->SetBinError(10,3.636014);
   jpt_1->SetBinError(11,0.148691);
   jpt_1->SetBinError(14,0.06882725);
   jpt_1->SetBinError(24,0.1572778);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(2.7975e+07);
   jpt_1->SetEntries(812);
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
   jpt_1->SetBinContent(2,50.54635);
   jpt_1->SetBinContent(3,234.9041);
   jpt_1->SetBinContent(4,234.0945);
   jpt_1->SetBinContent(5,135.0234);
   jpt_1->SetBinContent(6,61.2688);
   jpt_1->SetBinContent(7,39.33055);
   jpt_1->SetBinContent(8,9.678383);
   jpt_1->SetBinContent(9,5.26152);
   jpt_1->SetBinContent(10,3.175053);
   jpt_1->SetBinContent(11,1.220279);
   jpt_1->SetBinContent(14,0.1724105);
   jpt_1->SetBinError(2,4.398747);
   jpt_1->SetBinError(3,10.87222);
   jpt_1->SetBinError(4,11.53517);
   jpt_1->SetBinError(5,8.975009);
   jpt_1->SetBinError(6,6.134689);
   jpt_1->SetBinError(7,5.077935);
   jpt_1->SetBinError(8,2.310546);
   jpt_1->SetBinError(9,1.997873);
   jpt_1->SetBinError(10,1.508157);
   jpt_1->SetBinError(11,0.8827628);
   jpt_1->SetBinError(14,0.1724105);
   jpt_1->SetEntries(2229);
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
   jpt_1->SetBinContent(2,318.3598);
   jpt_1->SetBinContent(3,1362.928);
   jpt_1->SetBinContent(4,1349.76);
   jpt_1->SetBinContent(5,822.0406);
   jpt_1->SetBinContent(6,448.6663);
   jpt_1->SetBinContent(7,183.118);
   jpt_1->SetBinContent(8,103.8021);
   jpt_1->SetBinContent(9,43.69755);
   jpt_1->SetBinContent(10,23.16485);
   jpt_1->SetBinContent(11,7.029077);
   jpt_1->SetBinContent(12,3.13625);
   jpt_1->SetBinContent(13,2.250831);
   jpt_1->SetBinContent(14,2.835339);
   jpt_1->SetBinContent(15,2.007565);
   jpt_1->SetBinContent(16,0.9012817);
   jpt_1->SetBinContent(17,1.364793);
   jpt_1->SetBinContent(20,0.4483769);
   jpt_1->SetBinError(2,12.20588);
   jpt_1->SetBinError(3,27.74877);
   jpt_1->SetBinError(4,29.19249);
   jpt_1->SetBinError(5,23.9632);
   jpt_1->SetBinError(6,18.43579);
   jpt_1->SetBinError(7,11.48112);
   jpt_1->SetBinError(8,8.667439);
   jpt_1->SetBinError(9,5.432453);
   jpt_1->SetBinError(10,3.959869);
   jpt_1->SetBinError(11,2.179481);
   jpt_1->SetBinError(12,1.307925);
   jpt_1->SetBinError(13,1.347377);
   jpt_1->SetBinError(14,1.300567);
   jpt_1->SetBinError(15,1.026576);
   jpt_1->SetBinError(16,0.9012817);
   jpt_1->SetBinError(17,0.7937643);
   jpt_1->SetBinError(20,0.4483769);
   jpt_1->SetEntries(12858);
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
   jpt_1->SetBinContent(2,27.04802);
   jpt_1->SetBinContent(3,205.415);
   jpt_1->SetBinContent(4,307.8327);
   jpt_1->SetBinContent(5,251.8044);
   jpt_1->SetBinContent(6,160.5804);
   jpt_1->SetBinContent(7,89.52159);
   jpt_1->SetBinContent(8,46.33879);
   jpt_1->SetBinContent(9,23.34718);
   jpt_1->SetBinContent(10,12.53791);
   jpt_1->SetBinContent(11,6.09409);
   jpt_1->SetBinContent(12,3.783888);
   jpt_1->SetBinContent(13,2.097035);
   jpt_1->SetBinContent(14,1.027986);
   jpt_1->SetBinContent(15,0.768267);
   jpt_1->SetBinContent(16,0.4146866);
   jpt_1->SetBinContent(17,0.2834358);
   jpt_1->SetBinContent(18,0.1504761);
   jpt_1->SetBinContent(19,0.07913664);
   jpt_1->SetBinContent(20,0.01814414);
   jpt_1->SetBinContent(21,0.01973487);
   jpt_1->SetBinContent(22,0.0202262);
   jpt_1->SetBinContent(24,0.02100997);
   jpt_1->SetBinContent(26,0.06566044);
   jpt_1->SetBinError(2,0.5971666);
   jpt_1->SetBinError(3,1.767136);
   jpt_1->SetBinError(4,2.252138);
   jpt_1->SetBinError(5,2.105153);
   jpt_1->SetBinError(6,1.746769);
   jpt_1->SetBinError(7,1.333689);
   jpt_1->SetBinError(8,0.9725244);
   jpt_1->SetBinError(9,0.6906822);
   jpt_1->SetBinError(10,0.5076341);
   jpt_1->SetBinError(11,0.3515125);
   jpt_1->SetBinError(12,0.2793167);
   jpt_1->SetBinError(13,0.2065356);
   jpt_1->SetBinError(14,0.1502043);
   jpt_1->SetBinError(15,0.1291373);
   jpt_1->SetBinError(16,0.0916738);
   jpt_1->SetBinError(17,0.07493648);
   jpt_1->SetBinError(18,0.05428965);
   jpt_1->SetBinError(19,0.03675707);
   jpt_1->SetBinError(20,0.01814414);
   jpt_1->SetBinError(21,0.01973486);
   jpt_1->SetBinError(22,0.0202262);
   jpt_1->SetBinError(24,0.02100997);
   jpt_1->SetBinError(26,0.03820336);
   jpt_1->SetEntries(83601);
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
   jpt_1->SetBinContent(2,0.05156378);
   jpt_1->SetBinError(2,0.05156378);
   jpt_1->SetEntries(1);
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
   jpt_1->SetBinContent(2,23.47799);
   jpt_1->SetBinContent(3,107.8619);
   jpt_1->SetBinContent(4,106.5256);
   jpt_1->SetBinContent(5,54.28903);
   jpt_1->SetBinContent(6,24.11891);
   jpt_1->SetBinContent(7,10.8314);
   jpt_1->SetBinContent(8,4.224703);
   jpt_1->SetBinContent(9,2.035794);
   jpt_1->SetBinContent(10,0.6414055);
   jpt_1->SetBinContent(11,0.6677995);
   jpt_1->SetBinContent(12,0.2067029);
   jpt_1->SetBinContent(13,0.1814182);
   jpt_1->SetBinError(2,1.280843);
   jpt_1->SetBinError(3,3.203074);
   jpt_1->SetBinError(4,3.252126);
   jpt_1->SetBinError(5,2.312507);
   jpt_1->SetBinError(6,1.616696);
   jpt_1->SetBinError(7,1.108935);
   jpt_1->SetBinError(8,0.6844521);
   jpt_1->SetBinError(9,0.6767274);
   jpt_1->SetBinError(10,0.2327042);
   jpt_1->SetBinError(11,0.2967118);
   jpt_1->SetBinError(12,0.1297038);
   jpt_1->SetBinError(13,0.137761);
   jpt_1->SetEntries(5525);
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
   jpt_1->SetBinContent(2,1.956209);
   jpt_1->SetBinContent(3,16.48859);
   jpt_1->SetBinContent(4,24.12387);
   jpt_1->SetBinContent(5,18.31804);
   jpt_1->SetBinContent(6,10.56277);
   jpt_1->SetBinContent(7,4.437312);
   jpt_1->SetBinContent(8,2.249074);
   jpt_1->SetBinContent(9,0.9955649);
   jpt_1->SetBinContent(10,0.337094);
   jpt_1->SetBinContent(11,0.3265698);
   jpt_1->SetBinContent(12,0.118167);
   jpt_1->SetBinContent(13,0.1007173);
   jpt_1->SetBinContent(14,0.08828983);
   jpt_1->SetBinContent(15,0.01911955);
   jpt_1->SetBinContent(16,0.01427437);
   jpt_1->SetBinContent(17,0.006964018);
   jpt_1->SetBinContent(26,0.02044358);
   jpt_1->SetBinError(2,0.1087202);
   jpt_1->SetBinError(3,0.3451286);
   jpt_1->SetBinError(4,0.4376438);
   jpt_1->SetBinError(5,0.3977495);
   jpt_1->SetBinError(6,0.3109636);
   jpt_1->SetBinError(7,0.1998889);
   jpt_1->SetBinError(8,0.1468347);
   jpt_1->SetBinError(9,0.0973063);
   jpt_1->SetBinError(10,0.0544375);
   jpt_1->SetBinError(11,0.05695434);
   jpt_1->SetBinError(12,0.03361154);
   jpt_1->SetBinError(13,0.03361069);
   jpt_1->SetBinError(14,0.02857886);
   jpt_1->SetBinError(15,0.0129896);
   jpt_1->SetBinError(16,0.01061662);
   jpt_1->SetBinError(17,0.006964017);
   jpt_1->SetBinError(26,0.01518177);
   jpt_1->SetEntries(14070);
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
   jpt_1->SetBinContent(2,258);
   jpt_1->SetBinContent(3,1648);
   jpt_1->SetBinContent(4,1865);
   jpt_1->SetBinContent(5,1178);
   jpt_1->SetBinContent(6,570);
   jpt_1->SetBinContent(7,277);
   jpt_1->SetBinContent(8,117);
   jpt_1->SetBinContent(9,50);
   jpt_1->SetBinContent(10,22);
   jpt_1->SetBinContent(11,9);
   jpt_1->SetBinContent(12,5);
   jpt_1->SetBinContent(13,4);
   jpt_1->SetBinContent(15,4);
   jpt_1->SetBinError(2,16.06238);
   jpt_1->SetBinError(3,40.59557);
   jpt_1->SetBinError(4,43.18565);
   jpt_1->SetBinError(5,34.322);
   jpt_1->SetBinError(6,23.87467);
   jpt_1->SetBinError(7,16.64332);
   jpt_1->SetBinError(8,10.81665);
   jpt_1->SetBinError(9,7.071068);
   jpt_1->SetBinError(10,4.690416);
   jpt_1->SetBinError(11,3);
   jpt_1->SetBinError(12,2.236068);
   jpt_1->SetBinError(13,2);
   jpt_1->SetBinError(15,2);
   jpt_1->SetEntries(6007);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   jpt_1->SetBinContent(2,0.6121868);
   jpt_1->SetBinContent(3,0.8549502);
   jpt_1->SetBinContent(4,0.9222004);
   jpt_1->SetBinContent(5,0.9192529);
   jpt_1->SetBinContent(6,0.8082847);
   jpt_1->SetBinContent(7,0.8464765);
   jpt_1->SetBinContent(8,0.7035771);
   jpt_1->SetBinContent(9,0.6636791);
   jpt_1->SetBinContent(10,0.5519828);
   jpt_1->SetBinContent(11,0.586785);
   jpt_1->SetBinContent(12,0.6901304);
   jpt_1->SetBinContent(13,0.8639307);
   jpt_1->SetBinContent(15,1.431152);
   jpt_1->SetBinError(2,0.04256813);
   jpt_1->SetBinError(3,0.02491815);
   jpt_1->SetBinError(4,0.02577167);
   jpt_1->SetBinError(5,0.03254827);
   jpt_1->SetBinError(6,0.04061655);
   jpt_1->SetBinError(7,0.06051161);
   jpt_1->SetBinError(8,0.07547855);
   jpt_1->SetBinError(9,0.1071574);
   jpt_1->SetBinError(10,0.1317329);
   jpt_1->SetBinError(11,0.2160205);
   jpt_1->SetBinError(12,0.334139);
   jpt_1->SetBinError(13,0.5019837);
   jpt_1->SetBinError(15,0.8903826);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(87.64321);
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
