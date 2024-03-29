{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:07 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.99609,765.5696,8.643702);
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
   stack->SetMaximum(3.948531e+07);
   
   TH1F *met_stack_3 = new TH1F("met_stack_3","stack",50,0,1000);
   met_stack_3->SetBinContent(1,25.76863);
   met_stack_3->SetBinContent(2,73.58934);
   met_stack_3->SetBinContent(3,79.15712);
   met_stack_3->SetBinContent(4,64.71008);
   met_stack_3->SetBinContent(5,62.02765);
   met_stack_3->SetBinContent(6,48.85378);
   met_stack_3->SetBinContent(7,19.13004);
   met_stack_3->SetBinContent(8,19.14253);
   met_stack_3->SetBinContent(9,13.89548);
   met_stack_3->SetBinContent(10,15.43272);
   met_stack_3->SetBinContent(11,8.183948);
   met_stack_3->SetBinContent(12,6.798627);
   met_stack_3->SetBinContent(13,1.215134);
   met_stack_3->SetBinContent(14,5.036261);
   met_stack_3->SetBinContent(15,0.3511492);
   met_stack_3->SetBinContent(16,8.126949);
   met_stack_3->SetBinContent(18,0.241979);
   met_stack_3->SetBinContent(19,0.8530282);
   met_stack_3->SetBinContent(20,0.010285);
   met_stack_3->SetBinContent(21,0.2215916);
   met_stack_3->SetBinContent(23,0.07511404);
   met_stack_3->SetBinContent(24,0.05621626);
   met_stack_3->SetBinContent(29,0.1229323);
   met_stack_3->SetBinContent(31,0.0001110206);
   met_stack_3->SetBinContent(34,0.1572778);
   met_stack_3->SetBinError(1,4.685228);
   met_stack_3->SetBinError(2,9.799874);
   met_stack_3->SetBinError(3,9.681161);
   met_stack_3->SetBinError(4,8.192555);
   met_stack_3->SetBinError(5,8.484447);
   met_stack_3->SetBinError(6,7.793167);
   met_stack_3->SetBinError(7,4.440005);
   met_stack_3->SetBinError(8,4.513918);
   met_stack_3->SetBinError(9,3.849441);
   met_stack_3->SetBinError(10,4.544251);
   met_stack_3->SetBinError(11,3.65586);
   met_stack_3->SetBinError(12,2.997941);
   met_stack_3->SetBinError(13,0.3317944);
   met_stack_3->SetBinError(14,2.93798);
   met_stack_3->SetBinError(15,0.1455125);
   met_stack_3->SetBinError(16,4.062234);
   met_stack_3->SetBinError(18,0.1476272);
   met_stack_3->SetBinError(19,0.5204329);
   met_stack_3->SetBinError(20,0.00741369);
   met_stack_3->SetBinError(21,0.1387833);
   met_stack_3->SetBinError(23,0.07511404);
   met_stack_3->SetBinError(24,0.05621626);
   met_stack_3->SetBinError(29,0.1229323);
   met_stack_3->SetBinError(31,0.0001110206);
   met_stack_3->SetBinError(34,0.1572778);
   met_stack_3->SetMinimum(0.001724668);
   met_stack_3->SetMaximum(1.15269e+08);
   met_stack_3->SetEntries(2901);
   met_stack_3->SetStats(0);
   met_stack_3->SetFillColor(4);
   met_stack_3->SetLineColor(4);
   met_stack_3->SetLineWidth(2);
   met_stack_3->SetMarkerColor(4);
   met_stack_3->SetMarkerStyle(21);
   met_stack_3->SetMarkerSize(0.8);
   met_stack_3->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_3->GetXaxis()->SetRange(1,36);
   met_stack_3->GetXaxis()->SetLabelFont(42);
   met_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_stack_3->GetXaxis()->SetLabelSize(0);
   met_stack_3->GetXaxis()->SetTitleSize(0);
   met_stack_3->GetXaxis()->SetTickLength(0.02);
   met_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_stack_3->GetXaxis()->SetTitleFont(42);
   met_stack_3->GetYaxis()->SetTitle("Events");
   met_stack_3->GetYaxis()->SetLabelFont(42);
   met_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_stack_3->GetYaxis()->SetLabelSize(0.035);
   met_stack_3->GetYaxis()->SetTitleSize(0.045);
   met_stack_3->GetYaxis()->SetTickLength(0.02);
   met_stack_3->GetYaxis()->SetTitleOffset(1.55);
   met_stack_3->GetYaxis()->SetTitleFont(42);
   met_stack_3->GetZaxis()->SetLabelFont(42);
   met_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_stack_3->GetZaxis()->SetLabelSize(0.035);
   met_stack_3->GetZaxis()->SetTitleSize(0.045);
   met_stack_3->GetZaxis()->SetTickLength(0.02);
   met_stack_3->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_3);
   
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,25.76863);
   met->SetBinContent(2,73.58934);
   met->SetBinContent(3,79.15712);
   met->SetBinContent(4,64.71008);
   met->SetBinContent(5,62.02765);
   met->SetBinContent(6,48.85378);
   met->SetBinContent(7,19.13004);
   met->SetBinContent(8,19.14253);
   met->SetBinContent(9,13.89548);
   met->SetBinContent(10,15.43272);
   met->SetBinContent(11,8.183948);
   met->SetBinContent(12,6.798627);
   met->SetBinContent(13,1.215134);
   met->SetBinContent(14,5.036261);
   met->SetBinContent(15,0.3511492);
   met->SetBinContent(16,8.126949);
   met->SetBinContent(18,0.241979);
   met->SetBinContent(19,0.8530282);
   met->SetBinContent(20,0.010285);
   met->SetBinContent(21,0.2215916);
   met->SetBinContent(23,0.07511404);
   met->SetBinContent(24,0.05621626);
   met->SetBinContent(29,0.1229323);
   met->SetBinContent(31,0.0001110206);
   met->SetBinContent(34,0.1572778);
   met->SetBinError(1,4.685228);
   met->SetBinError(2,9.799874);
   met->SetBinError(3,9.681161);
   met->SetBinError(4,8.192555);
   met->SetBinError(5,8.484447);
   met->SetBinError(6,7.793167);
   met->SetBinError(7,4.440005);
   met->SetBinError(8,4.513918);
   met->SetBinError(9,3.849441);
   met->SetBinError(10,4.544251);
   met->SetBinError(11,3.65586);
   met->SetBinError(12,2.997941);
   met->SetBinError(13,0.3317944);
   met->SetBinError(14,2.93798);
   met->SetBinError(15,0.1455125);
   met->SetBinError(16,4.062234);
   met->SetBinError(18,0.1476272);
   met->SetBinError(19,0.5204329);
   met->SetBinError(20,0.00741369);
   met->SetBinError(21,0.1387833);
   met->SetBinError(23,0.07511404);
   met->SetBinError(24,0.05621626);
   met->SetBinError(29,0.1229323);
   met->SetBinError(31,0.0001110206);
   met->SetBinError(34,0.1572778);
   met->SetMinimum(0.01);
   met->SetMaximum(3.903e+07);
   met->SetEntries(2901);
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
   met->SetBinContent(1,99.50502);
   met->SetBinContent(2,241.5773);
   met->SetBinContent(3,350.274);
   met->SetBinContent(4,404.6104);
   met->SetBinContent(5,437.2718);
   met->SetBinContent(6,371.2692);
   met->SetBinContent(7,268.5519);
   met->SetBinContent(8,212.4169);
   met->SetBinContent(9,137.4396);
   met->SetBinContent(10,92.1601);
   met->SetBinContent(11,75.37044);
   met->SetBinContent(12,38.61625);
   met->SetBinContent(13,24.46742);
   met->SetBinContent(14,11.60111);
   met->SetBinContent(15,15.81353);
   met->SetBinContent(16,10.21137);
   met->SetBinContent(17,8.575999);
   met->SetBinContent(18,2.62257);
   met->SetBinContent(19,4.24087);
   met->SetBinContent(20,3.8195);
   met->SetBinContent(21,3.272483);
   met->SetBinContent(22,1.572776);
   met->SetBinContent(23,0.1146758);
   met->SetBinContent(25,0.07905249);
   met->SetBinContent(26,0.2395484);
   met->SetBinContent(30,0.7983474);
   met->SetBinContent(31,1.446539);
   met->SetBinContent(32,0.8067076);
   met->SetBinError(1,6.234313);
   met->SetBinError(2,9.438258);
   met->SetBinError(3,11.7148);
   met->SetBinError(4,12.79994);
   met->SetBinError(5,13.72148);
   met->SetBinError(6,13.1497);
   met->SetBinError(7,11.12788);
   met->SetBinError(8,10.46237);
   met->SetBinError(9,8.459192);
   met->SetBinError(10,7.078728);
   met->SetBinError(11,6.421572);
   met->SetBinError(12,4.635486);
   met->SetBinError(13,3.60655);
   met->SetBinError(14,2.217815);
   met->SetBinError(15,3.46648);
   met->SetBinError(16,2.540365);
   met->SetBinError(17,2.307672);
   met->SetBinError(18,0.9951896);
   met->SetBinError(19,1.657603);
   met->SetBinError(20,1.64741);
   met->SetBinError(21,1.391105);
   met->SetBinError(22,0.9476904);
   met->SetBinError(23,0.1146758);
   met->SetBinError(25,0.07172253);
   met->SetBinError(26,0.1706238);
   met->SetBinError(30,0.7983473);
   met->SetBinError(31,1.023472);
   met->SetBinError(32,0.8067076);
   met->SetEntries(11519);
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
   met->SetBinContent(1,816.993);
   met->SetBinContent(2,1655.96);
   met->SetBinContent(3,1781.62);
   met->SetBinContent(4,1612.977);
   met->SetBinContent(5,1379.283);
   met->SetBinContent(6,1110.602);
   met->SetBinContent(7,799.0126);
   met->SetBinContent(8,570.2305);
   met->SetBinContent(9,351.652);
   met->SetBinContent(10,247.3467);
   met->SetBinContent(11,179.8015);
   met->SetBinContent(12,134.7825);
   met->SetBinContent(13,91.16518);
   met->SetBinContent(14,52.33995);
   met->SetBinContent(15,49.35824);
   met->SetBinContent(16,36.0476);
   met->SetBinContent(17,26.0914);
   met->SetBinContent(18,17.52787);
   met->SetBinContent(19,10.48698);
   met->SetBinContent(20,8.545177);
   met->SetBinContent(21,6.678276);
   met->SetBinContent(22,5.405735);
   met->SetBinContent(23,4.127453);
   met->SetBinContent(24,0.9305226);
   met->SetBinContent(25,1.722643);
   met->SetBinContent(26,0.7786085);
   met->SetBinContent(27,3.926711);
   met->SetBinContent(28,1.929655);
   met->SetBinContent(29,1.352622);
   met->SetBinContent(30,1.185711);
   met->SetBinContent(31,0.2946062);
   met->SetBinContent(32,0.1747916);
   met->SetBinContent(33,0.8212353);
   met->SetBinContent(34,0.8296096);
   met->SetBinContent(39,0.3541548);
   met->SetBinContent(44,1.195507);
   met->SetBinError(1,19.62968);
   met->SetBinError(2,27.43524);
   met->SetBinError(3,29.46542);
   met->SetBinError(4,27.57282);
   met->SetBinError(5,25.80894);
   met->SetBinError(6,23.87424);
   met->SetBinError(7,21.42151);
   met->SetBinError(8,18.39484);
   met->SetBinError(9,13.6313);
   met->SetBinError(10,11.7524);
   met->SetBinError(11,9.824982);
   met->SetBinError(12,8.744677);
   met->SetBinError(13,7.097429);
   met->SetBinError(14,4.978367);
   met->SetBinError(15,5.047308);
   met->SetBinError(16,4.306308);
   met->SetBinError(17,3.762849);
   met->SetBinError(18,3.052598);
   met->SetBinError(19,2.21583);
   met->SetBinError(20,2.018391);
   met->SetBinError(21,1.632897);
   met->SetBinError(22,1.685233);
   met->SetBinError(23,1.495049);
   met->SetBinError(24,0.5244444);
   met->SetBinError(25,0.6563939);
   met->SetBinError(26,0.4783788);
   met->SetBinError(27,1.357881);
   met->SetBinError(28,1.292137);
   met->SetBinError(29,0.7202439);
   met->SetBinError(30,1.185711);
   met->SetBinError(31,0.2946062);
   met->SetBinError(32,0.1747916);
   met->SetBinError(33,0.5819433);
   met->SetBinError(34,0.8296096);
   met->SetBinError(39,0.3541548);
   met->SetBinError(44,1.195507);
   met->SetEntries(44607);
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
   met->SetBinContent(1,121.9254);
   met->SetBinContent(2,246.2819);
   met->SetBinContent(3,255.2364);
   met->SetBinContent(4,247.6467);
   met->SetBinContent(5,235.9739);
   met->SetBinContent(6,195.4702);
   met->SetBinContent(7,146.8037);
   met->SetBinContent(8,103.6553);
   met->SetBinContent(9,73.68758);
   met->SetBinContent(10,52.39765);
   met->SetBinContent(11,40.19892);
   met->SetBinContent(12,29.48806);
   met->SetBinContent(13,22.95765);
   met->SetBinContent(14,16.25996);
   met->SetBinContent(15,11.23713);
   met->SetBinContent(16,8.614197);
   met->SetBinContent(17,6.609098);
   met->SetBinContent(18,5.04549);
   met->SetBinContent(19,3.481868);
   met->SetBinContent(20,3.427767);
   met->SetBinContent(21,2.379527);
   met->SetBinContent(22,1.706063);
   met->SetBinContent(23,1.329792);
   met->SetBinContent(24,1.094949);
   met->SetBinContent(25,0.7434443);
   met->SetBinContent(26,0.8006656);
   met->SetBinContent(27,0.4770178);
   met->SetBinContent(28,0.5422496);
   met->SetBinContent(29,0.3912784);
   met->SetBinContent(30,0.3237817);
   met->SetBinContent(31,0.1752834);
   met->SetBinContent(32,0.0811387);
   met->SetBinContent(33,0.1641919);
   met->SetBinContent(34,0.1075854);
   met->SetBinContent(35,0.04280389);
   met->SetBinContent(36,0.0471363);
   met->SetBinContent(37,0.02730132);
   met->SetBinContent(38,0.0647039);
   met->SetBinContent(39,0.01977764);
   met->SetBinContent(40,0.004744565);
   met->SetBinContent(41,0.01549172);
   met->SetBinContent(42,0.01991084);
   met->SetBinContent(44,0.01935949);
   met->SetBinContent(49,0.01973596);
   met->SetBinError(1,1.382444);
   met->SetBinError(2,1.9642);
   met->SetBinError(3,1.998535);
   met->SetBinError(4,1.973448);
   met->SetBinError(5,1.958419);
   met->SetBinError(6,1.845422);
   met->SetBinError(7,1.6524);
   met->SetBinError(8,1.407344);
   met->SetBinError(9,1.193489);
   met->SetBinError(10,1.009184);
   met->SetBinError(11,0.8873086);
   met->SetBinError(12,0.7589107);
   met->SetBinError(13,0.6751265);
   met->SetBinError(14,0.5697493);
   met->SetBinError(15,0.471886);
   met->SetBinError(16,0.4174122);
   met->SetBinError(17,0.3637796);
   met->SetBinError(18,0.3158789);
   met->SetBinError(19,0.2654631);
   met->SetBinError(20,0.264904);
   met->SetBinError(21,0.2158103);
   met->SetBinError(22,0.1851887);
   met->SetBinError(23,0.1648783);
   met->SetBinError(24,0.148137);
   met->SetBinError(25,0.1236725);
   met->SetBinError(26,0.1233411);
   met->SetBinError(27,0.1023565);
   met->SetBinError(28,0.1043406);
   met->SetBinError(29,0.09044792);
   met->SetBinError(30,0.08144972);
   met->SetBinError(31,0.05840197);
   met->SetBinError(32,0.04059257);
   met->SetBinError(33,0.05565328);
   met->SetBinError(34,0.04814016);
   met->SetBinError(35,0.02591825);
   met->SetBinError(36,0.02780268);
   met->SetBinError(37,0.02042186);
   met->SetBinError(38,0.04191921);
   met->SetBinError(39,0.01977763);
   met->SetBinError(40,0.004744565);
   met->SetBinError(41,0.01549172);
   met->SetBinError(42,0.01991084);
   met->SetBinError(44,0.01935949);
   met->SetBinError(49,0.01973596);
   met->SetEntries(146745);
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
   met->SetBinContent(5,0.03535233);
   met->SetBinContent(6,0.05156378);
   met->SetBinError(5,0.03535234);
   met->SetBinError(6,0.05156378);
   met->SetEntries(2);
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
   met->SetBinContent(1,183.383);
   met->SetBinContent(2,269.5407);
   met->SetBinContent(3,153.3767);
   met->SetBinContent(4,84.01311);
   met->SetBinContent(5,61.15523);
   met->SetBinContent(6,40.86077);
   met->SetBinContent(7,25.09273);
   met->SetBinContent(8,17.56581);
   met->SetBinContent(9,10.00901);
   met->SetBinContent(10,5.768223);
   met->SetBinContent(11,4.255061);
   met->SetBinContent(12,2.330396);
   met->SetBinContent(13,1.137427);
   met->SetBinContent(14,0.87286);
   met->SetBinContent(15,1.021613);
   met->SetBinContent(16,0.549248);
   met->SetBinContent(17,0.4501579);
   met->SetBinContent(18,0.204596);
   met->SetBinContent(19,0.1114839);
   met->SetBinContent(20,0.0008211661);
   met->SetBinContent(23,0.1021971);
   met->SetBinContent(33,0.08671377);
   met->SetBinContent(37,0.04320039);
   met->SetBinError(1,3.610281);
   met->SetBinError(2,4.38355);
   met->SetBinError(3,3.29056);
   met->SetBinError(4,2.64151);
   met->SetBinError(5,2.294267);
   met->SetBinError(6,2.008381);
   met->SetBinError(7,1.566521);
   met->SetBinError(8,1.295833);
   met->SetBinError(9,1.070811);
   met->SetBinError(10,0.7318687);
   met->SetBinError(11,0.6711517);
   met->SetBinError(12,0.4507701);
   met->SetBinError(13,0.2891126);
   met->SetBinError(14,0.2719494);
   met->SetBinError(15,0.2806647);
   met->SetBinError(16,0.1895779);
   met->SetBinError(17,0.2033494);
   met->SetBinError(18,0.1341116);
   met->SetBinError(19,0.07622522);
   met->SetBinError(20,0.0008211661);
   met->SetBinError(23,0.1021971);
   met->SetBinError(33,0.08671377);
   met->SetBinError(37,0.04320039);
   met->SetEntries(20514);
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
   met->SetBinContent(1,13.86087);
   met->SetBinContent(2,19.96141);
   met->SetBinContent(3,12.68963);
   met->SetBinContent(4,11.85626);
   met->SetBinContent(5,12.04426);
   met->SetBinContent(6,14.6948);
   met->SetBinContent(7,14.65066);
   met->SetBinContent(8,12.4344);
   met->SetBinContent(9,8.520425);
   met->SetBinContent(10,6.416634);
   met->SetBinContent(11,3.837944);
   met->SetBinContent(12,2.890993);
   met->SetBinContent(13,2.124654);
   met->SetBinContent(14,1.65784);
   met->SetBinContent(15,0.9999864);
   met->SetBinContent(16,0.6543568);
   met->SetBinContent(17,0.5643705);
   met->SetBinContent(18,0.2774135);
   met->SetBinContent(19,0.307528);
   met->SetBinContent(20,0.1778407);
   met->SetBinContent(21,0.1157972);
   met->SetBinContent(22,0.1185182);
   met->SetBinContent(23,0.1274022);
   met->SetBinContent(24,0.09049734);
   met->SetBinContent(25,0.0660705);
   met->SetBinContent(26,0.01554903);
   met->SetBinContent(27,0.02352851);
   met->SetBinContent(28,0.02792248);
   met->SetBinContent(29,0.04062193);
   met->SetBinContent(30,0.01647214);
   met->SetBinContent(31,0.02722583);
   met->SetBinContent(32,0.01297372);
   met->SetBinContent(34,0.0002268055);
   met->SetBinContent(35,0.01620362);
   met->SetBinContent(36,0.004102889);
   met->SetBinContent(44,0.01350174);
   met->SetBinContent(51,0.000444817);
   met->SetBinError(1,0.2663637);
   met->SetBinError(2,0.3279464);
   met->SetBinError(3,0.2628092);
   met->SetBinError(4,0.2654376);
   met->SetBinError(5,0.2527722);
   met->SetBinError(6,0.3311898);
   met->SetBinError(7,0.3809699);
   met->SetBinError(8,0.3697041);
   met->SetBinError(9,0.3064664);
   met->SetBinError(10,0.2682258);
   met->SetBinError(11,0.2078901);
   met->SetBinError(12,0.1784029);
   met->SetBinError(13,0.1532593);
   met->SetBinError(14,0.1378246);
   met->SetBinError(15,0.1089523);
   met->SetBinError(16,0.08965402);
   met->SetBinError(17,0.07944957);
   met->SetBinError(18,0.05446572);
   met->SetBinError(19,0.05935427);
   met->SetBinError(20,0.04521319);
   met->SetBinError(21,0.03666518);
   met->SetBinError(22,0.03827187);
   met->SetBinError(23,0.04081536);
   met->SetBinError(24,0.03170696);
   met->SetBinError(25,0.02867571);
   met->SetBinError(26,0.01327563);
   met->SetBinError(27,0.01480342);
   met->SetBinError(28,0.0176219);
   met->SetBinError(29,0.02345308);
   met->SetBinError(30,0.01520306);
   met->SetBinError(31,0.01604742);
   met->SetBinError(32,0.01297372);
   met->SetBinError(34,0.0002268055);
   met->SetBinError(35,0.0136433);
   met->SetBinError(36,0.004102889);
   met->SetBinError(44,0.01350174);
   met->SetBinError(51,0.000444817);
   met->SetEntries(28395);
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
   met->SetBinContent(1,1335);
   met->SetBinContent(2,2602);
   met->SetBinContent(3,2569);
   met->SetBinContent(4,2258);
   met->SetBinContent(5,1981);
   met->SetBinContent(6,1507);
   met->SetBinContent(7,1005);
   met->SetBinContent(8,687);
   met->SetBinContent(9,466);
   met->SetBinContent(10,288);
   met->SetBinContent(11,210);
   met->SetBinContent(12,149);
   met->SetBinContent(13,118);
   met->SetBinContent(14,85);
   met->SetBinContent(15,55);
   met->SetBinContent(16,45);
   met->SetBinContent(17,21);
   met->SetBinContent(18,14);
   met->SetBinContent(19,11);
   met->SetBinContent(20,5);
   met->SetBinContent(21,7);
   met->SetBinContent(22,5);
   met->SetBinContent(23,4);
   met->SetBinContent(24,1);
   met->SetBinContent(25,2);
   met->SetBinContent(27,1);
   met->SetBinContent(31,1);
   met->SetBinContent(32,1);
   met->SetBinError(1,36.53765);
   met->SetBinError(2,51.0098);
   met->SetBinError(3,50.6853);
   met->SetBinError(4,47.51842);
   met->SetBinError(5,44.50843);
   met->SetBinError(6,38.8201);
   met->SetBinError(7,31.70173);
   met->SetBinError(8,26.21068);
   met->SetBinError(9,21.58703);
   met->SetBinError(10,16.97056);
   met->SetBinError(11,14.49138);
   met->SetBinError(12,12.20656);
   met->SetBinError(13,10.86278);
   met->SetBinError(14,9.219544);
   met->SetBinError(15,7.416198);
   met->SetBinError(16,6.708204);
   met->SetBinError(17,4.582576);
   met->SetBinError(18,3.741657);
   met->SetBinError(19,3.316625);
   met->SetBinError(20,2.236068);
   met->SetBinError(21,2.645751);
   met->SetBinError(22,2.236068);
   met->SetBinError(23,2);
   met->SetBinError(24,1);
   met->SetBinError(25,1.414214);
   met->SetBinError(27,1);
   met->SetBinError(31,1);
   met->SetBinError(32,1);
   met->SetEntries(15433);
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
   TLatex *   tex = new TLatex(0.95,0.965,"JetPair");
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
   met->SetBinContent(1,1.080388);
   met->SetBinContent(2,1.06932);
   met->SetBinContent(3,1.006189);
   met->SetBinContent(4,0.9563324);
   met->SetBinContent(5,0.9319006);
   met->SetBinContent(6,0.869616);
   met->SetBinContent(7,0.8013641);
   met->SetBinContent(8,0.749752);
   met->SetBinContent(9,0.8016396);
   met->SetBinContent(10,0.7127137);
   met->SetBinContent(11,0.6920097);
   met->SetBinContent(12,0.7159737);
   met->SetBinContent(13,0.8318511);
   met->SetBinContent(14,1.027417);
   met->SetBinContent(15,0.7012578);
   met->SetBinContent(16,0.8024713);
   met->SetBinContent(17,0.4965593);
   met->SetBinContent(18,0.545215);
   met->SetBinContent(19,0.5904857);
   met->SetBinContent(20,0.3130654);
   met->SetBinContent(21,0.562426);
   met->SetBinContent(22,0.5679823);
   met->SetBinContent(23,0.6894745);
   met->SetBinContent(24,0.4725968);
   met->SetBinContent(25,0.7659283);
   met->SetBinContent(27,0.2258735);
   met->SetBinContent(31,0.5144947);
   met->SetBinContent(32,0.9297037);
   met->SetBinError(1,0.03478639);
   met->SetBinError(2,0.02462691);
   met->SetBinError(3,0.0235065);
   met->SetBinError(4,0.0236312);
   met->SetBinError(5,0.02458334);
   met->SetBinError(6,0.02628283);
   met->SetBinError(7,0.02964946);
   met->SetBinError(8,0.03347544);
   met->SetBinError(9,0.04328439);
   met->SetBinError(10,0.04852168);
   met->SetBinError(11,0.05480355);
   met->SetBinError(12,0.06789285);
   met->SetBinError(13,0.08979507);
   met->SetBinError(14,0.130629);
   met->SetBinError(15,0.1093774);
   met->SetBinError(16,0.1395493);
   met->SetBinError(17,0.1202184);
   met->SetBinError(18,0.1610427);
   met->SetBinError(19,0.1986746);
   met->SetBinError(20,0.1491237);
   met->SetBinError(21,0.2338448);
   met->SetBinError(22,0.2832511);
   met->SetBinError(23,0.3887849);
   met->SetBinError(24,0.4880705);
   met->SetBinError(25,0.5763873);
   met->SetBinError(27,0.2363177);
   met->SetBinError(31,0.58689);
   met->SetBinError(32,1.172487);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(148.5414);
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
