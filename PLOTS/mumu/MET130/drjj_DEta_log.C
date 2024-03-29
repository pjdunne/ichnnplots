{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:58 2013) by ROOT version5.32/00
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
   upper->Range(-2.025316,-2.963779,10.63291,8.07044);
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
   stack->SetMaximum(1.173338e+07);
   
   TH1F *drjj_stack_5 = new TH1F("drjj_stack_5","stack",50,0,10);
   drjj_stack_5->SetBinContent(22,0.2056512);
   drjj_stack_5->SetBinContent(23,0.3451643);
   drjj_stack_5->SetBinContent(24,0.4696212);
   drjj_stack_5->SetBinContent(25,0.6475204);
   drjj_stack_5->SetBinContent(26,0.8868197);
   drjj_stack_5->SetBinContent(27,0.9227649);
   drjj_stack_5->SetBinContent(28,0.4280008);
   drjj_stack_5->SetBinContent(29,0.3152848);
   drjj_stack_5->SetBinContent(30,0.178818);
   drjj_stack_5->SetBinContent(31,0.02926397);
   drjj_stack_5->SetBinContent(33,0.0336256);
   drjj_stack_5->SetBinContent(34,0.01605115);
   drjj_stack_5->SetBinError(22,0.08197537);
   drjj_stack_5->SetBinError(23,0.1262356);
   drjj_stack_5->SetBinError(24,0.157142);
   drjj_stack_5->SetBinError(25,0.1698878);
   drjj_stack_5->SetBinError(26,0.2372815);
   drjj_stack_5->SetBinError(27,0.2415779);
   drjj_stack_5->SetBinError(28,0.1451073);
   drjj_stack_5->SetBinError(29,0.1419462);
   drjj_stack_5->SetBinError(30,0.09199829);
   drjj_stack_5->SetBinError(31,0.02533563);
   drjj_stack_5->SetBinError(33,0.0336256);
   drjj_stack_5->SetBinError(34,0.01605115);
   drjj_stack_5->SetMinimum(0.001806779);
   drjj_stack_5->SetMaximum(3.301637e+07);
   drjj_stack_5->SetEntries(125);
   drjj_stack_5->SetStats(0);
   drjj_stack_5->SetFillColor(4);
   drjj_stack_5->SetLineColor(4);
   drjj_stack_5->SetLineWidth(2);
   drjj_stack_5->SetMarkerColor(4);
   drjj_stack_5->SetMarkerStyle(21);
   drjj_stack_5->SetMarkerSize(0.8);
   drjj_stack_5->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj_stack_5->GetXaxis()->SetLabelFont(42);
   drjj_stack_5->GetXaxis()->SetLabelOffset(0.007);
   drjj_stack_5->GetXaxis()->SetLabelSize(0);
   drjj_stack_5->GetXaxis()->SetTitleSize(0);
   drjj_stack_5->GetXaxis()->SetTickLength(0.02);
   drjj_stack_5->GetXaxis()->SetTitleOffset(0.9);
   drjj_stack_5->GetXaxis()->SetTitleFont(42);
   drjj_stack_5->GetYaxis()->SetTitle("Events");
   drjj_stack_5->GetYaxis()->SetLabelFont(42);
   drjj_stack_5->GetYaxis()->SetLabelOffset(0.007);
   drjj_stack_5->GetYaxis()->SetLabelSize(0.035);
   drjj_stack_5->GetYaxis()->SetTitleSize(0.045);
   drjj_stack_5->GetYaxis()->SetTickLength(0.02);
   drjj_stack_5->GetYaxis()->SetTitleOffset(1.55);
   drjj_stack_5->GetYaxis()->SetTitleFont(42);
   drjj_stack_5->GetZaxis()->SetLabelFont(42);
   drjj_stack_5->GetZaxis()->SetLabelOffset(0.007);
   drjj_stack_5->GetZaxis()->SetLabelSize(0.035);
   drjj_stack_5->GetZaxis()->SetTitleSize(0.045);
   drjj_stack_5->GetZaxis()->SetTickLength(0.02);
   drjj_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(drjj_stack_5);
   
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,0.2056512);
   drjj->SetBinContent(23,0.3451643);
   drjj->SetBinContent(24,0.4696212);
   drjj->SetBinContent(25,0.6475204);
   drjj->SetBinContent(26,0.8868197);
   drjj->SetBinContent(27,0.9227649);
   drjj->SetBinContent(28,0.4280008);
   drjj->SetBinContent(29,0.3152848);
   drjj->SetBinContent(30,0.178818);
   drjj->SetBinContent(31,0.02926397);
   drjj->SetBinContent(33,0.0336256);
   drjj->SetBinContent(34,0.01605115);
   drjj->SetBinError(22,0.08197537);
   drjj->SetBinError(23,0.1262356);
   drjj->SetBinError(24,0.157142);
   drjj->SetBinError(25,0.1698878);
   drjj->SetBinError(26,0.2372815);
   drjj->SetBinError(27,0.2415779);
   drjj->SetBinError(28,0.1451073);
   drjj->SetBinError(29,0.1419462);
   drjj->SetBinError(30,0.09199829);
   drjj->SetBinError(31,0.02533563);
   drjj->SetBinError(33,0.0336256);
   drjj->SetBinError(34,0.01605115);
   drjj->SetMinimum(0.01);
   drjj->SetMaximum(9750000);
   drjj->SetEntries(125);
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
   drjj->SetBinContent(22,1.460786);
   drjj->SetBinContent(23,4.545266);
   drjj->SetBinContent(24,4.998853);
   drjj->SetBinContent(25,3.581947);
   drjj->SetBinContent(26,4.460162);
   drjj->SetBinContent(27,5.238806);
   drjj->SetBinContent(28,5.31348);
   drjj->SetBinContent(29,1.433694);
   drjj->SetBinContent(30,1.468793);
   drjj->SetBinContent(32,0.3307761);
   drjj->SetBinContent(33,0.3408394);
   drjj->SetBinError(22,0.8926723);
   drjj->SetBinError(23,1.716009);
   drjj->SetBinError(24,1.82647);
   drjj->SetBinError(25,1.332043);
   drjj->SetBinError(26,1.65023);
   drjj->SetBinError(27,1.682152);
   drjj->SetBinError(28,1.813806);
   drjj->SetBinError(29,1.013936);
   drjj->SetBinError(30,0.9891924);
   drjj->SetBinError(32,0.3307761);
   drjj->SetBinError(33,0.3408394);
   drjj->SetEntries(78);
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
   drjj->SetBinContent(22,7.810941);
   drjj->SetBinContent(23,19.27343);
   drjj->SetBinContent(24,32.19691);
   drjj->SetBinContent(25,39.76488);
   drjj->SetBinContent(26,46.03424);
   drjj->SetBinContent(27,43.65648);
   drjj->SetBinContent(28,29.51452);
   drjj->SetBinContent(29,21.11533);
   drjj->SetBinContent(30,14.06369);
   drjj->SetBinContent(31,7.903975);
   drjj->SetBinContent(32,5.051843);
   drjj->SetBinContent(33,2.139491);
   drjj->SetBinContent(34,1.398923);
   drjj->SetBinContent(35,0.2398997);
   drjj->SetBinContent(36,0.1796283);
   drjj->SetBinContent(37,0.03264166);
   drjj->SetBinError(22,0.8395892);
   drjj->SetBinError(23,1.350751);
   drjj->SetBinError(24,1.86454);
   drjj->SetBinError(25,1.94803);
   drjj->SetBinError(26,2.182645);
   drjj->SetBinError(27,2.175793);
   drjj->SetBinError(28,1.758229);
   drjj->SetBinError(29,1.500275);
   drjj->SetBinError(30,1.199719);
   drjj->SetBinError(31,0.9113451);
   drjj->SetBinError(32,0.7714918);
   drjj->SetBinError(33,0.4818796);
   drjj->SetBinError(34,0.3679879);
   drjj->SetBinError(35,0.1168178);
   drjj->SetBinError(36,0.1312718);
   drjj->SetBinError(37,0.03264165);
   drjj->SetEntries(3913);
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
   drjj->SetBinContent(22,2.739286);
   drjj->SetBinContent(23,8.087164);
   drjj->SetBinContent(24,13.68114);
   drjj->SetBinContent(25,20.77029);
   drjj->SetBinContent(26,26.8413);
   drjj->SetBinContent(27,27.50365);
   drjj->SetBinContent(28,23.13528);
   drjj->SetBinContent(29,19.10305);
   drjj->SetBinContent(30,13.67741);
   drjj->SetBinContent(31,8.951149);
   drjj->SetBinContent(32,6.121011);
   drjj->SetBinContent(33,4.085537);
   drjj->SetBinContent(34,2.083622);
   drjj->SetBinContent(35,1.067461);
   drjj->SetBinContent(36,0.3983757);
   drjj->SetBinContent(37,0.1397298);
   drjj->SetBinContent(38,0.0649188);
   drjj->SetBinContent(40,0.004070196);
   drjj->SetBinError(22,0.1635167);
   drjj->SetBinError(23,0.2806544);
   drjj->SetBinError(24,0.3667429);
   drjj->SetBinError(25,0.4488163);
   drjj->SetBinError(26,0.5046055);
   drjj->SetBinError(27,0.5014392);
   drjj->SetBinError(28,0.4646571);
   drjj->SetBinError(29,0.4205157);
   drjj->SetBinError(30,0.3529106);
   drjj->SetBinError(31,0.2832797);
   drjj->SetBinError(32,0.2317625);
   drjj->SetBinError(33,0.1871927);
   drjj->SetBinError(34,0.1276707);
   drjj->SetBinError(35,0.09639957);
   drjj->SetBinError(36,0.05272652);
   drjj->SetBinError(37,0.03384193);
   drjj->SetBinError(38,0.0226061);
   drjj->SetBinError(40,0.004070196);
   drjj->SetEntries(27040);
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
   drjj->SetBinContent(22,8);
   drjj->SetBinContent(23,16);
   drjj->SetBinContent(24,33);
   drjj->SetBinContent(25,57);
   drjj->SetBinContent(26,65);
   drjj->SetBinContent(27,61);
   drjj->SetBinContent(28,27);
   drjj->SetBinContent(29,32);
   drjj->SetBinContent(30,19);
   drjj->SetBinContent(31,12);
   drjj->SetBinContent(32,8);
   drjj->SetBinContent(33,6);
   drjj->SetBinContent(34,3);
   drjj->SetBinContent(35,2);
   drjj->SetBinContent(36,1);
   drjj->SetBinError(22,2.828427);
   drjj->SetBinError(23,4);
   drjj->SetBinError(24,5.744563);
   drjj->SetBinError(25,7.549834);
   drjj->SetBinError(26,8.062258);
   drjj->SetBinError(27,7.81025);
   drjj->SetBinError(28,5.196152);
   drjj->SetBinError(29,5.656854);
   drjj->SetBinError(30,4.358899);
   drjj->SetBinError(31,3.464102);
   drjj->SetBinError(32,2.828427);
   drjj->SetBinError(33,2.44949);
   drjj->SetBinError(34,1.732051);
   drjj->SetBinError(35,1.414214);
   drjj->SetBinError(36,1);
   drjj->SetEntries(350);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   drjj->SetBinContent(22,0.6660554);
   drjj->SetBinContent(23,0.5014752);
   drjj->SetBinContent(24,0.6486245);
   drjj->SetBinContent(25,0.8889983);
   drjj->SetBinContent(26,0.8404914);
   drjj->SetBinContent(27,0.7984404);
   drjj->SetBinContent(28,0.4658122);
   drjj->SetBinContent(29,0.7682692);
   drjj->SetBinContent(30,0.6504646);
   drjj->SetBinContent(31,0.7119497);
   drjj->SetBinContent(32,0.6954327);
   drjj->SetBinContent(33,0.9138168);
   drjj->SetBinContent(34,0.8614388);
   drjj->SetBinContent(35,1.529799);
   drjj->SetBinContent(36,1.730092);
   drjj->SetBinError(22,0.2452633);
   drjj->SetBinError(23,0.1300575);
   drjj->SetBinError(24,0.117805);
   drjj->SetBinError(25,0.1223707);
   drjj->SetBinError(26,0.1085473);
   drjj->SetBinError(27,0.1063227);
   drjj->SetBinError(28,0.09199128);
   drjj->SetBinError(29,0.1400736);
   drjj->SetBinError(30,0.1533929);
   drjj->SetBinError(31,0.2094382);
   drjj->SetBinError(32,0.2514452);
   drjj->SetBinError(33,0.3828887);
   drjj->SetBinError(34,0.5065983);
   drjj->SetBinError(35,1.096153);
   drjj->SetBinError(36,1.781156);
   drjj->SetMinimum(0);
   drjj->SetMaximum(2);
   drjj->SetEntries(31.69942);
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
