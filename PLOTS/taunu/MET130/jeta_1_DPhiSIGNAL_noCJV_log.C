{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:19 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.834287,5.632911,5.939782);
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
   stack->SetMaximum(130817.4);
   
   TH1F *jeta_1_stack_8 = new TH1F("jeta_1_stack_8","stack",20,-5,5);
   jeta_1_stack_8->SetBinContent(5,0.1148367);
   jeta_1_stack_8->SetBinContent(12,2.24575);
   jeta_1_stack_8->SetBinContent(13,0.112427);
   jeta_1_stack_8->SetBinContent(15,0.03091307);
   jeta_1_stack_8->SetBinContent(18,0.1243847);
   jeta_1_stack_8->SetBinError(5,0.1148367);
   jeta_1_stack_8->SetBinError(12,2.24575);
   jeta_1_stack_8->SetBinError(13,0.112427);
   jeta_1_stack_8->SetBinError(15,0.02798039);
   jeta_1_stack_8->SetBinError(18,0.1243847);
   jeta_1_stack_8->SetMinimum(0.002193785);
   jeta_1_stack_8->SetMaximum(317014.2);
   jeta_1_stack_8->SetEntries(6);
   jeta_1_stack_8->SetStats(0);
   jeta_1_stack_8->SetFillColor(4);
   jeta_1_stack_8->SetLineColor(4);
   jeta_1_stack_8->SetLineWidth(2);
   jeta_1_stack_8->SetMarkerColor(4);
   jeta_1_stack_8->SetMarkerStyle(21);
   jeta_1_stack_8->SetMarkerSize(0.8);
   jeta_1_stack_8->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1_stack_8->GetXaxis()->SetLabelFont(42);
   jeta_1_stack_8->GetXaxis()->SetLabelOffset(0.007);
   jeta_1_stack_8->GetXaxis()->SetLabelSize(0);
   jeta_1_stack_8->GetXaxis()->SetTitleSize(0);
   jeta_1_stack_8->GetXaxis()->SetTickLength(0.02);
   jeta_1_stack_8->GetXaxis()->SetTitleOffset(0.9);
   jeta_1_stack_8->GetXaxis()->SetTitleFont(42);
   jeta_1_stack_8->GetYaxis()->SetTitle("Events");
   jeta_1_stack_8->GetYaxis()->SetLabelFont(42);
   jeta_1_stack_8->GetYaxis()->SetLabelOffset(0.007);
   jeta_1_stack_8->GetYaxis()->SetLabelSize(0.035);
   jeta_1_stack_8->GetYaxis()->SetTitleSize(0.045);
   jeta_1_stack_8->GetYaxis()->SetTickLength(0.02);
   jeta_1_stack_8->GetYaxis()->SetTitleOffset(1.55);
   jeta_1_stack_8->GetYaxis()->SetTitleFont(42);
   jeta_1_stack_8->GetZaxis()->SetLabelFont(42);
   jeta_1_stack_8->GetZaxis()->SetLabelOffset(0.007);
   jeta_1_stack_8->GetZaxis()->SetLabelSize(0.035);
   jeta_1_stack_8->GetZaxis()->SetTitleSize(0.045);
   jeta_1_stack_8->GetZaxis()->SetTickLength(0.02);
   jeta_1_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_1_stack_8);
   
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.1148367);
   jeta_1->SetBinContent(12,2.24575);
   jeta_1->SetBinContent(13,0.112427);
   jeta_1->SetBinContent(15,0.03091307);
   jeta_1->SetBinContent(18,0.1243847);
   jeta_1->SetBinError(5,0.1148367);
   jeta_1->SetBinError(12,2.24575);
   jeta_1->SetBinError(13,0.112427);
   jeta_1->SetBinError(15,0.02798039);
   jeta_1->SetBinError(18,0.1243847);
   jeta_1->SetMinimum(0.01);
   jeta_1->SetMaximum(84303.45);
   jeta_1->SetEntries(6);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(4);
   jeta_1->SetLineColor(4);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(4);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0);
   jeta_1->GetXaxis()->SetTitleSize(0);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Events");
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"HIST");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(4,0.061888);
   jeta_1->SetBinContent(5,1.112378);
   jeta_1->SetBinContent(6,0.7787783);
   jeta_1->SetBinContent(7,2.309801);
   jeta_1->SetBinContent(12,0.2285386);
   jeta_1->SetBinContent(13,0.6269594);
   jeta_1->SetBinContent(14,0.9281265);
   jeta_1->SetBinContent(15,1.479276);
   jeta_1->SetBinContent(16,1.780489);
   jeta_1->SetBinContent(18,0.2455935);
   jeta_1->SetBinError(4,0.061888);
   jeta_1->SetBinError(5,0.8231818);
   jeta_1->SetBinError(6,0.5668543);
   jeta_1->SetBinError(7,1.336631);
   jeta_1->SetBinError(12,0.2285386);
   jeta_1->SetBinError(13,0.6269594);
   jeta_1->SetBinError(14,0.680021);
   jeta_1->SetBinError(15,0.8587363);
   jeta_1->SetBinError(16,0.9485715);
   jeta_1->SetBinError(18,0.2455935);
   jeta_1->SetEntries(22);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(5);
   jeta_1->SetLineColor(5);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(5);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,0.6204583);
   jeta_1->SetBinContent(5,2.138824);
   jeta_1->SetBinContent(6,3.284507);
   jeta_1->SetBinContent(7,1.632049);
   jeta_1->SetBinContent(8,0.797843);
   jeta_1->SetBinContent(9,0.4004074);
   jeta_1->SetBinContent(12,0.2869671);
   jeta_1->SetBinContent(13,1.630445);
   jeta_1->SetBinContent(14,0.4483338);
   jeta_1->SetBinContent(15,5.62023);
   jeta_1->SetBinContent(16,3.520514);
   jeta_1->SetBinContent(18,0.05684342);
   jeta_1->SetBinError(3,0.6204583);
   jeta_1->SetBinError(5,1.000715);
   jeta_1->SetBinError(6,1.544944);
   jeta_1->SetBinError(7,0.9886522);
   jeta_1->SetBinError(8,0.5640274);
   jeta_1->SetBinError(9,0.4004074);
   jeta_1->SetBinError(12,0.2869671);
   jeta_1->SetBinError(13,0.771355);
   jeta_1->SetBinError(14,0.4462256);
   jeta_1->SetBinError(15,2.052238);
   jeta_1->SetBinError(16,1.631681);
   jeta_1->SetBinError(18,0.05684342);
   jeta_1->SetEntries(44);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(6);
   jeta_1->SetLineColor(6);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(6);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,0.04139759);
   jeta_1->SetBinContent(4,0.233688);
   jeta_1->SetBinContent(5,1.208821);
   jeta_1->SetBinContent(6,1.360218);
   jeta_1->SetBinContent(7,1.208157);
   jeta_1->SetBinContent(8,0.4461866);
   jeta_1->SetBinContent(9,0.1867325);
   jeta_1->SetBinContent(12,0.1157518);
   jeta_1->SetBinContent(13,0.5443763);
   jeta_1->SetBinContent(14,1.011573);
   jeta_1->SetBinContent(15,1.421829);
   jeta_1->SetBinContent(16,1.477916);
   jeta_1->SetBinContent(17,0.1461763);
   jeta_1->SetBinContent(18,0.0547694);
   jeta_1->SetBinError(3,0.02929208);
   jeta_1->SetBinError(4,0.07643849);
   jeta_1->SetBinError(5,0.1604111);
   jeta_1->SetBinError(6,0.1665086);
   jeta_1->SetBinError(7,0.1570745);
   jeta_1->SetBinError(8,0.0972283);
   jeta_1->SetBinError(9,0.06726509);
   jeta_1->SetBinError(12,0.04502385);
   jeta_1->SetBinError(13,0.1084308);
   jeta_1->SetBinError(14,0.1423964);
   jeta_1->SetBinError(15,0.1756575);
   jeta_1->SetBinError(16,0.1750137);
   jeta_1->SetBinError(17,0.05432117);
   jeta_1->SetBinError(18,0.03261335);
   jeta_1->SetEntries(522);
   jeta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jeta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jeta_1->SetLineColor(ci);
   jeta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jeta_1->SetMarkerColor(ci);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.3579102);
   jeta_1->SetBinContent(6,7.392823e-05);
   jeta_1->SetBinContent(14,0.1907149);
   jeta_1->SetBinContent(15,0.1106946);
   jeta_1->SetBinContent(16,0.141974);
   jeta_1->SetBinContent(18,0.7346147);
   jeta_1->SetBinError(5,0.2246579);
   jeta_1->SetBinError(6,7.392823e-05);
   jeta_1->SetBinError(14,0.1907149);
   jeta_1->SetBinError(15,0.1106946);
   jeta_1->SetBinError(16,0.141974);
   jeta_1->SetBinError(18,0.7346147);
   jeta_1->SetEntries(8);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.09354786);
   jeta_1->SetBinContent(6,0.1340863);
   jeta_1->SetBinContent(7,0.1087172);
   jeta_1->SetBinContent(13,0.02105234);
   jeta_1->SetBinContent(14,0.3013391);
   jeta_1->SetBinError(5,0.09354786);
   jeta_1->SetBinError(6,0.1340863);
   jeta_1->SetBinError(7,0.1087172);
   jeta_1->SetBinError(13,0.02105234);
   jeta_1->SetBinError(14,0.1592249);
   jeta_1->SetEntries(8);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.03999618);
   jeta_1->SetBinContent(6,0.02233354);
   jeta_1->SetBinContent(7,0.05316385);
   jeta_1->SetBinContent(8,0.03473975);
   jeta_1->SetBinContent(9,0.002891878);
   jeta_1->SetBinContent(13,0.02137167);
   jeta_1->SetBinContent(14,0.02836761);
   jeta_1->SetBinContent(15,0.05822005);
   jeta_1->SetBinContent(16,0.07389866);
   jeta_1->SetBinError(5,0.01534824);
   jeta_1->SetBinError(6,0.01161584);
   jeta_1->SetBinError(7,0.01959328);
   jeta_1->SetBinError(8,0.01565614);
   jeta_1->SetBinError(9,0.002891878);
   jeta_1->SetBinError(13,0.01368904);
   jeta_1->SetBinError(14,0.01289451);
   jeta_1->SetBinError(15,0.01916459);
   jeta_1->SetBinError(16,0.02390856);
   jeta_1->SetEntries(60);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   stack->Draw("hist");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,4);
   jeta_1->SetBinContent(6,5);
   jeta_1->SetBinContent(7,2);
   jeta_1->SetBinContent(8,3);
   jeta_1->SetBinContent(9,1);
   jeta_1->SetBinContent(12,1);
   jeta_1->SetBinContent(13,1);
   jeta_1->SetBinContent(14,2);
   jeta_1->SetBinContent(15,5);
   jeta_1->SetBinContent(16,5);
   jeta_1->SetBinContent(17,3);
   jeta_1->SetBinError(5,2);
   jeta_1->SetBinError(6,2.236068);
   jeta_1->SetBinError(7,1.414214);
   jeta_1->SetBinError(8,1.732051);
   jeta_1->SetBinError(9,1);
   jeta_1->SetBinError(12,1);
   jeta_1->SetBinError(13,1);
   jeta_1->SetBinError(14,1.414214);
   jeta_1->SetBinError(15,2.236068);
   jeta_1->SetBinError(16,2.236068);
   jeta_1->SetBinError(17,1.732051);
   jeta_1->SetEntries(32);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(1.3);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEPE1");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(15,0.3577591);
   jeta_1->SetBinContent(16,0.252451);
   jeta_1->SetBinError(15,0.3577591);
   jeta_1->SetBinError(16,0.252451);
   jeta_1->SetEntries(2);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineStyle(2);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_noCJV");
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
   TLegendEntry *entry=leg->AddEntry("jeta_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jeta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jeta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Dibosons","f");
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
   lower->Range(-7.025316,-0.653951,5.632911,2.070845);
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
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.8078398);
   jeta_1->SetBinContent(6,0.8960579);
   jeta_1->SetBinContent(7,0.3765139);
   jeta_1->SetBinContent(8,2.346005);
   jeta_1->SetBinContent(9,1.694824);
   jeta_1->SetBinContent(12,1.58414);
   jeta_1->SetBinContent(13,0.3515921);
   jeta_1->SetBinContent(14,0.6876503);
   jeta_1->SetBinContent(15,0.5753574);
   jeta_1->SetBinContent(16,0.7148175);
   jeta_1->SetBinContent(17,20.52316);
   jeta_1->SetBinError(5,0.4583804);
   jeta_1->SetBinError(6,0.4812507);
   jeta_1->SetBinError(7,0.2914679);
   jeta_1->SetBinError(8,1.714041);
   jeta_1->SetBinError(9,2.057342);
   jeta_1->SetBinError(12,1.8357);
   jeta_1->SetBinError(13,0.3726997);
   jeta_1->SetBinError(14,0.5272617);
   jeta_1->SetBinError(15,0.2968025);
   jeta_1->SetBinError(16,0.3740725);
   jeta_1->SetBinError(17,14.09136);
   jeta_1->SetMinimum(0);
   jeta_1->SetMaximum(2);
   jeta_1->SetEntries(4.440724);
   jeta_1->SetStats(0);
   jeta_1->SetFillStyle(0);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.1);
   jeta_1->GetXaxis()->SetTitleSize(0.12);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Data/MC");
   jeta_1->GetYaxis()->SetNdivisions(505);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.1);
   jeta_1->GetYaxis()->SetTitleSize(0.12);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(0.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
