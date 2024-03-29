{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:33 2013) by ROOT version5.32/00
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
   upper->Range(-0.6362734,-2.903883,3.340435,7.051706);
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
   stack->SetMaximum(1362961);
   
   TH1F *dphijj_stack_11 = new TH1F("dphijj_stack_11","stack",50,0,3.1416);
   dphijj_stack_11->SetBinContent(4,0.002451002);
   dphijj_stack_11->SetBinContent(9,0.09675895);
   dphijj_stack_11->SetBinContent(10,0.07307188);
   dphijj_stack_11->SetBinContent(15,0.1400833);
   dphijj_stack_11->SetBinContent(16,0.1750072);
   dphijj_stack_11->SetBinError(4,0.002451002);
   dphijj_stack_11->SetBinError(9,0.09675896);
   dphijj_stack_11->SetBinError(10,0.07307188);
   dphijj_stack_11->SetBinError(15,0.09936068);
   dphijj_stack_11->SetBinError(16,0.1307253);
   dphijj_stack_11->SetMinimum(0.00197346);
   dphijj_stack_11->SetMaximum(3580358);
   dphijj_stack_11->SetEntries(7);
   dphijj_stack_11->SetStats(0);
   dphijj_stack_11->SetFillColor(4);
   dphijj_stack_11->SetLineColor(4);
   dphijj_stack_11->SetLineWidth(2);
   dphijj_stack_11->SetMarkerColor(4);
   dphijj_stack_11->SetMarkerStyle(21);
   dphijj_stack_11->SetMarkerSize(0.8);
   dphijj_stack_11->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj_stack_11->GetXaxis()->SetLabelFont(42);
   dphijj_stack_11->GetXaxis()->SetLabelOffset(0.007);
   dphijj_stack_11->GetXaxis()->SetLabelSize(0);
   dphijj_stack_11->GetXaxis()->SetTitleSize(0);
   dphijj_stack_11->GetXaxis()->SetTickLength(0.02);
   dphijj_stack_11->GetXaxis()->SetTitleOffset(0.9);
   dphijj_stack_11->GetXaxis()->SetTitleFont(42);
   dphijj_stack_11->GetYaxis()->SetTitle("Events");
   dphijj_stack_11->GetYaxis()->SetLabelFont(42);
   dphijj_stack_11->GetYaxis()->SetLabelOffset(0.007);
   dphijj_stack_11->GetYaxis()->SetLabelSize(0.035);
   dphijj_stack_11->GetYaxis()->SetTitleSize(0.045);
   dphijj_stack_11->GetYaxis()->SetTickLength(0.02);
   dphijj_stack_11->GetYaxis()->SetTitleOffset(1.55);
   dphijj_stack_11->GetYaxis()->SetTitleFont(42);
   dphijj_stack_11->GetZaxis()->SetLabelFont(42);
   dphijj_stack_11->GetZaxis()->SetLabelOffset(0.007);
   dphijj_stack_11->GetZaxis()->SetLabelSize(0.035);
   dphijj_stack_11->GetZaxis()->SetTitleSize(0.045);
   dphijj_stack_11->GetZaxis()->SetTickLength(0.02);
   dphijj_stack_11->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dphijj_stack_11);
   
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(4,0.002451002);
   dphijj->SetBinContent(9,0.09675895);
   dphijj->SetBinContent(10,0.07307188);
   dphijj->SetBinContent(15,0.1400833);
   dphijj->SetBinContent(16,0.1750072);
   dphijj->SetBinError(4,0.002451002);
   dphijj->SetBinError(9,0.09675896);
   dphijj->SetBinError(10,0.07307188);
   dphijj->SetBinError(15,0.09936068);
   dphijj->SetBinError(16,0.1307253);
   dphijj->SetMinimum(0.01);
   dphijj->SetMaximum(1050000);
   dphijj->SetEntries(7);
   dphijj->SetStats(0);
   dphijj->SetFillColor(4);
   dphijj->SetLineColor(4);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(4);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0);
   dphijj->GetXaxis()->SetTitleSize(0);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetTitle("Events");
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"HIST");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,0.9741814);
   dphijj->SetBinContent(2,0.3727424);
   dphijj->SetBinContent(3,2.026107);
   dphijj->SetBinContent(4,0.7263757);
   dphijj->SetBinContent(5,0.9304164);
   dphijj->SetBinContent(7,3.72703);
   dphijj->SetBinContent(8,0.4377308);
   dphijj->SetBinContent(9,2.081465);
   dphijj->SetBinContent(10,2.20295);
   dphijj->SetBinContent(11,1.512578);
   dphijj->SetBinContent(12,2.283596);
   dphijj->SetBinContent(13,3.176544);
   dphijj->SetBinContent(14,1.963746);
   dphijj->SetBinContent(15,2.936115);
   dphijj->SetBinError(1,0.5624459);
   dphijj->SetBinError(2,0.3727423);
   dphijj->SetBinError(3,1.179523);
   dphijj->SetBinError(4,0.7263757);
   dphijj->SetBinError(5,0.8059938);
   dphijj->SetBinError(7,1.706693);
   dphijj->SetBinError(8,0.3003458);
   dphijj->SetBinError(9,1.109567);
   dphijj->SetBinError(10,1.103903);
   dphijj->SetBinError(11,0.9246944);
   dphijj->SetBinError(12,1.329493);
   dphijj->SetBinError(13,1.442767);
   dphijj->SetBinError(14,1.146983);
   dphijj->SetBinError(15,1.565628);
   dphijj->SetEntries(47);
   dphijj->SetStats(0);
   dphijj->SetFillColor(5);
   dphijj->SetLineColor(5);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(5);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,4.172194);
   dphijj->SetBinContent(2,2.946835);
   dphijj->SetBinContent(3,1.593222);
   dphijj->SetBinContent(4,3.628465);
   dphijj->SetBinContent(5,4.229121);
   dphijj->SetBinContent(6,2.302223);
   dphijj->SetBinContent(7,1.944682);
   dphijj->SetBinContent(8,2.63866);
   dphijj->SetBinContent(9,1.904988);
   dphijj->SetBinContent(10,4.857883);
   dphijj->SetBinContent(11,5.484443);
   dphijj->SetBinContent(12,3.96386);
   dphijj->SetBinContent(13,3.4873);
   dphijj->SetBinContent(14,6.508204);
   dphijj->SetBinContent(15,1.981966);
   dphijj->SetBinContent(16,2.230413);
   dphijj->SetBinError(1,1.575521);
   dphijj->SetBinError(2,1.371882);
   dphijj->SetBinError(3,0.7639875);
   dphijj->SetBinError(4,1.259493);
   dphijj->SetBinError(5,1.671447);
   dphijj->SetBinError(6,1.01914);
   dphijj->SetBinError(7,0.8815192);
   dphijj->SetBinError(8,1.192121);
   dphijj->SetBinError(9,0.8993225);
   dphijj->SetBinError(10,1.550909);
   dphijj->SetBinError(11,1.775479);
   dphijj->SetBinError(12,1.596407);
   dphijj->SetBinError(13,1.611016);
   dphijj->SetBinError(14,2.126233);
   dphijj->SetBinError(15,0.87013);
   dphijj->SetBinError(16,0.9185083);
   dphijj->SetEntries(126);
   dphijj->SetStats(0);
   dphijj->SetFillColor(6);
   dphijj->SetLineColor(6);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(6);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,0.3462134);
   dphijj->SetBinContent(2,0.4866183);
   dphijj->SetBinContent(3,0.5641376);
   dphijj->SetBinContent(4,0.4677559);
   dphijj->SetBinContent(5,0.380982);
   dphijj->SetBinContent(6,0.5663773);
   dphijj->SetBinContent(7,0.4504077);
   dphijj->SetBinContent(8,0.4998348);
   dphijj->SetBinContent(9,0.3703493);
   dphijj->SetBinContent(10,0.45866);
   dphijj->SetBinContent(11,0.5652704);
   dphijj->SetBinContent(12,0.6424625);
   dphijj->SetBinContent(13,0.6599766);
   dphijj->SetBinContent(14,0.5244067);
   dphijj->SetBinContent(15,0.752997);
   dphijj->SetBinContent(16,0.5526887);
   dphijj->SetBinError(1,0.08496353);
   dphijj->SetBinError(2,0.1005618);
   dphijj->SetBinError(3,0.106192);
   dphijj->SetBinError(4,0.1004437);
   dphijj->SetBinError(5,0.08804848);
   dphijj->SetBinError(6,0.1088337);
   dphijj->SetBinError(7,0.09351558);
   dphijj->SetBinError(8,0.1007906);
   dphijj->SetBinError(9,0.08881082);
   dphijj->SetBinError(10,0.1006556);
   dphijj->SetBinError(11,0.1080924);
   dphijj->SetBinError(12,0.1156148);
   dphijj->SetBinError(13,0.1182985);
   dphijj->SetBinError(14,0.1024185);
   dphijj->SetBinError(15,0.1271785);
   dphijj->SetBinError(16,0.1102531);
   dphijj->SetEntries(461);
   dphijj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dphijj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dphijj->SetLineColor(ci);
   dphijj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dphijj->SetMarkerColor(ci);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,0.131295);
   dphijj->SetBinContent(3,0.08120943);
   dphijj->SetBinContent(5,0.07777023);
   dphijj->SetBinContent(8,0.08839675);
   dphijj->SetBinContent(9,0.01566963);
   dphijj->SetBinContent(10,0.02361848);
   dphijj->SetBinContent(11,0.006221783);
   dphijj->SetBinContent(12,0.003268152);
   dphijj->SetBinContent(13,0.2026035);
   dphijj->SetBinContent(14,0.08303766);
   dphijj->SetBinContent(15,0.1047787);
   dphijj->SetBinContent(16,0.04288836);
   dphijj->SetBinError(1,0.09999054);
   dphijj->SetBinError(3,0.08120943);
   dphijj->SetBinError(5,0.07777023);
   dphijj->SetBinError(8,0.08839675);
   dphijj->SetBinError(9,0.01566963);
   dphijj->SetBinError(10,0.02361848);
   dphijj->SetBinError(11,0.006221784);
   dphijj->SetBinError(12,0.003268153);
   dphijj->SetBinError(13,0.2026035);
   dphijj->SetBinError(14,0.08303766);
   dphijj->SetBinError(15,0.1047787);
   dphijj->SetBinError(16,0.04288836);
   dphijj->SetEntries(13);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,0.03378735);
   dphijj->SetBinContent(2,0.006725533);
   dphijj->SetBinContent(3,0.006768879);
   dphijj->SetBinContent(4,0.02698516);
   dphijj->SetBinContent(5,0.01397032);
   dphijj->SetBinContent(9,0.01350117);
   dphijj->SetBinContent(10,0.01332837);
   dphijj->SetBinContent(11,0.03236289);
   dphijj->SetBinContent(12,0.01590651);
   dphijj->SetBinContent(13,0.01534369);
   dphijj->SetBinContent(14,0.007014428);
   dphijj->SetBinContent(15,0.05971451);
   dphijj->SetBinContent(16,0.01036287);
   dphijj->SetBinError(1,0.01396063);
   dphijj->SetBinError(2,0.006725533);
   dphijj->SetBinError(3,0.006768879);
   dphijj->SetBinError(4,0.01374342);
   dphijj->SetBinError(5,0.01059698);
   dphijj->SetBinError(9,0.009614336);
   dphijj->SetBinError(10,0.009470281);
   dphijj->SetBinError(11,0.01499307);
   dphijj->SetBinError(12,0.009384987);
   dphijj->SetBinError(13,0.01105657);
   dphijj->SetBinError(14,0.006568853);
   dphijj->SetBinError(15,0.02132538);
   dphijj->SetBinError(16,0.009615023);
   dphijj->SetEntries(41);
   dphijj->SetStats(0);
   dphijj->SetFillColor(3);
   dphijj->SetLineColor(3);
   dphijj->SetLineWidth(2);
   dphijj->SetMarkerColor(3);
   dphijj->SetMarkerStyle(21);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   stack->Add(dphijj,"");
   stack->Draw("hist");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,3);
   dphijj->SetBinContent(2,4);
   dphijj->SetBinContent(4,5);
   dphijj->SetBinContent(5,4);
   dphijj->SetBinContent(6,3);
   dphijj->SetBinContent(7,3);
   dphijj->SetBinContent(8,2);
   dphijj->SetBinContent(9,3);
   dphijj->SetBinContent(10,6);
   dphijj->SetBinContent(11,2);
   dphijj->SetBinContent(13,6);
   dphijj->SetBinContent(14,5);
   dphijj->SetBinContent(15,2);
   dphijj->SetBinContent(16,7);
   dphijj->SetBinError(1,1.732051);
   dphijj->SetBinError(2,2);
   dphijj->SetBinError(4,2.236068);
   dphijj->SetBinError(5,2);
   dphijj->SetBinError(6,1.732051);
   dphijj->SetBinError(7,1.732051);
   dphijj->SetBinError(8,1.414214);
   dphijj->SetBinError(9,1.732051);
   dphijj->SetBinError(10,2.44949);
   dphijj->SetBinError(11,1.414214);
   dphijj->SetBinError(13,2.44949);
   dphijj->SetBinError(14,2.236068);
   dphijj->SetBinError(15,1.414214);
   dphijj->SetBinError(16,2.645751);
   dphijj->SetEntries(55);
   dphijj->SetStats(0);
   dphijj->SetFillColor(1);
   dphijj->SetFillStyle(0);
   dphijj->SetLineWidth(3);
   dphijj->SetMarkerStyle(20);
   dphijj->SetMarkerSize(1.3);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("SAMEPE1");
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetStats(0);
   dphijj->SetFillColor(1);
   dphijj->SetFillStyle(0);
   dphijj->SetLineStyle(2);
   dphijj->SetLineWidth(3);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.035);
   dphijj->GetXaxis()->SetTitleSize(0.045);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.035);
   dphijj->GetYaxis()->SetTitleSize(0.045);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(1.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("dphijj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dphijj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","EWK W+jets","f");

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
   entry=leg->AddEntry("dphijj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dphijj","Dibosons","f");
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
   lower->Range(-0.6362734,-0.653951,3.340435,2.070845);
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
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,0.5302535);
   dphijj->SetBinContent(2,1.049064);
   dphijj->SetBinContent(4,1.031017);
   dphijj->SetBinContent(5,0.7101945);
   dphijj->SetBinContent(6,1.045806);
   dphijj->SetBinContent(7,0.4900263);
   dphijj->SetBinContent(8,0.5457588);
   dphijj->SetBinContent(9,0.6839988);
   dphijj->SetBinContent(10,0.7940246);
   dphijj->SetBinContent(11,0.2631276);
   dphijj->SetBinContent(13,0.7955695);
   dphijj->SetBinContent(14,0.5502725);
   dphijj->SetBinContent(15,0.3427257);
   dphijj->SetBinContent(16,2.467958);
   dphijj->SetBinError(1,0.3441785);
   dphijj->SetBinError(2,0.6548968);
   dphijj->SetBinError(4,0.5555273);
   dphijj->SetBinError(5,0.4255158);
   dphijj->SetBinError(6,0.7100651);
   dphijj->SetBinError(7,0.3220838);
   dphijj->SetBinError(8,0.4276044);
   dphijj->SetBinError(9,0.4536122);
   dphijj->SetBinError(10,0.3810672);
   dphijj->SetBinError(11,0.1985821);
   dphijj->SetBinError(13,0.3976765);
   dphijj->SetBinError(14,0.2864072);
   dphijj->SetBinError(15,0.264371);
   dphijj->SetBinError(16,1.232687);
   dphijj->SetMinimum(0);
   dphijj->SetMaximum(2);
   dphijj->SetEntries(31.54443);
   dphijj->SetStats(0);
   dphijj->SetFillStyle(0);
   dphijj->SetMarkerStyle(20);
   dphijj->SetMarkerSize(0.8);
   dphijj->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj->GetXaxis()->SetLabelFont(42);
   dphijj->GetXaxis()->SetLabelOffset(0.007);
   dphijj->GetXaxis()->SetLabelSize(0.1);
   dphijj->GetXaxis()->SetTitleSize(0.12);
   dphijj->GetXaxis()->SetTickLength(0.02);
   dphijj->GetXaxis()->SetTitleOffset(0.9);
   dphijj->GetXaxis()->SetTitleFont(42);
   dphijj->GetYaxis()->SetTitle("Data/MC");
   dphijj->GetYaxis()->SetNdivisions(505);
   dphijj->GetYaxis()->SetLabelFont(42);
   dphijj->GetYaxis()->SetLabelOffset(0.007);
   dphijj->GetYaxis()->SetLabelSize(0.1);
   dphijj->GetYaxis()->SetTitleSize(0.12);
   dphijj->GetYaxis()->SetTickLength(0.02);
   dphijj->GetYaxis()->SetTitleOffset(0.55);
   dphijj->GetYaxis()->SetTitleFont(42);
   dphijj->GetZaxis()->SetLabelFont(42);
   dphijj->GetZaxis()->SetLabelOffset(0.007);
   dphijj->GetZaxis()->SetLabelSize(0.035);
   dphijj->GetZaxis()->SetTitleSize(0.045);
   dphijj->GetZaxis()->SetTickLength(0.02);
   dphijj->GetZaxis()->SetTitleFont(42);
   dphijj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
