{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:49 2013) by ROOT version5.32/00
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
   upper->Range(-3.613924,-2.745378,3.348101,4.631018);
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
   stack->SetMaximum(8372.07);
   
   TH1F *taueta_1_stack_5 = new TH1F("taueta_1_stack_5","stack",20,-5,5);
   taueta_1_stack_5->SetBinContent(0,68.93362);
   taueta_1_stack_5->SetBinContent(6,0.05824418);
   taueta_1_stack_5->SetBinContent(7,2.092079);
   taueta_1_stack_5->SetBinContent(9,0.1226271);
   taueta_1_stack_5->SetBinContent(11,0.06014713);
   taueta_1_stack_5->SetBinContent(13,0.05284607);
   taueta_1_stack_5->SetBinContent(14,0.00857935);
   taueta_1_stack_5->SetBinError(0,9.411643);
   taueta_1_stack_5->SetBinError(6,0.05824418);
   taueta_1_stack_5->SetBinError(7,2.021237);
   taueta_1_stack_5->SetBinError(9,0.1226271);
   taueta_1_stack_5->SetBinError(11,0.06014713);
   taueta_1_stack_5->SetBinError(13,0.05284607);
   taueta_1_stack_5->SetBinError(14,0.00857935);
   taueta_1_stack_5->SetMinimum(0.00252435);
   taueta_1_stack_5->SetMaximum(18289.34);
   taueta_1_stack_5->SetEntries(333);
   taueta_1_stack_5->SetStats(0);
   taueta_1_stack_5->SetFillColor(4);
   taueta_1_stack_5->SetLineColor(4);
   taueta_1_stack_5->SetLineWidth(2);
   taueta_1_stack_5->SetMarkerColor(4);
   taueta_1_stack_5->SetMarkerStyle(21);
   taueta_1_stack_5->SetMarkerSize(0.8);
   taueta_1_stack_5->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1_stack_5->GetXaxis()->SetRange(6,16);
   taueta_1_stack_5->GetXaxis()->SetLabelFont(42);
   taueta_1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   taueta_1_stack_5->GetXaxis()->SetLabelSize(0);
   taueta_1_stack_5->GetXaxis()->SetTitleSize(0);
   taueta_1_stack_5->GetXaxis()->SetTickLength(0.02);
   taueta_1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   taueta_1_stack_5->GetXaxis()->SetTitleFont(42);
   taueta_1_stack_5->GetYaxis()->SetTitle("Events");
   taueta_1_stack_5->GetYaxis()->SetLabelFont(42);
   taueta_1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   taueta_1_stack_5->GetYaxis()->SetLabelSize(0.035);
   taueta_1_stack_5->GetYaxis()->SetTitleSize(0.045);
   taueta_1_stack_5->GetYaxis()->SetTickLength(0.02);
   taueta_1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   taueta_1_stack_5->GetYaxis()->SetTitleFont(42);
   taueta_1_stack_5->GetZaxis()->SetLabelFont(42);
   taueta_1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   taueta_1_stack_5->GetZaxis()->SetLabelSize(0.035);
   taueta_1_stack_5->GetZaxis()->SetTitleSize(0.045);
   taueta_1_stack_5->GetZaxis()->SetTickLength(0.02);
   taueta_1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taueta_1_stack_5);
   
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,68.93362);
   taueta_1->SetBinContent(6,0.05824418);
   taueta_1->SetBinContent(7,2.092079);
   taueta_1->SetBinContent(9,0.1226271);
   taueta_1->SetBinContent(11,0.06014713);
   taueta_1->SetBinContent(13,0.05284607);
   taueta_1->SetBinContent(14,0.00857935);
   taueta_1->SetBinError(0,9.411643);
   taueta_1->SetBinError(6,0.05824418);
   taueta_1->SetBinError(7,2.021237);
   taueta_1->SetBinError(9,0.1226271);
   taueta_1->SetBinError(11,0.06014713);
   taueta_1->SetBinError(13,0.05284607);
   taueta_1->SetBinError(14,0.00857935);
   taueta_1->SetMinimum(0.01);
   taueta_1->SetMaximum(13500);
   taueta_1->SetEntries(333);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(4);
   taueta_1->SetLineColor(4);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(4);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1->GetXaxis()->SetRange(6,16);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0);
   taueta_1->GetXaxis()->SetTitleSize(0);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetTitle("Events");
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"HIST");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,327.507);
   taueta_1->SetBinContent(6,0.7183735);
   taueta_1->SetBinContent(7,0.5842314);
   taueta_1->SetBinContent(8,0.7491011);
   taueta_1->SetBinContent(10,1.9584);
   taueta_1->SetBinContent(11,2.161934);
   taueta_1->SetBinContent(12,0.07053628);
   taueta_1->SetBinContent(13,1.275363);
   taueta_1->SetBinContent(14,1.187582);
   taueta_1->SetBinContent(15,0.2781415);
   taueta_1->SetBinError(0,12.61044);
   taueta_1->SetBinError(6,0.5308862);
   taueta_1->SetBinError(7,0.4100143);
   taueta_1->SetBinError(8,0.7491011);
   taueta_1->SetBinError(10,1.133412);
   taueta_1->SetBinError(11,1.020904);
   taueta_1->SetBinError(12,0.06975896);
   taueta_1->SetBinError(13,1.01248);
   taueta_1->SetBinError(14,0.696532);
   taueta_1->SetBinError(15,0.2526764);
   taueta_1->SetEntries(1122);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(5);
   taueta_1->SetLineColor(5);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(5);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,1487.671);
   taueta_1->SetBinContent(6,3.785704);
   taueta_1->SetBinContent(7,0.7925886);
   taueta_1->SetBinContent(8,0.6820307);
   taueta_1->SetBinContent(9,2.108566);
   taueta_1->SetBinContent(10,1.644938);
   taueta_1->SetBinContent(11,0.3391078);
   taueta_1->SetBinContent(12,0.9826707);
   taueta_1->SetBinContent(13,2.556452);
   taueta_1->SetBinContent(14,1.587238);
   taueta_1->SetBinContent(15,4.642297);
   taueta_1->SetBinError(0,28.40536);
   taueta_1->SetBinError(6,1.220502);
   taueta_1->SetBinError(7,0.4607477);
   taueta_1->SetBinError(8,0.4176722);
   taueta_1->SetBinError(9,1.183479);
   taueta_1->SetBinError(10,1.200564);
   taueta_1->SetBinError(11,0.3391078);
   taueta_1->SetBinError(12,0.6388479);
   taueta_1->SetBinError(13,1.18839);
   taueta_1->SetBinError(14,0.6506963);
   taueta_1->SetBinError(15,1.183883);
   taueta_1->SetEntries(4765);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(6);
   taueta_1->SetLineColor(6);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(6);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,386.9268);
   taueta_1->SetBinContent(6,0.3942619);
   taueta_1->SetBinContent(7,0.2858154);
   taueta_1->SetBinContent(8,0.3956105);
   taueta_1->SetBinContent(9,0.386235);
   taueta_1->SetBinContent(10,0.3436639);
   taueta_1->SetBinContent(11,0.287663);
   taueta_1->SetBinContent(12,0.252093);
   taueta_1->SetBinContent(13,0.3686001);
   taueta_1->SetBinContent(14,0.3438328);
   taueta_1->SetBinContent(15,0.548901);
   taueta_1->SetBinError(0,2.463082);
   taueta_1->SetBinError(6,0.07035576);
   taueta_1->SetBinError(7,0.06196169);
   taueta_1->SetBinError(8,0.07855093);
   taueta_1->SetBinError(9,0.07469797);
   taueta_1->SetBinError(10,0.07218652);
   taueta_1->SetBinError(11,0.05803738);
   taueta_1->SetBinError(12,0.06271532);
   taueta_1->SetBinError(13,0.07454564);
   taueta_1->SetBinError(14,0.07127058);
   taueta_1->SetBinError(15,0.08510914);
   taueta_1->SetEntries(32662);
   taueta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   taueta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   taueta_1->SetLineColor(ci);
   taueta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   taueta_1->SetMarkerColor(ci);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,0.1728566);
   taueta_1->SetBinError(0,0.1571197);
   taueta_1->SetEntries(2);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,22.4094);
   taueta_1->SetBinContent(6,0.1495063);
   taueta_1->SetBinContent(7,0.2007047);
   taueta_1->SetBinContent(8,0.504758);
   taueta_1->SetBinContent(9,0.2026035);
   taueta_1->SetBinContent(10,0.3072069);
   taueta_1->SetBinContent(11,0.2237032);
   taueta_1->SetBinContent(12,0.4611346);
   taueta_1->SetBinContent(13,0.2255473);
   taueta_1->SetBinContent(14,0.1297661);
   taueta_1->SetBinContent(15,0.1058717);
   taueta_1->SetBinError(0,1.373411);
   taueta_1->SetBinError(6,0.1147387);
   taueta_1->SetBinError(7,0.1071751);
   taueta_1->SetBinError(8,0.2534127);
   taueta_1->SetBinError(9,0.2026035);
   taueta_1->SetBinError(10,0.1551864);
   taueta_1->SetBinError(11,0.1358659);
   taueta_1->SetBinError(12,0.2338448);
   taueta_1->SetBinError(13,0.1250307);
   taueta_1->SetBinError(14,0.09040615);
   taueta_1->SetBinError(15,0.07491179);
   taueta_1->SetEntries(460);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,4.047078);
   taueta_1->SetBinContent(6,0.01393185);
   taueta_1->SetBinContent(7,0.0207209);
   taueta_1->SetBinContent(8,0.05462908);
   taueta_1->SetBinContent(9,0.05294157);
   taueta_1->SetBinContent(10,0.09930332);
   taueta_1->SetBinContent(11,0.1234584);
   taueta_1->SetBinContent(12,0.06042644);
   taueta_1->SetBinContent(13,0.02954702);
   taueta_1->SetBinContent(14,0.03625261);
   taueta_1->SetBinContent(15,0.006168227);
   taueta_1->SetBinError(0,0.1451465);
   taueta_1->SetBinError(6,0.008183188);
   taueta_1->SetBinError(7,0.01006027);
   taueta_1->SetBinError(8,0.01602084);
   taueta_1->SetBinError(9,0.01691822);
   taueta_1->SetBinError(10,0.02282838);
   taueta_1->SetBinError(11,0.02627408);
   taueta_1->SetBinError(12,0.01681475);
   taueta_1->SetBinError(13,0.01044195);
   taueta_1->SetBinError(14,0.01434653);
   taueta_1->SetBinError(15,0.004166578);
   taueta_1->SetEntries(1132);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   stack->Draw("hist");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,2018);
   taueta_1->SetBinContent(6,8);
   taueta_1->SetBinContent(7,5);
   taueta_1->SetBinContent(8,1);
   taueta_1->SetBinContent(9,4);
   taueta_1->SetBinContent(10,3);
   taueta_1->SetBinContent(11,3);
   taueta_1->SetBinContent(12,4);
   taueta_1->SetBinContent(13,6);
   taueta_1->SetBinContent(14,2);
   taueta_1->SetBinContent(15,9);
   taueta_1->SetBinError(0,44.92215);
   taueta_1->SetBinError(6,2.828427);
   taueta_1->SetBinError(7,2.236068);
   taueta_1->SetBinError(8,1);
   taueta_1->SetBinError(9,2);
   taueta_1->SetBinError(10,1.732051);
   taueta_1->SetBinError(11,1.732051);
   taueta_1->SetBinError(12,2);
   taueta_1->SetBinError(13,2.44949);
   taueta_1->SetBinError(14,1.414214);
   taueta_1->SetBinError(15,3);
   taueta_1->SetEntries(2063);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(1);
   taueta_1->SetFillStyle(0);
   taueta_1->SetLineWidth(3);
   taueta_1->SetMarkerStyle(20);
   taueta_1->SetMarkerSize(1.3);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   taueta_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   TLegendEntry *entry=leg->AddEntry("taueta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("taueta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("taueta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","Dibosons","f");
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
   lower->Range(-3.613924,-0.653951,3.348101,2.070845);
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
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,0.9054468);
   taueta_1->SetBinContent(6,1.580473);
   taueta_1->SetBinContent(7,2.653842);
   taueta_1->SetBinContent(8,0.4190887);
   taueta_1->SetBinContent(9,1.454362);
   taueta_1->SetBinContent(10,0.6890988);
   taueta_1->SetBinContent(11,0.9566734);
   taueta_1->SetBinContent(12,2.189548);
   taueta_1->SetBinContent(13,1.346647);
   taueta_1->SetBinContent(14,0.6088889);
   taueta_1->SetBinContent(15,1.612504);
   taueta_1->SetBinError(0,0.02381173);
   taueta_1->SetBinError(6,0.6976479);
   taueta_1->SetBinError(7,1.481192);
   taueta_1->SetBinError(8,0.4477793);
   taueta_1->SetBinError(9,0.9662062);
   taueta_1->SetBinError(10,0.4767917);
   taueta_1->SetBinError(11,0.6441081);
   taueta_1->SetBinError(12,1.369814);
   taueta_1->SetBinError(13,0.7258417);
   taueta_1->SetBinError(14,0.465893);
   taueta_1->SetBinError(15,0.6421043);
   taueta_1->SetMinimum(0);
   taueta_1->SetMaximum(2);
   taueta_1->SetEntries(24.37419);
   taueta_1->SetStats(0);
   taueta_1->SetFillStyle(0);
   taueta_1->SetMarkerStyle(20);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1->GetXaxis()->SetRange(6,16);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.1);
   taueta_1->GetXaxis()->SetTitleSize(0.12);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetTitle("Data/MC");
   taueta_1->GetYaxis()->SetNdivisions(505);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.1);
   taueta_1->GetYaxis()->SetTitleSize(0.12);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(0.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   taueta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
