{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:28:03 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.978861,5.632911,8.335957);
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
   stack->SetMaximum(2.057985e+07);
   
   TH1F *jeta_1_stack_4 = new TH1F("jeta_1_stack_4","stack",20,-5,5);
   jeta_1_stack_4->SetBinContent(3,0.08365353);
   jeta_1_stack_4->SetBinContent(4,2.534956);
   jeta_1_stack_4->SetBinContent(5,16.29684);
   jeta_1_stack_4->SetBinContent(6,25.30828);
   jeta_1_stack_4->SetBinContent(7,29.42976);
   jeta_1_stack_4->SetBinContent(8,15.42114);
   jeta_1_stack_4->SetBinContent(9,7.265171);
   jeta_1_stack_4->SetBinContent(10,1.021934);
   jeta_1_stack_4->SetBinContent(11,5.588442);
   jeta_1_stack_4->SetBinContent(12,9.955853);
   jeta_1_stack_4->SetBinContent(13,27.84245);
   jeta_1_stack_4->SetBinContent(14,29.30655);
   jeta_1_stack_4->SetBinContent(15,28.05204);
   jeta_1_stack_4->SetBinContent(16,25.40347);
   jeta_1_stack_4->SetBinContent(17,7.447286);
   jeta_1_stack_4->SetBinContent(18,3.317426);
   jeta_1_stack_4->SetBinError(3,0.06871355);
   jeta_1_stack_4->SetBinError(4,1.161023);
   jeta_1_stack_4->SetBinError(5,5.103146);
   jeta_1_stack_4->SetBinError(6,5.781236);
   jeta_1_stack_4->SetBinError(7,6.788557);
   jeta_1_stack_4->SetBinError(8,4.76288);
   jeta_1_stack_4->SetBinError(9,2.866062);
   jeta_1_stack_4->SetBinError(10,0.3019222);
   jeta_1_stack_4->SetBinError(11,3.13358);
   jeta_1_stack_4->SetBinError(12,3.801359);
   jeta_1_stack_4->SetBinError(13,7.640223);
   jeta_1_stack_4->SetBinError(14,7.227685);
   jeta_1_stack_4->SetBinError(15,6.889799);
   jeta_1_stack_4->SetBinError(16,6.841625);
   jeta_1_stack_4->SetBinError(17,3.41504);
   jeta_1_stack_4->SetBinError(18,2.983743);
   jeta_1_stack_4->SetMinimum(0.001767809);
   jeta_1_stack_4->SetMaximum(5.891369e+07);
   jeta_1_stack_4->SetEntries(1014);
   jeta_1_stack_4->SetStats(0);
   jeta_1_stack_4->SetFillColor(4);
   jeta_1_stack_4->SetLineColor(4);
   jeta_1_stack_4->SetLineWidth(2);
   jeta_1_stack_4->SetMarkerColor(4);
   jeta_1_stack_4->SetMarkerStyle(21);
   jeta_1_stack_4->SetMarkerSize(0.8);
   jeta_1_stack_4->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1_stack_4->GetXaxis()->SetLabelFont(42);
   jeta_1_stack_4->GetXaxis()->SetLabelOffset(0.007);
   jeta_1_stack_4->GetXaxis()->SetLabelSize(0);
   jeta_1_stack_4->GetXaxis()->SetTitleSize(0);
   jeta_1_stack_4->GetXaxis()->SetTickLength(0.02);
   jeta_1_stack_4->GetXaxis()->SetTitleOffset(0.9);
   jeta_1_stack_4->GetXaxis()->SetTitleFont(42);
   jeta_1_stack_4->GetYaxis()->SetTitle("Events");
   jeta_1_stack_4->GetYaxis()->SetLabelFont(42);
   jeta_1_stack_4->GetYaxis()->SetLabelOffset(0.007);
   jeta_1_stack_4->GetYaxis()->SetLabelSize(0.035);
   jeta_1_stack_4->GetYaxis()->SetTitleSize(0.045);
   jeta_1_stack_4->GetYaxis()->SetTickLength(0.02);
   jeta_1_stack_4->GetYaxis()->SetTitleOffset(1.55);
   jeta_1_stack_4->GetYaxis()->SetTitleFont(42);
   jeta_1_stack_4->GetZaxis()->SetLabelFont(42);
   jeta_1_stack_4->GetZaxis()->SetLabelOffset(0.007);
   jeta_1_stack_4->GetZaxis()->SetLabelSize(0.035);
   jeta_1_stack_4->GetZaxis()->SetTitleSize(0.045);
   jeta_1_stack_4->GetZaxis()->SetTickLength(0.02);
   jeta_1_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_1_stack_4);
   
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,0.08365353);
   jeta_1->SetBinContent(4,2.534956);
   jeta_1->SetBinContent(5,16.29684);
   jeta_1->SetBinContent(6,25.30828);
   jeta_1->SetBinContent(7,29.42976);
   jeta_1->SetBinContent(8,15.42114);
   jeta_1->SetBinContent(9,7.265171);
   jeta_1->SetBinContent(10,1.021934);
   jeta_1->SetBinContent(11,5.588442);
   jeta_1->SetBinContent(12,9.955853);
   jeta_1->SetBinContent(13,27.84245);
   jeta_1->SetBinContent(14,29.30655);
   jeta_1->SetBinContent(15,28.05204);
   jeta_1->SetBinContent(16,25.40347);
   jeta_1->SetBinContent(17,7.447286);
   jeta_1->SetBinContent(18,3.317426);
   jeta_1->SetBinError(3,0.06871355);
   jeta_1->SetBinError(4,1.161023);
   jeta_1->SetBinError(5,5.103146);
   jeta_1->SetBinError(6,5.781236);
   jeta_1->SetBinError(7,6.788557);
   jeta_1->SetBinError(8,4.76288);
   jeta_1->SetBinError(9,2.866062);
   jeta_1->SetBinError(10,0.3019222);
   jeta_1->SetBinError(11,3.13358);
   jeta_1->SetBinError(12,3.801359);
   jeta_1->SetBinError(13,7.640223);
   jeta_1->SetBinError(14,7.227685);
   jeta_1->SetBinError(15,6.889799);
   jeta_1->SetBinError(16,6.841625);
   jeta_1->SetBinError(17,3.41504);
   jeta_1->SetBinError(18,2.983743);
   jeta_1->SetMinimum(0.01);
   jeta_1->SetMaximum(6.4995e+07);
   jeta_1->SetEntries(1014);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(4);
   jeta_1->SetLineColor(4);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(4);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0);
   jeta_1->GetXaxis()->SetTitleSize(0);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Events");
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"HIST");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.25567);
   jeta_1->SetBinContent(3,3.265135);
   jeta_1->SetBinContent(4,22.02233);
   jeta_1->SetBinContent(5,68.77947);
   jeta_1->SetBinContent(6,108.7226);
   jeta_1->SetBinContent(7,89.25041);
   jeta_1->SetBinContent(8,73.82463);
   jeta_1->SetBinContent(9,42.09996);
   jeta_1->SetBinContent(10,22.42585);
   jeta_1->SetBinContent(11,24.77879);
   jeta_1->SetBinContent(12,47.38395);
   jeta_1->SetBinContent(13,83.55847);
   jeta_1->SetBinContent(14,100.489);
   jeta_1->SetBinContent(15,85.2273);
   jeta_1->SetBinContent(16,62.73048);
   jeta_1->SetBinContent(17,24.10559);
   jeta_1->SetBinContent(18,2.730042);
   jeta_1->SetBinError(2,0.25567);
   jeta_1->SetBinError(3,1.293171);
   jeta_1->SetBinError(4,4.016781);
   jeta_1->SetBinError(5,6.923818);
   jeta_1->SetBinError(6,8.898359);
   jeta_1->SetBinError(7,8.078898);
   jeta_1->SetBinError(8,7.515807);
   jeta_1->SetBinError(9,5.627595);
   jeta_1->SetBinError(10,4.181678);
   jeta_1->SetBinError(11,4.138669);
   jeta_1->SetBinError(12,5.85371);
   jeta_1->SetBinError(13,7.762062);
   jeta_1->SetBinError(14,8.429597);
   jeta_1->SetBinError(15,8.061637);
   jeta_1->SetBinError(16,6.215164);
   jeta_1->SetBinError(17,4.059015);
   jeta_1->SetBinError(18,1.525905);
   jeta_1->SetEntries(1623);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(5);
   jeta_1->SetLineColor(5);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(5);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,1.498955);
   jeta_1->SetBinContent(3,19.6995);
   jeta_1->SetBinContent(4,116.9252);
   jeta_1->SetBinContent(5,439.594);
   jeta_1->SetBinContent(6,695.2896);
   jeta_1->SetBinContent(7,629.652);
   jeta_1->SetBinContent(8,448.4775);
   jeta_1->SetBinContent(9,202.5449);
   jeta_1->SetBinContent(10,62.42534);
   jeta_1->SetBinContent(11,57.23852);
   jeta_1->SetBinContent(12,231.0397);
   jeta_1->SetBinContent(13,481.6811);
   jeta_1->SetBinContent(14,646.4504);
   jeta_1->SetBinContent(15,659.6237);
   jeta_1->SetBinContent(16,418.3688);
   jeta_1->SetBinContent(17,110.8955);
   jeta_1->SetBinContent(18,18.01648);
   jeta_1->SetBinError(2,1.193794);
   jeta_1->SetBinError(3,3.889695);
   jeta_1->SetBinError(4,9.336243);
   jeta_1->SetBinError(5,17.54728);
   jeta_1->SetBinError(6,22.79103);
   jeta_1->SetBinError(7,20.94619);
   jeta_1->SetBinError(8,17.7595);
   jeta_1->SetBinError(9,11.4286);
   jeta_1->SetBinError(10,6.158864);
   jeta_1->SetBinError(11,5.783823);
   jeta_1->SetBinError(12,12.73989);
   jeta_1->SetBinError(13,18.54028);
   jeta_1->SetBinError(14,21.42002);
   jeta_1->SetBinError(15,22.11798);
   jeta_1->SetBinError(16,17.54285);
   jeta_1->SetBinError(17,8.813879);
   jeta_1->SetBinError(18,3.564872);
   jeta_1->SetEntries(10776);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(6);
   jeta_1->SetLineColor(6);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(6);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.1340931);
   jeta_1->SetBinContent(3,2.876074);
   jeta_1->SetBinContent(4,19.85288);
   jeta_1->SetBinContent(5,82.87139);
   jeta_1->SetBinContent(6,120.7708);
   jeta_1->SetBinContent(7,112.7714);
   jeta_1->SetBinContent(8,72.10817);
   jeta_1->SetBinContent(9,29.50871);
   jeta_1->SetBinContent(10,6.846869);
   jeta_1->SetBinContent(11,7.793943);
   jeta_1->SetBinContent(12,30.24618);
   jeta_1->SetBinContent(13,74.542);
   jeta_1->SetBinContent(14,111.7697);
   jeta_1->SetBinContent(15,118.4719);
   jeta_1->SetBinContent(16,83.55138);
   jeta_1->SetBinContent(17,20.55795);
   jeta_1->SetBinContent(18,2.691264);
   jeta_1->SetBinContent(19,0.12616);
   jeta_1->SetBinError(2,0.05114425);
   jeta_1->SetBinError(3,0.2407151);
   jeta_1->SetBinError(4,0.6354676);
   jeta_1->SetBinError(5,1.302959);
   jeta_1->SetBinError(6,1.580745);
   jeta_1->SetBinError(7,1.531957);
   jeta_1->SetBinError(8,1.220113);
   jeta_1->SetBinError(9,0.7822566);
   jeta_1->SetBinError(10,0.3740276);
   jeta_1->SetBinError(11,0.3999238);
   jeta_1->SetBinError(12,0.7929657);
   jeta_1->SetBinError(13,1.23704);
   jeta_1->SetBinError(14,1.517727);
   jeta_1->SetBinError(15,1.558378);
   jeta_1->SetBinError(16,1.305441);
   jeta_1->SetBinError(17,0.6465569);
   jeta_1->SetBinError(18,0.2302449);
   jeta_1->SetBinError(19,0.04945447);
   jeta_1->SetEntries(51339);
   jeta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jeta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jeta_1->SetLineColor(ci);
   jeta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jeta_1->SetMarkerColor(ci);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,1.20939);
   jeta_1->SetBinContent(3,9.127079);
   jeta_1->SetBinContent(4,70.11163);
   jeta_1->SetBinContent(5,241.4133);
   jeta_1->SetBinContent(6,386.3063);
   jeta_1->SetBinContent(7,397.9245);
   jeta_1->SetBinContent(8,324.1934);
   jeta_1->SetBinContent(9,134.1338);
   jeta_1->SetBinContent(10,38.72398);
   jeta_1->SetBinContent(11,41.85932);
   jeta_1->SetBinContent(12,143.1717);
   jeta_1->SetBinContent(13,295.8777);
   jeta_1->SetBinContent(14,406.6215);
   jeta_1->SetBinContent(15,386.6318);
   jeta_1->SetBinContent(16,256.5543);
   jeta_1->SetBinContent(17,65.65146);
   jeta_1->SetBinContent(18,13.07514);
   jeta_1->SetBinContent(19,1.106812);
   jeta_1->SetBinError(2,1.005292);
   jeta_1->SetBinError(3,1.837749);
   jeta_1->SetBinError(4,4.563957);
   jeta_1->SetBinError(5,7.724265);
   jeta_1->SetBinError(6,8.793946);
   jeta_1->SetBinError(7,8.246423);
   jeta_1->SetBinError(8,7.376655);
   jeta_1->SetBinError(9,4.446532);
   jeta_1->SetBinError(10,2.241583);
   jeta_1->SetBinError(11,2.380023);
   jeta_1->SetBinError(12,4.496722);
   jeta_1->SetBinError(13,6.947004);
   jeta_1->SetBinError(14,8.566252);
   jeta_1->SetBinError(15,9.061471);
   jeta_1->SetBinError(16,7.980744);
   jeta_1->SetBinError(17,4.303157);
   jeta_1->SetBinError(18,2.516964);
   jeta_1->SetBinError(19,0.8062074);
   jeta_1->SetEntries(24704);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.04194167);
   jeta_1->SetBinContent(3,0.08538809);
   jeta_1->SetBinContent(4,2.568131);
   jeta_1->SetBinContent(5,8.561453);
   jeta_1->SetBinContent(6,10.77498);
   jeta_1->SetBinContent(7,12.77759);
   jeta_1->SetBinContent(8,8.324492);
   jeta_1->SetBinContent(9,6.635803);
   jeta_1->SetBinContent(10,1.228086);
   jeta_1->SetBinContent(11,1.952583);
   jeta_1->SetBinContent(12,3.749484);
   jeta_1->SetBinContent(13,9.740519);
   jeta_1->SetBinContent(14,13.35042);
   jeta_1->SetBinContent(15,11.90507);
   jeta_1->SetBinContent(16,5.895918);
   jeta_1->SetBinContent(17,2.047648);
   jeta_1->SetBinContent(18,0.1184572);
   jeta_1->SetBinContent(19,0.09634242);
   jeta_1->SetBinError(2,0.04194167);
   jeta_1->SetBinError(3,0.07661554);
   jeta_1->SetBinError(4,0.6074288);
   jeta_1->SetBinError(5,0.9750699);
   jeta_1->SetBinError(6,1.192733);
   jeta_1->SetBinError(7,1.384873);
   jeta_1->SetBinError(8,1.078679);
   jeta_1->SetBinError(9,1.23707);
   jeta_1->SetBinError(10,0.5554177);
   jeta_1->SetBinError(11,0.4271846);
   jeta_1->SetBinError(12,0.7071075);
   jeta_1->SetBinError(13,1.028654);
   jeta_1->SetBinError(14,1.261757);
   jeta_1->SetBinError(15,1.238603);
   jeta_1->SetBinError(16,0.8165026);
   jeta_1->SetBinError(17,0.5172071);
   jeta_1->SetBinError(18,0.1184572);
   jeta_1->SetBinError(19,0.09634242);
   jeta_1->SetEntries(1097);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.03843796);
   jeta_1->SetBinContent(3,0.5309228);
   jeta_1->SetBinContent(4,3.584681);
   jeta_1->SetBinContent(5,16.08329);
   jeta_1->SetBinContent(6,24.81729);
   jeta_1->SetBinContent(7,23.40166);
   jeta_1->SetBinContent(8,15.48901);
   jeta_1->SetBinContent(9,5.835949);
   jeta_1->SetBinContent(10,1.434361);
   jeta_1->SetBinContent(11,1.294748);
   jeta_1->SetBinContent(12,6.589479);
   jeta_1->SetBinContent(13,14.99168);
   jeta_1->SetBinContent(14,23.75881);
   jeta_1->SetBinContent(15,24.24629);
   jeta_1->SetBinContent(16,16.3427);
   jeta_1->SetBinContent(17,3.75434);
   jeta_1->SetBinContent(18,0.3411707);
   jeta_1->SetBinContent(19,0.01632842);
   jeta_1->SetBinError(2,0.02222432);
   jeta_1->SetBinError(3,0.08483969);
   jeta_1->SetBinError(4,0.211388);
   jeta_1->SetBinError(5,0.4487323);
   jeta_1->SetBinError(6,0.5598012);
   jeta_1->SetBinError(7,0.5482644);
   jeta_1->SetBinError(8,0.4412274);
   jeta_1->SetBinError(9,0.271154);
   jeta_1->SetBinError(10,0.1323682);
   jeta_1->SetBinError(11,0.1268366);
   jeta_1->SetBinError(12,0.2878818);
   jeta_1->SetBinError(13,0.4357152);
   jeta_1->SetBinError(14,0.5488855);
   jeta_1->SetBinError(15,0.5527208);
   jeta_1->SetBinError(16,0.45415);
   jeta_1->SetBinError(17,0.2169542);
   jeta_1->SetBinError(18,0.06444889);
   jeta_1->SetBinError(19,0.01331107);
   jeta_1->SetEntries(17463);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   stack->Draw("hist");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(1,1);
   jeta_1->SetBinContent(2,3);
   jeta_1->SetBinContent(3,51);
   jeta_1->SetBinContent(4,2157);
   jeta_1->SetBinContent(5,2098);
   jeta_1->SetBinContent(6,3347);
   jeta_1->SetBinContent(7,2820);
   jeta_1->SetBinContent(8,2005);
   jeta_1->SetBinContent(9,1205);
   jeta_1->SetBinContent(10,465);
   jeta_1->SetBinContent(11,493);
   jeta_1->SetBinContent(12,1157);
   jeta_1->SetBinContent(13,2751);
   jeta_1->SetBinContent(14,4203);
   jeta_1->SetBinContent(15,3201);
   jeta_1->SetBinContent(16,1930);
   jeta_1->SetBinContent(17,4333);
   jeta_1->SetBinContent(18,99);
   jeta_1->SetBinContent(19,5);
   jeta_1->SetBinError(1,1);
   jeta_1->SetBinError(2,1.732051);
   jeta_1->SetBinError(3,7.141428);
   jeta_1->SetBinError(4,46.44351);
   jeta_1->SetBinError(5,45.80393);
   jeta_1->SetBinError(6,57.85326);
   jeta_1->SetBinError(7,53.10367);
   jeta_1->SetBinError(8,44.77723);
   jeta_1->SetBinError(9,34.71311);
   jeta_1->SetBinError(10,21.56386);
   jeta_1->SetBinError(11,22.2036);
   jeta_1->SetBinError(12,34.0147);
   jeta_1->SetBinError(13,52.44998);
   jeta_1->SetBinError(14,64.83055);
   jeta_1->SetBinError(15,56.57738);
   jeta_1->SetBinError(16,43.93177);
   jeta_1->SetBinError(17,65.82553);
   jeta_1->SetBinError(18,9.949874);
   jeta_1->SetBinError(19,2.236068);
   jeta_1->SetEntries(32324);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(1.3);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEPE1");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.9441099);
   jeta_1->SetBinContent(3,9.159684);
   jeta_1->SetBinContent(4,27.58393);
   jeta_1->SetBinContent(5,106.4255);
   jeta_1->SetBinContent(6,117.6146);
   jeta_1->SetBinContent(7,96.65855);
   jeta_1->SetBinContent(8,46.82393);
   jeta_1->SetBinContent(9,12.92949);
   jeta_1->SetBinContent(10,2.441893);
   jeta_1->SetBinContent(11,1.13288);
   jeta_1->SetBinContent(12,15.74447);
   jeta_1->SetBinContent(13,48.31099);
   jeta_1->SetBinContent(14,91.61529);
   jeta_1->SetBinContent(15,130.2579);
   jeta_1->SetBinContent(16,112.9445);
   jeta_1->SetBinContent(17,23.7917);
   jeta_1->SetBinContent(18,6.29717);
   jeta_1->SetBinContent(19,0.3291404);
   jeta_1->SetBinError(2,0.5733813);
   jeta_1->SetBinError(3,1.753725);
   jeta_1->SetBinError(4,3.152354);
   jeta_1->SetBinError(5,6.19634);
   jeta_1->SetBinError(6,6.56468);
   jeta_1->SetBinError(7,5.870937);
   jeta_1->SetBinError(8,4.138528);
   jeta_1->SetBinError(9,2.115617);
   jeta_1->SetBinError(10,0.8681557);
   jeta_1->SetBinError(11,0.6399386);
   jeta_1->SetBinError(12,2.327074);
   jeta_1->SetBinError(13,4.272699);
   jeta_1->SetBinError(14,5.695325);
   jeta_1->SetBinError(15,6.889056);
   jeta_1->SetBinError(16,6.358853);
   jeta_1->SetBinError(17,2.942643);
   jeta_1->SetBinError(18,1.488819);
   jeta_1->SetBinError(19,0.3291404);
   jeta_1->SetEntries(2718);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineStyle(2);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"AN");
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
   TLegendEntry *entry=leg->AddEntry("jeta_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jeta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jeta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Dibosons","f");
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
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.9438453);
   jeta_1->SetBinContent(3,1.433225);
   jeta_1->SetBinContent(4,9.176191);
   jeta_1->SetBinContent(5,2.44721);
   jeta_1->SetBinContent(6,2.485369);
   jeta_1->SetBinContent(7,2.22788);
   jeta_1->SetBinContent(8,2.127508);
   jeta_1->SetBinContent(9,2.863871);
   jeta_1->SetBinContent(10,3.494021);
   jeta_1->SetBinContent(11,3.654074);
   jeta_1->SetBinContent(12,2.503351);
   jeta_1->SetBinContent(13,2.864457);
   jeta_1->SetBinContent(14,3.227021);
   jeta_1->SetBinContent(15,2.488908);
   jeta_1->SetBinContent(16,2.288238);
   jeta_1->SetBinContent(17,19.08705);
   jeta_1->SetBinContent(18,2.677662);
   jeta_1->SetBinContent(19,3.715696);
   jeta_1->SetBinError(2,0.7196678);
   jeta_1->SetBinError(3,0.2704222);
   jeta_1->SetBinError(4,0.4789997);
   jeta_1->SetBinError(5,0.07914243);
   jeta_1->SetBinError(6,0.06451575);
   jeta_1->SetBinError(7,0.05955066);
   jeta_1->SetBinError(8,0.06666767);
   jeta_1->SetBinError(9,0.1238678);
   jeta_1->SetBinError(10,0.2612227);
   jeta_1->SetBinError(11,0.2619243);
   jeta_1->SetBinError(12,0.1086831);
   jeta_1->SetBinError(13,0.08384798);
   jeta_1->SetBinError(14,0.07878289);
   jeta_1->SetBinError(15,0.06583497);
   jeta_1->SetBinError(16,0.07582979);
   jeta_1->SetBinError(17,0.941175);
   jeta_1->SetBinError(18,0.4299922);
   jeta_1->SetBinError(19,2.794254);
   jeta_1->SetMinimum(0);
   jeta_1->SetMaximum(2);
   jeta_1->SetEntries(490.5576);
   jeta_1->SetStats(0);
   jeta_1->SetFillStyle(0);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.1);
   jeta_1->GetXaxis()->SetTitleSize(0.12);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Data/MC");
   jeta_1->GetYaxis()->SetNdivisions(505);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.1);
   jeta_1->GetYaxis()->SetTitleSize(0.12);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(0.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
