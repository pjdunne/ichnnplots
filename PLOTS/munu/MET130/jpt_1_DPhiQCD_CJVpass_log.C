{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:18 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.897809,1063.291,6.95159);
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
   stack->SetMaximum(1103371);
   
   TH1F *jpt_1_stack_15 = new TH1F("jpt_1_stack_15","stack",25,0,1000);
   jpt_1_stack_15->SetBinContent(5,1.761445);
   jpt_1_stack_15->SetBinContent(6,0.3893535);
   jpt_1_stack_15->SetBinContent(7,5.765154);
   jpt_1_stack_15->SetBinContent(9,0.07443057);
   jpt_1_stack_15->SetBinError(5,1.664778);
   jpt_1_stack_15->SetBinError(6,0.1876447);
   jpt_1_stack_15->SetBinError(7,3.950199);
   jpt_1_stack_15->SetBinError(9,0.07443057);
   jpt_1_stack_15->SetMinimum(0.001991492);
   jpt_1_stack_15->SetMaximum(2878192);
   jpt_1_stack_15->SetEntries(14);
   jpt_1_stack_15->SetStats(0);
   jpt_1_stack_15->SetFillColor(4);
   jpt_1_stack_15->SetLineColor(4);
   jpt_1_stack_15->SetLineWidth(2);
   jpt_1_stack_15->SetMarkerColor(4);
   jpt_1_stack_15->SetMarkerStyle(21);
   jpt_1_stack_15->SetMarkerSize(0.8);
   jpt_1_stack_15->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_15->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_15->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_15->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_15->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_15->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_15->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_15->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_15->GetYaxis()->SetTitle("Events");
   jpt_1_stack_15->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_15->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_15->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_15->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_15->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_15->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_15->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_15->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_15->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_15->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_15->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_15->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_15);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(5,1.761445);
   jpt_1->SetBinContent(6,0.3893535);
   jpt_1->SetBinContent(7,5.765154);
   jpt_1->SetBinContent(9,0.07443057);
   jpt_1->SetBinError(5,1.664778);
   jpt_1->SetBinError(6,0.1876447);
   jpt_1->SetBinError(7,3.950199);
   jpt_1->SetBinError(9,0.07443057);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(720000);
   jpt_1->SetEntries(14);
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
   jpt_1->SetBinContent(4,0.6987796);
   jpt_1->SetBinContent(5,1.06576);
   jpt_1->SetBinContent(6,2.854749);
   jpt_1->SetBinContent(7,2.092643);
   jpt_1->SetBinContent(8,0.4266581);
   jpt_1->SetBinContent(10,0.6049064);
   jpt_1->SetBinError(4,0.6987796);
   jpt_1->SetBinError(5,0.630666);
   jpt_1->SetBinError(6,1.269225);
   jpt_1->SetBinError(7,0.8062136);
   jpt_1->SetBinError(8,0.3336238);
   jpt_1->SetBinError(10,0.6049064);
   jpt_1->SetEntries(21);
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
   jpt_1->SetBinContent(3,3.481171);
   jpt_1->SetBinContent(4,12.79992);
   jpt_1->SetBinContent(5,26.63467);
   jpt_1->SetBinContent(6,43.88577);
   jpt_1->SetBinContent(7,37.78209);
   jpt_1->SetBinContent(8,16.39013);
   jpt_1->SetBinContent(9,5.752131);
   jpt_1->SetBinContent(10,3.061936);
   jpt_1->SetBinContent(11,2.632008);
   jpt_1->SetBinContent(12,1.212905);
   jpt_1->SetBinError(3,2.717813);
   jpt_1->SetBinError(4,5.023762);
   jpt_1->SetBinError(5,4.525302);
   jpt_1->SetBinError(6,6.247138);
   jpt_1->SetBinError(7,5.905359);
   jpt_1->SetBinError(8,3.732648);
   jpt_1->SetBinError(9,2.262062);
   jpt_1->SetBinError(10,1.452471);
   jpt_1->SetBinError(11,1.402619);
   jpt_1->SetBinError(12,0.9310519);
   jpt_1->SetEntries(234);
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
   jpt_1->SetBinContent(3,0.03226241);
   jpt_1->SetBinContent(4,1.356639);
   jpt_1->SetBinContent(5,10.39769);
   jpt_1->SetBinContent(6,24.36118);
   jpt_1->SetBinContent(7,21.29842);
   jpt_1->SetBinContent(8,12.94362);
   jpt_1->SetBinContent(9,6.78414);
   jpt_1->SetBinContent(10,3.495154);
   jpt_1->SetBinContent(11,1.714404);
   jpt_1->SetBinContent(12,1.057429);
   jpt_1->SetBinContent(13,0.5183805);
   jpt_1->SetBinContent(14,0.2467331);
   jpt_1->SetBinContent(15,0.1205616);
   jpt_1->SetBinContent(16,0.1757057);
   jpt_1->SetBinContent(17,0.1425179);
   jpt_1->SetBinContent(18,0.07034925);
   jpt_1->SetBinContent(19,0.01099373);
   jpt_1->SetBinContent(20,0.01814414);
   jpt_1->SetBinContent(22,0.0202262);
   jpt_1->SetBinContent(26,0.06566044);
   jpt_1->SetBinError(3,0.03199019);
   jpt_1->SetBinError(4,0.1583079);
   jpt_1->SetBinError(5,0.4405386);
   jpt_1->SetBinError(6,0.6944781);
   jpt_1->SetBinError(7,0.6553885);
   jpt_1->SetBinError(8,0.5186662);
   jpt_1->SetBinError(9,0.3740869);
   jpt_1->SetBinError(10,0.2655536);
   jpt_1->SetBinError(11,0.1876251);
   jpt_1->SetBinError(12,0.1487553);
   jpt_1->SetBinError(13,0.1044068);
   jpt_1->SetBinError(14,0.07247202);
   jpt_1->SetBinError(15,0.04741938);
   jpt_1->SetBinError(16,0.0588062);
   jpt_1->SetBinError(17,0.05185905);
   jpt_1->SetBinError(18,0.03628526);
   jpt_1->SetBinError(19,0.01099373);
   jpt_1->SetBinError(20,0.01814414);
   jpt_1->SetBinError(22,0.0202262);
   jpt_1->SetBinError(26,0.03820336);
   jpt_1->SetEntries(4914);
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
   jpt_1->SetBinContent(4,0.3013733);
   jpt_1->SetBinContent(5,1.087565);
   jpt_1->SetBinContent(6,1.144607);
   jpt_1->SetBinContent(7,1.238522);
   jpt_1->SetBinContent(8,0.8888652);
   jpt_1->SetBinContent(9,0.2810724);
   jpt_1->SetBinContent(10,0.2771991);
   jpt_1->SetBinContent(11,0.2531134);
   jpt_1->SetBinError(4,0.1732259);
   jpt_1->SetBinError(5,0.4125426);
   jpt_1->SetBinError(6,0.4065325);
   jpt_1->SetBinError(7,0.4112377);
   jpt_1->SetBinError(8,0.3752945);
   jpt_1->SetBinError(9,0.2034514);
   jpt_1->SetBinError(10,0.162855);
   jpt_1->SetBinError(11,0.2036008);
   jpt_1->SetEntries(53);
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
   jpt_1->SetBinContent(4,0.0925629);
   jpt_1->SetBinContent(5,0.5492557);
   jpt_1->SetBinContent(6,0.9224238);
   jpt_1->SetBinContent(7,0.9303108);
   jpt_1->SetBinContent(8,0.7083107);
   jpt_1->SetBinContent(9,0.2830302);
   jpt_1->SetBinContent(10,0.125025);
   jpt_1->SetBinContent(11,0.04626341);
   jpt_1->SetBinContent(12,0.04747956);
   jpt_1->SetBinContent(13,0.01652309);
   jpt_1->SetBinContent(14,0.02138859);
   jpt_1->SetBinError(4,0.02959166);
   jpt_1->SetBinError(5,0.07303937);
   jpt_1->SetBinError(6,0.09827065);
   jpt_1->SetBinError(7,0.09618661);
   jpt_1->SetBinError(8,0.08482808);
   jpt_1->SetBinError(9,0.05597249);
   jpt_1->SetBinError(10,0.03373456);
   jpt_1->SetBinError(11,0.02445802);
   jpt_1->SetBinError(12,0.02249979);
   jpt_1->SetBinError(13,0.01228371);
   jpt_1->SetBinError(14,0.01286076);
   jpt_1->SetEntries(487);
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
   jpt_1->SetBinContent(4,4);
   jpt_1->SetBinContent(5,29);
   jpt_1->SetBinContent(6,48);
   jpt_1->SetBinContent(7,46);
   jpt_1->SetBinContent(8,27);
   jpt_1->SetBinContent(9,9);
   jpt_1->SetBinContent(10,10);
   jpt_1->SetBinContent(11,1);
   jpt_1->SetBinContent(12,1);
   jpt_1->SetBinContent(13,1);
   jpt_1->SetBinError(4,2);
   jpt_1->SetBinError(5,5.385165);
   jpt_1->SetBinError(6,6.928203);
   jpt_1->SetBinError(7,6.78233);
   jpt_1->SetBinError(8,5.196152);
   jpt_1->SetBinError(9,3);
   jpt_1->SetBinError(10,3.162278);
   jpt_1->SetBinError(11,1);
   jpt_1->SetBinError(12,1);
   jpt_1->SetBinError(13,1);
   jpt_1->SetEntries(176);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVpass");
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
   jpt_1->SetBinContent(4,0.2623075);
   jpt_1->SetBinContent(5,0.7298363);
   jpt_1->SetBinContent(6,0.656018);
   jpt_1->SetBinContent(7,0.7262167);
   jpt_1->SetBinContent(8,0.8610356);
   jpt_1->SetBinContent(9,0.6870033);
   jpt_1->SetBinContent(10,1.322013);
   jpt_1->SetBinContent(11,0.2152487);
   jpt_1->SetBinContent(12,0.4314411);
   jpt_1->SetBinContent(13,1.869496);
   jpt_1->SetBinError(4,0.1575752);
   jpt_1->SetBinError(5,0.1597976);
   jpt_1->SetBinError(6,0.1108393);
   jpt_1->SetBinError(7,0.1273355);
   jpt_1->SetBinError(8,0.1958618);
   jpt_1->SetBinError(9,0.258884);
   jpt_1->SetBinError(10,0.5033766);
   jpt_1->SetBinError(11,0.2252133);
   jpt_1->SetBinError(12,0.4657909);
   jpt_1->SetBinError(13,1.905259);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(13.89217);
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
