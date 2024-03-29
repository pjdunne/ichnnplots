{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:49:51 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-4.170678,446.5823,204.3632);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
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
   stack->SetMaximum(184.7015);
   
   TH1F *mt_enu_stack_10 = new TH1F("mt_enu_stack_10","stack",25,0,500);
   mt_enu_stack_10->SetBinContent(1,0.7427392);
   mt_enu_stack_10->SetBinContent(2,2.295804);
   mt_enu_stack_10->SetBinContent(3,0.07307188);
   mt_enu_stack_10->SetBinContent(4,4.523141);
   mt_enu_stack_10->SetBinContent(5,3.979151);
   mt_enu_stack_10->SetBinError(1,0.6170271);
   mt_enu_stack_10->SetBinError(2,2.124391);
   mt_enu_stack_10->SetBinError(3,0.07307188);
   mt_enu_stack_10->SetBinError(4,2.969655);
   mt_enu_stack_10->SetBinError(5,2.73327);
   mt_enu_stack_10->SetMinimum(0);
   mt_enu_stack_10->SetMaximum(193.9365);
   mt_enu_stack_10->SetEntries(19);
   mt_enu_stack_10->SetStats(0);
   mt_enu_stack_10->SetFillColor(4);
   mt_enu_stack_10->SetLineColor(4);
   mt_enu_stack_10->SetLineWidth(2);
   mt_enu_stack_10->SetMarkerColor(4);
   mt_enu_stack_10->SetMarkerStyle(21);
   mt_enu_stack_10->SetMarkerSize(0.8);
   mt_enu_stack_10->GetXaxis()->SetTitle("m_{T}(e#nu) (GeV)");
   mt_enu_stack_10->GetXaxis()->SetRange(1,21);
   mt_enu_stack_10->GetXaxis()->SetLabelFont(42);
   mt_enu_stack_10->GetXaxis()->SetLabelOffset(0.007);
   mt_enu_stack_10->GetXaxis()->SetLabelSize(0);
   mt_enu_stack_10->GetXaxis()->SetTitleSize(0);
   mt_enu_stack_10->GetXaxis()->SetTickLength(0.02);
   mt_enu_stack_10->GetXaxis()->SetTitleOffset(0.9);
   mt_enu_stack_10->GetXaxis()->SetTitleFont(42);
   mt_enu_stack_10->GetYaxis()->SetTitle("Events");
   mt_enu_stack_10->GetYaxis()->SetLabelFont(42);
   mt_enu_stack_10->GetYaxis()->SetLabelOffset(0.007);
   mt_enu_stack_10->GetYaxis()->SetLabelSize(0.035);
   mt_enu_stack_10->GetYaxis()->SetTitleSize(0.045);
   mt_enu_stack_10->GetYaxis()->SetTickLength(0.02);
   mt_enu_stack_10->GetYaxis()->SetTitleOffset(1.55);
   mt_enu_stack_10->GetYaxis()->SetTitleFont(42);
   mt_enu_stack_10->GetZaxis()->SetLabelFont(42);
   mt_enu_stack_10->GetZaxis()->SetLabelOffset(0.007);
   mt_enu_stack_10->GetZaxis()->SetLabelSize(0.035);
   mt_enu_stack_10->GetZaxis()->SetTitleSize(0.045);
   mt_enu_stack_10->GetZaxis()->SetTickLength(0.02);
   mt_enu_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mt_enu_stack_10);
   
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,0.7427392);
   mt_enu->SetBinContent(2,2.295804);
   mt_enu->SetBinContent(3,0.07307188);
   mt_enu->SetBinContent(4,4.523141);
   mt_enu->SetBinContent(5,3.979151);
   mt_enu->SetBinError(1,0.6170271);
   mt_enu->SetBinError(2,2.124391);
   mt_enu->SetBinError(3,0.07307188);
   mt_enu->SetBinError(4,2.969655);
   mt_enu->SetBinError(5,2.73327);
   mt_enu->SetMaximum(123.2);
   mt_enu->SetEntries(19);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(4);
   mt_enu->SetLineColor(4);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(4);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetTitle("m_{T}(e#nu) (GeV)");
   mt_enu->GetXaxis()->SetRange(1,21);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0);
   mt_enu->GetXaxis()->SetTitleSize(0);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetTitle("Events");
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"HIST");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,11.31604);
   mt_enu->SetBinContent(2,12.49573);
   mt_enu->SetBinContent(3,9.234821);
   mt_enu->SetBinContent(4,18.80114);
   mt_enu->SetBinContent(5,11.13264);
   mt_enu->SetBinContent(6,11.00335);
   mt_enu->SetBinContent(7,5.87775);
   mt_enu->SetBinContent(8,5.083471);
   mt_enu->SetBinContent(9,1.693951);
   mt_enu->SetBinContent(10,0.6555221);
   mt_enu->SetBinContent(11,0.6398796);
   mt_enu->SetBinContent(13,1.197386);
   mt_enu->SetBinContent(14,0.6998025);
   mt_enu->SetBinContent(16,1.366376);
   mt_enu->SetBinContent(18,0.2606019);
   mt_enu->SetBinError(1,2.76922);
   mt_enu->SetBinError(2,2.81508);
   mt_enu->SetBinError(3,2.397771);
   mt_enu->SetBinError(4,3.681012);
   mt_enu->SetBinError(5,2.799344);
   mt_enu->SetBinError(6,2.721455);
   mt_enu->SetBinError(7,2.003366);
   mt_enu->SetBinError(8,2.101733);
   mt_enu->SetBinError(9,1.201711);
   mt_enu->SetBinError(10,0.5086136);
   mt_enu->SetBinError(11,0.6398796);
   mt_enu->SetBinError(13,0.853127);
   mt_enu->SetBinError(14,0.6998025);
   mt_enu->SetBinError(16,1.105022);
   mt_enu->SetBinError(18,0.2606019);
   mt_enu->SetEntries(165);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(5);
   mt_enu->SetLineColor(5);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(5);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,23.13213);
   mt_enu->SetBinContent(2,25.50943);
   mt_enu->SetBinContent(3,38.57786);
   mt_enu->SetBinContent(4,52.68344);
   mt_enu->SetBinContent(5,34.72802);
   mt_enu->SetBinContent(6,4.454939);
   mt_enu->SetBinContent(7,1.102908);
   mt_enu->SetBinContent(8,1.12833);
   mt_enu->SetBinContent(9,0.8167894);
   mt_enu->SetBinContent(10,0.4539947);
   mt_enu->SetBinContent(11,0.366308);
   mt_enu->SetBinContent(12,1.016131);
   mt_enu->SetBinContent(14,0.3564965);
   mt_enu->SetBinContent(16,0.0004446276);
   mt_enu->SetBinContent(22,0.4591447);
   mt_enu->SetBinContent(23,0.4346951);
   mt_enu->SetBinError(1,3.352852);
   mt_enu->SetBinError(2,3.491417);
   mt_enu->SetBinError(3,4.569345);
   mt_enu->SetBinError(4,5.251469);
   mt_enu->SetBinError(5,4.131299);
   mt_enu->SetBinError(6,1.302095);
   mt_enu->SetBinError(7,0.8323567);
   mt_enu->SetBinError(8,0.8314765);
   mt_enu->SetBinError(9,0.577662);
   mt_enu->SetBinError(10,0.4539947);
   mt_enu->SetBinError(11,0.3471521);
   mt_enu->SetBinError(12,1.016131);
   mt_enu->SetBinError(14,0.3564965);
   mt_enu->SetBinError(16,0.0004446276);
   mt_enu->SetBinError(22,0.4353822);
   mt_enu->SetBinError(23,0.4346951);
   mt_enu->SetEntries(460);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(6);
   mt_enu->SetLineColor(6);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(6);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,5.813353);
   mt_enu->SetBinContent(2,5.815191);
   mt_enu->SetBinContent(3,5.264923);
   mt_enu->SetBinContent(4,7.914528);
   mt_enu->SetBinContent(5,5.425443);
   mt_enu->SetBinContent(6,0.8008052);
   mt_enu->SetBinContent(7,0.3781167);
   mt_enu->SetBinContent(8,0.05690892);
   mt_enu->SetBinContent(9,0.09591686);
   mt_enu->SetBinContent(10,0.103069);
   mt_enu->SetBinContent(12,0.004953356);
   mt_enu->SetBinContent(13,0.05004421);
   mt_enu->SetBinContent(14,0.01950118);
   mt_enu->SetBinContent(17,0.01892296);
   mt_enu->SetBinContent(19,0.02206614);
   mt_enu->SetBinContent(20,0.01972567);
   mt_enu->SetBinError(1,0.3426534);
   mt_enu->SetBinError(2,0.3472465);
   mt_enu->SetBinError(3,0.3278187);
   mt_enu->SetBinError(4,0.40069);
   mt_enu->SetBinError(5,0.3269984);
   mt_enu->SetBinError(6,0.1203944);
   mt_enu->SetBinError(7,0.08451826);
   mt_enu->SetBinError(8,0.03287679);
   mt_enu->SetBinError(9,0.04256767);
   mt_enu->SetBinError(10,0.04301294);
   mt_enu->SetBinError(12,0.004953356);
   mt_enu->SetBinError(13,0.03767826);
   mt_enu->SetBinError(14,0.01950118);
   mt_enu->SetBinError(17,0.01892296);
   mt_enu->SetBinError(19,0.02206614);
   mt_enu->SetBinError(20,0.01972567);
   mt_enu->SetEntries(1830);
   mt_enu->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mt_enu->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mt_enu->SetLineColor(ci);
   mt_enu->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mt_enu->SetMarkerColor(ci);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(3);
   mt_enu->SetLineColor(3);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(3);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,2.309363);
   mt_enu->SetBinContent(2,0.5612769);
   mt_enu->SetBinContent(3,0.1363279);
   mt_enu->SetBinContent(5,0.1143573);
   mt_enu->SetBinContent(11,0.07827361);
   mt_enu->SetBinError(1,0.4773445);
   mt_enu->SetBinError(2,0.2077526);
   mt_enu->SetBinError(3,0.09909442);
   mt_enu->SetBinError(5,0.1143573);
   mt_enu->SetBinError(11,0.07827361);
   mt_enu->SetEntries(46);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(3);
   mt_enu->SetLineColor(3);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(3);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,0.5896234);
   mt_enu->SetBinContent(2,0.2054412);
   mt_enu->SetBinContent(3,0.03791261);
   mt_enu->SetBinContent(4,0.03297171);
   mt_enu->SetBinContent(5,0.01188635);
   mt_enu->SetBinContent(6,0.00672504);
   mt_enu->SetBinContent(23,0.005743754);
   mt_enu->SetBinError(1,0.06102346);
   mt_enu->SetBinError(2,0.0367476);
   mt_enu->SetBinError(3,0.01481611);
   mt_enu->SetBinError(4,0.01486415);
   mt_enu->SetBinError(5,0.00795305);
   mt_enu->SetBinError(6,0.006706973);
   mt_enu->SetBinError(23,0.005743754);
   mt_enu->SetEntries(163);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(3);
   mt_enu->SetLineColor(3);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(3);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   stack->Draw("hist");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,27);
   mt_enu->SetBinContent(2,24);
   mt_enu->SetBinContent(3,31);
   mt_enu->SetBinContent(4,56);
   mt_enu->SetBinContent(5,45);
   mt_enu->SetBinContent(6,10);
   mt_enu->SetBinContent(7,7);
   mt_enu->SetBinContent(8,3);
   mt_enu->SetBinContent(9,1);
   mt_enu->SetBinContent(10,1);
   mt_enu->SetBinContent(11,3);
   mt_enu->SetBinContent(12,2);
   mt_enu->SetBinContent(14,1);
   mt_enu->SetBinContent(16,1);
   mt_enu->SetBinContent(17,2);
   mt_enu->SetBinContent(25,1);
   mt_enu->SetBinError(1,5.196152);
   mt_enu->SetBinError(2,4.898979);
   mt_enu->SetBinError(3,5.567764);
   mt_enu->SetBinError(4,7.483315);
   mt_enu->SetBinError(5,6.708204);
   mt_enu->SetBinError(6,3.162278);
   mt_enu->SetBinError(7,2.645751);
   mt_enu->SetBinError(8,1.732051);
   mt_enu->SetBinError(9,1);
   mt_enu->SetBinError(10,1);
   mt_enu->SetBinError(11,1.732051);
   mt_enu->SetBinError(12,1.414214);
   mt_enu->SetBinError(14,1);
   mt_enu->SetBinError(16,1);
   mt_enu->SetBinError(17,1.414214);
   mt_enu->SetBinError(25,1);
   mt_enu->SetEntries(215);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(1);
   mt_enu->SetFillStyle(0);
   mt_enu->SetLineWidth(3);
   mt_enu->SetMarkerStyle(20);
   mt_enu->SetMarkerSize(1.3);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   mt_enu->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("mt_enu","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mt_enu","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_enu","EWK W+jets","f");

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
   entry=leg->AddEntry("mt_enu","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_enu","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_enu","Dibosons","f");
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
   lower->Range(-85.06329,-0.653951,446.5823,2.070845);
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
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(1,0.6255719);
   mt_enu->SetBinContent(2,0.5382726);
   mt_enu->SetBinContent(3,0.5821394);
   mt_enu->SetBinContent(4,0.7050049);
   mt_enu->SetBinContent(5,0.8752762);
   mt_enu->SetBinContent(6,0.614786);
   mt_enu->SetBinContent(7,0.9512452);
   mt_enu->SetBinContent(8,0.4785674);
   mt_enu->SetBinContent(9,0.3836331);
   mt_enu->SetBinContent(10,0.8246838);
   mt_enu->SetBinContent(11,2.766351);
   mt_enu->SetBinContent(12,1.958702);
   mt_enu->SetBinContent(14,0.9295406);
   mt_enu->SetBinContent(16,0.7316247);
   mt_enu->SetBinContent(17,105.6917);
   mt_enu->SetBinError(1,0.1361617);
   mt_enu->SetBinError(2,0.1225888);
   mt_enu->SetBinError(3,0.1188615);
   mt_enu->SetBinError(4,0.1101277);
   mt_enu->SetBinError(5,0.1558125);
   mt_enu->SetBinError(6,0.2254314);
   mt_enu->SetBinError(7,0.4561006);
   mt_enu->SetBinError(8,0.3257643);
   mt_enu->SetBinError(9,0.4309539);
   mt_enu->SetBinError(10,0.9465451);
   mt_enu->SetBinError(11,2.457491);
   mt_enu->SetBinError(12,2.391177);
   mt_enu->SetBinError(14,1.151011);
   mt_enu->SetBinError(16,0.9408164);
   mt_enu->SetBinError(17,129.4454);
   mt_enu->SetMinimum(0);
   mt_enu->SetMaximum(2);
   mt_enu->SetEntries(0.839485);
   mt_enu->SetStats(0);
   mt_enu->SetFillStyle(0);
   mt_enu->SetMarkerStyle(20);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetTitle("m_{T}(e#nu) (GeV)");
   mt_enu->GetXaxis()->SetRange(1,21);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.1);
   mt_enu->GetXaxis()->SetTitleSize(0.12);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetTitle("Data/MC");
   mt_enu->GetYaxis()->SetNdivisions(505);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.1);
   mt_enu->GetYaxis()->SetTitleSize(0.12);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(0.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   mt_enu->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
