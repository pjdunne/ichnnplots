{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:09 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.946911,765.5696,7.777751);
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
   stack->SetMaximum(6318149);
   
   TH1F *met_stack_5 = new TH1F("met_stack_5","stack",50,0,1000);
   met_stack_5->SetBinContent(2,0.0995755);
   met_stack_5->SetBinContent(3,2.02807);
   met_stack_5->SetBinContent(4,10.82228);
   met_stack_5->SetBinContent(5,8.549035);
   met_stack_5->SetBinContent(6,8.681414);
   met_stack_5->SetBinContent(7,7.732424);
   met_stack_5->SetBinContent(8,12.4642);
   met_stack_5->SetBinContent(9,4.769004);
   met_stack_5->SetBinContent(10,8.001063);
   met_stack_5->SetBinContent(11,4.314962);
   met_stack_5->SetBinContent(12,0.2765435);
   met_stack_5->SetBinContent(13,0.3861669);
   met_stack_5->SetBinContent(15,0.7095859);
   met_stack_5->SetBinContent(25,2.493825);
   met_stack_5->SetBinError(2,0.08144713);
   met_stack_5->SetBinError(3,1.398204);
   met_stack_5->SetBinError(4,3.594032);
   met_stack_5->SetBinError(5,2.516869);
   met_stack_5->SetBinError(6,2.650895);
   met_stack_5->SetBinError(7,3.131835);
   met_stack_5->SetBinError(8,4.459444);
   met_stack_5->SetBinError(9,2.553514);
   met_stack_5->SetBinError(10,3.618359);
   met_stack_5->SetBinError(11,2.911841);
   met_stack_5->SetBinError(12,0.1691379);
   met_stack_5->SetBinError(13,0.1803551);
   met_stack_5->SetBinError(15,0.6178093);
   met_stack_5->SetBinError(25,2.493825);
   met_stack_5->SetMinimum(0.001851751);
   met_stack_5->SetMaximum(1.743884e+07);
   met_stack_5->SetEntries(333);
   met_stack_5->SetStats(0);
   met_stack_5->SetFillColor(4);
   met_stack_5->SetLineColor(4);
   met_stack_5->SetLineWidth(2);
   met_stack_5->SetMarkerColor(4);
   met_stack_5->SetMarkerStyle(21);
   met_stack_5->SetMarkerSize(0.8);
   met_stack_5->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_5->GetXaxis()->SetRange(1,36);
   met_stack_5->GetXaxis()->SetLabelFont(42);
   met_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_stack_5->GetXaxis()->SetLabelSize(0);
   met_stack_5->GetXaxis()->SetTitleSize(0);
   met_stack_5->GetXaxis()->SetTickLength(0.02);
   met_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_stack_5->GetXaxis()->SetTitleFont(42);
   met_stack_5->GetYaxis()->SetTitle("Events");
   met_stack_5->GetYaxis()->SetLabelFont(42);
   met_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_stack_5->GetYaxis()->SetLabelSize(0.035);
   met_stack_5->GetYaxis()->SetTitleSize(0.045);
   met_stack_5->GetYaxis()->SetTickLength(0.02);
   met_stack_5->GetYaxis()->SetTitleOffset(1.55);
   met_stack_5->GetYaxis()->SetTitleFont(42);
   met_stack_5->GetZaxis()->SetLabelFont(42);
   met_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_stack_5->GetZaxis()->SetLabelSize(0.035);
   met_stack_5->GetZaxis()->SetTitleSize(0.045);
   met_stack_5->GetZaxis()->SetTickLength(0.02);
   met_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_5);
   
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(2,0.0995755);
   met->SetBinContent(3,2.02807);
   met->SetBinContent(4,10.82228);
   met->SetBinContent(5,8.549035);
   met->SetBinContent(6,8.681414);
   met->SetBinContent(7,7.732424);
   met->SetBinContent(8,12.4642);
   met->SetBinContent(9,4.769004);
   met->SetBinContent(10,8.001063);
   met->SetBinContent(11,4.314962);
   met->SetBinContent(12,0.2765435);
   met->SetBinContent(13,0.3861669);
   met->SetBinContent(15,0.7095859);
   met->SetBinContent(25,2.493825);
   met->SetBinError(2,0.08144713);
   met->SetBinError(3,1.398204);
   met->SetBinError(4,3.594032);
   met->SetBinError(5,2.516869);
   met->SetBinError(6,2.650895);
   met->SetBinError(7,3.131835);
   met->SetBinError(8,4.459444);
   met->SetBinError(9,2.553514);
   met->SetBinError(10,3.618359);
   met->SetBinError(11,2.911841);
   met->SetBinError(12,0.1691379);
   met->SetBinError(13,0.1803551);
   met->SetBinError(15,0.6178093);
   met->SetBinError(25,2.493825);
   met->SetMinimum(0.01);
   met->SetMaximum(6105000);
   met->SetEntries(333);
   met->SetStats(0);
   met->SetFillColor(4);
   met->SetLineColor(4);
   met->SetLineWidth(2);
   met->SetMarkerColor(4);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0);
   met->GetXaxis()->SetTitleSize(0);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Events");
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"HIST");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,0.3675795);
   met->SetBinContent(2,1.31054);
   met->SetBinContent(3,10.87398);
   met->SetBinContent(4,38.80565);
   met->SetBinContent(5,44.21208);
   met->SetBinContent(6,63.19488);
   met->SetBinContent(7,58.39393);
   met->SetBinContent(8,42.51731);
   met->SetBinContent(9,23.88718);
   met->SetBinContent(10,21.31621);
   met->SetBinContent(11,15.93764);
   met->SetBinContent(12,5.329836);
   met->SetBinContent(13,2.773407);
   met->SetBinContent(14,2.322108);
   met->SetBinContent(15,1.682549);
   met->SetBinContent(16,1.063904);
   met->SetBinContent(17,0.7141592);
   met->SetBinContent(19,0.3404439);
   met->SetBinContent(21,1.074504);
   met->SetBinContent(22,0.3727424);
   met->SetBinError(1,0.2655222);
   met->SetBinError(2,0.7446646);
   met->SetBinError(3,1.965934);
   met->SetBinError(4,3.627248);
   met->SetBinError(5,3.414283);
   met->SetBinError(6,4.92021);
   met->SetBinError(7,5.785433);
   met->SetBinError(8,5.122568);
   met->SetBinError(9,3.772578);
   met->SetBinError(10,3.886227);
   met->SetBinError(11,3.255258);
   met->SetBinError(12,1.744656);
   met->SetBinError(13,1.279935);
   met->SetBinError(14,1.234881);
   met->SetBinError(15,1.235081);
   met->SetBinError(16,1.063904);
   met->SetBinError(17,0.7141592);
   met->SetBinError(19,0.3404439);
   met->SetBinError(21,1.074504);
   met->SetBinError(22,0.3727423);
   met->SetEntries(1122);
   met->SetStats(0);
   met->SetFillColor(5);
   met->SetLineColor(5);
   met->SetLineWidth(2);
   met->SetMarkerColor(5);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,0.9548128);
   met->SetBinContent(2,4.968609);
   met->SetBinContent(3,44.75356);
   met->SetBinContent(4,194.6959);
   met->SetBinContent(5,249.5648);
   met->SetBinContent(6,279.2573);
   met->SetBinContent(7,233.6241);
   met->SetBinContent(8,180.6146);
   met->SetBinContent(9,113.7815);
   met->SetBinContent(10,74.24724);
   met->SetBinContent(11,59.59628);
   met->SetBinContent(12,22.33265);
   met->SetBinContent(13,11.76892);
   met->SetBinContent(14,12.53924);
   met->SetBinContent(15,5.789281);
   met->SetBinContent(16,5.320395);
   met->SetBinContent(17,5.236539);
   met->SetBinContent(18,1.572759);
   met->SetBinContent(19,1.04076);
   met->SetBinContent(20,1.691969);
   met->SetBinContent(21,2.679479);
   met->SetBinContent(23,0.7617669);
   met->SetBinError(1,0.5025544);
   met->SetBinError(2,1.313297);
   met->SetBinError(3,4.141681);
   met->SetBinError(4,9.45439);
   met->SetBinError(5,9.825157);
   met->SetBinError(6,11.57993);
   met->SetBinError(7,12.16619);
   met->SetBinError(8,10.89329);
   met->SetBinError(9,8.627976);
   met->SetBinError(10,6.97902);
   met->SetBinError(11,6.44658);
   met->SetBinError(12,3.919099);
   met->SetBinError(13,2.344923);
   met->SetBinError(14,2.917564);
   met->SetBinError(15,1.747489);
   met->SetBinError(16,1.674288);
   met->SetBinError(17,2.20195);
   met->SetBinError(18,0.8001468);
   met->SetBinError(19,0.606094);
   met->SetBinError(20,1.011563);
   met->SetBinError(21,1.457591);
   met->SetBinError(23,0.7617668);
   met->SetEntries(4765);
   met->SetStats(0);
   met->SetFillColor(6);
   met->SetLineColor(6);
   met->SetLineWidth(2);
   met->SetMarkerColor(6);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,0.1949142);
   met->SetBinContent(2,1.521468);
   met->SetBinContent(3,9.242067);
   met->SetBinContent(4,40.97244);
   met->SetBinContent(5,55.44136);
   met->SetBinContent(6,65.14467);
   met->SetBinContent(7,62.25725);
   met->SetBinContent(8,45.43242);
   met->SetBinContent(9,33.18028);
   met->SetBinContent(10,23.38458);
   met->SetBinContent(11,15.15455);
   met->SetBinContent(12,10.54065);
   met->SetBinContent(13,8.464362);
   met->SetBinContent(14,5.772418);
   met->SetBinContent(15,3.963406);
   met->SetBinContent(16,2.642514);
   met->SetBinContent(17,1.783685);
   met->SetBinContent(18,1.482139);
   met->SetBinContent(19,0.9938925);
   met->SetBinContent(20,0.756209);
   met->SetBinContent(21,0.5159775);
   met->SetBinContent(22,0.5126275);
   met->SetBinContent(23,0.2658314);
   met->SetBinContent(24,0.2194513);
   met->SetBinContent(25,0.1688496);
   met->SetBinContent(26,0.141245);
   met->SetBinContent(27,0.1587461);
   met->SetBinContent(28,0.0507286);
   met->SetBinContent(29,0.01887856);
   met->SetBinContent(30,0.04639514);
   met->SetBinContent(31,0.02075678);
   met->SetBinContent(32,0.01887926);
   met->SetBinContent(34,0.06047575);
   met->SetBinContent(37,0.01035286);
   met->SetBinError(1,0.05212056);
   met->SetBinError(2,0.1438182);
   met->SetBinError(3,0.3352928);
   met->SetBinError(4,0.6940819);
   met->SetBinError(5,0.7118233);
   met->SetBinError(6,0.9120339);
   met->SetBinError(7,1.039552);
   met->SetBinError(8,0.9280291);
   met->SetBinError(9,0.8068346);
   met->SetBinError(10,0.6885555);
   met->SetBinError(11,0.5531827);
   met->SetBinError(12,0.4614368);
   met->SetBinError(13,0.4163493);
   met->SetBinError(14,0.3433666);
   met->SetBinError(15,0.2831327);
   met->SetBinError(16,0.2332685);
   met->SetBinError(17,0.1906589);
   met->SetBinError(18,0.1788162);
   met->SetBinError(19,0.1431416);
   met->SetBinError(20,0.1231251);
   met->SetBinError(21,0.1013632);
   met->SetBinError(22,0.1042512);
   met->SetBinError(23,0.0763846);
   met->SetBinError(24,0.0700218);
   met->SetBinError(25,0.05764981);
   met->SetBinError(26,0.05496533);
   met->SetBinError(27,0.05687255);
   met->SetBinError(28,0.02860769);
   met->SetBinError(29,0.01887856);
   met->SetBinError(30,0.0334298);
   met->SetBinError(31,0.02075678);
   met->SetBinError(32,0.01887926);
   met->SetBinError(34,0.03546559);
   met->SetBinError(37,0.01035286);
   met->SetEntries(32662);
   met->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met->SetLineColor(ci);
   met->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met->SetMarkerColor(ci);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(4,0.01661818);
   met->SetBinContent(8,0.1562384);
   met->SetBinError(4,0.01661817);
   met->SetBinError(8,0.1562384);
   met->SetEntries(2);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,0.3561659);
   met->SetBinContent(2,0.7248014);
   met->SetBinContent(3,2.325691);
   met->SetBinContent(4,3.555622);
   met->SetBinContent(5,2.817794);
   met->SetBinContent(6,4.204074);
   met->SetBinContent(7,3.614467);
   met->SetBinContent(8,3.03907);
   met->SetBinContent(9,1.437205);
   met->SetBinContent(10,1.413932);
   met->SetBinContent(11,0.8032006);
   met->SetBinContent(12,0.2639698);
   met->SetBinContent(13,0.2829919);
   met->SetBinContent(15,0.08120943);
   met->SetBinError(1,0.1927297);
   met->SetBinError(2,0.2250152);
   met->SetBinError(3,0.4072175);
   met->SetBinError(4,0.4972443);
   met->SetBinError(5,0.369109);
   met->SetBinError(6,0.5830752);
   met->SetBinError(7,0.5705403);
   met->SetBinError(8,0.5996668);
   met->SetBinError(9,0.410562);
   met->SetBinError(10,0.4058782);
   met->SetBinError(11,0.3017394);
   met->SetBinError(12,0.150732);
   met->SetBinError(13,0.1642213);
   met->SetBinError(15,0.08120943);
   met->SetEntries(460);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,0.03791103);
   met->SetBinContent(2,0.08053208);
   met->SetBinContent(3,0.2563841);
   met->SetBinContent(4,0.3822857);
   met->SetBinContent(5,0.5176897);
   met->SetBinContent(6,0.7276);
   met->SetBinContent(7,0.7438592);
   met->SetBinContent(8,0.5533338);
   met->SetBinContent(9,0.317132);
   met->SetBinContent(10,0.304016);
   met->SetBinContent(11,0.2126297);
   met->SetBinContent(12,0.1263441);
   met->SetBinContent(13,0.110872);
   met->SetBinContent(14,0.06527697);
   met->SetBinContent(15,0.03787);
   met->SetBinContent(16,0.02888737);
   met->SetBinContent(17,0.0135214);
   met->SetBinContent(18,0.01922242);
   met->SetBinContent(19,0.007593317);
   met->SetBinContent(27,0.001497151);
   met->SetBinError(1,0.01232987);
   met->SetBinError(2,0.0194216);
   met->SetBinError(3,0.03492943);
   met->SetBinError(4,0.03874066);
   met->SetBinError(5,0.03909321);
   met->SetBinError(6,0.05539339);
   met->SetBinError(7,0.06519986);
   met->SetBinError(8,0.05766288);
   met->SetBinError(9,0.04461427);
   met->SetBinError(10,0.04562026);
   met->SetBinError(11,0.03812739);
   met->SetBinError(12,0.02901469);
   met->SetBinError(13,0.02624097);
   met->SetBinError(14,0.02039388);
   met->SetBinError(15,0.01493775);
   met->SetBinError(16,0.01469928);
   met->SetBinError(17,0.009063573);
   met->SetBinError(18,0.01136626);
   met->SetBinError(19,0.007593317);
   met->SetBinError(27,0.00149715);
   met->SetEntries(1132);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   stack->Draw("hist");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,6);
   met->SetBinContent(2,37);
   met->SetBinContent(3,94);
   met->SetBinContent(4,249);
   met->SetBinContent(5,407);
   met->SetBinContent(6,379);
   met->SetBinContent(7,313);
   met->SetBinContent(8,185);
   met->SetBinContent(9,121);
   met->SetBinContent(10,98);
   met->SetBinContent(11,61);
   met->SetBinContent(12,41);
   met->SetBinContent(13,26);
   met->SetBinContent(14,15);
   met->SetBinContent(15,9);
   met->SetBinContent(16,8);
   met->SetBinContent(17,4);
   met->SetBinContent(19,2);
   met->SetBinContent(21,1);
   met->SetBinContent(22,2);
   met->SetBinContent(23,2);
   met->SetBinContent(25,1);
   met->SetBinContent(28,1);
   met->SetBinContent(29,1);
   met->SetBinError(1,2.44949);
   met->SetBinError(2,6.082763);
   met->SetBinError(3,9.69536);
   met->SetBinError(4,15.77973);
   met->SetBinError(5,20.17424);
   met->SetBinError(6,19.46792);
   met->SetBinError(7,17.69181);
   met->SetBinError(8,13.60147);
   met->SetBinError(9,11);
   met->SetBinError(10,9.899495);
   met->SetBinError(11,7.81025);
   met->SetBinError(12,6.403124);
   met->SetBinError(13,5.09902);
   met->SetBinError(14,3.872983);
   met->SetBinError(15,3);
   met->SetBinError(16,2.828427);
   met->SetBinError(17,2);
   met->SetBinError(19,1.414214);
   met->SetBinError(21,1);
   met->SetBinError(22,1.414214);
   met->SetBinError(23,1.414214);
   met->SetBinError(25,1);
   met->SetBinError(28,1);
   met->SetBinError(29,1);
   met->SetEntries(2063);
   met->SetStats(0);
   met->SetFillColor(1);
   met->SetFillStyle(0);
   met->SetLineWidth(3);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(1.3);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("met","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","EWK W+jets","f");

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
   entry=leg->AddEntry("met","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","Dibosons","f");
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
   lower->Range(-145.8228,-0.653951,765.5696,2.070845);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(1,3.139087);
   met->SetBinContent(2,4.299351);
   met->SetBinContent(3,1.39359);
   met->SetBinContent(4,0.8943048);
   met->SetBinContent(5,1.154434);
   met->SetBinContent(6,0.9187243);
   met->SetBinContent(7,0.872757);
   met->SetBinContent(8,0.6793652);
   met->SetBinContent(9,0.7010294);
   met->SetBinContent(10,0.8121594);
   met->SetBinContent(11,0.6651815);
   met->SetBinContent(12,1.062357);
   met->SetBinContent(13,1.111085);
   met->SetBinContent(14,0.7246712);
   met->SetBinContent(15,0.7789297);
   met->SetBinContent(16,0.8834215);
   met->SetBinContent(17,0.5162687);
   met->SetBinContent(19,0.8393874);
   met->SetBinContent(21,0.2341942);
   met->SetBinContent(22,2.258943);
   met->SetBinContent(23,1.946286);
   met->SetBinContent(25,5.92243);
   met->SetBinContent(28,19.71274);
   met->SetBinContent(29,52.97013);
   met->SetBinError(1,1.619134);
   met->SetBinError(2,1.042272);
   met->SetBinError(3,0.172487);
   met->SetBinError(4,0.06540197);
   met->SetBinError(5,0.06664425);
   met->SetBinError(6,0.05493662);
   met->SetBinError(7,0.05930197);
   met->SetBinError(8,0.05834769);
   met->SetBinError(9,0.07441648);
   met->SetBinError(10,0.09823616);
   met->SetBinError(11,0.100093);
   met->SetBinError(12,0.2040849);
   met->SetBinError(13,0.2530299);
   met->SetBinError(14,0.217847);
   met->SetBinError(15,0.2976926);
   met->SetBinError(16,0.3681359);
   met->SetBinError(17,0.3009773);
   met->SetBinError(19,0.6440572);
   met->SetBinError(21,0.2544447);
   met->SetBinError(22,1.877924);
   met->SetBinError(23,1.999152);
   met->SetBinError(25,6.258112);
   met->SetBinError(28,22.63126);
   met->SetBinError(29,74.91108);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(1.768077);
   met->SetStats(0);
   met->SetFillStyle(0);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.1);
   met->GetXaxis()->SetTitleSize(0.12);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Data/MC");
   met->GetYaxis()->SetNdivisions(505);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.1);
   met->GetYaxis()->SetTitleSize(0.12);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(0.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
