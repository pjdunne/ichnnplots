{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:54 2013) by ROOT version5.32/00
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
   upper->Range(-0.6362734,-2.883968,3.340435,6.725649);
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
   stack->SetMaximum(685043);
   
   TH1F *dphijj_stack_8 = new TH1F("dphijj_stack_8","stack",50,0,3.1416);
   dphijj_stack_8->SetBinContent(1,0.07658581);
   dphijj_stack_8->SetBinContent(5,0.06946364);
   dphijj_stack_8->SetBinContent(8,0.04053154);
   dphijj_stack_8->SetBinContent(9,0.03680818);
   dphijj_stack_8->SetBinContent(10,0.09606801);
   dphijj_stack_8->SetBinContent(12,0.0921727);
   dphijj_stack_8->SetBinContent(14,0.07895202);
   dphijj_stack_8->SetBinContent(15,0.1101499);
   dphijj_stack_8->SetBinError(1,0.07658581);
   dphijj_stack_8->SetBinError(5,0.06946364);
   dphijj_stack_8->SetBinError(8,0.04053154);
   dphijj_stack_8->SetBinError(9,0.03680818);
   dphijj_stack_8->SetBinError(10,0.09606801);
   dphijj_stack_8->SetBinError(12,0.06550599);
   dphijj_stack_8->SetBinError(14,0.07895202);
   dphijj_stack_8->SetBinError(15,0.08020427);
   dphijj_stack_8->SetMinimum(0.002033405);
   dphijj_stack_8->SetMaximum(1758604);
   dphijj_stack_8->SetEntries(10);
   dphijj_stack_8->SetStats(0);
   dphijj_stack_8->SetFillColor(4);
   dphijj_stack_8->SetLineColor(4);
   dphijj_stack_8->SetLineWidth(2);
   dphijj_stack_8->SetMarkerColor(4);
   dphijj_stack_8->SetMarkerStyle(21);
   dphijj_stack_8->SetMarkerSize(0.8);
   dphijj_stack_8->GetXaxis()->SetTitle("#Delta#phi_{jj}");
   dphijj_stack_8->GetXaxis()->SetLabelFont(42);
   dphijj_stack_8->GetXaxis()->SetLabelOffset(0.007);
   dphijj_stack_8->GetXaxis()->SetLabelSize(0);
   dphijj_stack_8->GetXaxis()->SetTitleSize(0);
   dphijj_stack_8->GetXaxis()->SetTickLength(0.02);
   dphijj_stack_8->GetXaxis()->SetTitleOffset(0.9);
   dphijj_stack_8->GetXaxis()->SetTitleFont(42);
   dphijj_stack_8->GetYaxis()->SetTitle("Events");
   dphijj_stack_8->GetYaxis()->SetLabelFont(42);
   dphijj_stack_8->GetYaxis()->SetLabelOffset(0.007);
   dphijj_stack_8->GetYaxis()->SetLabelSize(0.035);
   dphijj_stack_8->GetYaxis()->SetTitleSize(0.045);
   dphijj_stack_8->GetYaxis()->SetTickLength(0.02);
   dphijj_stack_8->GetYaxis()->SetTitleOffset(1.55);
   dphijj_stack_8->GetYaxis()->SetTitleFont(42);
   dphijj_stack_8->GetZaxis()->SetLabelFont(42);
   dphijj_stack_8->GetZaxis()->SetLabelOffset(0.007);
   dphijj_stack_8->GetZaxis()->SetLabelSize(0.035);
   dphijj_stack_8->GetZaxis()->SetTitleSize(0.045);
   dphijj_stack_8->GetZaxis()->SetTickLength(0.02);
   dphijj_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dphijj_stack_8);
   
   
   TH1F *dphijj = new TH1F("dphijj","dphijj",50,0,3.1416);
   dphijj->SetBinContent(1,0.07658581);
   dphijj->SetBinContent(5,0.06946364);
   dphijj->SetBinContent(8,0.04053154);
   dphijj->SetBinContent(9,0.03680818);
   dphijj->SetBinContent(10,0.09606801);
   dphijj->SetBinContent(12,0.0921727);
   dphijj->SetBinContent(14,0.07895202);
   dphijj->SetBinContent(15,0.1101499);
   dphijj->SetBinError(1,0.07658581);
   dphijj->SetBinError(5,0.06946364);
   dphijj->SetBinError(8,0.04053154);
   dphijj->SetBinError(9,0.03680818);
   dphijj->SetBinError(10,0.09606801);
   dphijj->SetBinError(12,0.06550599);
   dphijj->SetBinError(14,0.07895202);
   dphijj->SetBinError(15,0.08020427);
   dphijj->SetMinimum(0.01);
   dphijj->SetMaximum(750000);
   dphijj->SetEntries(10);
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
   dphijj->SetBinContent(4,0.8305621);
   dphijj->SetBinContent(6,0.7135496);
   dphijj->SetBinContent(8,0.05925486);
   dphijj->SetBinContent(13,0.6489087);
   dphijj->SetBinContent(15,0.8233316);
   dphijj->SetBinContent(16,1.831426);
   dphijj->SetBinError(4,0.8305621);
   dphijj->SetBinError(6,0.7135496);
   dphijj->SetBinError(8,0.05925486);
   dphijj->SetBinError(13,0.6489087);
   dphijj->SetBinError(15,0.8233316);
   dphijj->SetBinError(16,1.390919);
   dphijj->SetEntries(7);
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
   dphijj->SetBinContent(1,1.188901);
   dphijj->SetBinContent(2,0.8844042);
   dphijj->SetBinContent(3,1.554253);
   dphijj->SetBinContent(4,1.613095);
   dphijj->SetBinContent(5,0.9759879);
   dphijj->SetBinContent(6,1.718901);
   dphijj->SetBinContent(7,2.18977);
   dphijj->SetBinContent(8,1.970386);
   dphijj->SetBinContent(9,1.176777);
   dphijj->SetBinContent(10,2.275762);
   dphijj->SetBinContent(11,1.509363);
   dphijj->SetBinContent(12,1.100999);
   dphijj->SetBinContent(13,2.049555);
   dphijj->SetBinContent(14,2.035056);
   dphijj->SetBinContent(15,2.018997);
   dphijj->SetBinContent(16,1.521668);
   dphijj->SetBinError(1,0.3573959);
   dphijj->SetBinError(2,0.375934);
   dphijj->SetBinError(3,0.4812144);
   dphijj->SetBinError(4,0.3945975);
   dphijj->SetBinError(5,0.3384757);
   dphijj->SetBinError(6,0.4495502);
   dphijj->SetBinError(7,0.534221);
   dphijj->SetBinError(8,0.5407558);
   dphijj->SetBinError(9,0.3951759);
   dphijj->SetBinError(10,0.5107792);
   dphijj->SetBinError(11,0.4230703);
   dphijj->SetBinError(12,0.3284541);
   dphijj->SetBinError(13,0.5229151);
   dphijj->SetBinError(14,0.5110522);
   dphijj->SetBinError(15,0.5226127);
   dphijj->SetBinError(16,0.4159817);
   dphijj->SetEntries(259);
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
   dphijj->SetBinContent(1,0.8149896);
   dphijj->SetBinContent(2,0.6887354);
   dphijj->SetBinContent(3,0.8660748);
   dphijj->SetBinContent(4,0.9397796);
   dphijj->SetBinContent(5,0.9660386);
   dphijj->SetBinContent(6,0.9594559);
   dphijj->SetBinContent(7,1.284905);
   dphijj->SetBinContent(8,1.103085);
   dphijj->SetBinContent(9,1.213788);
   dphijj->SetBinContent(10,1.049865);
   dphijj->SetBinContent(11,1.404385);
   dphijj->SetBinContent(12,0.8926079);
   dphijj->SetBinContent(13,0.9973817);
   dphijj->SetBinContent(14,1.031037);
   dphijj->SetBinContent(15,1.039128);
   dphijj->SetBinContent(16,1.21386);
   dphijj->SetBinError(1,0.09365745);
   dphijj->SetBinError(2,0.08449587);
   dphijj->SetBinError(3,0.09694385);
   dphijj->SetBinError(4,0.1017445);
   dphijj->SetBinError(5,0.1026596);
   dphijj->SetBinError(6,0.09937188);
   dphijj->SetBinError(7,0.1203987);
   dphijj->SetBinError(8,0.1109102);
   dphijj->SetBinError(9,0.1106814);
   dphijj->SetBinError(10,0.1040807);
   dphijj->SetBinError(11,0.1251535);
   dphijj->SetBinError(12,0.09575305);
   dphijj->SetBinError(13,0.1026352);
   dphijj->SetBinError(14,0.1039608);
   dphijj->SetBinError(15,0.1027937);
   dphijj->SetBinError(16,0.1169955);
   dphijj->SetEntries(1961);
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
   dphijj->SetBinContent(1,2);
   dphijj->SetBinContent(4,1);
   dphijj->SetBinContent(5,1);
   dphijj->SetBinContent(6,1);
   dphijj->SetBinContent(7,4);
   dphijj->SetBinContent(8,4);
   dphijj->SetBinContent(10,1);
   dphijj->SetBinContent(11,1);
   dphijj->SetBinContent(12,2);
   dphijj->SetBinContent(13,5);
   dphijj->SetBinContent(14,1);
   dphijj->SetBinContent(15,4);
   dphijj->SetBinError(1,1.414214);
   dphijj->SetBinError(4,1);
   dphijj->SetBinError(5,1);
   dphijj->SetBinError(6,1);
   dphijj->SetBinError(7,2);
   dphijj->SetBinError(8,2);
   dphijj->SetBinError(10,1);
   dphijj->SetBinError(11,1);
   dphijj->SetBinError(12,1.414214);
   dphijj->SetBinError(13,2.236068);
   dphijj->SetBinError(14,1);
   dphijj->SetBinError(15,2);
   dphijj->SetEntries(27);
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
   dphijj->SetBinContent(1,0.9980585);
   dphijj->SetBinContent(4,0.2955575);
   dphijj->SetBinContent(5,0.514926);
   dphijj->SetBinContent(6,0.2948195);
   dphijj->SetBinContent(7,1.151187);
   dphijj->SetBinContent(8,1.276843);
   dphijj->SetBinContent(10,0.3006952);
   dphijj->SetBinContent(11,0.3432006);
   dphijj->SetBinContent(12,1.003207);
   dphijj->SetBinContent(13,1.35287);
   dphijj->SetBinContent(14,0.326148);
   dphijj->SetBinContent(15,1.030541);
   dphijj->SetBinError(1,0.7293299);
   dphijj->SetBinError(4,0.3064071);
   dphijj->SetBinError(5,0.5233968);
   dphijj->SetBinError(6,0.3039185);
   dphijj->SetBinError(7,0.6035106);
   dphijj->SetBinError(8,0.6773376);
   dphijj->SetBinError(10,0.3043667);
   dphijj->SetBinError(11,0.3471126);
   dphijj->SetBinError(12,0.7299671);
   dphijj->SetBinError(13,0.6786198);
   dphijj->SetBinError(14,0.3308323);
   dphijj->SetBinError(15,0.5773097);
   dphijj->SetMinimum(0);
   dphijj->SetMaximum(2);
   dphijj->SetEntries(22.80285);
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
