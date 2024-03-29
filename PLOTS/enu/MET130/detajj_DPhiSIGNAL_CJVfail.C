{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:10:39 2013) by ROOT version5.32/00
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
   upper->Range(-1.053165,-3744.139,5.529114,183462.8);
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
   stack->SetMaximum(165811.9);
   
   TH1F *detajj_stack_11 = new TH1F("detajj_stack_11","stack",50,0,10);
   detajj_stack_11->SetBinContent(22,0.07555881);
   detajj_stack_11->SetBinContent(25,0.1172973);
   detajj_stack_11->SetBinContent(26,0.07552288);
   detajj_stack_11->SetBinContent(27,0.09675895);
   detajj_stack_11->SetBinContent(28,0.06452449);
   detajj_stack_11->SetBinContent(29,0.05770994);
   detajj_stack_11->SetBinError(22,0.07555881);
   detajj_stack_11->SetBinError(25,0.1172973);
   detajj_stack_11->SetBinError(26,0.07311298);
   detajj_stack_11->SetBinError(27,0.09675896);
   detajj_stack_11->SetBinError(28,0.06452449);
   detajj_stack_11->SetBinError(29,0.05770994);
   detajj_stack_11->SetMinimum(0);
   detajj_stack_11->SetMaximum(174102.5);
   detajj_stack_11->SetEntries(7);
   detajj_stack_11->SetStats(0);
   detajj_stack_11->SetFillColor(4);
   detajj_stack_11->SetLineColor(4);
   detajj_stack_11->SetLineWidth(2);
   detajj_stack_11->SetMarkerColor(4);
   detajj_stack_11->SetMarkerStyle(21);
   detajj_stack_11->SetMarkerSize(0.8);
   detajj_stack_11->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj_stack_11->GetXaxis()->SetRange(1,26);
   detajj_stack_11->GetXaxis()->SetLabelFont(42);
   detajj_stack_11->GetXaxis()->SetLabelOffset(0.007);
   detajj_stack_11->GetXaxis()->SetLabelSize(0);
   detajj_stack_11->GetXaxis()->SetTitleSize(0);
   detajj_stack_11->GetXaxis()->SetTickLength(0.02);
   detajj_stack_11->GetXaxis()->SetTitleOffset(0.9);
   detajj_stack_11->GetXaxis()->SetTitleFont(42);
   detajj_stack_11->GetYaxis()->SetTitle("Events");
   detajj_stack_11->GetYaxis()->SetLabelFont(42);
   detajj_stack_11->GetYaxis()->SetLabelOffset(0.007);
   detajj_stack_11->GetYaxis()->SetLabelSize(0.035);
   detajj_stack_11->GetYaxis()->SetTitleSize(0.045);
   detajj_stack_11->GetYaxis()->SetTickLength(0.02);
   detajj_stack_11->GetYaxis()->SetTitleOffset(1.55);
   detajj_stack_11->GetYaxis()->SetTitleFont(42);
   detajj_stack_11->GetZaxis()->SetLabelFont(42);
   detajj_stack_11->GetZaxis()->SetLabelOffset(0.007);
   detajj_stack_11->GetZaxis()->SetLabelSize(0.035);
   detajj_stack_11->GetZaxis()->SetTitleSize(0.045);
   detajj_stack_11->GetZaxis()->SetTickLength(0.02);
   detajj_stack_11->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(detajj_stack_11);
   
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,0.07555881);
   detajj->SetBinContent(25,0.1172973);
   detajj->SetBinContent(26,0.07552288);
   detajj->SetBinContent(27,0.09675895);
   detajj->SetBinContent(28,0.06452449);
   detajj->SetBinContent(29,0.05770994);
   detajj->SetBinError(22,0.07555881);
   detajj->SetBinError(25,0.1172973);
   detajj->SetBinError(26,0.07311298);
   detajj->SetBinError(27,0.09675896);
   detajj->SetBinError(28,0.06452449);
   detajj->SetBinError(29,0.05770994);
   detajj->SetMaximum(154000);
   detajj->SetEntries(7);
   detajj->SetStats(0);
   detajj->SetFillColor(4);
   detajj->SetLineColor(4);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(4);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj->GetXaxis()->SetRange(1,26);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0);
   detajj->GetXaxis()->SetTitleSize(0);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetTitle("Events");
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"HIST");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,4.026584);
   detajj->SetBinContent(23,2.450798);
   detajj->SetBinContent(24,5.134068);
   detajj->SetBinContent(25,4.145468);
   detajj->SetBinContent(26,2.099093);
   detajj->SetBinContent(27,3.394212);
   detajj->SetBinContent(28,2.058581);
   detajj->SetBinContent(29,0.7830524);
   detajj->SetBinContent(30,0.8818793);
   detajj->SetBinContent(32,0.3778405);
   detajj->SetBinError(22,1.756913);
   detajj->SetBinError(23,1.152849);
   detajj->SetBinError(24,1.857144);
   detajj->SetBinError(25,1.603032);
   detajj->SetBinError(26,1.113737);
   detajj->SetBinError(27,1.535049);
   detajj->SetBinError(28,1.30203);
   detajj->SetBinError(29,0.578192);
   detajj->SetBinError(30,0.8818793);
   detajj->SetBinError(32,0.3300304);
   detajj->SetEntries(47);
   detajj->SetStats(0);
   detajj->SetFillColor(5);
   detajj->SetLineColor(5);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(5);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,7.961655);
   detajj->SetBinContent(23,9.971176);
   detajj->SetBinContent(24,6.780329);
   detajj->SetBinContent(25,9.441766);
   detajj->SetBinContent(26,2.782672);
   detajj->SetBinContent(27,5.224068);
   detajj->SetBinContent(28,3.393745);
   detajj->SetBinContent(29,2.647169);
   detajj->SetBinContent(30,0.7592135);
   detajj->SetBinContent(31,0.7188405);
   detajj->SetBinContent(32,0.7814719);
   detajj->SetBinContent(33,1.651031);
   detajj->SetBinContent(34,0.3580739);
   detajj->SetBinContent(35,1.403246);
   detajj->SetBinError(22,1.962905);
   detajj->SetBinError(23,2.391282);
   detajj->SetBinError(24,1.722124);
   detajj->SetBinError(25,2.526138);
   detajj->SetBinError(26,1.028318);
   detajj->SetBinError(27,1.810868);
   detajj->SetBinError(28,1.319805);
   detajj->SetBinError(29,1.275714);
   detajj->SetBinError(30,0.5389738);
   detajj->SetBinError(31,0.5106874);
   detajj->SetBinError(32,0.5538616);
   detajj->SetBinError(33,1.184875);
   detajj->SetBinError(34,0.3580739);
   detajj->SetBinError(35,1.087373);
   detajj->SetEntries(126);
   detajj->SetStats(0);
   detajj->SetFillColor(6);
   detajj->SetLineColor(6);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(6);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,1.080088);
   detajj->SetBinContent(23,1.431741);
   detajj->SetBinContent(24,0.8871194);
   detajj->SetBinContent(25,1.268332);
   detajj->SetBinContent(26,1.001814);
   detajj->SetBinContent(27,0.8432297);
   detajj->SetBinContent(28,0.6046439);
   detajj->SetBinContent(29,0.4086503);
   detajj->SetBinContent(30,0.2732142);
   detajj->SetBinContent(31,0.1851272);
   detajj->SetBinContent(32,0.1471683);
   detajj->SetBinContent(33,0.1173726);
   detajj->SetBinContent(34,0.0192787);
   detajj->SetBinContent(35,0.02136013);
   detajj->SetBinError(22,0.1557349);
   detajj->SetBinError(23,0.1714688);
   detajj->SetBinError(24,0.1343912);
   detajj->SetBinError(25,0.1638895);
   detajj->SetBinError(26,0.1431599);
   detajj->SetBinError(27,0.1339562);
   detajj->SetBinError(28,0.1120356);
   detajj->SetBinError(29,0.09349563);
   detajj->SetBinError(30,0.07052266);
   detajj->SetBinError(31,0.06180272);
   detajj->SetBinError(32,0.05125389);
   detajj->SetBinError(33,0.05026149);
   detajj->SetBinError(34,0.0192787);
   detajj->SetBinError(35,0.02136013);
   detajj->SetEntries(461);
   detajj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   detajj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   detajj->SetLineColor(ci);
   detajj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   detajj->SetMarkerColor(ci);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetStats(0);
   detajj->SetFillColor(3);
   detajj->SetLineColor(3);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(3);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,0.4876841);
   detajj->SetBinContent(23,0.1430356);
   detajj->SetBinContent(24,0.006221783);
   detajj->SetBinContent(25,0.07777023);
   detajj->SetBinContent(26,0.08303766);
   detajj->SetBinContent(30,0.02361848);
   detajj->SetBinContent(31,0.03938988);
   detajj->SetBinError(22,0.2613184);
   detajj->SetBinError(23,0.09322339);
   detajj->SetBinError(24,0.006221784);
   detajj->SetBinError(25,0.07777023);
   detajj->SetBinError(26,0.08303766);
   detajj->SetBinError(30,0.02361848);
   detajj->SetBinError(31,0.03938988);
   detajj->SetEntries(13);
   detajj->SetStats(0);
   detajj->SetFillColor(3);
   detajj->SetLineColor(3);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(3);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,0.009674845);
   detajj->SetBinContent(23,0.07520349);
   detajj->SetBinContent(24,0.06538454);
   detajj->SetBinContent(25,0.02317612);
   detajj->SetBinContent(26,0.03287984);
   detajj->SetBinContent(27,0.004102079);
   detajj->SetBinContent(28,0.005946027);
   detajj->SetBinContent(29,0.005481376);
   detajj->SetBinContent(30,0.006406953);
   detajj->SetBinContent(31,0.005198983);
   detajj->SetBinContent(32,0.006552598);
   detajj->SetBinContent(33,0.006587432);
   detajj->SetBinContent(35,0.00917739);
   detajj->SetBinError(22,0.009674845);
   detajj->SetBinError(23,0.02279468);
   detajj->SetBinError(24,0.02128819);
   detajj->SetBinError(25,0.01359314);
   detajj->SetBinError(26,0.01522397);
   detajj->SetBinError(27,0.004102079);
   detajj->SetBinError(28,0.005946027);
   detajj->SetBinError(29,0.005481376);
   detajj->SetBinError(30,0.006406953);
   detajj->SetBinError(31,0.005198983);
   detajj->SetBinError(32,0.006552599);
   detajj->SetBinError(33,0.005860015);
   detajj->SetBinError(35,0.00917739);
   detajj->SetEntries(41);
   detajj->SetStats(0);
   detajj->SetFillColor(3);
   detajj->SetLineColor(3);
   detajj->SetLineWidth(2);
   detajj->SetMarkerColor(3);
   detajj->SetMarkerStyle(21);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   stack->Add(detajj,"");
   stack->Draw("hist");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,8);
   detajj->SetBinContent(23,8);
   detajj->SetBinContent(24,5);
   detajj->SetBinContent(25,14);
   detajj->SetBinContent(26,8);
   detajj->SetBinContent(27,4);
   detajj->SetBinContent(28,3);
   detajj->SetBinContent(29,2);
   detajj->SetBinContent(30,3);
   detajj->SetBinError(22,2.828427);
   detajj->SetBinError(23,2.828427);
   detajj->SetBinError(24,2.236068);
   detajj->SetBinError(25,3.741657);
   detajj->SetBinError(26,2.828427);
   detajj->SetBinError(27,2);
   detajj->SetBinError(28,1.732051);
   detajj->SetBinError(29,1.414214);
   detajj->SetBinError(30,1.732051);
   detajj->SetEntries(55);
   detajj->SetStats(0);
   detajj->SetFillColor(1);
   detajj->SetFillStyle(0);
   detajj->SetLineWidth(3);
   detajj->SetMarkerStyle(20);
   detajj->SetMarkerSize(1.3);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   detajj->Draw("SAMEPE1");
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetStats(0);
   detajj->SetFillColor(1);
   detajj->SetFillStyle(0);
   detajj->SetLineStyle(2);
   detajj->SetLineWidth(3);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.035);
   detajj->GetXaxis()->SetTitleSize(0.045);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.035);
   detajj->GetYaxis()->SetTitleSize(0.045);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(1.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   detajj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("detajj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("detajj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","EWK W+jets","f");

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
   entry=leg->AddEntry("detajj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("detajj","Dibosons","f");
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
   lower->Range(-1.053165,-0.653951,5.529114,2.070845);
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
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,0.5897232);
   detajj->SetBinContent(23,0.5685067);
   detajj->SetBinContent(24,0.3884062);
   detajj->SetBinContent(25,0.9360471);
   detajj->SetBinContent(26,1.333445);
   detajj->SetBinContent(27,0.4225824);
   detajj->SetBinContent(28,0.4948114);
   detajj->SetBinContent(29,0.5202436);
   detajj->SetBinContent(30,1.542946);
   detajj->SetBinError(22,0.2382465);
   detajj->SetBinError(23,0.227959);
   detajj->SetBinError(24,0.1898113);
   detajj->SetBinError(25,0.3126885);
   detajj->SetBinError(26,0.5806341);
   detajj->SetBinError(27,0.2364572);
   detajj->SetBinError(28,0.3234043);
   detajj->SetBinError(29,0.4140212);
   detajj->SetBinError(30,1.212336);
   detajj->SetMinimum(0);
   detajj->SetMaximum(2);
   detajj->SetEntries(25.12284);
   detajj->SetStats(0);
   detajj->SetFillStyle(0);
   detajj->SetMarkerStyle(20);
   detajj->SetMarkerSize(0.8);
   detajj->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj->GetXaxis()->SetRange(1,26);
   detajj->GetXaxis()->SetLabelFont(42);
   detajj->GetXaxis()->SetLabelOffset(0.007);
   detajj->GetXaxis()->SetLabelSize(0.1);
   detajj->GetXaxis()->SetTitleSize(0.12);
   detajj->GetXaxis()->SetTickLength(0.02);
   detajj->GetXaxis()->SetTitleOffset(0.9);
   detajj->GetXaxis()->SetTitleFont(42);
   detajj->GetYaxis()->SetTitle("Data/MC");
   detajj->GetYaxis()->SetNdivisions(505);
   detajj->GetYaxis()->SetLabelFont(42);
   detajj->GetYaxis()->SetLabelOffset(0.007);
   detajj->GetYaxis()->SetLabelSize(0.1);
   detajj->GetYaxis()->SetTitleSize(0.12);
   detajj->GetYaxis()->SetTickLength(0.02);
   detajj->GetYaxis()->SetTitleOffset(0.55);
   detajj->GetYaxis()->SetTitleFont(42);
   detajj->GetZaxis()->SetLabelFont(42);
   detajj->GetZaxis()->SetLabelOffset(0.007);
   detajj->GetZaxis()->SetLabelSize(0.035);
   detajj->GetZaxis()->SetTitleSize(0.045);
   detajj->GetZaxis()->SetTickLength(0.02);
   detajj->GetZaxis()->SetTitleFont(42);
   detajj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
