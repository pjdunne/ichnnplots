{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:28:17 2013) by ROOT version5.32/00
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
   upper->Range(-627.8481,-1.885653,3296.203,7.752988);
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
   stack->SetMinimum(0.1);
   stack->SetMaximum(7257037);
   
   TH1F *mjj_stack_10 = new TH1F("mjj_stack_10","stack",50,0,5000);
   mjj_stack_10->SetBinContent(12,11.0972);
   mjj_stack_10->SetBinContent(13,8.081259);
   mjj_stack_10->SetBinContent(14,6.731305);
   mjj_stack_10->SetBinContent(15,9.419557);
   mjj_stack_10->SetBinContent(16,5.712451);
   mjj_stack_10->SetBinContent(17,2.52272);
   mjj_stack_10->SetBinContent(18,4.495283);
   mjj_stack_10->SetBinContent(19,5.324063);
   mjj_stack_10->SetBinContent(20,0.1477541);
   mjj_stack_10->SetBinContent(21,0.3218384);
   mjj_stack_10->SetBinContent(22,0.0485573);
   mjj_stack_10->SetBinContent(24,0.004939891);
   mjj_stack_10->SetBinContent(26,0.3029487);
   mjj_stack_10->SetBinContent(27,1.849816);
   mjj_stack_10->SetBinContent(35,0.04140638);
   mjj_stack_10->SetBinContent(36,0.1148367);
   mjj_stack_10->SetBinError(12,4.016957);
   mjj_stack_10->SetBinError(13,3.213998);
   mjj_stack_10->SetBinError(14,2.798481);
   mjj_stack_10->SetBinError(15,4.011718);
   mjj_stack_10->SetBinError(16,3.254882);
   mjj_stack_10->SetBinError(17,1.99345);
   mjj_stack_10->SetBinError(18,3.07595);
   mjj_stack_10->SetBinError(19,3.662526);
   mjj_stack_10->SetBinError(20,0.08873234);
   mjj_stack_10->SetBinError(21,0.1569713);
   mjj_stack_10->SetBinError(22,0.04217328);
   mjj_stack_10->SetBinError(24,0.004939892);
   mjj_stack_10->SetBinError(26,0.2245885);
   mjj_stack_10->SetBinError(27,1.849816);
   mjj_stack_10->SetBinError(35,0.04140638);
   mjj_stack_10->SetBinError(36,0.1148367);
   mjj_stack_10->SetMinimum(0.02028241);
   mjj_stack_10->SetMaximum(1.86662e+07);
   mjj_stack_10->SetEntries(242);
   mjj_stack_10->SetStats(0);
   mjj_stack_10->SetFillColor(4);
   mjj_stack_10->SetLineColor(4);
   mjj_stack_10->SetLineWidth(2);
   mjj_stack_10->SetMarkerColor(4);
   mjj_stack_10->SetMarkerStyle(21);
   mjj_stack_10->SetMarkerSize(0.8);
   mjj_stack_10->GetXaxis()->SetTitle("M_{jj} [GeV]");
   mjj_stack_10->GetXaxis()->SetRange(1,31);
   mjj_stack_10->GetXaxis()->SetLabelFont(42);
   mjj_stack_10->GetXaxis()->SetLabelOffset(0.007);
   mjj_stack_10->GetXaxis()->SetLabelSize(0);
   mjj_stack_10->GetXaxis()->SetTitleSize(0);
   mjj_stack_10->GetXaxis()->SetTickLength(0.02);
   mjj_stack_10->GetXaxis()->SetTitleOffset(0.9);
   mjj_stack_10->GetXaxis()->SetTitleFont(42);
   mjj_stack_10->GetYaxis()->SetTitle("Events");
   mjj_stack_10->GetYaxis()->SetLabelFont(42);
   mjj_stack_10->GetYaxis()->SetLabelOffset(0.007);
   mjj_stack_10->GetYaxis()->SetLabelSize(0.035);
   mjj_stack_10->GetYaxis()->SetTitleSize(0.045);
   mjj_stack_10->GetYaxis()->SetTickLength(0.02);
   mjj_stack_10->GetYaxis()->SetTitleOffset(1.55);
   mjj_stack_10->GetYaxis()->SetTitleFont(42);
   mjj_stack_10->GetZaxis()->SetLabelFont(42);
   mjj_stack_10->GetZaxis()->SetLabelOffset(0.007);
   mjj_stack_10->GetZaxis()->SetLabelSize(0.035);
   mjj_stack_10->GetZaxis()->SetTitleSize(0.045);
   mjj_stack_10->GetZaxis()->SetTickLength(0.02);
   mjj_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mjj_stack_10);
   
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,11.0972);
   mjj->SetBinContent(13,8.081259);
   mjj->SetBinContent(14,6.731305);
   mjj->SetBinContent(15,9.419557);
   mjj->SetBinContent(16,5.712451);
   mjj->SetBinContent(17,2.52272);
   mjj->SetBinContent(18,4.495283);
   mjj->SetBinContent(19,5.324063);
   mjj->SetBinContent(20,0.1477541);
   mjj->SetBinContent(21,0.3218384);
   mjj->SetBinContent(22,0.0485573);
   mjj->SetBinContent(24,0.004939891);
   mjj->SetBinContent(26,0.3029487);
   mjj->SetBinContent(27,1.849816);
   mjj->SetBinContent(35,0.04140638);
   mjj->SetBinContent(36,0.1148367);
   mjj->SetBinError(12,4.016957);
   mjj->SetBinError(13,3.213998);
   mjj->SetBinError(14,2.798481);
   mjj->SetBinError(15,4.011718);
   mjj->SetBinError(16,3.254882);
   mjj->SetBinError(17,1.99345);
   mjj->SetBinError(18,3.07595);
   mjj->SetBinError(19,3.662526);
   mjj->SetBinError(20,0.08873234);
   mjj->SetBinError(21,0.1569713);
   mjj->SetBinError(22,0.04217328);
   mjj->SetBinError(24,0.004939892);
   mjj->SetBinError(26,0.2245885);
   mjj->SetBinError(27,1.849816);
   mjj->SetBinError(35,0.04140638);
   mjj->SetBinError(36,0.1148367);
   mjj->SetMinimum(0.1);
   mjj->SetMaximum(1.458e+07);
   mjj->SetEntries(242);
   mjj->SetStats(0);
   mjj->SetFillColor(4);
   mjj->SetLineColor(4);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(4);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetTitle("M_{jj} [GeV]");
   mjj->GetXaxis()->SetRange(1,31);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0);
   mjj->GetXaxis()->SetTitleSize(0);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetTitle("Events");
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"HIST");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,45.44215);
   mjj->SetBinContent(13,40.5685);
   mjj->SetBinContent(14,44.24319);
   mjj->SetBinContent(15,31.48827);
   mjj->SetBinContent(16,21.73105);
   mjj->SetBinContent(17,16.09222);
   mjj->SetBinContent(18,15.0429);
   mjj->SetBinContent(19,6.217846);
   mjj->SetBinContent(20,8.866154);
   mjj->SetBinContent(21,7.452099);
   mjj->SetBinContent(22,7.983623);
   mjj->SetBinContent(23,8.866818);
   mjj->SetBinContent(24,2.874466);
   mjj->SetBinContent(25,2.939391);
   mjj->SetBinContent(26,1.253797);
   mjj->SetBinContent(27,1.826356);
   mjj->SetBinContent(28,3.194597);
   mjj->SetBinContent(29,0.7265838);
   mjj->SetBinContent(30,1.91252);
   mjj->SetBinContent(33,0.6392036);
   mjj->SetBinContent(35,0.8110472);
   mjj->SetBinContent(43,0.04318575);
   mjj->SetBinError(12,5.609529);
   mjj->SetBinError(13,5.458535);
   mjj->SetBinError(14,5.821116);
   mjj->SetBinError(15,4.658134);
   mjj->SetBinError(16,3.745422);
   mjj->SetBinError(17,3.125599);
   mjj->SetBinError(18,3.440394);
   mjj->SetBinError(19,1.872235);
   mjj->SetBinError(20,2.621596);
   mjj->SetBinError(21,2.284526);
   mjj->SetBinError(22,2.573267);
   mjj->SetBinError(23,2.554442);
   mjj->SetBinError(24,1.353256);
   mjj->SetBinError(25,1.384582);
   mjj->SetBinError(26,0.9008152);
   mjj->SetBinError(27,1.155151);
   mjj->SetBinError(28,1.628379);
   mjj->SetBinError(29,0.7265839);
   mjj->SetBinError(30,0.8714686);
   mjj->SetBinError(33,0.6392036);
   mjj->SetBinError(35,0.8110472);
   mjj->SetBinError(43,0.04318575);
   mjj->SetEntries(496);
   mjj->SetStats(0);
   mjj->SetFillColor(5);
   mjj->SetLineColor(5);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(5);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,248.6602);
   mjj->SetBinContent(13,247.1418);
   mjj->SetBinContent(14,184.7471);
   mjj->SetBinContent(15,158.5944);
   mjj->SetBinContent(16,124.3754);
   mjj->SetBinContent(17,98.13123);
   mjj->SetBinContent(18,68.81676);
   mjj->SetBinContent(19,66.92047);
   mjj->SetBinContent(20,46.86172);
   mjj->SetBinContent(21,35.36041);
   mjj->SetBinContent(22,32.05582);
   mjj->SetBinContent(23,13.32143);
   mjj->SetBinContent(24,12.78576);
   mjj->SetBinContent(25,13.88449);
   mjj->SetBinContent(26,9.489288);
   mjj->SetBinContent(27,4.479536);
   mjj->SetBinContent(28,5.671502);
   mjj->SetBinContent(29,4.271207);
   mjj->SetBinContent(30,1.286931);
   mjj->SetBinContent(32,2.058778);
   mjj->SetBinContent(33,1.12282);
   mjj->SetBinContent(34,1.71716);
   mjj->SetBinContent(35,2.015877);
   mjj->SetBinContent(37,0.5666867);
   mjj->SetBinContent(44,0.004423925);
   mjj->SetBinContent(45,0.4285135);
   mjj->SetBinError(12,11.73836);
   mjj->SetBinError(13,12.29635);
   mjj->SetBinError(14,10.36983);
   mjj->SetBinError(15,9.393028);
   mjj->SetBinError(16,8.706496);
   mjj->SetBinError(17,7.555586);
   mjj->SetBinError(18,6.276037);
   mjj->SetBinError(19,6.460787);
   mjj->SetBinError(20,5.211821);
   mjj->SetBinError(21,4.777205);
   mjj->SetBinError(22,4.52236);
   mjj->SetBinError(23,2.716848);
   mjj->SetBinError(24,2.560874);
   mjj->SetBinError(25,3.025033);
   mjj->SetBinError(26,2.283295);
   mjj->SetBinError(27,1.3266);
   mjj->SetBinError(28,1.709645);
   mjj->SetBinError(29,1.651167);
   mjj->SetBinError(30,0.8000205);
   mjj->SetBinError(32,0.9252786);
   mjj->SetBinError(33,0.6744351);
   mjj->SetBinError(34,1.172634);
   mjj->SetBinError(35,1.082852);
   mjj->SetBinError(37,0.4599587);
   mjj->SetBinError(44,0.004423925);
   mjj->SetBinError(45,0.4285135);
   mjj->SetEntries(3196);
   mjj->SetStats(0);
   mjj->SetFillColor(6);
   mjj->SetLineColor(6);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(6);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,20.02874);
   mjj->SetBinContent(13,21.20761);
   mjj->SetBinContent(14,19.99758);
   mjj->SetBinContent(15,18.24961);
   mjj->SetBinContent(16,17.32496);
   mjj->SetBinContent(17,16.52069);
   mjj->SetBinContent(18,14.06411);
   mjj->SetBinContent(19,12.99738);
   mjj->SetBinContent(20,11.26851);
   mjj->SetBinContent(21,9.108585);
   mjj->SetBinContent(22,7.749253);
   mjj->SetBinContent(23,6.889114);
   mjj->SetBinContent(24,5.095738);
   mjj->SetBinContent(25,4.135002);
   mjj->SetBinContent(26,3.353865);
   mjj->SetBinContent(27,3.439925);
   mjj->SetBinContent(28,2.653344);
   mjj->SetBinContent(29,2.090467);
   mjj->SetBinContent(30,1.59596);
   mjj->SetBinContent(31,1.122785);
   mjj->SetBinContent(32,1.027339);
   mjj->SetBinContent(33,0.7585084);
   mjj->SetBinContent(34,0.6126502);
   mjj->SetBinContent(35,0.5512926);
   mjj->SetBinContent(36,0.3582234);
   mjj->SetBinContent(37,0.2449099);
   mjj->SetBinContent(38,0.2069801);
   mjj->SetBinContent(39,0.1972456);
   mjj->SetBinContent(40,0.1427825);
   mjj->SetBinContent(41,0.1154629);
   mjj->SetBinContent(42,0.09976889);
   mjj->SetBinContent(43,0.05799415);
   mjj->SetBinContent(44,0.04566194);
   mjj->SetBinContent(45,0.0517322);
   mjj->SetBinContent(46,0.02021466);
   mjj->SetBinContent(49,0.02020766);
   mjj->SetBinContent(50,0.01785311);
   mjj->SetBinError(12,0.6402057);
   mjj->SetBinError(13,0.6591851);
   mjj->SetBinError(14,0.6394001);
   mjj->SetBinError(15,0.6094985);
   mjj->SetBinError(16,0.5994528);
   mjj->SetBinError(17,0.5823544);
   mjj->SetBinError(18,0.5391401);
   mjj->SetBinError(19,0.5171069);
   mjj->SetBinError(20,0.4778908);
   mjj->SetBinError(21,0.4337423);
   mjj->SetBinError(22,0.3989331);
   mjj->SetBinError(23,0.3762455);
   mjj->SetBinError(24,0.3199156);
   mjj->SetBinError(25,0.2866808);
   mjj->SetBinError(26,0.2653587);
   mjj->SetBinError(27,0.2690618);
   mjj->SetBinError(28,0.237017);
   mjj->SetBinError(29,0.2074979);
   mjj->SetBinError(30,0.1832197);
   mjj->SetBinError(31,0.1499259);
   mjj->SetBinError(32,0.1457516);
   mjj->SetBinError(33,0.1228937);
   mjj->SetBinError(34,0.1104643);
   mjj->SetBinError(35,0.1064052);
   mjj->SetBinError(36,0.08965104);
   mjj->SetBinError(37,0.07012734);
   mjj->SetBinError(38,0.06433506);
   mjj->SetBinError(39,0.0606896);
   mjj->SetBinError(40,0.05167781);
   mjj->SetBinError(41,0.05283462);
   mjj->SetBinError(42,0.04188717);
   mjj->SetBinError(43,0.03076572);
   mjj->SetBinError(44,0.0324242);
   mjj->SetBinError(45,0.0313744);
   mjj->SetBinError(46,0.02021466);
   mjj->SetBinError(49,0.02020766);
   mjj->SetBinError(50,0.01785312);
   mjj->SetEntries(11566);
   mjj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mjj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mjj->SetLineColor(ci);
   mjj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mjj->SetMarkerColor(ci);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,150.9362);
   mjj->SetBinContent(13,122.2579);
   mjj->SetBinContent(14,102.9824);
   mjj->SetBinContent(15,80.34303);
   mjj->SetBinContent(16,64.11372);
   mjj->SetBinContent(17,51.2042);
   mjj->SetBinContent(18,40.11053);
   mjj->SetBinContent(19,35.35807);
   mjj->SetBinContent(20,23.12998);
   mjj->SetBinContent(21,19.74412);
   mjj->SetBinContent(22,15.28031);
   mjj->SetBinContent(23,10.15362);
   mjj->SetBinContent(24,8.509678);
   mjj->SetBinContent(25,5.662041);
   mjj->SetBinContent(26,7.478839);
   mjj->SetBinContent(27,2.54494);
   mjj->SetBinContent(28,2.743116);
   mjj->SetBinContent(29,2.902408);
   mjj->SetBinContent(30,1.382163);
   mjj->SetBinContent(31,1.059542);
   mjj->SetBinContent(32,0.6375116);
   mjj->SetBinContent(33,0.8709175);
   mjj->SetBinContent(34,1.209197);
   mjj->SetBinContent(35,0.143329);
   mjj->SetBinContent(37,0.1195215);
   mjj->SetBinContent(39,0.07166562);
   mjj->SetBinContent(40,0.1159191);
   mjj->SetBinContent(41,0.1708596);
   mjj->SetBinError(12,5.697688);
   mjj->SetBinError(13,4.794582);
   mjj->SetBinError(14,4.343605);
   mjj->SetBinError(15,3.758348);
   mjj->SetBinError(16,3.283336);
   mjj->SetBinError(17,2.960843);
   mjj->SetBinError(18,2.614893);
   mjj->SetBinError(19,2.470448);
   mjj->SetBinError(20,1.900452);
   mjj->SetBinError(21,1.854604);
   mjj->SetBinError(22,1.591291);
   mjj->SetBinError(23,1.20968);
   mjj->SetBinError(24,1.095878);
   mjj->SetBinError(25,0.8799863);
   mjj->SetBinError(26,1.351144);
   mjj->SetBinError(27,0.6418537);
   mjj->SetBinError(28,0.6506683);
   mjj->SetBinError(29,0.6495685);
   mjj->SetBinError(30,0.4273721);
   mjj->SetBinError(31,0.3747987);
   mjj->SetBinError(32,0.2688523);
   mjj->SetBinError(33,0.331058);
   mjj->SetBinError(34,0.4106298);
   mjj->SetBinError(35,0.143329);
   mjj->SetBinError(37,0.1195215);
   mjj->SetBinError(39,0.05186177);
   mjj->SetBinError(40,0.1141755);
   mjj->SetBinError(41,0.1708596);
   mjj->SetEntries(5468);
   mjj->SetStats(0);
   mjj->SetFillColor(3);
   mjj->SetLineColor(3);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(3);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,5.287032);
   mjj->SetBinContent(13,2.947834);
   mjj->SetBinContent(14,3.006067);
   mjj->SetBinContent(15,4.244289);
   mjj->SetBinContent(16,3.50993);
   mjj->SetBinContent(17,1.227548);
   mjj->SetBinContent(18,1.365569);
   mjj->SetBinContent(19,1.226312);
   mjj->SetBinContent(20,0.1385847);
   mjj->SetBinContent(21,0.51212);
   mjj->SetBinContent(22,0.7578259);
   mjj->SetBinContent(23,0.6700828);
   mjj->SetBinContent(24,0.3719828);
   mjj->SetBinContent(25,0.5474231);
   mjj->SetBinContent(26,0.09403215);
   mjj->SetBinContent(28,0.3546376);
   mjj->SetBinContent(31,0.08372241);
   mjj->SetBinError(12,0.8075918);
   mjj->SetBinError(13,0.5439452);
   mjj->SetBinError(14,0.5648235);
   mjj->SetBinError(15,0.7090495);
   mjj->SetBinError(16,0.6634063);
   mjj->SetBinError(17,0.337695);
   mjj->SetBinError(18,0.3447782);
   mjj->SetBinError(19,0.3446909);
   mjj->SetBinError(20,0.09000914);
   mjj->SetBinError(21,0.2017682);
   mjj->SetBinError(22,0.3184018);
   mjj->SetBinError(23,0.2822768);
   mjj->SetBinError(24,0.1901811);
   mjj->SetBinError(25,0.283097);
   mjj->SetBinError(26,0.09403216);
   mjj->SetBinError(28,0.205019);
   mjj->SetBinError(31,0.0835176);
   mjj->SetEntries(311);
   mjj->SetStats(0);
   mjj->SetFillColor(3);
   mjj->SetLineColor(3);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(3);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,2.350928);
   mjj->SetBinContent(13,2.414109);
   mjj->SetBinContent(14,2.402916);
   mjj->SetBinContent(15,2.577871);
   mjj->SetBinContent(16,2.277833);
   mjj->SetBinContent(17,2.166577);
   mjj->SetBinContent(18,1.695585);
   mjj->SetBinContent(19,1.762075);
   mjj->SetBinContent(20,1.230729);
   mjj->SetBinContent(21,1.041239);
   mjj->SetBinContent(22,0.9432253);
   mjj->SetBinContent(23,0.7780975);
   mjj->SetBinContent(24,0.6053206);
   mjj->SetBinContent(25,0.489655);
   mjj->SetBinContent(26,0.5233929);
   mjj->SetBinContent(27,0.3709082);
   mjj->SetBinContent(28,0.1857861);
   mjj->SetBinContent(29,0.2400255);
   mjj->SetBinContent(30,0.1367988);
   mjj->SetBinContent(31,0.09743828);
   mjj->SetBinContent(32,0.1359168);
   mjj->SetBinContent(33,0.04561595);
   mjj->SetBinContent(34,0.05721894);
   mjj->SetBinContent(35,0.03791407);
   mjj->SetBinContent(36,0.01613767);
   mjj->SetBinContent(37,0.02688425);
   mjj->SetBinContent(38,0.01343293);
   mjj->SetBinContent(39,0.01257006);
   mjj->SetBinContent(41,0.003110808);
   mjj->SetBinContent(45,0.01242366);
   mjj->SetBinContent(49,0.01127192);
   mjj->SetBinContent(51,0.006649794);
   mjj->SetBinError(12,0.1692844);
   mjj->SetBinError(13,0.1680045);
   mjj->SetBinError(14,0.1713407);
   mjj->SetBinError(15,0.176359);
   mjj->SetBinError(16,0.1656996);
   mjj->SetBinError(17,0.161337);
   mjj->SetBinError(18,0.1443401);
   mjj->SetBinError(19,0.1470727);
   mjj->SetBinError(20,0.1202602);
   mjj->SetBinError(21,0.111699);
   mjj->SetBinError(22,0.1061959);
   mjj->SetBinError(23,0.09565004);
   mjj->SetBinError(24,0.08644462);
   mjj->SetBinError(25,0.07680643);
   mjj->SetBinError(26,0.07837461);
   mjj->SetBinError(27,0.06823357);
   mjj->SetBinError(28,0.0468578);
   mjj->SetBinError(29,0.05004879);
   mjj->SetBinError(30,0.03886056);
   mjj->SetBinError(31,0.02922157);
   mjj->SetBinError(32,0.03893043);
   mjj->SetBinError(33,0.02354672);
   mjj->SetBinError(34,0.02483361);
   mjj->SetBinError(35,0.01831764);
   mjj->SetBinError(36,0.01170578);
   mjj->SetBinError(37,0.01623959);
   mjj->SetBinError(38,0.01343293);
   mjj->SetBinError(39,0.008889926);
   mjj->SetBinError(41,0.003110808);
   mjj->SetBinError(45,0.01242366);
   mjj->SetBinError(49,0.01127192);
   mjj->SetBinError(51,0.006649794);
   mjj->SetEntries(2534);
   mjj->SetStats(0);
   mjj->SetFillColor(3);
   mjj->SetLineColor(3);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(3);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   stack->Draw("hist");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,972);
   mjj->SetBinContent(13,877);
   mjj->SetBinContent(14,767);
   mjj->SetBinContent(15,700);
   mjj->SetBinContent(16,603);
   mjj->SetBinContent(17,555);
   mjj->SetBinContent(18,477);
   mjj->SetBinContent(19,371);
   mjj->SetBinContent(20,324);
   mjj->SetBinContent(21,279);
   mjj->SetBinContent(22,222);
   mjj->SetBinContent(23,204);
   mjj->SetBinContent(24,179);
   mjj->SetBinContent(25,145);
   mjj->SetBinContent(26,124);
   mjj->SetBinContent(27,98);
   mjj->SetBinContent(28,69);
   mjj->SetBinContent(29,65);
   mjj->SetBinContent(30,47);
   mjj->SetBinContent(31,45);
   mjj->SetBinContent(32,45);
   mjj->SetBinContent(33,26);
   mjj->SetBinContent(34,28);
   mjj->SetBinContent(35,23);
   mjj->SetBinContent(36,22);
   mjj->SetBinContent(37,17);
   mjj->SetBinContent(38,7);
   mjj->SetBinContent(39,6);
   mjj->SetBinContent(40,13);
   mjj->SetBinContent(41,8);
   mjj->SetBinContent(42,3);
   mjj->SetBinContent(43,6);
   mjj->SetBinContent(44,4);
   mjj->SetBinContent(45,1);
   mjj->SetBinContent(46,2);
   mjj->SetBinContent(47,2);
   mjj->SetBinContent(49,1);
   mjj->SetBinContent(50,1);
   mjj->SetBinContent(51,3);
   mjj->SetBinError(12,31.17691);
   mjj->SetBinError(13,29.61419);
   mjj->SetBinError(14,27.69476);
   mjj->SetBinError(15,26.45751);
   mjj->SetBinError(16,24.55606);
   mjj->SetBinError(17,23.55844);
   mjj->SetBinError(18,21.84033);
   mjj->SetBinError(19,19.26136);
   mjj->SetBinError(20,18);
   mjj->SetBinError(21,16.70329);
   mjj->SetBinError(22,14.89966);
   mjj->SetBinError(23,14.28286);
   mjj->SetBinError(24,13.37909);
   mjj->SetBinError(25,12.04159);
   mjj->SetBinError(26,11.13553);
   mjj->SetBinError(27,9.899495);
   mjj->SetBinError(28,8.306624);
   mjj->SetBinError(29,8.062258);
   mjj->SetBinError(30,6.855655);
   mjj->SetBinError(31,6.708204);
   mjj->SetBinError(32,6.708204);
   mjj->SetBinError(33,5.09902);
   mjj->SetBinError(34,5.291503);
   mjj->SetBinError(35,4.795832);
   mjj->SetBinError(36,4.690416);
   mjj->SetBinError(37,4.123106);
   mjj->SetBinError(38,2.645751);
   mjj->SetBinError(39,2.44949);
   mjj->SetBinError(40,3.605551);
   mjj->SetBinError(41,2.828427);
   mjj->SetBinError(42,1.732051);
   mjj->SetBinError(43,2.44949);
   mjj->SetBinError(44,2);
   mjj->SetBinError(45,1);
   mjj->SetBinError(46,1.414214);
   mjj->SetBinError(47,1.414214);
   mjj->SetBinError(49,1);
   mjj->SetBinError(50,1);
   mjj->SetBinError(51,1.732051);
   mjj->SetEntries(7341);
   mjj->SetStats(0);
   mjj->SetFillColor(1);
   mjj->SetFillStyle(0);
   mjj->SetLineWidth(3);
   mjj->SetMarkerStyle(20);
   mjj->SetMarkerSize(1.3);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   mjj->Draw("SAMEPE1");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,18.92449);
   mjj->SetBinContent(13,21.01647);
   mjj->SetBinContent(14,18.47364);
   mjj->SetBinContent(15,19.70319);
   mjj->SetBinContent(16,13.33746);
   mjj->SetBinContent(17,9.796427);
   mjj->SetBinContent(18,9.715839);
   mjj->SetBinContent(19,7.533957);
   mjj->SetBinContent(20,7.778787);
   mjj->SetBinContent(21,4.71995);
   mjj->SetBinContent(22,3.100252);
   mjj->SetBinContent(23,5.910617);
   mjj->SetBinContent(24,2.549011);
   mjj->SetBinContent(25,1.717888);
   mjj->SetBinContent(26,1.195586);
   mjj->SetBinContent(27,2.665801);
   mjj->SetBinContent(28,0.3802977);
   mjj->SetBinContent(29,0.4939912);
   mjj->SetBinContent(30,1.231141);
   mjj->SetBinContent(32,0.4209041);
   mjj->SetBinContent(34,0.3376841);
   mjj->SetBinContent(35,0.6962412);
   mjj->SetBinContent(39,0.3402071);
   mjj->SetBinContent(41,0.4806896);
   mjj->SetBinError(12,2.630888);
   mjj->SetBinError(13,2.766285);
   mjj->SetBinError(14,2.58383);
   mjj->SetBinError(15,2.583328);
   mjj->SetBinError(16,2.139494);
   mjj->SetBinError(17,1.952924);
   mjj->SetBinError(18,1.839258);
   mjj->SetBinError(19,1.633418);
   mjj->SetBinError(20,1.66202);
   mjj->SetBinError(21,1.322694);
   mjj->SetBinError(22,1.152824);
   mjj->SetBinError(23,1.491083);
   mjj->SetBinError(24,0.996118);
   mjj->SetBinError(25,0.7721811);
   mjj->SetBinError(26,0.6407107);
   mjj->SetBinError(27,1.122624);
   mjj->SetBinError(28,0.3802977);
   mjj->SetBinError(29,0.493891);
   mjj->SetBinError(30,0.7339876);
   mjj->SetBinError(32,0.372961);
   mjj->SetBinError(34,0.3376841);
   mjj->SetBinError(35,0.4943529);
   mjj->SetBinError(39,0.3402071);
   mjj->SetBinError(41,0.4806896);
   mjj->SetEntries(484);
   mjj->SetStats(0);
   mjj->SetFillColor(1);
   mjj->SetFillStyle(0);
   mjj->SetLineStyle(2);
   mjj->SetLineWidth(3);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   mjj->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("mjj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mjj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","EWK W+jets","f");

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
   entry=leg->AddEntry("mjj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","Dibosons","f");
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
   lower->Range(-627.8481,-0.653951,3296.203,2.070845);
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
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,2.05625);
   mjj->SetBinContent(13,2.00899);
   mjj->SetBinContent(14,2.14618);
   mjj->SetBinContent(15,2.368886);
   mjj->SetBinContent(16,2.584291);
   mjj->SetBinContent(17,2.994457);
   mjj->SetBinContent(18,3.38069);
   mjj->SetBinContent(19,2.980347);
   mjj->SetBinContent(20,3.541151);
   mjj->SetBinContent(21,3.810508);
   mjj->SetBinContent(22,3.42751);
   mjj->SetBinContent(23,5.014852);
   mjj->SetBinContent(24,5.918736);
   mjj->SetBinContent(25,5.242607);
   mjj->SetBinContent(26,5.587293);
   mjj->SetBinContent(27,7.739898);
   mjj->SetBinContent(28,4.661223);
   mjj->SetBinContent(29,6.353432);
   mjj->SetBinContent(30,7.443337);
   mjj->SetBinContent(31,19.03966);
   mjj->SetBinContent(32,11.6594);
   mjj->SetBinContent(33,7.564592);
   mjj->SetBinContent(34,7.785941);
   mjj->SetBinContent(35,6.461655);
   mjj->SetBinContent(36,58.7668);
   mjj->SetBinContent(37,17.74526);
   mjj->SetBinContent(38,31.75856);
   mjj->SetBinContent(39,21.31581);
   mjj->SetBinContent(40,50.25095);
   mjj->SetBinContent(41,27.64022);
   mjj->SetBinContent(42,30.06949);
   mjj->SetBinContent(43,59.30032);
   mjj->SetBinContent(44,79.86285);
   mjj->SetBinContent(45,2.029759);
   mjj->SetBinContent(46,98.93808);
   mjj->SetBinContent(49,31.76663);
   mjj->SetBinContent(50,56.01263);
   mjj->SetBinContent(51,451.1418);
   mjj->SetBinError(12,0.0904852);
   mjj->SetBinError(13,0.09454315);
   mjj->SetBinError(14,0.1086884);
   mjj->SetBinError(15,0.1266773);
   mjj->SetBinError(16,0.1533584);
   mjj->SetBinError(17,0.1897922);
   mjj->SetBinError(18,0.2398768);
   mjj->SetBinError(19,0.2315395);
   mjj->SetBinError(20,0.3089851);
   mjj->SetBinError(21,0.3714295);
   mjj->SetBinError(22,0.3695738);
   mjj->SetBinError(23,0.6003011);
   mjj->SetBinError(24,0.7540668);
   mjj->SetBinError(25,0.788089);
   mjj->SetBinError(26,0.868761);
   mjj->SetBinError(27,1.396513);
   mjj->SetBinError(28,0.9589268);
   mjj->SetBinError(29,1.434003);
   mjj->SetBinError(30,1.850946);
   mjj->SetBinError(31,4.374766);
   mjj->SetBinError(32,3.420732);
   mjj->SetBinError(33,2.643871);
   mjj->SetBinError(34,3.075864);
   mjj->SetBinError(35,2.820179);
   mjj->SetBinError(36,18.93183);
   mjj->SetBinError(37,9.888944);
   mjj->SetBinError(38,15.28929);
   mjj->SetBinError(39,10.61727);
   mjj->SetBinError(40,28.05102);
   mjj->SetBinError(41,19.6794);
   mjj->SetBinError(42,21.4655);
   mjj->SetBinError(43,39.39351);
   mjj->SetBinError(44,65.70595);
   mjj->SetBinError(45,2.693703);
   mjj->SetBinError(46,121.1739);
   mjj->SetBinError(49,39.42503);
   mjj->SetBinError(50,79.21383);
   mjj->SetBinError(51,520.9337);
   mjj->SetMinimum(0);
   mjj->SetMaximum(2);
   mjj->SetEntries(318.0565);
   mjj->SetStats(0);
   mjj->SetFillStyle(0);
   mjj->SetMarkerStyle(20);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetTitle("M_{jj} [GeV]");
   mjj->GetXaxis()->SetRange(1,31);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.1);
   mjj->GetXaxis()->SetTitleSize(0.12);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetTitle("Data/MC");
   mjj->GetYaxis()->SetNdivisions(505);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.1);
   mjj->GetYaxis()->SetTitleSize(0.12);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(0.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   mjj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
