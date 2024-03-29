{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:07 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-2.956842,446.5823,7.949519);
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
   stack->SetMaximum(9085259);
   
   TH1F *mt_enu_stack_3 = new TH1F("mt_enu_stack_3","stack",25,0,500);
   mt_enu_stack_3->SetBinContent(0,349.3381);
   mt_enu_stack_3->SetBinContent(1,8.807018);
   mt_enu_stack_3->SetBinContent(2,19.17818);
   mt_enu_stack_3->SetBinContent(3,13.62062);
   mt_enu_stack_3->SetBinContent(4,19.53534);
   mt_enu_stack_3->SetBinContent(5,12.26635);
   mt_enu_stack_3->SetBinContent(6,7.387249);
   mt_enu_stack_3->SetBinContent(7,3.148534);
   mt_enu_stack_3->SetBinContent(8,7.910072);
   mt_enu_stack_3->SetBinContent(9,3.477661);
   mt_enu_stack_3->SetBinContent(10,1.025698);
   mt_enu_stack_3->SetBinContent(11,1.714697);
   mt_enu_stack_3->SetBinContent(12,0.676875);
   mt_enu_stack_3->SetBinContent(13,0.2533112);
   mt_enu_stack_3->SetBinContent(14,3.084728);
   mt_enu_stack_3->SetBinContent(15,0.1442858);
   mt_enu_stack_3->SetBinContent(16,0.659973);
   mt_enu_stack_3->SetBinContent(17,0.6789103);
   mt_enu_stack_3->SetBinContent(18,0.07441213);
   mt_enu_stack_3->SetBinContent(20,0.02418089);
   mt_enu_stack_3->SetBinContent(21,0.02230977);
   mt_enu_stack_3->SetBinContent(22,0.1296788);
   mt_enu_stack_3->SetBinError(0,20.20563);
   mt_enu_stack_3->SetBinError(1,3.020047);
   mt_enu_stack_3->SetBinError(2,4.405032);
   mt_enu_stack_3->SetBinError(3,4.418317);
   mt_enu_stack_3->SetBinError(4,4.869199);
   mt_enu_stack_3->SetBinError(5,4.657568);
   mt_enu_stack_3->SetBinError(6,3.070939);
   mt_enu_stack_3->SetBinError(7,1.366852);
   mt_enu_stack_3->SetBinError(8,3.430498);
   mt_enu_stack_3->SetBinError(9,1.709186);
   mt_enu_stack_3->SetBinError(10,0.2961991);
   mt_enu_stack_3->SetBinError(11,1.061992);
   mt_enu_stack_3->SetBinError(12,0.251776);
   mt_enu_stack_3->SetBinError(13,0.1441401);
   mt_enu_stack_3->SetBinError(14,2.307038);
   mt_enu_stack_3->SetBinError(15,0.1165276);
   mt_enu_stack_3->SetBinError(16,0.5873149);
   mt_enu_stack_3->SetBinError(17,0.6148985);
   mt_enu_stack_3->SetBinError(18,0.07441213);
   mt_enu_stack_3->SetBinError(20,0.02418089);
   mt_enu_stack_3->SetBinError(21,0.02230977);
   mt_enu_stack_3->SetBinError(22,0.1296788);
   mt_enu_stack_3->SetMinimum(0.001825094);
   mt_enu_stack_3->SetMaximum(2.536302e+07);
   mt_enu_stack_3->SetEntries(2901);
   mt_enu_stack_3->SetStats(0);
   mt_enu_stack_3->SetFillColor(4);
   mt_enu_stack_3->SetLineColor(4);
   mt_enu_stack_3->SetLineWidth(2);
   mt_enu_stack_3->SetMarkerColor(4);
   mt_enu_stack_3->SetMarkerStyle(21);
   mt_enu_stack_3->SetMarkerSize(0.8);
   mt_enu_stack_3->GetXaxis()->SetTitle("m_{T}(e#nu) (GeV)");
   mt_enu_stack_3->GetXaxis()->SetRange(1,21);
   mt_enu_stack_3->GetXaxis()->SetLabelFont(42);
   mt_enu_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mt_enu_stack_3->GetXaxis()->SetLabelSize(0);
   mt_enu_stack_3->GetXaxis()->SetTitleSize(0);
   mt_enu_stack_3->GetXaxis()->SetTickLength(0.02);
   mt_enu_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mt_enu_stack_3->GetXaxis()->SetTitleFont(42);
   mt_enu_stack_3->GetYaxis()->SetTitle("Events");
   mt_enu_stack_3->GetYaxis()->SetLabelFont(42);
   mt_enu_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mt_enu_stack_3->GetYaxis()->SetLabelSize(0.035);
   mt_enu_stack_3->GetYaxis()->SetTitleSize(0.045);
   mt_enu_stack_3->GetYaxis()->SetTickLength(0.02);
   mt_enu_stack_3->GetYaxis()->SetTitleOffset(1.55);
   mt_enu_stack_3->GetYaxis()->SetTitleFont(42);
   mt_enu_stack_3->GetZaxis()->SetLabelFont(42);
   mt_enu_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mt_enu_stack_3->GetZaxis()->SetLabelSize(0.035);
   mt_enu_stack_3->GetZaxis()->SetTitleSize(0.045);
   mt_enu_stack_3->GetZaxis()->SetTickLength(0.02);
   mt_enu_stack_3->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mt_enu_stack_3);
   
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,349.3381);
   mt_enu->SetBinContent(1,8.807018);
   mt_enu->SetBinContent(2,19.17818);
   mt_enu->SetBinContent(3,13.62062);
   mt_enu->SetBinContent(4,19.53534);
   mt_enu->SetBinContent(5,12.26635);
   mt_enu->SetBinContent(6,7.387249);
   mt_enu->SetBinContent(7,3.148534);
   mt_enu->SetBinContent(8,7.910072);
   mt_enu->SetBinContent(9,3.477661);
   mt_enu->SetBinContent(10,1.025698);
   mt_enu->SetBinContent(11,1.714697);
   mt_enu->SetBinContent(12,0.676875);
   mt_enu->SetBinContent(13,0.2533112);
   mt_enu->SetBinContent(14,3.084728);
   mt_enu->SetBinContent(15,0.1442858);
   mt_enu->SetBinContent(16,0.659973);
   mt_enu->SetBinContent(17,0.6789103);
   mt_enu->SetBinContent(18,0.07441213);
   mt_enu->SetBinContent(20,0.02418089);
   mt_enu->SetBinContent(21,0.02230977);
   mt_enu->SetBinContent(22,0.1296788);
   mt_enu->SetBinError(0,20.20563);
   mt_enu->SetBinError(1,3.020047);
   mt_enu->SetBinError(2,4.405032);
   mt_enu->SetBinError(3,4.418317);
   mt_enu->SetBinError(4,4.869199);
   mt_enu->SetBinError(5,4.657568);
   mt_enu->SetBinError(6,3.070939);
   mt_enu->SetBinError(7,1.366852);
   mt_enu->SetBinError(8,3.430498);
   mt_enu->SetBinError(9,1.709186);
   mt_enu->SetBinError(10,0.2961991);
   mt_enu->SetBinError(11,1.061992);
   mt_enu->SetBinError(12,0.251776);
   mt_enu->SetBinError(13,0.1441401);
   mt_enu->SetBinError(14,2.307038);
   mt_enu->SetBinError(15,0.1165276);
   mt_enu->SetBinError(16,0.5873149);
   mt_enu->SetBinError(17,0.6148985);
   mt_enu->SetBinError(18,0.07441213);
   mt_enu->SetBinError(20,0.02418089);
   mt_enu->SetBinError(21,0.02230977);
   mt_enu->SetBinError(22,0.1296788);
   mt_enu->SetMinimum(0.01);
   mt_enu->SetMaximum(9540000);
   mt_enu->SetEntries(2901);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(4);
   mt_enu->SetLineColor(4);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(4);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetTitle("m_{T}(e#nu) (GeV)");
   mt_enu->GetXaxis()->SetRange(1,21);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0);
   mt_enu->GetXaxis()->SetTitleSize(0);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetTitle("Events");
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"HIST");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,1691.151);
   mt_enu->SetBinContent(1,145.6381);
   mt_enu->SetBinContent(2,177.6167);
   mt_enu->SetBinContent(3,183.5767);
   mt_enu->SetBinContent(4,199.5134);
   mt_enu->SetBinContent(5,124.6461);
   mt_enu->SetBinContent(6,84.50205);
   mt_enu->SetBinContent(7,60.92971);
   mt_enu->SetBinContent(8,37.98593);
   mt_enu->SetBinContent(9,26.4971);
   mt_enu->SetBinContent(10,22.66031);
   mt_enu->SetBinContent(11,15.69506);
   mt_enu->SetBinContent(12,11.93773);
   mt_enu->SetBinContent(13,8.568432);
   mt_enu->SetBinContent(14,5.926933);
   mt_enu->SetBinContent(15,7.008913);
   mt_enu->SetBinContent(16,1.220553);
   mt_enu->SetBinContent(17,3.718172);
   mt_enu->SetBinContent(18,0.615741);
   mt_enu->SetBinContent(19,1.090529);
   mt_enu->SetBinContent(20,0.8086789);
   mt_enu->SetBinContent(22,3.338014);
   mt_enu->SetBinContent(23,1.394786);
   mt_enu->SetBinContent(24,1.103402);
   mt_enu->SetBinContent(26,1.604873);
   mt_enu->SetBinError(0,27.18259);
   mt_enu->SetBinError(1,7.870728);
   mt_enu->SetBinError(2,9.033338);
   mt_enu->SetBinError(3,8.643197);
   mt_enu->SetBinError(4,9.530757);
   mt_enu->SetBinError(5,7.614072);
   mt_enu->SetBinError(6,6.460924);
   mt_enu->SetBinError(7,5.496221);
   mt_enu->SetBinError(8,4.333409);
   mt_enu->SetBinError(9,3.858512);
   mt_enu->SetBinError(10,3.566278);
   mt_enu->SetBinError(11,3.070761);
   mt_enu->SetBinError(12,2.519776);
   mt_enu->SetBinError(13,2.138754);
   mt_enu->SetBinError(14,1.811604);
   mt_enu->SetBinError(15,2.115814);
   mt_enu->SetBinError(16,0.7160551);
   mt_enu->SetBinError(17,1.37322);
   mt_enu->SetBinError(18,0.4388861);
   mt_enu->SetBinError(19,0.6315089);
   mt_enu->SetBinError(20,0.5779868);
   mt_enu->SetBinError(22,1.418738);
   mt_enu->SetBinError(23,1.248914);
   mt_enu->SetBinError(24,1.103403);
   mt_enu->SetBinError(26,0.8762894);
   mt_enu->SetEntries(11519);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(5);
   mt_enu->SetLineColor(5);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(5);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,8877.65);
   mt_enu->SetBinContent(1,265.0504);
   mt_enu->SetBinContent(2,328.6595);
   mt_enu->SetBinContent(3,342.232);
   mt_enu->SetBinContent(4,291.3198);
   mt_enu->SetBinContent(5,209.6649);
   mt_enu->SetBinContent(6,150.5886);
   mt_enu->SetBinContent(7,111.1978);
   mt_enu->SetBinContent(8,86.21234);
   mt_enu->SetBinContent(9,65.87878);
   mt_enu->SetBinContent(10,53.86237);
   mt_enu->SetBinContent(11,43.85471);
   mt_enu->SetBinContent(12,33.00998);
   mt_enu->SetBinContent(13,24.66266);
   mt_enu->SetBinContent(14,13.92779);
   mt_enu->SetBinContent(15,10.16357);
   mt_enu->SetBinContent(16,7.890635);
   mt_enu->SetBinContent(17,11.28923);
   mt_enu->SetBinContent(18,6.307348);
   mt_enu->SetBinContent(19,6.062454);
   mt_enu->SetBinContent(20,4.77487);
   mt_enu->SetBinContent(21,4.231205);
   mt_enu->SetBinContent(22,1.968404);
   mt_enu->SetBinContent(23,1.304827);
   mt_enu->SetBinContent(24,2.074498);
   mt_enu->SetBinContent(25,0.6057814);
   mt_enu->SetBinContent(26,9.076282);
   mt_enu->SetBinError(0,67.52037);
   mt_enu->SetBinError(1,9.774623);
   mt_enu->SetBinError(2,11.46317);
   mt_enu->SetBinError(3,11.85586);
   mt_enu->SetBinError(4,10.92183);
   mt_enu->SetBinError(5,9.349586);
   mt_enu->SetBinError(6,8.133346);
   mt_enu->SetBinError(7,6.900659);
   mt_enu->SetBinError(8,6.516968);
   mt_enu->SetBinError(9,6.698527);
   mt_enu->SetBinError(10,5.514633);
   mt_enu->SetBinError(11,5.002837);
   mt_enu->SetBinError(12,4.094344);
   mt_enu->SetBinError(13,3.599041);
   mt_enu->SetBinError(14,2.653533);
   mt_enu->SetBinError(15,2.469946);
   mt_enu->SetBinError(16,1.86922);
   mt_enu->SetBinError(17,2.820631);
   mt_enu->SetBinError(18,2.219708);
   mt_enu->SetBinError(19,1.562897);
   mt_enu->SetBinError(20,1.240552);
   mt_enu->SetBinError(21,1.608292);
   mt_enu->SetBinError(22,0.8064055);
   mt_enu->SetBinError(23,0.5401327);
   mt_enu->SetBinError(24,1.202859);
   mt_enu->SetBinError(25,0.4343447);
   mt_enu->SetBinError(26,2.656935);
   mt_enu->SetEntries(44607);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(6);
   mt_enu->SetLineColor(6);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(6);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,1602.363);
   mt_enu->SetBinContent(1,24.73726);
   mt_enu->SetBinContent(2,27.60327);
   mt_enu->SetBinContent(3,30.68367);
   mt_enu->SetBinContent(4,27.31215);
   mt_enu->SetBinContent(5,22.94424);
   mt_enu->SetBinContent(6,17.28517);
   mt_enu->SetBinContent(7,14.13773);
   mt_enu->SetBinContent(8,11.9195);
   mt_enu->SetBinContent(9,10.22544);
   mt_enu->SetBinContent(10,8.819031);
   mt_enu->SetBinContent(11,7.239586);
   mt_enu->SetBinContent(12,6.105183);
   mt_enu->SetBinContent(13,4.329379);
   mt_enu->SetBinContent(14,3.994147);
   mt_enu->SetBinContent(15,3.076289);
   mt_enu->SetBinContent(16,2.455731);
   mt_enu->SetBinContent(17,2.056719);
   mt_enu->SetBinContent(18,1.789011);
   mt_enu->SetBinContent(19,1.860363);
   mt_enu->SetBinContent(20,0.8810116);
   mt_enu->SetBinContent(21,0.8338615);
   mt_enu->SetBinContent(22,0.8500127);
   mt_enu->SetBinContent(23,0.5991499);
   mt_enu->SetBinContent(24,0.3946686);
   mt_enu->SetBinContent(25,0.4332031);
   mt_enu->SetBinContent(26,2.052578);
   mt_enu->SetBinError(0,5.223039);
   mt_enu->SetBinError(1,0.6171157);
   mt_enu->SetBinError(2,0.65537);
   mt_enu->SetBinError(3,0.6962848);
   mt_enu->SetBinError(4,0.6644617);
   mt_enu->SetBinError(5,0.6122931);
   mt_enu->SetBinError(6,0.5326828);
   mt_enu->SetBinError(7,0.4879516);
   mt_enu->SetBinError(8,0.4491469);
   mt_enu->SetBinError(9,0.421937);
   mt_enu->SetBinError(10,0.3886574);
   mt_enu->SetBinError(11,0.3633982);
   mt_enu->SetBinError(12,0.3344871);
   mt_enu->SetBinError(13,0.2834826);
   mt_enu->SetBinError(14,0.2725095);
   mt_enu->SetBinError(15,0.2414835);
   mt_enu->SetBinError(16,0.2156068);
   mt_enu->SetBinError(17,0.1966802);
   mt_enu->SetBinError(18,0.1827419);
   mt_enu->SetBinError(19,0.1908978);
   mt_enu->SetBinError(20,0.1298063);
   mt_enu->SetBinError(21,0.1312871);
   mt_enu->SetBinError(22,0.1333528);
   mt_enu->SetBinError(23,0.1095956);
   mt_enu->SetBinError(24,0.08715304);
   mt_enu->SetBinError(25,0.09564865);
   mt_enu->SetBinError(26,0.2045429);
   mt_enu->SetEntries(146745);
   mt_enu->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mt_enu->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mt_enu->SetLineColor(ci);
   mt_enu->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mt_enu->SetMarkerColor(ci);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,0.08691611);
   mt_enu->SetBinError(0,0.06251888);
   mt_enu->SetEntries(2);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(3);
   mt_enu->SetLineColor(3);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(3);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,676.2666);
   mt_enu->SetBinContent(1,43.026);
   mt_enu->SetBinContent(2,45.56888);
   mt_enu->SetBinContent(3,32.64614);
   mt_enu->SetBinContent(4,21.98975);
   mt_enu->SetBinContent(5,12.73673);
   mt_enu->SetBinContent(6,7.399634);
   mt_enu->SetBinContent(7,6.084926);
   mt_enu->SetBinContent(8,5.006943);
   mt_enu->SetBinContent(9,2.715947);
   mt_enu->SetBinContent(10,2.156574);
   mt_enu->SetBinContent(11,1.011332);
   mt_enu->SetBinContent(12,1.371773);
   mt_enu->SetBinContent(13,1.405257);
   mt_enu->SetBinContent(14,0.528496);
   mt_enu->SetBinContent(15,0.7211215);
   mt_enu->SetBinContent(16,0.4447584);
   mt_enu->SetBinContent(17,0.1666886);
   mt_enu->SetBinContent(18,0.01703228);
   mt_enu->SetBinContent(19,0.08741752);
   mt_enu->SetBinContent(20,0.2531776);
   mt_enu->SetBinContent(21,0.08671439);
   mt_enu->SetBinContent(22,0.05412003);
   mt_enu->SetBinContent(23,0.04134848);
   mt_enu->SetBinContent(24,0.0913977);
   mt_enu->SetBinContent(25,0.0497717);
   mt_enu->SetBinContent(26,0.00218214);
   mt_enu->SetBinError(0,7.306816);
   mt_enu->SetBinError(1,1.686906);
   mt_enu->SetBinError(2,1.705223);
   mt_enu->SetBinError(3,1.435927);
   mt_enu->SetBinError(4,1.278764);
   mt_enu->SetBinError(5,0.9328021);
   mt_enu->SetBinError(6,0.7247593);
   mt_enu->SetBinError(7,0.6913553);
   mt_enu->SetBinError(8,0.6506961);
   mt_enu->SetBinError(9,0.4656331);
   mt_enu->SetBinError(10,0.4558324);
   mt_enu->SetBinError(11,0.2572734);
   mt_enu->SetBinError(12,0.3484739);
   mt_enu->SetBinError(13,0.3861724);
   mt_enu->SetBinError(14,0.2198121);
   mt_enu->SetBinError(15,0.3113947);
   mt_enu->SetBinError(16,0.2434632);
   mt_enu->SetBinError(17,0.08328925);
   mt_enu->SetBinError(18,0.0170104);
   mt_enu->SetBinError(19,0.08741752);
   mt_enu->SetBinError(20,0.1946895);
   mt_enu->SetBinError(21,0.08671439);
   mt_enu->SetBinError(22,0.05412003);
   mt_enu->SetBinError(23,0.04134848);
   mt_enu->SetBinError(24,0.0913977);
   mt_enu->SetBinError(25,0.0497717);
   mt_enu->SetBinError(26,0.00218214);
   mt_enu->SetEntries(20514);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(3);
   mt_enu->SetLineColor(3);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(3);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,119.4981);
   mt_enu->SetBinContent(1,3.385978);
   mt_enu->SetBinContent(2,3.347511);
   mt_enu->SetBinContent(3,2.924871);
   mt_enu->SetBinContent(4,2.588663);
   mt_enu->SetBinContent(5,1.991367);
   mt_enu->SetBinContent(6,1.284559);
   mt_enu->SetBinContent(7,1.195573);
   mt_enu->SetBinContent(8,0.9225456);
   mt_enu->SetBinContent(9,0.7647002);
   mt_enu->SetBinContent(10,0.6096911);
   mt_enu->SetBinContent(11,0.4837525);
   mt_enu->SetBinContent(12,0.3757603);
   mt_enu->SetBinContent(13,0.3961411);
   mt_enu->SetBinContent(14,0.2984098);
   mt_enu->SetBinContent(15,0.3557635);
   mt_enu->SetBinContent(16,0.2096262);
   mt_enu->SetBinContent(17,0.1515674);
   mt_enu->SetBinContent(18,0.1132316);
   mt_enu->SetBinContent(19,0.0832062);
   mt_enu->SetBinContent(20,0.06719465);
   mt_enu->SetBinContent(21,0.03418564);
   mt_enu->SetBinContent(22,0.04466883);
   mt_enu->SetBinContent(23,0.02309573);
   mt_enu->SetBinContent(24,0.01527021);
   mt_enu->SetBinContent(25,0.02675753);
   mt_enu->SetBinContent(26,0.1471819);
   mt_enu->SetBinError(0,0.9705635);
   mt_enu->SetBinError(1,0.1487666);
   mt_enu->SetBinError(2,0.1412531);
   mt_enu->SetBinError(3,0.1371728);
   mt_enu->SetBinError(4,0.1363311);
   mt_enu->SetBinError(5,0.1228806);
   mt_enu->SetBinError(6,0.09715635);
   mt_enu->SetBinError(7,0.09191661);
   mt_enu->SetBinError(8,0.08827001);
   mt_enu->SetBinError(9,0.08049838);
   mt_enu->SetBinError(10,0.07090522);
   mt_enu->SetBinError(11,0.0623575);
   mt_enu->SetBinError(12,0.05196822);
   mt_enu->SetBinError(13,0.06267807);
   mt_enu->SetBinError(14,0.0524411);
   mt_enu->SetBinError(15,0.06035613);
   mt_enu->SetBinError(16,0.04665146);
   mt_enu->SetBinError(17,0.04259284);
   mt_enu->SetBinError(18,0.03316248);
   mt_enu->SetBinError(19,0.03113554);
   mt_enu->SetBinError(20,0.02516632);
   mt_enu->SetBinError(21,0.01987596);
   mt_enu->SetBinError(22,0.02085819);
   mt_enu->SetBinError(23,0.01511814);
   mt_enu->SetBinError(24,0.01087514);
   mt_enu->SetBinError(25,0.0165251);
   mt_enu->SetBinError(26,0.03681755);
   mt_enu->SetEntries(28395);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(3);
   mt_enu->SetLineColor(3);
   mt_enu->SetLineWidth(2);
   mt_enu->SetMarkerColor(3);
   mt_enu->SetMarkerStyle(21);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_enu,"");
   stack->Draw("hist");
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,11705);
   mt_enu->SetBinContent(1,529);
   mt_enu->SetBinContent(2,586);
   mt_enu->SetBinContent(3,636);
   mt_enu->SetBinContent(4,503);
   mt_enu->SetBinContent(5,373);
   mt_enu->SetBinContent(6,267);
   mt_enu->SetBinContent(7,201);
   mt_enu->SetBinContent(8,151);
   mt_enu->SetBinContent(9,101);
   mt_enu->SetBinContent(10,95);
   mt_enu->SetBinContent(11,75);
   mt_enu->SetBinContent(12,52);
   mt_enu->SetBinContent(13,29);
   mt_enu->SetBinContent(14,26);
   mt_enu->SetBinContent(15,21);
   mt_enu->SetBinContent(16,14);
   mt_enu->SetBinContent(17,25);
   mt_enu->SetBinContent(18,12);
   mt_enu->SetBinContent(19,10);
   mt_enu->SetBinContent(20,4);
   mt_enu->SetBinContent(21,5);
   mt_enu->SetBinContent(22,2);
   mt_enu->SetBinContent(23,1);
   mt_enu->SetBinContent(24,1);
   mt_enu->SetBinContent(25,1);
   mt_enu->SetBinContent(26,8);
   mt_enu->SetBinError(0,108.1896);
   mt_enu->SetBinError(1,23);
   mt_enu->SetBinError(2,24.20744);
   mt_enu->SetBinError(3,25.21904);
   mt_enu->SetBinError(4,22.42766);
   mt_enu->SetBinError(5,19.31321);
   mt_enu->SetBinError(6,16.34013);
   mt_enu->SetBinError(7,14.17745);
   mt_enu->SetBinError(8,12.28821);
   mt_enu->SetBinError(9,10.04988);
   mt_enu->SetBinError(10,9.746794);
   mt_enu->SetBinError(11,8.660254);
   mt_enu->SetBinError(12,7.211103);
   mt_enu->SetBinError(13,5.385165);
   mt_enu->SetBinError(14,5.09902);
   mt_enu->SetBinError(15,4.582576);
   mt_enu->SetBinError(16,3.741657);
   mt_enu->SetBinError(17,5);
   mt_enu->SetBinError(18,3.464102);
   mt_enu->SetBinError(19,3.162278);
   mt_enu->SetBinError(20,2);
   mt_enu->SetBinError(21,2.236068);
   mt_enu->SetBinError(22,1.414214);
   mt_enu->SetBinError(23,1);
   mt_enu->SetBinError(24,1);
   mt_enu->SetBinError(25,1);
   mt_enu->SetBinError(26,2.828427);
   mt_enu->SetEntries(15433);
   mt_enu->SetStats(0);
   mt_enu->SetFillColor(1);
   mt_enu->SetFillStyle(0);
   mt_enu->SetLineWidth(3);
   mt_enu->SetMarkerStyle(20);
   mt_enu->SetMarkerSize(1.3);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.035);
   mt_enu->GetXaxis()->SetTitleSize(0.045);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.035);
   mt_enu->GetYaxis()->SetTitleSize(0.045);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(1.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   mt_enu->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"JetPair");
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
   TLegendEntry *entry=leg->AddEntry("mt_enu","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mt_enu","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_enu","EWK W+jets","f");

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
   entry=leg->AddEntry("mt_enu","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_enu","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_enu","Dibosons","f");
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
   lower->Range(-85.06329,-0.653951,446.5823,2.070845);
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
   
   TH1F *mt_enu = new TH1F("mt_enu","mt_enu",25,0,500);
   mt_enu->SetBinContent(0,0.9026749);
   mt_enu->SetBinContent(1,1.09788);
   mt_enu->SetBinContent(2,1.005498);
   mt_enu->SetBinContent(3,1.074209);
   mt_enu->SetBinContent(4,0.9268068);
   mt_enu->SetBinContent(5,1.002733);
   mt_enu->SetBinContent(6,1.022753);
   mt_enu->SetBinContent(7,1.038514);
   mt_enu->SetBinContent(8,1.063027);
   mt_enu->SetBinContent(9,0.952094);
   mt_enu->SetBinContent(10,1.078223);
   mt_enu->SetBinContent(11,1.098347);
   mt_enu->SetBinContent(12,0.9848406);
   mt_enu->SetBinContent(13,0.7367536);
   mt_enu->SetBinContent(14,1.053665);
   mt_enu->SetBinContent(15,0.9847295);
   mt_enu->SetBinContent(16,1.14554);
   mt_enu->SetBinContent(17,1.438238);
   mt_enu->SetBinContent(18,1.357103);
   mt_enu->SetBinContent(19,1.088854);
   mt_enu->SetBinContent(20,0.5895416);
   mt_enu->SetBinContent(21,0.9641405);
   mt_enu->SetBinContent(22,0.319733);
   mt_enu->SetBinContent(23,0.2973352);
   mt_enu->SetBinContent(24,0.2717955);
   mt_enu->SetBinContent(25,0.896448);
   mt_enu->SetBinContent(26,0.6209687);
   mt_enu->SetBinError(0,0.009781729);
   mt_enu->SetBinError(1,0.05579461);
   mt_enu->SetBinError(2,0.04867585);
   mt_enu->SetBinError(3,0.05031323);
   mt_enu->SetBinError(4,0.04823451);
   mt_enu->SetBinError(5,0.06132912);
   mt_enu->SetBinError(6,0.0747413);
   mt_enu->SetBinError(7,0.08733456);
   mt_enu->SetBinError(8,0.1046389);
   mt_enu->SetBinError(9,0.117563);
   mt_enu->SetBinError(10,0.1369341);
   mt_enu->SetBinError(11,0.158279);
   mt_enu->SetBinError(12,0.1636315);
   mt_enu->SetBinError(13,0.1579234);
   mt_enu->SetBinError(14,0.2484982);
   mt_enu->SetBinError(15,0.2628073);
   mt_enu->SetBinError(16,0.3603942);
   mt_enu->SetBinError(17,0.3878699);
   mt_enu->SetBinError(18,0.5243029);
   mt_enu->SetBinError(19,0.3989166);
   mt_enu->SetBinError(20,0.3185108);
   mt_enu->SetBinError(21,0.5255336);
   mt_enu->SetBinError(22,0.2410969);
   mt_enu->SetBinError(23,0.3209187);
   mt_enu->SetBinError(24,0.2974902);
   mt_enu->SetBinError(25,0.9659905);
   mt_enu->SetBinError(26,0.2578474);
   mt_enu->SetMinimum(0);
   mt_enu->SetMaximum(2);
   mt_enu->SetEntries(343.7224);
   mt_enu->SetStats(0);
   mt_enu->SetFillStyle(0);
   mt_enu->SetMarkerStyle(20);
   mt_enu->SetMarkerSize(0.8);
   mt_enu->GetXaxis()->SetTitle("m_{T}(e#nu) (GeV)");
   mt_enu->GetXaxis()->SetRange(1,21);
   mt_enu->GetXaxis()->SetLabelFont(42);
   mt_enu->GetXaxis()->SetLabelOffset(0.007);
   mt_enu->GetXaxis()->SetLabelSize(0.1);
   mt_enu->GetXaxis()->SetTitleSize(0.12);
   mt_enu->GetXaxis()->SetTickLength(0.02);
   mt_enu->GetXaxis()->SetTitleOffset(0.9);
   mt_enu->GetXaxis()->SetTitleFont(42);
   mt_enu->GetYaxis()->SetTitle("Data/MC");
   mt_enu->GetYaxis()->SetNdivisions(505);
   mt_enu->GetYaxis()->SetLabelFont(42);
   mt_enu->GetYaxis()->SetLabelOffset(0.007);
   mt_enu->GetYaxis()->SetLabelSize(0.1);
   mt_enu->GetYaxis()->SetTitleSize(0.12);
   mt_enu->GetYaxis()->SetTickLength(0.02);
   mt_enu->GetYaxis()->SetTitleOffset(0.55);
   mt_enu->GetYaxis()->SetTitleFont(42);
   mt_enu->GetZaxis()->SetLabelFont(42);
   mt_enu->GetZaxis()->SetLabelOffset(0.007);
   mt_enu->GetZaxis()->SetLabelSize(0.035);
   mt_enu->GetZaxis()->SetTitleSize(0.045);
   mt_enu->GetZaxis()->SetTickLength(0.02);
   mt_enu->GetZaxis()->SetTitleFont(42);
   mt_enu->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
