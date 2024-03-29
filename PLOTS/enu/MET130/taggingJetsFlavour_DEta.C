{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:14 2013) by ROOT version5.32/00
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
   upper->Range(-0.8101265,-63.7186,4.253165,3122.212);
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
   stack->SetMaximum(2821.824);
   
   TH1F *taggingJetsFlavour_stack_5 = new TH1F("taggingJetsFlavour_stack_5","stack",4,0,4);
   taggingJetsFlavour_stack_5->SetBinContent(1,71.2699);
   taggingJetsFlavour_stack_5->SetBinContent(3,0.05824418);
   taggingJetsFlavour_stack_5->SetBinError(1,9.627354);
   taggingJetsFlavour_stack_5->SetBinError(3,0.05824418);
   taggingJetsFlavour_stack_5->SetMinimum(0);
   taggingJetsFlavour_stack_5->SetMaximum(2962.915);
   taggingJetsFlavour_stack_5->SetEntries(333);
   taggingJetsFlavour_stack_5->SetStats(0);
   taggingJetsFlavour_stack_5->SetFillColor(4);
   taggingJetsFlavour_stack_5->SetLineColor(4);
   taggingJetsFlavour_stack_5->SetLineWidth(2);
   taggingJetsFlavour_stack_5->SetMarkerColor(4);
   taggingJetsFlavour_stack_5->SetMarkerStyle(21);
   taggingJetsFlavour_stack_5->SetMarkerSize(0.8);
   taggingJetsFlavour_stack_5->GetXaxis()->SetTitle("#tau as tagging jet");
   taggingJetsFlavour_stack_5->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour_stack_5->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour_stack_5->GetXaxis()->SetLabelSize(0);
   taggingJetsFlavour_stack_5->GetXaxis()->SetTitleSize(0);
   taggingJetsFlavour_stack_5->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour_stack_5->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour_stack_5->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour_stack_5->GetYaxis()->SetTitle("Events");
   taggingJetsFlavour_stack_5->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour_stack_5->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour_stack_5->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour_stack_5->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour_stack_5->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour_stack_5->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour_stack_5->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour_stack_5->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour_stack_5->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour_stack_5->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour_stack_5->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour_stack_5->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taggingJetsFlavour_stack_5);
   
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,71.2699);
   taggingJetsFlavour->SetBinContent(3,0.05824418);
   taggingJetsFlavour->SetBinError(1,9.627354);
   taggingJetsFlavour->SetBinError(3,0.05824418);
   taggingJetsFlavour->SetMaximum(2487.76);
   taggingJetsFlavour->SetEntries(333);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(4);
   taggingJetsFlavour->SetLineColor(4);
   taggingJetsFlavour->SetLineWidth(2);
   taggingJetsFlavour->SetMarkerColor(4);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetTitle("#tau as tagging jet");
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetTitle("Events");
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"HIST");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,335.6505);
   taggingJetsFlavour->SetBinContent(2,0.5620171);
   taggingJetsFlavour->SetBinContent(3,0.2781415);
   taggingJetsFlavour->SetBinError(1,12.79479);
   taggingJetsFlavour->SetBinError(2,0.4119565);
   taggingJetsFlavour->SetBinError(3,0.2526764);
   taggingJetsFlavour->SetEntries(1122);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(5);
   taggingJetsFlavour->SetLineColor(5);
   taggingJetsFlavour->SetLineWidth(2);
   taggingJetsFlavour->SetMarkerColor(5);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,1505.931);
   taggingJetsFlavour->SetBinContent(2,0.16078);
   taggingJetsFlavour->SetBinContent(3,0.7001173);
   taggingJetsFlavour->SetBinError(1,28.54883);
   taggingJetsFlavour->SetBinError(2,0.114578);
   taggingJetsFlavour->SetBinError(3,0.5427764);
   taggingJetsFlavour->SetEntries(4765);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(6);
   taggingJetsFlavour->SetLineColor(6);
   taggingJetsFlavour->SetLineWidth(2);
   taggingJetsFlavour->SetMarkerColor(6);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,389.6816);
   taggingJetsFlavour->SetBinContent(2,0.4170149);
   taggingJetsFlavour->SetBinContent(3,0.4350497);
   taggingJetsFlavour->SetBinError(1,2.47095);
   taggingJetsFlavour->SetBinError(2,0.07944982);
   taggingJetsFlavour->SetBinError(3,0.07614715);
   taggingJetsFlavour->SetEntries(32662);
   taggingJetsFlavour->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   taggingJetsFlavour->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   taggingJetsFlavour->SetLineColor(ci);
   taggingJetsFlavour->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   taggingJetsFlavour->SetMarkerColor(ci);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,0.1728566);
   taggingJetsFlavour->SetBinError(1,0.1571197);
   taggingJetsFlavour->SetEntries(2);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(3);
   taggingJetsFlavour->SetLineColor(3);
   taggingJetsFlavour->SetLineWidth(2);
   taggingJetsFlavour->SetMarkerColor(3);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,24.84966);
   taggingJetsFlavour->SetBinContent(3,0.07054319);
   taggingJetsFlavour->SetBinError(1,1.462606);
   taggingJetsFlavour->SetBinError(3,0.06001506);
   taggingJetsFlavour->SetEntries(460);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(3);
   taggingJetsFlavour->SetLineColor(3);
   taggingJetsFlavour->SetLineWidth(2);
   taggingJetsFlavour->SetMarkerColor(3);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,4.530231);
   taggingJetsFlavour->SetBinContent(2,0.003977085);
   taggingJetsFlavour->SetBinContent(3,0.01024923);
   taggingJetsFlavour->SetBinError(1,0.1534933);
   taggingJetsFlavour->SetBinError(2,0.002823586);
   taggingJetsFlavour->SetBinError(3,0.006070156);
   taggingJetsFlavour->SetEntries(1132);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(3);
   taggingJetsFlavour->SetLineColor(3);
   taggingJetsFlavour->SetLineWidth(2);
   taggingJetsFlavour->SetMarkerColor(3);
   taggingJetsFlavour->SetMarkerStyle(21);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   stack->Add(taggingJetsFlavour,"");
   stack->Draw("hist");
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,2056);
   taggingJetsFlavour->SetBinContent(2,4);
   taggingJetsFlavour->SetBinContent(3,3);
   taggingJetsFlavour->SetBinError(1,45.34314);
   taggingJetsFlavour->SetBinError(2,2);
   taggingJetsFlavour->SetBinError(3,1.732051);
   taggingJetsFlavour->SetEntries(2063);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillColor(1);
   taggingJetsFlavour->SetFillStyle(0);
   taggingJetsFlavour->SetLineWidth(3);
   taggingJetsFlavour->SetMarkerStyle(20);
   taggingJetsFlavour->SetMarkerSize(1.3);
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(1.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   taggingJetsFlavour->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("taggingJetsFlavour","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("taggingJetsFlavour","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taggingJetsFlavour","EWK W+jets","f");

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
   entry=leg->AddEntry("taggingJetsFlavour","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taggingJetsFlavour","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taggingJetsFlavour","Dibosons","f");
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
   lower->Range(-0.8101265,-0.653951,4.253165,2.070845);
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
   
   TH1F *taggingJetsFlavour = new TH1F("taggingJetsFlavour","taggingJetsFlavour",4,0,4);
   taggingJetsFlavour->SetBinContent(1,0.9094061);
   taggingJetsFlavour->SetBinContent(2,3.497148);
   taggingJetsFlavour->SetBinContent(3,2.007896);
   taggingJetsFlavour->SetBinError(1,0.02370552);
   taggingJetsFlavour->SetBinError(2,2.196775);
   taggingJetsFlavour->SetBinError(3,1.417144);
   taggingJetsFlavour->SetMinimum(0);
   taggingJetsFlavour->SetMaximum(2);
   taggingJetsFlavour->SetEntries(6.020062);
   taggingJetsFlavour->SetStats(0);
   taggingJetsFlavour->SetFillStyle(0);
   taggingJetsFlavour->SetMarkerStyle(20);
   taggingJetsFlavour->SetMarkerSize(0.8);
   taggingJetsFlavour->GetXaxis()->SetTitle("#tau as tagging jet");
   taggingJetsFlavour->GetXaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetXaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetXaxis()->SetLabelSize(0.1);
   taggingJetsFlavour->GetXaxis()->SetTitleSize(0.12);
   taggingJetsFlavour->GetXaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetXaxis()->SetTitleOffset(0.9);
   taggingJetsFlavour->GetXaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetYaxis()->SetTitle("Data/MC");
   taggingJetsFlavour->GetYaxis()->SetNdivisions(505);
   taggingJetsFlavour->GetYaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetYaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetYaxis()->SetLabelSize(0.1);
   taggingJetsFlavour->GetYaxis()->SetTitleSize(0.12);
   taggingJetsFlavour->GetYaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetYaxis()->SetTitleOffset(0.55);
   taggingJetsFlavour->GetYaxis()->SetTitleFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelFont(42);
   taggingJetsFlavour->GetZaxis()->SetLabelOffset(0.007);
   taggingJetsFlavour->GetZaxis()->SetLabelSize(0.035);
   taggingJetsFlavour->GetZaxis()->SetTitleSize(0.045);
   taggingJetsFlavour->GetZaxis()->SetTickLength(0.02);
   taggingJetsFlavour->GetZaxis()->SetTitleFont(42);
   taggingJetsFlavour->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
