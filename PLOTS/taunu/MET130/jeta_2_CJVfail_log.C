{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:28 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.873344,5.632911,6.554294);
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
   stack->SetMaximum(477313.9);
   
   TH1F *jeta_2_stack_10 = new TH1F("jeta_2_stack_10","stack",20,-5,5);
   jeta_2_stack_10->SetBinContent(3,2.24575);
   jeta_2_stack_10->SetBinContent(4,0.2883005);
   jeta_2_stack_10->SetBinContent(5,2.053542);
   jeta_2_stack_10->SetBinContent(7,0.1243847);
   jeta_2_stack_10->SetBinContent(15,0.0555631);
   jeta_2_stack_10->SetBinContent(17,0.510438);
   jeta_2_stack_10->SetBinError(3,2.24575);
   jeta_2_stack_10->SetBinError(4,0.1730994);
   jeta_2_stack_10->SetBinError(5,2.019357);
   jeta_2_stack_10->SetBinError(7,0.1243847);
   jeta_2_stack_10->SetBinError(15,0.0555631);
   jeta_2_stack_10->SetBinError(17,0.2654488);
   jeta_2_stack_10->SetMinimum(0.002066371);
   jeta_2_stack_10->SetMaximum(1210354);
   jeta_2_stack_10->SetEntries(14);
   jeta_2_stack_10->SetStats(0);
   jeta_2_stack_10->SetFillColor(4);
   jeta_2_stack_10->SetLineColor(4);
   jeta_2_stack_10->SetLineWidth(2);
   jeta_2_stack_10->SetMarkerColor(4);
   jeta_2_stack_10->SetMarkerStyle(21);
   jeta_2_stack_10->SetMarkerSize(0.8);
   jeta_2_stack_10->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2_stack_10->GetXaxis()->SetLabelFont(42);
   jeta_2_stack_10->GetXaxis()->SetLabelOffset(0.007);
   jeta_2_stack_10->GetXaxis()->SetLabelSize(0);
   jeta_2_stack_10->GetXaxis()->SetTitleSize(0);
   jeta_2_stack_10->GetXaxis()->SetTickLength(0.02);
   jeta_2_stack_10->GetXaxis()->SetTitleOffset(0.9);
   jeta_2_stack_10->GetXaxis()->SetTitleFont(42);
   jeta_2_stack_10->GetYaxis()->SetTitle("Events");
   jeta_2_stack_10->GetYaxis()->SetLabelFont(42);
   jeta_2_stack_10->GetYaxis()->SetLabelOffset(0.007);
   jeta_2_stack_10->GetYaxis()->SetLabelSize(0.035);
   jeta_2_stack_10->GetYaxis()->SetTitleSize(0.045);
   jeta_2_stack_10->GetYaxis()->SetTickLength(0.02);
   jeta_2_stack_10->GetYaxis()->SetTitleOffset(1.55);
   jeta_2_stack_10->GetYaxis()->SetTitleFont(42);
   jeta_2_stack_10->GetZaxis()->SetLabelFont(42);
   jeta_2_stack_10->GetZaxis()->SetLabelOffset(0.007);
   jeta_2_stack_10->GetZaxis()->SetLabelSize(0.035);
   jeta_2_stack_10->GetZaxis()->SetTitleSize(0.045);
   jeta_2_stack_10->GetZaxis()->SetTickLength(0.02);
   jeta_2_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_2_stack_10);
   
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(3,2.24575);
   jeta_2->SetBinContent(4,0.2883005);
   jeta_2->SetBinContent(5,2.053542);
   jeta_2->SetBinContent(7,0.1243847);
   jeta_2->SetBinContent(15,0.0555631);
   jeta_2->SetBinContent(17,0.510438);
   jeta_2->SetBinError(3,2.24575);
   jeta_2->SetBinError(4,0.1730994);
   jeta_2->SetBinError(5,2.019357);
   jeta_2->SetBinError(7,0.1243847);
   jeta_2->SetBinError(15,0.0555631);
   jeta_2->SetBinError(17,0.2654488);
   jeta_2->SetMinimum(0.01);
   jeta_2->SetMaximum(420000);
   jeta_2->SetEntries(14);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(4);
   jeta_2->SetLineColor(4);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(4);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0);
   jeta_2->GetXaxis()->SetTitleSize(0);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetTitle("Events");
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"HIST");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(3,2.928686);
   jeta_2->SetBinContent(4,1.156665);
   jeta_2->SetBinContent(5,1.637955);
   jeta_2->SetBinContent(6,3.143007);
   jeta_2->SetBinContent(7,1.767865);
   jeta_2->SetBinContent(13,0.061888);
   jeta_2->SetBinContent(14,3.95439);
   jeta_2->SetBinContent(15,5.012508);
   jeta_2->SetBinContent(16,4.411222);
   jeta_2->SetBinContent(17,1.048362);
   jeta_2->SetBinContent(18,0.4844574);
   jeta_2->SetBinError(3,1.336641);
   jeta_2->SetBinError(4,0.717397);
   jeta_2->SetBinError(5,0.8876246);
   jeta_2->SetBinError(6,1.416473);
   jeta_2->SetBinError(7,1.022619);
   jeta_2->SetBinError(13,0.061888);
   jeta_2->SetBinError(14,1.779462);
   jeta_2->SetBinError(15,1.996625);
   jeta_2->SetBinError(16,1.733246);
   jeta_2->SetBinError(17,0.7998557);
   jeta_2->SetBinError(18,0.4844574);
   jeta_2->SetEntries(47);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(5);
   jeta_2->SetLineColor(5);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(5);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,0.3187881);
   jeta_2->SetBinContent(3,2.458517);
   jeta_2->SetBinContent(4,9.663663);
   jeta_2->SetBinContent(5,10.8735);
   jeta_2->SetBinContent(6,8.823778);
   jeta_2->SetBinContent(7,2.653702);
   jeta_2->SetBinContent(8,0.825655);
   jeta_2->SetBinContent(13,0.09769691);
   jeta_2->SetBinContent(14,4.746877);
   jeta_2->SetBinContent(15,5.7377);
   jeta_2->SetBinContent(16,20.27683);
   jeta_2->SetBinContent(17,6.843506);
   jeta_2->SetBinContent(18,5.430216);
   jeta_2->SetBinContent(19,0.8648627);
   jeta_2->SetBinError(2,0.288726);
   jeta_2->SetBinError(3,1.481686);
   jeta_2->SetBinError(4,2.426331);
   jeta_2->SetBinError(5,3.271276);
   jeta_2->SetBinError(6,2.316029);
   jeta_2->SetBinError(7,1.028658);
   jeta_2->SetBinError(8,0.5860508);
   jeta_2->SetBinError(13,0.09769691);
   jeta_2->SetBinError(14,1.586952);
   jeta_2->SetBinError(15,1.629528);
   jeta_2->SetBinError(16,3.905186);
   jeta_2->SetBinError(17,1.843205);
   jeta_2->SetBinError(18,1.932899);
   jeta_2->SetBinError(19,0.6132249);
   jeta_2->SetEntries(161);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(6);
   jeta_2->SetLineColor(6);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(6);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(1,0.01898834);
   jeta_2->SetBinContent(2,0.3319933);
   jeta_2->SetBinContent(3,1.606145);
   jeta_2->SetBinContent(4,4.138135);
   jeta_2->SetBinContent(5,5.582188);
   jeta_2->SetBinContent(6,3.634413);
   jeta_2->SetBinContent(7,1.356525);
   jeta_2->SetBinContent(8,0.2216566);
   jeta_2->SetBinContent(12,0.0419569);
   jeta_2->SetBinContent(13,0.2368644);
   jeta_2->SetBinContent(14,1.272084);
   jeta_2->SetBinContent(15,3.268044);
   jeta_2->SetBinContent(16,5.712739);
   jeta_2->SetBinContent(17,4.437784);
   jeta_2->SetBinContent(18,1.723069);
   jeta_2->SetBinContent(19,0.4268515);
   jeta_2->SetBinError(1,0.01898834);
   jeta_2->SetBinError(2,0.08379861);
   jeta_2->SetBinError(3,0.1802558);
   jeta_2->SetBinError(4,0.2908523);
   jeta_2->SetBinError(5,0.3345108);
   jeta_2->SetBinError(6,0.2737963);
   jeta_2->SetBinError(7,0.1692809);
   jeta_2->SetBinError(8,0.06810712);
   jeta_2->SetBinError(12,0.02977074);
   jeta_2->SetBinError(13,0.07236798);
   jeta_2->SetBinError(14,0.1610421);
   jeta_2->SetBinError(15,0.2581588);
   jeta_2->SetBinError(16,0.3425666);
   jeta_2->SetBinError(17,0.3024354);
   jeta_2->SetBinError(18,0.1852624);
   jeta_2->SetBinError(19,0.09161118);
   jeta_2->SetEntries(1917);
   jeta_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jeta_2->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jeta_2->SetLineColor(ci);
   jeta_2->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jeta_2->SetMarkerColor(ci);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(4,0.1907149);
   jeta_2->SetBinContent(5,0.4194615);
   jeta_2->SetBinContent(6,0.06446939);
   jeta_2->SetBinContent(7,0.1697759);
   jeta_2->SetBinContent(13,0.09995063);
   jeta_2->SetBinContent(14,0.2041416);
   jeta_2->SetBinContent(15,0.1956419);
   jeta_2->SetBinContent(16,0.6328917);
   jeta_2->SetBinContent(18,7.392823e-05);
   jeta_2->SetBinContent(19,0.1892378);
   jeta_2->SetBinError(4,0.1907149);
   jeta_2->SetBinError(5,0.2462207);
   jeta_2->SetBinError(6,0.06446939);
   jeta_2->SetBinError(7,0.169776);
   jeta_2->SetBinError(13,0.09995063);
   jeta_2->SetBinError(14,0.1443679);
   jeta_2->SetBinError(15,0.1426562);
   jeta_2->SetBinError(16,0.3011762);
   jeta_2->SetBinError(18,7.392823e-05);
   jeta_2->SetBinError(19,0.1892378);
   jeta_2->SetEntries(18);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(3);
   jeta_2->SetLineColor(3);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(3);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(3,0.1048109);
   jeta_2->SetBinContent(4,0.7123469);
   jeta_2->SetBinContent(5,0.3227605);
   jeta_2->SetBinContent(6,0.6564788);
   jeta_2->SetBinContent(7,0.270304);
   jeta_2->SetBinContent(13,0.07780072);
   jeta_2->SetBinContent(14,0.339337);
   jeta_2->SetBinContent(15,0.8082261);
   jeta_2->SetBinContent(16,0.59633);
   jeta_2->SetBinContent(17,0.4692466);
   jeta_2->SetBinContent(18,0.3247547);
   jeta_2->SetBinError(3,0.07048591);
   jeta_2->SetBinError(4,0.3009677);
   jeta_2->SetBinError(5,0.1655463);
   jeta_2->SetBinError(6,0.3243796);
   jeta_2->SetBinError(7,0.1924283);
   jeta_2->SetBinError(13,0.06578595);
   jeta_2->SetBinError(14,0.2110976);
   jeta_2->SetBinError(15,0.3130483);
   jeta_2->SetBinError(16,0.2460576);
   jeta_2->SetBinError(17,0.2107754);
   jeta_2->SetBinError(18,0.1737466);
   jeta_2->SetEntries(51);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(3);
   jeta_2->SetLineColor(3);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(3);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,0.00620693);
   jeta_2->SetBinContent(3,0.08259762);
   jeta_2->SetBinContent(4,0.1533585);
   jeta_2->SetBinContent(5,0.1928148);
   jeta_2->SetBinContent(6,0.2320798);
   jeta_2->SetBinContent(7,0.08882065);
   jeta_2->SetBinContent(13,0.02045564);
   jeta_2->SetBinContent(14,0.04940128);
   jeta_2->SetBinContent(15,0.1578548);
   jeta_2->SetBinContent(16,0.1909151);
   jeta_2->SetBinContent(17,0.1203266);
   jeta_2->SetBinContent(18,0.0706766);
   jeta_2->SetBinContent(19,0.002891878);
   jeta_2->SetBinError(2,0.00620693);
   jeta_2->SetBinError(3,0.02378757);
   jeta_2->SetBinError(4,0.03186402);
   jeta_2->SetBinError(5,0.03473239);
   jeta_2->SetBinError(6,0.04096736);
   jeta_2->SetBinError(7,0.02410654);
   jeta_2->SetBinError(13,0.01182181);
   jeta_2->SetBinError(14,0.01975454);
   jeta_2->SetBinError(15,0.03607318);
   jeta_2->SetBinError(16,0.03480693);
   jeta_2->SetBinError(17,0.02657236);
   jeta_2->SetBinError(18,0.02329173);
   jeta_2->SetBinError(19,0.002891878);
   jeta_2->SetEntries(237);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(3);
   jeta_2->SetLineColor(3);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(3);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   stack->Draw("hist");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(3,6);
   jeta_2->SetBinContent(4,11);
   jeta_2->SetBinContent(5,16);
   jeta_2->SetBinContent(6,28);
   jeta_2->SetBinContent(7,11);
   jeta_2->SetBinContent(8,3);
   jeta_2->SetBinContent(13,1);
   jeta_2->SetBinContent(14,11);
   jeta_2->SetBinContent(15,10);
   jeta_2->SetBinContent(16,18);
   jeta_2->SetBinContent(17,17);
   jeta_2->SetBinContent(18,7);
   jeta_2->SetBinContent(19,1);
   jeta_2->SetBinError(3,2.44949);
   jeta_2->SetBinError(4,3.316625);
   jeta_2->SetBinError(5,4);
   jeta_2->SetBinError(6,5.291503);
   jeta_2->SetBinError(7,3.316625);
   jeta_2->SetBinError(8,1.732051);
   jeta_2->SetBinError(13,1);
   jeta_2->SetBinError(14,3.316625);
   jeta_2->SetBinError(15,3.162278);
   jeta_2->SetBinError(16,4.242641);
   jeta_2->SetBinError(17,4.123106);
   jeta_2->SetBinError(18,2.645751);
   jeta_2->SetBinError(19,1);
   jeta_2->SetEntries(140);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(1);
   jeta_2->SetFillStyle(0);
   jeta_2->SetLineWidth(3);
   jeta_2->SetMarkerStyle(20);
   jeta_2->SetMarkerSize(1.3);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   jeta_2->Draw("SAMEPE1");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(4,0.252451);
   jeta_2->SetBinContent(5,0.3659172);
   jeta_2->SetBinContent(7,0.1280969);
   jeta_2->SetBinError(4,0.252451);
   jeta_2->SetBinError(5,0.3659172);
   jeta_2->SetBinError(7,0.1280969);
   jeta_2->SetEntries(3);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(1);
   jeta_2->SetFillStyle(0);
   jeta_2->SetLineStyle(2);
   jeta_2->SetLineWidth(3);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   jeta_2->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("jeta_2","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jeta_2","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","EWK W+jets","f");

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
   entry=leg->AddEntry("jeta_2","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","Dibosons","f");
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
   lower->Range(-7.025316,-0.653951,5.632911,2.070845);
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
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(3,0.8355666);
   jeta_2->SetBinContent(4,0.6868611);
   jeta_2->SetBinContent(5,0.8408361);
   jeta_2->SetBinContent(6,1.691411);
   jeta_2->SetBinContent(7,1.744096);
   jeta_2->SetBinContent(8,2.864477);
   jeta_2->SetBinContent(13,1.681644);
   jeta_2->SetBinContent(14,1.041052);
   jeta_2->SetBinContent(15,0.6587626);
   jeta_2->SetBinContent(16,0.5656655);
   jeta_2->SetBinContent(17,1.315868);
   jeta_2->SetBinContent(18,0.8713785);
   jeta_2->SetBinContent(19,0.6739254);
   jeta_2->SetBinError(3,0.4132718);
   jeta_2->SetBinError(4,0.2346394);
   jeta_2->SetBinError(5,0.2588703);
   jeta_2->SetBinError(6,0.4255105);
   jeta_2->SetBinError(7,0.6668517);
   jeta_2->SetBinError(8,2.310637);
   jeta_2->SetBinError(13,1.758519);
   jeta_2->SetBinError(14,0.3931955);
   jeta_2->SetBinError(15,0.2371839);
   jeta_2->SetBinError(16,0.1537216);
   jeta_2->SetBinError(17,0.3809893);
   jeta_2->SetBinError(18,0.3949147);
   jeta_2->SetBinError(19,0.7354346);
   jeta_2->SetMinimum(0);
   jeta_2->SetMaximum(2);
   jeta_2->SetEntries(22.9577);
   jeta_2->SetStats(0);
   jeta_2->SetFillStyle(0);
   jeta_2->SetMarkerStyle(20);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.1);
   jeta_2->GetXaxis()->SetTitleSize(0.12);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetTitle("Data/MC");
   jeta_2->GetYaxis()->SetNdivisions(505);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.1);
   jeta_2->GetYaxis()->SetTitleSize(0.12);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(0.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   jeta_2->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
