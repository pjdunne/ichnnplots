{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:28:08 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.945561,1063.291,7.754534);
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
   stack->SetMaximum(6015512);
   
   TH1F *jpt_2_stack_9 = new TH1F("jpt_2_stack_9","stack",25,0,1000);
   jpt_2_stack_9->SetBinContent(2,13.26628);
   jpt_2_stack_9->SetBinContent(3,5.450509);
   jpt_2_stack_9->SetBinContent(4,4.231637);
   jpt_2_stack_9->SetBinContent(5,0.1991767);
   jpt_2_stack_9->SetBinError(2,4.76808);
   jpt_2_stack_9->SetBinError(3,3.17171);
   jpt_2_stack_9->SetBinError(4,2.821);
   jpt_2_stack_9->SetBinError(5,0.1991767);
   jpt_2_stack_9->SetMinimum(0.001855413);
   jpt_2_stack_9->SetMaximum(1.657788e+07);
   jpt_2_stack_9->SetEntries(70);
   jpt_2_stack_9->SetStats(0);
   jpt_2_stack_9->SetFillColor(4);
   jpt_2_stack_9->SetLineColor(4);
   jpt_2_stack_9->SetLineWidth(2);
   jpt_2_stack_9->SetMarkerColor(4);
   jpt_2_stack_9->SetMarkerStyle(21);
   jpt_2_stack_9->SetMarkerSize(0.8);
   jpt_2_stack_9->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2_stack_9->GetXaxis()->SetLabelFont(42);
   jpt_2_stack_9->GetXaxis()->SetLabelOffset(0.007);
   jpt_2_stack_9->GetXaxis()->SetLabelSize(0);
   jpt_2_stack_9->GetXaxis()->SetTitleSize(0);
   jpt_2_stack_9->GetXaxis()->SetTickLength(0.02);
   jpt_2_stack_9->GetXaxis()->SetTitleOffset(0.9);
   jpt_2_stack_9->GetXaxis()->SetTitleFont(42);
   jpt_2_stack_9->GetYaxis()->SetTitle("Events");
   jpt_2_stack_9->GetYaxis()->SetLabelFont(42);
   jpt_2_stack_9->GetYaxis()->SetLabelOffset(0.007);
   jpt_2_stack_9->GetYaxis()->SetLabelSize(0.035);
   jpt_2_stack_9->GetYaxis()->SetTitleSize(0.045);
   jpt_2_stack_9->GetYaxis()->SetTickLength(0.02);
   jpt_2_stack_9->GetYaxis()->SetTitleOffset(1.55);
   jpt_2_stack_9->GetYaxis()->SetTitleFont(42);
   jpt_2_stack_9->GetZaxis()->SetLabelFont(42);
   jpt_2_stack_9->GetZaxis()->SetLabelOffset(0.007);
   jpt_2_stack_9->GetZaxis()->SetLabelSize(0.035);
   jpt_2_stack_9->GetZaxis()->SetTitleSize(0.045);
   jpt_2_stack_9->GetZaxis()->SetTickLength(0.02);
   jpt_2_stack_9->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_2_stack_9);
   
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(2,13.26628);
   jpt_2->SetBinContent(3,5.450509);
   jpt_2->SetBinContent(4,4.231637);
   jpt_2->SetBinContent(5,0.1991767);
   jpt_2->SetBinError(2,4.76808);
   jpt_2->SetBinError(3,3.17171);
   jpt_2->SetBinError(4,2.821);
   jpt_2->SetBinError(5,0.1991767);
   jpt_2->SetMinimum(0.01);
   jpt_2->SetMaximum(4.4235e+07);
   jpt_2->SetEntries(70);
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
   jpt_2->SetBinContent(2,14.50331);
   jpt_2->SetBinContent(3,21.47376);
   jpt_2->SetBinContent(4,11.13214);
   jpt_2->SetBinContent(5,5.438202);
   jpt_2->SetBinError(2,2.973589);
   jpt_2->SetBinError(3,3.892309);
   jpt_2->SetBinError(4,2.705892);
   jpt_2->SetBinError(5,1.982542);
   jpt_2->SetEntries(107);
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
   jpt_2->SetBinContent(2,204.5465);
   jpt_2->SetBinContent(3,213.1205);
   jpt_2->SetBinContent(4,71.92576);
   jpt_2->SetBinContent(5,22.57623);
   jpt_2->SetBinContent(6,9.70029);
   jpt_2->SetBinContent(7,2.671225);
   jpt_2->SetBinContent(8,0.4197137);
   jpt_2->SetBinContent(13,0.4285135);
   jpt_2->SetBinError(2,12.15268);
   jpt_2->SetBinError(3,11.91386);
   jpt_2->SetBinError(4,6.679267);
   jpt_2->SetBinError(5,3.627991);
   jpt_2->SetBinError(6,3.219221);
   jpt_2->SetBinError(7,1.256116);
   jpt_2->SetBinError(8,0.4197137);
   jpt_2->SetBinError(13,0.4285135);
   jpt_2->SetEntries(1080);
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
   jpt_2->SetBinContent(2,38.88005);
   jpt_2->SetBinContent(3,33.11889);
   jpt_2->SetBinContent(4,15.0163);
   jpt_2->SetBinContent(5,6.710716);
   jpt_2->SetBinContent(6,2.61573);
   jpt_2->SetBinContent(7,0.9573796);
   jpt_2->SetBinContent(8,0.3420734);
   jpt_2->SetBinContent(9,0.09530731);
   jpt_2->SetBinContent(10,0.01143543);
   jpt_2->SetBinContent(11,0.0166967);
   jpt_2->SetBinError(2,0.8826851);
   jpt_2->SetBinError(3,0.8217377);
   jpt_2->SetBinError(4,0.5503439);
   jpt_2->SetBinError(5,0.3742037);
   jpt_2->SetBinError(6,0.2298291);
   jpt_2->SetBinError(7,0.1419189);
   jpt_2->SetBinError(8,0.0846575);
   jpt_2->SetBinError(9,0.04206915);
   jpt_2->SetBinError(10,0.01143543);
   jpt_2->SetBinError(11,0.01669671);
   jpt_2->SetEntries(5669);
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
   jpt_2->SetBinContent(2,118.5903);
   jpt_2->SetBinContent(3,101.0619);
   jpt_2->SetBinContent(4,33.8905);
   jpt_2->SetBinContent(5,13.22812);
   jpt_2->SetBinContent(6,5.472601);
   jpt_2->SetBinContent(7,1.493767);
   jpt_2->SetBinContent(8,0.49041);
   jpt_2->SetBinContent(9,0.1073509);
   jpt_2->SetBinContent(10,0.1183678);
   jpt_2->SetBinError(2,4.584246);
   jpt_2->SetBinError(3,3.977706);
   jpt_2->SetBinError(4,2.060222);
   jpt_2->SetBinError(5,1.248959);
   jpt_2->SetBinError(6,0.7963104);
   jpt_2->SetBinError(7,0.4047668);
   jpt_2->SetBinError(8,0.2500768);
   jpt_2->SetBinError(9,0.1073509);
   jpt_2->SetBinError(10,0.1183678);
   jpt_2->SetEntries(2162);
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
   jpt_2->SetBinContent(2,3.52489);
   jpt_2->SetBinContent(3,2.573369);
   jpt_2->SetBinContent(4,0.9532259);
   jpt_2->SetBinContent(5,0.3645195);
   jpt_2->SetBinContent(6,0.1806356);
   jpt_2->SetBinContent(7,0.08684289);
   jpt_2->SetBinError(2,0.781485);
   jpt_2->SetBinError(3,0.4824758);
   jpt_2->SetBinError(4,0.3439402);
   jpt_2->SetBinError(5,0.1865474);
   jpt_2->SetBinError(6,0.1277455);
   jpt_2->SetBinError(7,0.08684289);
   jpt_2->SetEntries(91);
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
   jpt_2->SetBinContent(2,7.722793);
   jpt_2->SetBinContent(3,7.18765);
   jpt_2->SetBinContent(4,2.992661);
   jpt_2->SetBinContent(5,1.445751);
   jpt_2->SetBinContent(6,0.5255266);
   jpt_2->SetBinContent(7,0.2052262);
   jpt_2->SetBinContent(8,0.09684516);
   jpt_2->SetBinContent(9,0.073606);
   jpt_2->SetBinContent(10,0.006649794);
   jpt_2->SetBinError(2,0.3117223);
   jpt_2->SetBinError(3,0.2997327);
   jpt_2->SetBinError(4,0.189689);
   jpt_2->SetBinError(5,0.1385407);
   jpt_2->SetBinError(6,0.08047742);
   jpt_2->SetBinError(7,0.05070277);
   jpt_2->SetBinError(8,0.03483967);
   jpt_2->SetBinError(9,0.03311294);
   jpt_2->SetBinError(10,0.006649794);
   jpt_2->SetEntries(1912);
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
   jpt_2->SetBinContent(2,1483);
   jpt_2->SetBinContent(3,2949);
   jpt_2->SetBinContent(4,1710);
   jpt_2->SetBinContent(5,595);
   jpt_2->SetBinContent(6,228);
   jpt_2->SetBinContent(7,70);
   jpt_2->SetBinContent(8,19);
   jpt_2->SetBinContent(9,3);
   jpt_2->SetBinContent(10,2);
   jpt_2->SetBinError(2,38.50974);
   jpt_2->SetBinError(3,54.3047);
   jpt_2->SetBinError(4,41.35215);
   jpt_2->SetBinError(5,24.39262);
   jpt_2->SetBinError(6,15.09967);
   jpt_2->SetBinError(7,8.3666);
   jpt_2->SetBinError(8,4.358899);
   jpt_2->SetBinError(9,1.732051);
   jpt_2->SetBinError(10,1.414214);
   jpt_2->SetEntries(7059);
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
   jpt_2->SetBinContent(2,24.77231);
   jpt_2->SetBinContent(3,16.71445);
   jpt_2->SetBinContent(4,2.062203);
   jpt_2->SetBinContent(5,1.424657);
   jpt_2->SetBinContent(6,0.3283167);
   jpt_2->SetBinContent(7,0.3338953);
   jpt_2->SetBinError(2,2.972631);
   jpt_2->SetBinError(3,2.456165);
   jpt_2->SetBinError(4,0.797258);
   jpt_2->SetBinError(5,0.6866827);
   jpt_2->SetBinError(6,0.3283167);
   jpt_2->SetBinError(7,0.3338953);
   jpt_2->SetEntries(147);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_noCJV");
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
   jpt_2->SetBinContent(2,3.824453);
   jpt_2->SetBinContent(3,7.790538);
   jpt_2->SetBinContent(4,12.5818);
   jpt_2->SetBinContent(5,11.95654);
   jpt_2->SetBinContent(6,12.3278);
   jpt_2->SetBinContent(7,12.92839);
   jpt_2->SetBinContent(8,14.08407);
   jpt_2->SetBinContent(9,10.85917);
   jpt_2->SetBinContent(10,14.65705);
   jpt_2->SetBinError(2,0.1651601);
   jpt_2->SetBinError(3,0.3069902);
   jpt_2->SetBinError(4,0.7602263);
   jpt_2->SetBinError(5,1.1525);
   jpt_2->SetBinError(6,2.363536);
   jpt_2->SetBinError(7,3.534144);
   jpt_2->SetBinError(8,6.113125);
   jpt_2->SetBinError(9,7.844827);
   jpt_2->SetBinError(10,16.46483);
   jpt_2->SetMinimum(0);
   jpt_2->SetMaximum(2);
   jpt_2->SetEntries(26.15437);
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
