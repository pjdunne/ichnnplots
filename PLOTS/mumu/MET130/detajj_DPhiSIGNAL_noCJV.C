{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:49 2013) by ROOT version5.32/00
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
   upper->Range(-1.053165,-1698.443,5.529114,83223.7);
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
   stack->SetMaximum(75216.75);
   
   TH1F *detajj_stack_8 = new TH1F("detajj_stack_8","stack",50,0,10);
   detajj_stack_8->SetBinContent(22,0.05073027);
   detajj_stack_8->SetBinContent(24,0.1375104);
   detajj_stack_8->SetBinContent(25,0.04053154);
   detajj_stack_8->SetBinContent(26,0.1460495);
   detajj_stack_8->SetBinContent(27,0.06860681);
   detajj_stack_8->SetBinContent(28,0.1204951);
   detajj_stack_8->SetBinContent(30,0.03680818);
   detajj_stack_8->SetBinError(22,0.05073027);
   detajj_stack_8->SetBinError(24,0.1046257);
   detajj_stack_8->SetBinError(25,0.04053154);
   detajj_stack_8->SetBinError(26,0.1033953);
   detajj_stack_8->SetBinError(27,0.06860681);
   detajj_stack_8->SetBinError(28,0.08921464);
   detajj_stack_8->SetBinError(30,0.03680818);
   detajj_stack_8->SetMinimum(0);
   detajj_stack_8->SetMaximum(78977.59);
   detajj_stack_8->SetEntries(10);
   detajj_stack_8->SetStats(0);
   detajj_stack_8->SetFillColor(4);
   detajj_stack_8->SetLineColor(4);
   detajj_stack_8->SetLineWidth(2);
   detajj_stack_8->SetMarkerColor(4);
   detajj_stack_8->SetMarkerStyle(21);
   detajj_stack_8->SetMarkerSize(0.8);
   detajj_stack_8->GetXaxis()->SetTitle("#Delta#eta_{jj}");
   detajj_stack_8->GetXaxis()->SetRange(1,26);
   detajj_stack_8->GetXaxis()->SetLabelFont(42);
   detajj_stack_8->GetXaxis()->SetLabelOffset(0.007);
   detajj_stack_8->GetXaxis()->SetLabelSize(0);
   detajj_stack_8->GetXaxis()->SetTitleSize(0);
   detajj_stack_8->GetXaxis()->SetTickLength(0.02);
   detajj_stack_8->GetXaxis()->SetTitleOffset(0.9);
   detajj_stack_8->GetXaxis()->SetTitleFont(42);
   detajj_stack_8->GetYaxis()->SetTitle("Events");
   detajj_stack_8->GetYaxis()->SetLabelFont(42);
   detajj_stack_8->GetYaxis()->SetLabelOffset(0.007);
   detajj_stack_8->GetYaxis()->SetLabelSize(0.035);
   detajj_stack_8->GetYaxis()->SetTitleSize(0.045);
   detajj_stack_8->GetYaxis()->SetTickLength(0.02);
   detajj_stack_8->GetYaxis()->SetTitleOffset(1.55);
   detajj_stack_8->GetYaxis()->SetTitleFont(42);
   detajj_stack_8->GetZaxis()->SetLabelFont(42);
   detajj_stack_8->GetZaxis()->SetLabelOffset(0.007);
   detajj_stack_8->GetZaxis()->SetLabelSize(0.035);
   detajj_stack_8->GetZaxis()->SetTitleSize(0.045);
   detajj_stack_8->GetZaxis()->SetTickLength(0.02);
   detajj_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(detajj_stack_8);
   
   
   TH1F *detajj = new TH1F("detajj","detajj",50,0,10);
   detajj->SetBinContent(22,0.05073027);
   detajj->SetBinContent(24,0.1375104);
   detajj->SetBinContent(25,0.04053154);
   detajj->SetBinContent(26,0.1460495);
   detajj->SetBinContent(27,0.06860681);
   detajj->SetBinContent(28,0.1204951);
   detajj->SetBinContent(30,0.03680818);
   detajj->SetBinError(22,0.05073027);
   detajj->SetBinError(24,0.1046257);
   detajj->SetBinError(25,0.04053154);
   detajj->SetBinError(26,0.1033953);
   detajj->SetBinError(27,0.06860681);
   detajj->SetBinError(28,0.08921464);
   detajj->SetBinError(30,0.03680818);
   detajj->SetMaximum(55000);
   detajj->SetEntries(10);
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
   detajj->SetBinContent(22,1.270379);
   detajj->SetBinContent(23,2.105158);
   detajj->SetBinContent(25,0.6489087);
   detajj->SetBinContent(26,0.8825865);
   detajj->SetBinError(22,0.9051033);
   detajj->SetBinError(23,1.521325);
   detajj->SetBinError(25,0.6489087);
   detajj->SetBinError(26,0.8254611);
   detajj->SetEntries(7);
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
   detajj->SetBinContent(22,2.557239);
   detajj->SetBinContent(23,2.600378);
   detajj->SetBinContent(24,3.338965);
   detajj->SetBinContent(25,3.945344);
   detajj->SetBinContent(26,2.792886);
   detajj->SetBinContent(27,2.019464);
   detajj->SetBinContent(28,2.402985);
   detajj->SetBinContent(29,2.274);
   detajj->SetBinContent(30,2.170619);
   detajj->SetBinContent(31,0.6402503);
   detajj->SetBinContent(32,0.2538658);
   detajj->SetBinContent(33,0.3175669);
   detajj->SetBinContent(34,0.3563404);
   detajj->SetBinContent(36,0.1139688);
   detajj->SetBinError(22,0.5677857);
   detajj->SetBinError(23,0.5674321);
   detajj->SetBinError(24,0.6164317);
   detajj->SetBinError(25,0.6838351);
   detajj->SetBinError(26,0.6317232);
   detajj->SetBinError(27,0.4958599);
   detajj->SetBinError(28,0.5614177);
   detajj->SetBinError(29,0.5195512);
   detajj->SetBinError(30,0.5368793);
   detajj->SetBinError(31,0.2528713);
   detajj->SetBinError(32,0.1882461);
   detajj->SetBinError(33,0.2329158);
   detajj->SetBinError(34,0.2420759);
   detajj->SetBinError(36,0.1139688);
   detajj->SetEntries(259);
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
   detajj->SetBinContent(22,1.627248);
   detajj->SetBinContent(23,2.13235);
   detajj->SetBinContent(24,1.883863);
   detajj->SetBinContent(25,2.131444);
   detajj->SetBinContent(26,2.030365);
   detajj->SetBinContent(27,1.761239);
   detajj->SetBinContent(28,1.567173);
   detajj->SetBinContent(29,1.35169);
   detajj->SetBinContent(30,0.9893862);
   detajj->SetBinContent(31,0.4524073);
   detajj->SetBinContent(32,0.1999133);
   detajj->SetBinContent(33,0.2390541);
   detajj->SetBinContent(34,0.06394984);
   detajj->SetBinContent(35,0.02019928);
   detajj->SetBinContent(36,0.01483077);
   detajj->SetBinError(22,0.1338572);
   detajj->SetBinError(23,0.1530077);
   detajj->SetBinError(24,0.1414651);
   detajj->SetBinError(25,0.150418);
   detajj->SetBinError(26,0.1465045);
   detajj->SetBinError(27,0.1362908);
   detajj->SetBinError(28,0.1299698);
   detajj->SetBinError(29,0.1199649);
   detajj->SetBinError(30,0.105518);
   detajj->SetBinError(31,0.0679117);
   detajj->SetBinError(32,0.04345737);
   detajj->SetBinError(33,0.05017889);
   detajj->SetBinError(34,0.02432901);
   detajj->SetBinError(35,0.01507308);
   detajj->SetBinError(36,0.01106727);
   detajj->SetEntries(1961);
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
   detajj->SetBinContent(22,3);
   detajj->SetBinContent(23,3);
   detajj->SetBinContent(24,5);
   detajj->SetBinContent(25,2);
   detajj->SetBinContent(26,1);
   detajj->SetBinContent(27,5);
   detajj->SetBinContent(28,2);
   detajj->SetBinContent(29,1);
   detajj->SetBinContent(30,3);
   detajj->SetBinContent(31,2);
   detajj->SetBinError(22,1.732051);
   detajj->SetBinError(23,1.732051);
   detajj->SetBinError(24,2.236068);
   detajj->SetBinError(25,1.414214);
   detajj->SetBinError(26,1);
   detajj->SetBinError(27,2.236068);
   detajj->SetBinError(28,1.414214);
   detajj->SetBinError(29,1);
   detajj->SetBinError(30,1.732051);
   detajj->SetBinError(31,1.414214);
   detajj->SetEntries(27);
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
   detajj->SetBinContent(22,0.5499676);
   detajj->SetBinContent(23,0.438732);
   detajj->SetBinContent(24,0.9573356);
   detajj->SetBinContent(25,0.2973669);
   detajj->SetBinContent(26,0.1752591);
   detajj->SetBinContent(27,1.322505);
   detajj->SetBinContent(28,0.5037582);
   detajj->SetBinContent(29,0.2758096);
   detajj->SetBinContent(30,0.9493656);
   detajj->SetBinContent(31,1.8304);
   detajj->SetBinError(22,0.3355709);
   detajj->SetBinError(23,0.2740652);
   detajj->SetBinError(24,0.4435511);
   detajj->SetBinError(25,0.2144646);
   detajj->SetBinError(26,0.1782004);
   detajj->SetBinError(27,0.6181935);
   detajj->SetBinError(28,0.3636382);
   detajj->SetBinError(29,0.2787763);
   detajj->SetBinError(30,0.572235);
   detajj->SetBinError(31,1.366589);
   detajj->SetMinimum(0);
   detajj->SetMaximum(2);
   detajj->SetEntries(12.65648);
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
