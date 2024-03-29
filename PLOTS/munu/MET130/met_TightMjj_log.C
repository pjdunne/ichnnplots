{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:08 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.940063,765.5696,7.660232);
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
   stack->SetMaximum(4928316);
   
   TH1F *met_stack_7 = new TH1F("met_stack_7","stack",50,0,1000);
   met_stack_7->SetBinContent(1,5.328074);
   met_stack_7->SetBinContent(2,14.20178);
   met_stack_7->SetBinContent(3,8.151779);
   met_stack_7->SetBinContent(4,9.578955);
   met_stack_7->SetBinContent(5,13.67417);
   met_stack_7->SetBinContent(6,6.381315);
   met_stack_7->SetBinContent(7,3.2494);
   met_stack_7->SetBinContent(8,0.8893758);
   met_stack_7->SetBinContent(9,0.2202792);
   met_stack_7->SetBinContent(10,5.689595);
   met_stack_7->SetBinContent(11,6.689228);
   met_stack_7->SetBinContent(12,3.473739);
   met_stack_7->SetBinContent(13,0.3211246);
   met_stack_7->SetBinContent(14,2.445271);
   met_stack_7->SetBinContent(15,4.07081e-05);
   met_stack_7->SetBinContent(16,2.257423);
   met_stack_7->SetBinContent(34,0.1572778);
   met_stack_7->SetBinError(1,2.936967);
   met_stack_7->SetBinError(2,5.334638);
   met_stack_7->SetBinError(3,3.533963);
   met_stack_7->SetBinError(4,4.036855);
   met_stack_7->SetBinError(5,4.67325);
   met_stack_7->SetBinError(6,3.501336);
   met_stack_7->SetBinError(7,2.074536);
   met_stack_7->SetBinError(8,0.2746102);
   met_stack_7->SetBinError(9,0.1506772);
   met_stack_7->SetBinError(10,3.744127);
   met_stack_7->SetBinError(11,3.617789);
   met_stack_7->SetBinError(12,2.428823);
   met_stack_7->SetBinError(13,0.1903373);
   met_stack_7->SetBinError(14,2.157921);
   met_stack_7->SetBinError(15,4.07081e-05);
   met_stack_7->SetBinError(16,2.183045);
   met_stack_7->SetBinError(34,0.1572778);
   met_stack_7->SetMinimum(0.001870435);
   met_stack_7->SetMaximum(1.349639e+07);
   met_stack_7->SetEntries(176);
   met_stack_7->SetStats(0);
   met_stack_7->SetFillColor(4);
   met_stack_7->SetLineColor(4);
   met_stack_7->SetLineWidth(2);
   met_stack_7->SetMarkerColor(4);
   met_stack_7->SetMarkerStyle(21);
   met_stack_7->SetMarkerSize(0.8);
   met_stack_7->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_7->GetXaxis()->SetRange(1,36);
   met_stack_7->GetXaxis()->SetLabelFont(42);
   met_stack_7->GetXaxis()->SetLabelOffset(0.007);
   met_stack_7->GetXaxis()->SetLabelSize(0);
   met_stack_7->GetXaxis()->SetTitleSize(0);
   met_stack_7->GetXaxis()->SetTickLength(0.02);
   met_stack_7->GetXaxis()->SetTitleOffset(0.9);
   met_stack_7->GetXaxis()->SetTitleFont(42);
   met_stack_7->GetYaxis()->SetTitle("Events");
   met_stack_7->GetYaxis()->SetLabelFont(42);
   met_stack_7->GetYaxis()->SetLabelOffset(0.007);
   met_stack_7->GetYaxis()->SetLabelSize(0.035);
   met_stack_7->GetYaxis()->SetTitleSize(0.045);
   met_stack_7->GetYaxis()->SetTickLength(0.02);
   met_stack_7->GetYaxis()->SetTitleOffset(1.55);
   met_stack_7->GetYaxis()->SetTitleFont(42);
   met_stack_7->GetZaxis()->SetLabelFont(42);
   met_stack_7->GetZaxis()->SetLabelOffset(0.007);
   met_stack_7->GetZaxis()->SetLabelSize(0.035);
   met_stack_7->GetZaxis()->SetTitleSize(0.045);
   met_stack_7->GetZaxis()->SetTickLength(0.02);
   met_stack_7->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_7);
   
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,5.328074);
   met->SetBinContent(2,14.20178);
   met->SetBinContent(3,8.151779);
   met->SetBinContent(4,9.578955);
   met->SetBinContent(5,13.67417);
   met->SetBinContent(6,6.381315);
   met->SetBinContent(7,3.2494);
   met->SetBinContent(8,0.8893758);
   met->SetBinContent(9,0.2202792);
   met->SetBinContent(10,5.689595);
   met->SetBinContent(11,6.689228);
   met->SetBinContent(12,3.473739);
   met->SetBinContent(13,0.3211246);
   met->SetBinContent(14,2.445271);
   met->SetBinContent(15,4.07081e-05);
   met->SetBinContent(16,2.257423);
   met->SetBinContent(34,0.1572778);
   met->SetBinError(1,2.936967);
   met->SetBinError(2,5.334638);
   met->SetBinError(3,3.533963);
   met->SetBinError(4,4.036855);
   met->SetBinError(5,4.67325);
   met->SetBinError(6,3.501336);
   met->SetBinError(7,2.074536);
   met->SetBinError(8,0.2746102);
   met->SetBinError(9,0.1506772);
   met->SetBinError(10,3.744127);
   met->SetBinError(11,3.617789);
   met->SetBinError(12,2.428823);
   met->SetBinError(13,0.1903373);
   met->SetBinError(14,2.157921);
   met->SetBinError(15,4.07081e-05);
   met->SetBinError(16,2.183045);
   met->SetBinError(34,0.1572778);
   met->SetMinimum(0.01);
   met->SetMaximum(4050000);
   met->SetEntries(176);
   met->SetStats(0);
   met->SetFillColor(4);
   met->SetLineColor(4);
   met->SetLineWidth(2);
   met->SetMarkerColor(4);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,6.431489);
   met->SetBinContent(2,19.53625);
   met->SetBinContent(3,23.87266);
   met->SetBinContent(4,34.35133);
   met->SetBinContent(5,49.39967);
   met->SetBinContent(6,40.90629);
   met->SetBinContent(7,39.3142);
   met->SetBinContent(8,38.54303);
   met->SetBinContent(9,13.78063);
   met->SetBinContent(10,12.25531);
   met->SetBinContent(11,14.06262);
   met->SetBinContent(12,4.097125);
   met->SetBinContent(13,3.562007);
   met->SetBinContent(14,0.8861473);
   met->SetBinContent(15,3.048472);
   met->SetBinContent(16,4.154988);
   met->SetBinContent(17,0.5653772);
   met->SetBinContent(18,0.6307489);
   met->SetBinContent(19,0.8043061);
   met->SetBinError(1,2.196517);
   met->SetBinError(2,3.716805);
   met->SetBinError(3,4.073976);
   met->SetBinError(4,4.982341);
   met->SetBinError(5,5.872514);
   met->SetBinError(6,5.218269);
   met->SetBinError(7,5.211632);
   met->SetBinError(8,5.176914);
   met->SetBinError(9,2.978461);
   met->SetBinError(10,2.841459);
   met->SetBinError(11,3.188074);
   met->SetBinError(12,1.681566);
   met->SetBinError(13,1.559556);
   met->SetBinError(14,0.5890731);
   met->SetBinError(15,1.582134);
   met->SetBinError(16,1.898973);
   met->SetBinError(17,0.5653772);
   met->SetBinError(18,0.4896932);
   met->SetBinError(19,0.8043061);
   met->SetEntries(580);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,86.60677);
   met->SetBinContent(2,179.4787);
   met->SetBinContent(3,202.1631);
   met->SetBinContent(4,191.0084);
   met->SetBinContent(5,190.7681);
   met->SetBinContent(6,198.2747);
   met->SetBinContent(7,180.903);
   met->SetBinContent(8,150.5963);
   met->SetBinContent(9,94.0414);
   met->SetBinContent(10,63.81905);
   met->SetBinContent(11,46.98482);
   met->SetBinContent(12,30.36996);
   met->SetBinContent(13,24.40152);
   met->SetBinContent(14,11.31996);
   met->SetBinContent(15,10.31086);
   met->SetBinContent(16,10.94284);
   met->SetBinContent(17,6);
   met->SetBinContent(18,3.176233);
   met->SetBinContent(19,2.948253);
   met->SetBinContent(20,1.328511);
   met->SetBinContent(21,0.4495603);
   met->SetBinContent(23,0.7360361);
   met->SetBinContent(27,0.9230508);
   met->SetBinContent(28,0.4483769);
   met->SetBinError(1,9.229525);
   met->SetBinError(2,11.73829);
   met->SetBinError(3,12.90495);
   met->SetBinError(4,12.49155);
   met->SetBinError(5,11.82641);
   met->SetBinError(6,11.69953);
   met->SetBinError(7,12.11822);
   met->SetBinError(8,11.03519);
   met->SetBinError(9,8.050665);
   met->SetBinError(10,6.990346);
   met->SetBinError(11,5.909151);
   met->SetBinError(12,4.630122);
   met->SetBinError(13,4.026259);
   met->SetBinError(14,2.586033);
   met->SetBinError(15,2.428895);
   met->SetBinError(16,2.862082);
   met->SetBinError(17,2.157459);
   met->SetBinError(18,1.557489);
   met->SetBinError(19,1.642359);
   met->SetBinError(20,0.782725);
   met->SetBinError(21,0.4495603);
   met->SetBinError(23,0.7360361);
   met->SetBinError(27,0.6558396);
   met->SetBinError(28,0.4483769);
   met->SetEntries(3203);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,30.05484);
   met->SetBinContent(2,61.98373);
   met->SetBinContent(3,64.87341);
   met->SetBinContent(4,64.3977);
   met->SetBinContent(5,66.00211);
   met->SetBinContent(6,69.8384);
   met->SetBinContent(7,65.6575);
   met->SetBinContent(8,48.25769);
   met->SetBinContent(9,35.33495);
   met->SetBinContent(10,24.08881);
   met->SetBinContent(11,18.21709);
   met->SetBinContent(12,13.31835);
   met->SetBinContent(13,9.583265);
   met->SetBinContent(14,6.566383);
   met->SetBinContent(15,4.558783);
   met->SetBinContent(16,3.313743);
   met->SetBinContent(17,2.497328);
   met->SetBinContent(18,1.475584);
   met->SetBinContent(19,1.142845);
   met->SetBinContent(20,1.094977);
   met->SetBinContent(21,0.6738494);
   met->SetBinContent(22,0.4524442);
   met->SetBinContent(23,0.3924094);
   met->SetBinContent(24,0.2459619);
   met->SetBinContent(25,0.1398588);
   met->SetBinContent(26,0.1671703);
   met->SetBinContent(27,0.114679);
   met->SetBinContent(28,0.1473973);
   met->SetBinContent(29,0.08223772);
   met->SetBinContent(31,0.03987136);
   met->SetBinContent(33,0.01949831);
   met->SetBinContent(36,0.01973487);
   met->SetBinContent(44,0.01935949);
   met->SetBinError(1,0.7858373);
   met->SetBinError(2,1.116627);
   met->SetBinError(3,1.149347);
   met->SetBinError(4,1.139994);
   met->SetBinError(5,1.147306);
   met->SetBinError(6,1.185537);
   met->SetBinError(7,1.153311);
   met->SetBinError(8,0.9956295);
   met->SetBinError(9,0.8571442);
   met->SetBinError(10,0.7043669);
   met->SetBinError(11,0.6158508);
   met->SetBinError(12,0.526812);
   met->SetBinError(13,0.4463568);
   met->SetBinError(14,0.3701498);
   met->SetBinError(15,0.305739);
   met->SetBinError(16,0.2656754);
   met->SetBinError(17,0.2256953);
   met->SetBinError(18,0.1741591);
   met->SetBinError(19,0.1549831);
   met->SetBinError(20,0.1529912);
   met->SetBinError(21,0.115035);
   met->SetBinError(22,0.09464284);
   met->SetBinError(23,0.0896591);
   met->SetBinError(24,0.07131911);
   met->SetBinError(25,0.05501098);
   met->SetBinError(26,0.0594654);
   met->SetBinError(27,0.05428082);
   met->SetBinError(28,0.05703395);
   met->SetBinError(29,0.04119281);
   met->SetBinError(31,0.02835704);
   met->SetBinError(33,0.01949831);
   met->SetBinError(36,0.01973486);
   met->SetBinError(44,0.01935949);
   met->SetEntries(33754);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,11.15904);
   met->SetBinContent(2,19.97826);
   met->SetBinContent(3,11.40921);
   met->SetBinContent(4,6.381601);
   met->SetBinContent(5,7.477767);
   met->SetBinContent(6,6.46544);
   met->SetBinContent(7,6.237945);
   met->SetBinContent(8,4.517333);
   met->SetBinContent(9,2.449122);
   met->SetBinContent(10,1.581667);
   met->SetBinContent(11,1.031449);
   met->SetBinContent(12,0.4842899);
   met->SetBinContent(13,0.1788391);
   met->SetBinContent(14,0.3703638);
   met->SetBinContent(15,0.09163283);
   met->SetBinContent(16,0.08446104);
   met->SetBinContent(17,0.04030926);
   met->SetBinError(1,1.190467);
   met->SetBinError(2,1.557185);
   met->SetBinError(3,1.197108);
   met->SetBinError(4,0.8400389);
   met->SetBinError(5,1.047893);
   met->SetBinError(6,0.928894);
   met->SetBinError(7,0.9555336);
   met->SetBinError(8,0.7805587);
   met->SetBinError(9,0.597515);
   met->SetBinError(10,0.4506764);
   met->SetBinError(11,0.3895017);
   met->SetBinError(12,0.2619606);
   met->SetBinError(13,0.1266216);
   met->SetBinError(14,0.1941457);
   met->SetBinError(15,0.09163282);
   met->SetBinError(16,0.08446104);
   met->SetBinError(17,0.04030926);
   met->SetEntries(852);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,2.748111);
   met->SetBinContent(2,3.936321);
   met->SetBinContent(3,1.849534);
   met->SetBinContent(4,1.349063);
   met->SetBinContent(5,1.232606);
   met->SetBinContent(6,1.382501);
   met->SetBinContent(7,3.37143);
   met->SetBinContent(8,5.563468);
   met->SetBinContent(9,3.613871);
   met->SetBinContent(10,2.876173);
   met->SetBinContent(11,1.74769);
   met->SetBinContent(12,1.147869);
   met->SetBinContent(13,0.9171493);
   met->SetBinContent(14,0.7579351);
   met->SetBinContent(15,0.3620776);
   met->SetBinContent(16,0.2606398);
   met->SetBinContent(17,0.2208035);
   met->SetBinContent(18,0.08616531);
   met->SetBinContent(19,0.08190629);
   met->SetBinContent(20,0.05440612);
   met->SetBinContent(21,0.02694857);
   met->SetBinContent(22,0.01945033);
   met->SetBinContent(23,0.03942365);
   met->SetBinContent(24,0.01886839);
   met->SetBinContent(25,0.009966618);
   met->SetBinContent(28,0.0244255);
   met->SetBinContent(29,0.01354358);
   met->SetBinContent(30,0.01514502);
   met->SetBinContent(31,0.006941842);
   met->SetBinContent(35,0.002080693);
   met->SetBinContent(44,0.01350174);
   met->SetBinError(1,0.1359586);
   met->SetBinError(2,0.1597777);
   met->SetBinError(3,0.1087119);
   met->SetBinError(4,0.09268953);
   met->SetBinError(5,0.08938414);
   met->SetBinError(6,0.09443542);
   met->SetBinError(7,0.1868952);
   met->SetBinError(8,0.2580297);
   met->SetBinError(9,0.2114012);
   met->SetBinError(10,0.1885217);
   met->SetBinError(11,0.1487674);
   met->SetBinError(12,0.1182706);
   met->SetBinError(13,0.1045503);
   met->SetBinError(14,0.0972811);
   met->SetBinError(15,0.07019111);
   met->SetBinError(16,0.06020502);
   met->SetBinError(17,0.05576203);
   met->SetBinError(18,0.03224579);
   met->SetBinError(19,0.03130001);
   met->SetBinError(20,0.02481944);
   met->SetBinError(21,0.01813326);
   met->SetBinError(22,0.0147012);
   met->SetBinError(23,0.02536928);
   met->SetBinError(24,0.01404417);
   met->SetBinError(25,0.009966618);
   met->SetBinError(28,0.01727143);
   met->SetBinError(29,0.01354357);
   met->SetBinError(30,0.01514502);
   met->SetBinError(31,0.006941842);
   met->SetBinError(35,0.002080693);
   met->SetBinError(44,0.01350174);
   met->SetEntries(4388);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,112);
   met->SetBinContent(2,203);
   met->SetBinContent(3,234);
   met->SetBinContent(4,244);
   met->SetBinContent(5,241);
   met->SetBinContent(6,270);
   met->SetBinContent(7,213);
   met->SetBinContent(8,163);
   met->SetBinContent(9,119);
   met->SetBinContent(10,65);
   met->SetBinContent(11,57);
   met->SetBinContent(12,41);
   met->SetBinContent(13,27);
   met->SetBinContent(14,19);
   met->SetBinContent(15,14);
   met->SetBinContent(16,5);
   met->SetBinContent(17,2);
   met->SetBinContent(19,2);
   met->SetBinContent(20,1);
   met->SetBinContent(21,1);
   met->SetBinContent(22,2);
   met->SetBinError(1,10.58301);
   met->SetBinError(2,14.24781);
   met->SetBinError(3,15.29706);
   met->SetBinError(4,15.6205);
   met->SetBinError(5,15.52417);
   met->SetBinError(6,16.43168);
   met->SetBinError(7,14.59452);
   met->SetBinError(8,12.76715);
   met->SetBinError(9,10.90871);
   met->SetBinError(10,8.062258);
   met->SetBinError(11,7.549834);
   met->SetBinError(12,6.403124);
   met->SetBinError(13,5.196152);
   met->SetBinError(14,4.358899);
   met->SetBinError(15,3.741657);
   met->SetBinError(16,2.236068);
   met->SetBinError(17,1.414214);
   met->SetBinError(19,1.414214);
   met->SetBinError(20,1);
   met->SetBinError(21,1);
   met->SetBinError(22,1.414214);
   met->SetEntries(2035);
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
   TLatex *   tex = new TLatex(0.95,0.965,"TightMjj");
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
   TLegendEntry *entry=leg->AddEntry("met","Data","lp");
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
   lower->Range(-145.8228,-0.653951,765.5696,2.070845);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,0.8175168);
   met->SetBinContent(2,0.7124975);
   met->SetBinContent(3,0.7693118);
   met->SetBinContent(4,0.8202009);
   met->SetBinContent(5,0.7653704);
   met->SetBinContent(6,0.8520916);
   met->SetBinContent(7,0.7208509);
   met->SetBinContent(8,0.658645);
   met->SetBinContent(9,0.7974804);
   met->SetBinContent(10,0.6212901);
   met->SetBinContent(11,0.694752);
   met->SetBinContent(12,0.8296639);
   met->SetBinContent(13,0.6987075);
   met->SetBinContent(14,0.9547359);
   met->SetBinContent(15,0.7620366);
   met->SetBinContent(16,0.2665719);
   met->SetBinContent(17,0.2145044);
   met->SetBinContent(19,0.4018234);
   met->SetBinContent(20,0.4035685);
   met->SetBinContent(21,0.8692943);
   met->SetBinContent(22,4.238235);
   met->SetBinError(1,0.09615318);
   met->SetBinError(2,0.05892331);
   met->SetBinError(3,0.06097906);
   met->SetBinError(4,0.06439898);
   met->SetBinError(5,0.05894976);
   met->SetBinError(6,0.06238834);
   met->SetBinError(7,0.05906557);
   met->SetBinError(8,0.06103797);
   met->SetBinError(9,0.08649479);
   met->SetBinError(10,0.08928816);
   met->SetBinError(11,0.1083535);
   met->SetBinError(12,0.1540454);
   met->SetBinError(13,0.1557244);
   met->SetBinError(14,0.2541442);
   met->SetBinError(15,0.2368942);
   met->SetBinError(16,0.1288855);
   met->SetBinError(17,0.1602134);
   met->SetBinError(19,0.320453);
   met->SetBinError(20,0.4239764);
   met->SetBinError(21,0.9374578);
   met->SetBinError(22,3.117897);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(28.62225);
   met->SetStats(0);
   met->SetFillStyle(0);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
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
