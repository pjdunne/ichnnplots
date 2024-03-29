{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:55 2013) by ROOT version5.32/00
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
   upper->Range(-2.025316,-3.020689,10.63291,9.091223);
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
   stack->SetMaximum(1.019217e+08);
   
   TH1F *drjj_stack_4 = new TH1F("drjj_stack_4","stack",50,0,10);
   drjj_stack_4->SetBinContent(14,1.953979);
   drjj_stack_4->SetBinContent(15,0.1045825);
   drjj_stack_4->SetBinContent(16,2.956033);
   drjj_stack_4->SetBinContent(17,0.358869);
   drjj_stack_4->SetBinContent(18,3.172161);
   drjj_stack_4->SetBinContent(19,0.2116249);
   drjj_stack_4->SetBinContent(20,6.385334);
   drjj_stack_4->SetBinContent(21,5.857386);
   drjj_stack_4->SetBinContent(22,11.49471);
   drjj_stack_4->SetBinContent(23,15.9652);
   drjj_stack_4->SetBinContent(24,13.98685);
   drjj_stack_4->SetBinContent(25,24.60631);
   drjj_stack_4->SetBinContent(26,11.92177);
   drjj_stack_4->SetBinContent(27,22.65372);
   drjj_stack_4->SetBinContent(28,14.75278);
   drjj_stack_4->SetBinContent(29,11.23271);
   drjj_stack_4->SetBinContent(30,0.5394224);
   drjj_stack_4->SetBinContent(31,6.619486);
   drjj_stack_4->SetBinContent(32,1.917202);
   drjj_stack_4->SetBinContent(33,0.3844747);
   drjj_stack_4->SetBinContent(35,0.116329);
   drjj_stack_4->SetBinError(14,1.947033);
   drjj_stack_4->SetBinError(15,0.1045825);
   drjj_stack_4->SetBinError(16,2.498173);
   drjj_stack_4->SetBinError(17,0.1925674);
   drjj_stack_4->SetBinError(18,2.248617);
   drjj_stack_4->SetBinError(19,0.1377995);
   drjj_stack_4->SetBinError(20,3.245991);
   drjj_stack_4->SetBinError(21,3.691566);
   drjj_stack_4->SetBinError(22,4.514448);
   drjj_stack_4->SetBinError(23,5.152082);
   drjj_stack_4->SetBinError(24,4.387428);
   drjj_stack_4->SetBinError(25,6.894186);
   drjj_stack_4->SetBinError(26,4.524043);
   drjj_stack_4->SetBinError(27,6.192657);
   drjj_stack_4->SetBinError(28,4.975819);
   drjj_stack_4->SetBinError(29,4.769309);
   drjj_stack_4->SetBinError(30,0.2087484);
   drjj_stack_4->SetBinError(31,3.479718);
   drjj_stack_4->SetBinError(32,1.917202);
   drjj_stack_4->SetBinError(33,0.1992042);
   drjj_stack_4->SetBinError(35,0.116329);
   drjj_stack_4->SetMinimum(0.001665519);
   drjj_stack_4->SetMaximum(3.059337e+08);
   drjj_stack_4->SetEntries(394);
   drjj_stack_4->SetStats(0);
   drjj_stack_4->SetFillColor(4);
   drjj_stack_4->SetLineColor(4);
   drjj_stack_4->SetLineWidth(2);
   drjj_stack_4->SetMarkerColor(4);
   drjj_stack_4->SetMarkerStyle(21);
   drjj_stack_4->SetMarkerSize(0.8);
   drjj_stack_4->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj_stack_4->GetXaxis()->SetLabelFont(42);
   drjj_stack_4->GetXaxis()->SetLabelOffset(0.007);
   drjj_stack_4->GetXaxis()->SetLabelSize(0);
   drjj_stack_4->GetXaxis()->SetTitleSize(0);
   drjj_stack_4->GetXaxis()->SetTickLength(0.02);
   drjj_stack_4->GetXaxis()->SetTitleOffset(0.9);
   drjj_stack_4->GetXaxis()->SetTitleFont(42);
   drjj_stack_4->GetYaxis()->SetTitle("Events");
   drjj_stack_4->GetYaxis()->SetLabelFont(42);
   drjj_stack_4->GetYaxis()->SetLabelOffset(0.007);
   drjj_stack_4->GetYaxis()->SetLabelSize(0.035);
   drjj_stack_4->GetYaxis()->SetTitleSize(0.045);
   drjj_stack_4->GetYaxis()->SetTickLength(0.02);
   drjj_stack_4->GetYaxis()->SetTitleOffset(1.55);
   drjj_stack_4->GetYaxis()->SetTitleFont(42);
   drjj_stack_4->GetZaxis()->SetLabelFont(42);
   drjj_stack_4->GetZaxis()->SetLabelOffset(0.007);
   drjj_stack_4->GetZaxis()->SetLabelSize(0.035);
   drjj_stack_4->GetZaxis()->SetTitleSize(0.045);
   drjj_stack_4->GetZaxis()->SetTickLength(0.02);
   drjj_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(drjj_stack_4);
   
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(14,1.953979);
   drjj->SetBinContent(15,0.1045825);
   drjj->SetBinContent(16,2.956033);
   drjj->SetBinContent(17,0.358869);
   drjj->SetBinContent(18,3.172161);
   drjj->SetBinContent(19,0.2116249);
   drjj->SetBinContent(20,6.385334);
   drjj->SetBinContent(21,5.857386);
   drjj->SetBinContent(22,11.49471);
   drjj->SetBinContent(23,15.9652);
   drjj->SetBinContent(24,13.98685);
   drjj->SetBinContent(25,24.60631);
   drjj->SetBinContent(26,11.92177);
   drjj->SetBinContent(27,22.65372);
   drjj->SetBinContent(28,14.75278);
   drjj->SetBinContent(29,11.23271);
   drjj->SetBinContent(30,0.5394224);
   drjj->SetBinContent(31,6.619486);
   drjj->SetBinContent(32,1.917202);
   drjj->SetBinContent(33,0.3844747);
   drjj->SetBinContent(35,0.116329);
   drjj->SetBinError(14,1.947033);
   drjj->SetBinError(15,0.1045825);
   drjj->SetBinError(16,2.498173);
   drjj->SetBinError(17,0.1925674);
   drjj->SetBinError(18,2.248617);
   drjj->SetBinError(19,0.1377995);
   drjj->SetBinError(20,3.245991);
   drjj->SetBinError(21,3.691566);
   drjj->SetBinError(22,4.514448);
   drjj->SetBinError(23,5.152082);
   drjj->SetBinError(24,4.387428);
   drjj->SetBinError(25,6.894186);
   drjj->SetBinError(26,4.524043);
   drjj->SetBinError(27,6.192657);
   drjj->SetBinError(28,4.975819);
   drjj->SetBinError(29,4.769309);
   drjj->SetBinError(30,0.2087484);
   drjj->SetBinError(31,3.479718);
   drjj->SetBinError(32,1.917202);
   drjj->SetBinError(33,0.1992042);
   drjj->SetBinError(35,0.116329);
   drjj->SetMinimum(0.01);
   drjj->SetMaximum(8.055e+07);
   drjj->SetEntries(394);
   drjj->SetStats(0);
   drjj->SetFillColor(4);
   drjj->SetLineColor(4);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(4);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0);
   drjj->GetXaxis()->SetTitleSize(0);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetTitle("Events");
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"HIST");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(13,0.8253352);
   drjj->SetBinContent(14,3.642769);
   drjj->SetBinContent(15,8.868225);
   drjj->SetBinContent(16,11.66979);
   drjj->SetBinContent(17,15.87625);
   drjj->SetBinContent(18,24.71634);
   drjj->SetBinContent(19,31.34701);
   drjj->SetBinContent(20,50.41827);
   drjj->SetBinContent(21,58.27424);
   drjj->SetBinContent(22,76.46655);
   drjj->SetBinContent(23,81.75119);
   drjj->SetBinContent(24,81.01901);
   drjj->SetBinContent(25,81.47385);
   drjj->SetBinContent(26,67.93962);
   drjj->SetBinContent(27,60.71223);
   drjj->SetBinContent(28,47.91101);
   drjj->SetBinContent(29,36.31551);
   drjj->SetBinContent(30,21.40429);
   drjj->SetBinContent(31,11.28018);
   drjj->SetBinContent(32,6.60569);
   drjj->SetBinContent(33,3.057445);
   drjj->SetBinContent(34,1.297238);
   drjj->SetBinContent(35,0.5595923);
   drjj->SetBinContent(37,0.773689);
   drjj->SetBinError(13,0.8253352);
   drjj->SetBinError(14,1.517845);
   drjj->SetBinError(15,2.643706);
   drjj->SetBinError(16,2.775105);
   drjj->SetBinError(17,3.613203);
   drjj->SetBinError(18,4.382549);
   drjj->SetBinError(19,4.860877);
   drjj->SetBinError(20,6.272649);
   drjj->SetBinError(21,6.611325);
   drjj->SetBinError(22,7.427993);
   drjj->SetBinError(23,7.604149);
   drjj->SetBinError(24,7.603107);
   drjj->SetBinError(25,7.432748);
   drjj->SetBinError(26,6.923957);
   drjj->SetBinError(27,6.564533);
   drjj->SetBinError(28,5.52239);
   drjj->SetBinError(29,5.023427);
   drjj->SetBinError(30,3.89586);
   drjj->SetBinError(31,2.773939);
   drjj->SetBinError(32,2.059416);
   drjj->SetBinError(33,1.355832);
   drjj->SetBinError(34,0.8762077);
   drjj->SetBinError(35,0.5595923);
   drjj->SetBinError(37,0.773689);
   drjj->SetEntries(1429);
   drjj->SetStats(0);
   drjj->SetFillColor(5);
   drjj->SetLineColor(5);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(5);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(12,0.4055894);
   drjj->SetBinContent(14,3.178524);
   drjj->SetBinContent(15,6.17982);
   drjj->SetBinContent(16,14.67094);
   drjj->SetBinContent(17,28.07656);
   drjj->SetBinContent(18,46.86792);
   drjj->SetBinContent(19,80.46574);
   drjj->SetBinContent(20,129.1453);
   drjj->SetBinContent(21,194.1761);
   drjj->SetBinContent(22,299.9666);
   drjj->SetBinContent(23,389.9876);
   drjj->SetBinContent(24,434.3606);
   drjj->SetBinContent(25,410.2104);
   drjj->SetBinContent(26,405.4078);
   drjj->SetBinContent(27,351.077);
   drjj->SetBinContent(28,248.4939);
   drjj->SetBinContent(29,193.1528);
   drjj->SetBinContent(30,123.9954);
   drjj->SetBinContent(31,72.21291);
   drjj->SetBinContent(32,49.92392);
   drjj->SetBinContent(33,29.44425);
   drjj->SetBinContent(34,10.82978);
   drjj->SetBinContent(35,11.84549);
   drjj->SetBinContent(36,2.753907);
   drjj->SetBinContent(37,4.010924);
   drjj->SetBinError(12,0.4055894);
   drjj->SetBinError(14,1.485276);
   drjj->SetBinError(15,1.839064);
   drjj->SetBinError(16,2.415489);
   drjj->SetBinError(17,3.528468);
   drjj->SetBinError(18,5.175152);
   drjj->SetBinError(19,6.733189);
   drjj->SetBinError(20,8.897789);
   drjj->SetBinError(21,10.70313);
   drjj->SetBinError(22,14.31508);
   drjj->SetBinError(23,16.5933);
   drjj->SetBinError(24,17.30071);
   drjj->SetBinError(25,17.56919);
   drjj->SetBinError(26,17.81312);
   drjj->SetBinError(27,16.4989);
   drjj->SetBinError(28,13.58859);
   drjj->SetBinError(29,12.32178);
   drjj->SetBinError(30,9.791063);
   drjj->SetBinError(31,7.012023);
   drjj->SetBinError(32,6.044289);
   drjj->SetBinError(33,4.819696);
   drjj->SetBinError(34,2.809717);
   drjj->SetBinError(35,5.099566);
   drjj->SetBinError(36,1.493874);
   drjj->SetBinError(37,2.174959);
   drjj->SetEntries(7249);
   drjj->SetStats(0);
   drjj->SetFillColor(6);
   drjj->SetLineColor(6);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(6);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(12,0.01991632);
   drjj->SetBinContent(13,0.03862264);
   drjj->SetBinContent(14,0.4158279);
   drjj->SetBinContent(15,0.5602881);
   drjj->SetBinContent(16,1.471758);
   drjj->SetBinContent(17,3.38005);
   drjj->SetBinContent(18,5.400795);
   drjj->SetBinContent(19,13.8484);
   drjj->SetBinContent(20,25.72702);
   drjj->SetBinContent(21,44.09753);
   drjj->SetBinContent(22,71.35181);
   drjj->SetBinContent(23,99.26198);
   drjj->SetBinContent(24,119.4882);
   drjj->SetBinContent(25,121.028);
   drjj->SetBinContent(26,114.7791);
   drjj->SetBinContent(27,101.4426);
   drjj->SetBinContent(28,86.12613);
   drjj->SetBinContent(29,64.45253);
   drjj->SetBinContent(30,49.17471);
   drjj->SetBinContent(31,33.47462);
   drjj->SetBinContent(32,20.53191);
   drjj->SetBinContent(33,13.53645);
   drjj->SetBinContent(34,7.203552);
   drjj->SetBinContent(35,3.201208);
   drjj->SetBinContent(36,1.656144);
   drjj->SetBinContent(37,0.5781573);
   drjj->SetBinContent(38,0.09500381);
   drjj->SetBinContent(39,1.185944e-05);
   drjj->SetBinContent(40,0.01928098);
   drjj->SetBinError(12,0.01991632);
   drjj->SetBinError(13,0.02604487);
   drjj->SetBinError(14,0.09064601);
   drjj->SetBinError(15,0.10657);
   drjj->SetBinError(16,0.1702793);
   drjj->SetBinError(17,0.2541747);
   drjj->SetBinError(18,0.3267468);
   drjj->SetBinError(19,0.5281964);
   drjj->SetBinError(20,0.7279633);
   drjj->SetBinError(21,0.9536668);
   drjj->SetBinError(22,1.219163);
   drjj->SetBinError(23,1.431844);
   drjj->SetBinError(24,1.56828);
   drjj->SetBinError(25,1.573754);
   drjj->SetBinError(26,1.529968);
   drjj->SetBinError(27,1.432877);
   drjj->SetBinError(28,1.31723);
   drjj->SetBinError(29,1.136811);
   drjj->SetBinError(30,0.997184);
   drjj->SetBinError(31,0.8183837);
   drjj->SetBinError(32,0.637457);
   drjj->SetBinError(33,0.5184107);
   drjj->SetBinError(34,0.3772376);
   drjj->SetBinError(35,0.2511184);
   drjj->SetBinError(36,0.1773157);
   drjj->SetBinError(37,0.1101687);
   drjj->SetBinError(38,0.04285315);
   drjj->SetBinError(39,1.185943e-05);
   drjj->SetBinError(40,0.01928098);
   drjj->SetEntries(57337);
   drjj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   drjj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   drjj->SetLineColor(ci);
   drjj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   drjj->SetMarkerColor(ci);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(13,0.09614373);
   drjj->SetBinContent(14,0.200753);
   drjj->SetBinContent(15,0.2882375);
   drjj->SetBinContent(16,0.6789323);
   drjj->SetBinContent(17,0.9280556);
   drjj->SetBinContent(18,2.726626);
   drjj->SetBinContent(19,4.321923);
   drjj->SetBinContent(20,7.446762);
   drjj->SetBinContent(21,8.591314);
   drjj->SetBinContent(22,16.25303);
   drjj->SetBinContent(23,21.81941);
   drjj->SetBinContent(24,23.17841);
   drjj->SetBinContent(25,23.65777);
   drjj->SetBinContent(26,18.31182);
   drjj->SetBinContent(27,16.94978);
   drjj->SetBinContent(28,14.56868);
   drjj->SetBinContent(29,8.506185);
   drjj->SetBinContent(30,6.260205);
   drjj->SetBinContent(31,3.061407);
   drjj->SetBinContent(32,1.572771);
   drjj->SetBinContent(33,1.68931);
   drjj->SetBinContent(34,0.2597517);
   drjj->SetBinContent(35,0.1469904);
   drjj->SetBinContent(36,0.02605036);
   drjj->SetBinContent(37,0.08850121);
   drjj->SetBinError(13,0.09614373);
   drjj->SetBinError(14,0.1419771);
   drjj->SetBinError(15,0.1452529);
   drjj->SetBinError(16,0.2521384);
   drjj->SetBinError(17,0.2669136);
   drjj->SetBinError(18,0.5281852);
   drjj->SetBinError(19,0.6379335);
   drjj->SetBinError(20,0.8981535);
   drjj->SetBinError(21,0.9570418);
   drjj->SetBinError(22,1.387333);
   drjj->SetBinError(23,1.636376);
   drjj->SetBinError(24,1.680921);
   drjj->SetBinError(25,1.768915);
   drjj->SetBinError(26,1.512142);
   drjj->SetBinError(27,1.413977);
   drjj->SetBinError(28,1.394396);
   drjj->SetBinError(29,1.028579);
   drjj->SetBinError(30,0.8915941);
   drjj->SetBinError(31,0.6471923);
   drjj->SetBinError(32,0.3991555);
   drjj->SetBinError(33,0.4122602);
   drjj->SetBinError(34,0.1548528);
   drjj->SetBinError(35,0.1163051);
   drjj->SetBinError(36,0.02605036);
   drjj->SetBinError(37,0.08850121);
   drjj->SetEntries(2010);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(14,0.02483164);
   drjj->SetBinContent(15,0.04479138);
   drjj->SetBinContent(16,0.08033238);
   drjj->SetBinContent(17,0.1645381);
   drjj->SetBinContent(18,0.3219176);
   drjj->SetBinContent(19,0.915242);
   drjj->SetBinContent(20,1.353555);
   drjj->SetBinContent(21,2.164901);
   drjj->SetBinContent(22,4.528077);
   drjj->SetBinContent(23,6.063213);
   drjj->SetBinContent(24,7.445104);
   drjj->SetBinContent(25,7.369161);
   drjj->SetBinContent(26,7.001809);
   drjj->SetBinContent(27,6.390828);
   drjj->SetBinContent(28,4.716063);
   drjj->SetBinContent(29,3.438944);
   drjj->SetBinContent(30,2.522541);
   drjj->SetBinContent(31,1.837546);
   drjj->SetBinContent(32,1.459071);
   drjj->SetBinContent(33,0.542671);
   drjj->SetBinContent(34,0.4175385);
   drjj->SetBinContent(35,0.1328653);
   drjj->SetBinContent(36,0.07154448);
   drjj->SetBinContent(37,0.006590072);
   drjj->SetBinContent(39,0.006172581);
   drjj->SetBinError(14,0.01447066);
   drjj->SetBinError(15,0.02529085);
   drjj->SetBinError(16,0.02542124);
   drjj->SetBinError(17,0.03720531);
   drjj->SetBinError(18,0.05607819);
   drjj->SetBinError(19,0.0942829);
   drjj->SetBinError(20,0.1127312);
   drjj->SetBinError(21,0.1420176);
   drjj->SetBinError(22,0.2144722);
   drjj->SetBinError(23,0.2497145);
   drjj->SetBinError(24,0.2747292);
   drjj->SetBinError(25,0.2681199);
   drjj->SetBinError(26,0.2636481);
   drjj->SetBinError(27,0.2540354);
   drjj->SetBinError(28,0.2144663);
   drjj->SetBinError(29,0.1851538);
   drjj->SetBinError(30,0.1591226);
   drjj->SetBinError(31,0.1372284);
   drjj->SetBinError(32,0.1185746);
   drjj->SetBinError(33,0.07043045);
   drjj->SetBinError(34,0.0644426);
   drjj->SetBinError(35,0.03899357);
   drjj->SetBinError(36,0.02561131);
   drjj->SetBinError(37,0.006590072);
   drjj->SetBinError(39,0.006172581);
   drjj->SetEntries(7811);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   stack->Draw("hist");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(13,2);
   drjj->SetBinContent(14,6);
   drjj->SetBinContent(15,4);
   drjj->SetBinContent(16,18);
   drjj->SetBinContent(17,17);
   drjj->SetBinContent(18,43);
   drjj->SetBinContent(19,80);
   drjj->SetBinContent(20,136);
   drjj->SetBinContent(21,204);
   drjj->SetBinContent(22,306);
   drjj->SetBinContent(23,440);
   drjj->SetBinContent(24,537);
   drjj->SetBinContent(25,518);
   drjj->SetBinContent(26,515);
   drjj->SetBinContent(27,410);
   drjj->SetBinContent(28,330);
   drjj->SetBinContent(29,209);
   drjj->SetBinContent(30,139);
   drjj->SetBinContent(31,102);
   drjj->SetBinContent(32,54);
   drjj->SetBinContent(33,31);
   drjj->SetBinContent(34,15);
   drjj->SetBinContent(35,10);
   drjj->SetBinContent(36,2);
   drjj->SetBinContent(37,1);
   drjj->SetBinContent(38,1);
   drjj->SetBinError(13,1.414214);
   drjj->SetBinError(14,2.44949);
   drjj->SetBinError(15,2);
   drjj->SetBinError(16,4.242641);
   drjj->SetBinError(17,4.123106);
   drjj->SetBinError(18,6.557439);
   drjj->SetBinError(19,8.944272);
   drjj->SetBinError(20,11.6619);
   drjj->SetBinError(21,14.28286);
   drjj->SetBinError(22,17.49286);
   drjj->SetBinError(23,20.97618);
   drjj->SetBinError(24,23.17326);
   drjj->SetBinError(25,22.75961);
   drjj->SetBinError(26,22.69361);
   drjj->SetBinError(27,20.24846);
   drjj->SetBinError(28,18.1659);
   drjj->SetBinError(29,14.45683);
   drjj->SetBinError(30,11.78983);
   drjj->SetBinError(31,10.0995);
   drjj->SetBinError(32,7.348469);
   drjj->SetBinError(33,5.567764);
   drjj->SetBinError(34,3.872983);
   drjj->SetBinError(35,3.162278);
   drjj->SetBinError(36,1.414214);
   drjj->SetBinError(37,1);
   drjj->SetBinError(38,1);
   drjj->SetEntries(4130);
   drjj->SetStats(0);
   drjj->SetFillColor(1);
   drjj->SetFillStyle(0);
   drjj->SetLineWidth(3);
   drjj->SetMarkerStyle(20);
   drjj->SetMarkerSize(1.3);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("SAMEPE1");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetStats(0);
   drjj->SetFillColor(1);
   drjj->SetFillStyle(0);
   drjj->SetLineStyle(2);
   drjj->SetLineWidth(3);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("drjj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("drjj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","EWK W+jets","f");

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
   entry=leg->AddEntry("drjj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","Dibosons","f");
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
   lower->Range(-2.025316,-0.653951,10.63291,2.070845);
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
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(13,2.083113);
   drjj->SetBinContent(14,0.8039979);
   drjj->SetBinContent(15,0.2509196);
   drjj->SetBinContent(16,0.6299928);
   drjj->SetBinContent(17,0.351055);
   drjj->SetBinContent(18,0.5372744);
   drjj->SetBinContent(19,0.6111615);
   drjj->SetBinContent(20,0.635244);
   drjj->SetBinContent(21,0.6638377);
   drjj->SetBinContent(22,0.6530563);
   drjj->SetBinContent(23,0.7347006);
   drjj->SetBinContent(24,0.8069226);
   drjj->SetBinContent(25,0.8046738);
   drjj->SetBinContent(26,0.8395277);
   drjj->SetBinContent(27,0.7641093);
   drjj->SetBinContent(28,0.8212718);
   drjj->SetBinContent(29,0.6833059);
   drjj->SetBinContent(30,0.6835265);
   drjj->SetBinContent(31,0.8369803);
   drjj->SetBinContent(32,0.6742132);
   drjj->SetBinContent(33,0.6422192);
   drjj->SetBinContent(34,0.7497052);
   drjj->SetBinContent(35,0.6294792);
   drjj->SetBinContent(36,0.4436906);
   drjj->SetBinContent(37,0.183222);
   drjj->SetBinContent(38,10.52589);
   drjj->SetBinError(13,2.328742);
   drjj->SetBinError(14,0.4005163);
   drjj->SetBinError(15,0.1353436);
   drjj->SetBinError(16,0.1693389);
   drjj->SetBinError(17,0.09272);
   drjj->SetBinError(18,0.09382519);
   drjj->SetBinError(19,0.07866065);
   drjj->SetBinError(20,0.06342303);
   drjj->SetBinError(21,0.05391989);
   drjj->SetBinError(22,0.04365416);
   drjj->SetBinError(23,0.04165813);
   drjj->SetBinError(24,0.04177853);
   drjj->SetBinError(25,0.04274926);
   drjj->SetBinError(26,0.04540314);
   drjj->SetBinError(27,0.04551733);
   drjj->SetBinError(28,0.05438976);
   drjj->SetBinError(29,0.05594262);
   drjj->SetBinError(30,0.06808998);
   drjj->SetBinError(31,0.09799205);
   drjj->SetBinError(32,0.106528);
   drjj->SetBinError(33,0.1334938);
   drjj->SetBinError(34,0.2233204);
   drjj->SetBinError(35,0.2847277);
   drjj->SetBinError(36,0.3469436);
   drjj->SetBinError(37,0.1989937);
   drjj->SetBinError(38,11.54716);
   drjj->SetMinimum(0);
   drjj->SetMaximum(2);
   drjj->SetEntries(5.643468);
   drjj->SetStats(0);
   drjj->SetFillStyle(0);
   drjj->SetMarkerStyle(20);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.1);
   drjj->GetXaxis()->SetTitleSize(0.12);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetTitle("Data/MC");
   drjj->GetYaxis()->SetNdivisions(505);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.1);
   drjj->GetYaxis()->SetTitleSize(0.12);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(0.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
