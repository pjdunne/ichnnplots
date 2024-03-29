{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:29 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.953324,1063.291,7.888499);
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
   stack->SetMaximum(7985300);
   
   TH1F *jpt_2_stack_10 = new TH1F("jpt_2_stack_10","stack",25,0,1000);
   jpt_2_stack_10->SetBinContent(2,12.44626);
   jpt_2_stack_10->SetBinContent(3,17.87094);
   jpt_2_stack_10->SetBinContent(4,4.383714);
   jpt_2_stack_10->SetBinContent(5,3.107716);
   jpt_2_stack_10->SetBinContent(6,0.07569044);
   jpt_2_stack_10->SetBinError(2,4.242875);
   jpt_2_stack_10->SetBinError(3,5.492917);
   jpt_2_stack_10->SetBinError(4,2.828169);
   jpt_2_stack_10->SetBinError(5,2.982699);
   jpt_2_stack_10->SetBinError(6,0.07569044);
   jpt_2_stack_10->SetMinimum(0.001834477);
   jpt_2_stack_10->SetMaximum(2.220279e+07);
   jpt_2_stack_10->SetEntries(83);
   jpt_2_stack_10->SetStats(0);
   jpt_2_stack_10->SetFillColor(4);
   jpt_2_stack_10->SetLineColor(4);
   jpt_2_stack_10->SetLineWidth(2);
   jpt_2_stack_10->SetMarkerColor(4);
   jpt_2_stack_10->SetMarkerStyle(21);
   jpt_2_stack_10->SetMarkerSize(0.8);
   jpt_2_stack_10->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2_stack_10->GetXaxis()->SetLabelFont(42);
   jpt_2_stack_10->GetXaxis()->SetLabelOffset(0.007);
   jpt_2_stack_10->GetXaxis()->SetLabelSize(0);
   jpt_2_stack_10->GetXaxis()->SetTitleSize(0);
   jpt_2_stack_10->GetXaxis()->SetTickLength(0.02);
   jpt_2_stack_10->GetXaxis()->SetTitleOffset(0.9);
   jpt_2_stack_10->GetXaxis()->SetTitleFont(42);
   jpt_2_stack_10->GetYaxis()->SetTitle("Events");
   jpt_2_stack_10->GetYaxis()->SetLabelFont(42);
   jpt_2_stack_10->GetYaxis()->SetLabelOffset(0.007);
   jpt_2_stack_10->GetYaxis()->SetLabelSize(0.035);
   jpt_2_stack_10->GetYaxis()->SetTitleSize(0.045);
   jpt_2_stack_10->GetYaxis()->SetTickLength(0.02);
   jpt_2_stack_10->GetYaxis()->SetTitleOffset(1.55);
   jpt_2_stack_10->GetYaxis()->SetTitleFont(42);
   jpt_2_stack_10->GetZaxis()->SetLabelFont(42);
   jpt_2_stack_10->GetZaxis()->SetLabelOffset(0.007);
   jpt_2_stack_10->GetZaxis()->SetLabelSize(0.035);
   jpt_2_stack_10->GetZaxis()->SetTitleSize(0.045);
   jpt_2_stack_10->GetZaxis()->SetTickLength(0.02);
   jpt_2_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_2_stack_10);
   
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,12.44626);
   jpt_2->SetBinContent(3,17.87094);
   jpt_2->SetBinContent(4,4.383714);
   jpt_2->SetBinContent(5,3.107716);
   jpt_2->SetBinContent(6,0.07569044);
   jpt_2->SetBinError(2,4.242875);
   jpt_2->SetBinError(3,5.492917);
   jpt_2->SetBinError(4,2.828169);
   jpt_2->SetBinError(5,2.982699);
   jpt_2->SetBinError(6,0.07569044);
   jpt_2->SetMinimum(0.01);
   jpt_2->SetMaximum(6315000);
   jpt_2->SetEntries(83);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(4);
   jpt_2->SetLineColor(4);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(4);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0);
   jpt_2->GetXaxis()->SetTitleSize(0);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetTitle("Events");
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"HIST");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,80.71596);
   jpt_2->SetBinContent(3,132.045);
   jpt_2->SetBinContent(4,51.43858);
   jpt_2->SetBinContent(5,7.164362);
   jpt_2->SetBinContent(6,1.099125);
   jpt_2->SetBinContent(7,0.6806873);
   jpt_2->SetBinContent(8,0.8218121);
   jpt_2->SetBinError(2,7.391064);
   jpt_2->SetBinError(3,9.78925);
   jpt_2->SetBinError(4,6.230586);
   jpt_2->SetBinError(5,2.175051);
   jpt_2->SetBinError(6,0.8502149);
   jpt_2->SetBinError(7,0.6806873);
   jpt_2->SetBinError(8,0.8218121);
   jpt_2->SetEntries(486);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(5);
   jpt_2->SetLineColor(5);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(5);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,349.8165);
   jpt_2->SetBinContent(3,314.1767);
   jpt_2->SetBinContent(4,102.3786);
   jpt_2->SetBinContent(5,28.20649);
   jpt_2->SetBinContent(6,2.427001);
   jpt_2->SetBinContent(7,0.7113144);
   jpt_2->SetBinContent(8,0.3733362);
   jpt_2->SetBinContent(9,0.9205115);
   jpt_2->SetBinError(2,14.33007);
   jpt_2->SetBinError(3,13.27238);
   jpt_2->SetBinError(4,7.309394);
   jpt_2->SetBinError(5,3.892923);
   jpt_2->SetBinError(6,0.9874536);
   jpt_2->SetBinError(7,0.5065568);
   jpt_2->SetBinError(8,0.3733362);
   jpt_2->SetBinError(9,0.5986037);
   jpt_2->SetEntries(1848);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(6);
   jpt_2->SetLineColor(6);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(6);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,33.35802);
   jpt_2->SetBinContent(3,44.95745);
   jpt_2->SetBinContent(4,23.56794);
   jpt_2->SetBinContent(5,7.444329);
   jpt_2->SetBinContent(6,2.467359);
   jpt_2->SetBinContent(7,0.8374358);
   jpt_2->SetBinContent(8,0.232545);
   jpt_2->SetBinContent(9,0.1497401);
   jpt_2->SetBinContent(10,0.01794123);
   jpt_2->SetBinContent(11,0.01918107);
   jpt_2->SetBinError(2,0.8219352);
   jpt_2->SetBinError(3,0.9612654);
   jpt_2->SetBinError(4,0.6986802);
   jpt_2->SetBinError(5,0.3927436);
   jpt_2->SetBinError(6,0.2244325);
   jpt_2->SetBinError(7,0.132737);
   jpt_2->SetBinError(8,0.0663957);
   jpt_2->SetBinError(9,0.05355423);
   jpt_2->SetBinError(10,0.01794123);
   jpt_2->SetBinError(11,0.01918107);
   jpt_2->SetEntries(6349);
   jpt_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_2->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_2->SetLineColor(ci);
   jpt_2->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_2->SetMarkerColor(ci);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,18.15353);
   jpt_2->SetBinContent(3,18.93476);
   jpt_2->SetBinContent(4,5.000264);
   jpt_2->SetBinContent(5,1.378808);
   jpt_2->SetBinContent(6,0.2178539);
   jpt_2->SetBinContent(7,0.2058742);
   jpt_2->SetBinError(2,1.396539);
   jpt_2->SetBinError(3,1.575363);
   jpt_2->SetBinError(4,0.6823561);
   jpt_2->SetBinError(5,0.3941626);
   jpt_2->SetBinError(6,0.1241183);
   jpt_2->SetBinError(7,0.1583065);
   jpt_2->SetEntries(519);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,2.920525);
   jpt_2->SetBinContent(3,4.368511);
   jpt_2->SetBinContent(4,2.240229);
   jpt_2->SetBinContent(5,0.6891758);
   jpt_2->SetBinContent(6,0.2474626);
   jpt_2->SetBinContent(7,0.08380204);
   jpt_2->SetBinContent(8,0.0401518);
   jpt_2->SetBinError(2,0.1678054);
   jpt_2->SetBinError(3,0.2051607);
   jpt_2->SetBinError(4,0.1461183);
   jpt_2->SetBinError(5,0.08199091);
   jpt_2->SetBinError(6,0.04914685);
   jpt_2->SetBinError(7,0.02399043);
   jpt_2->SetBinError(8,0.01911527);
   jpt_2->SetEntries(1413);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   stack->Draw("hist");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,421);
   jpt_2->SetBinContent(3,393);
   jpt_2->SetBinContent(4,166);
   jpt_2->SetBinContent(5,25);
   jpt_2->SetBinContent(6,6);
   jpt_2->SetBinContent(7,1);
   jpt_2->SetBinContent(8,1);
   jpt_2->SetBinError(2,20.51828);
   jpt_2->SetBinError(3,19.82423);
   jpt_2->SetBinError(4,12.8841);
   jpt_2->SetBinError(5,5);
   jpt_2->SetBinError(6,2.44949);
   jpt_2->SetBinError(7,1);
   jpt_2->SetBinError(8,1);
   jpt_2->SetEntries(1013);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(1);
   jpt_2->SetFillStyle(0);
   jpt_2->SetLineWidth(3);
   jpt_2->SetMarkerStyle(20);
   jpt_2->SetMarkerSize(1.3);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("SAMEPE1");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(1);
   jpt_2->SetFillStyle(0);
   jpt_2->SetLineStyle(2);
   jpt_2->SetLineWidth(3);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("jpt_2","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_2","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_2","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","Dibosons","f");
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
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,0.8681046);
   jpt_2->SetBinContent(3,0.7638746);
   jpt_2->SetBinContent(4,0.8991166);
   jpt_2->SetBinContent(5,0.5570017);
   jpt_2->SetBinContent(6,0.928965);
   jpt_2->SetBinContent(7,0.396965);
   jpt_2->SetBinContent(8,0.6812708);
   jpt_2->SetBinError(2,0.05129887);
   jpt_2->SetBinError(3,0.04573759);
   jpt_2->SetBinError(4,0.08414775);
   jpt_2->SetBinError(5,0.1245846);
   jpt_2->SetBinError(6,0.4246938);
   jpt_2->SetBinError(7,0.4201579);
   jpt_2->SetBinError(8,0.8004186);
   jpt_2->SetMinimum(0);
   jpt_2->SetMaximum(2);
   jpt_2->SetEntries(25.33149);
   jpt_2->SetStats(0);
   jpt_2->SetFillStyle(0);
   jpt_2->SetMarkerStyle(20);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.1);
   jpt_2->GetXaxis()->SetTitleSize(0.12);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetTitle("Data/MC");
   jpt_2->GetYaxis()->SetNdivisions(505);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.1);
   jpt_2->GetYaxis()->SetTitleSize(0.12);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(0.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
