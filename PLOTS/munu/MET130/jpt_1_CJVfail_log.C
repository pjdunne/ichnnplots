{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:17 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.940232,1063.291,7.663114);
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
   stack->SetMaximum(4958421);
   
   TH1F *jpt_1_stack_10 = new TH1F("jpt_1_stack_10","stack",25,0,1000);
   jpt_1_stack_10->SetBinContent(2,0.1810324);
   jpt_1_stack_10->SetBinContent(3,4.517186);
   jpt_1_stack_10->SetBinContent(4,5.466885);
   jpt_1_stack_10->SetBinContent(5,13.28913);
   jpt_1_stack_10->SetBinContent(6,4.764837);
   jpt_1_stack_10->SetBinContent(7,2.44768);
   jpt_1_stack_10->SetBinContent(8,4.080301);
   jpt_1_stack_10->SetBinContent(9,4.07081e-05);
   jpt_1_stack_10->SetBinContent(10,2.979962);
   jpt_1_stack_10->SetBinContent(24,0.1572778);
   jpt_1_stack_10->SetBinError(2,0.137446);
   jpt_1_stack_10->SetBinError(3,2.18288);
   jpt_1_stack_10->SetBinError(4,2.822794);
   jpt_1_stack_10->SetBinError(5,4.961138);
   jpt_1_stack_10->SetBinError(6,2.480993);
   jpt_1_stack_10->SetBinError(7,2.247481);
   jpt_1_stack_10->SetBinError(8,2.75655);
   jpt_1_stack_10->SetBinError(9,4.07081e-05);
   jpt_1_stack_10->SetBinError(10,2.979962);
   jpt_1_stack_10->SetBinError(24,0.1572778);
   jpt_1_stack_10->SetMinimum(0.001869973);
   jpt_1_stack_10->SetMaximum(1.358146e+07);
   jpt_1_stack_10->SetEntries(83);
   jpt_1_stack_10->SetStats(0);
   jpt_1_stack_10->SetFillColor(4);
   jpt_1_stack_10->SetLineColor(4);
   jpt_1_stack_10->SetLineWidth(2);
   jpt_1_stack_10->SetMarkerColor(4);
   jpt_1_stack_10->SetMarkerStyle(21);
   jpt_1_stack_10->SetMarkerSize(0.8);
   jpt_1_stack_10->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_10->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_10->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_10->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_10->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_10->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_10->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_10->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_10->GetYaxis()->SetTitle("Events");
   jpt_1_stack_10->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_10->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_10->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_10->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_10->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_10->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_10->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_10->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_10->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_10->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_10->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_10->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_10);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.1810324);
   jpt_1->SetBinContent(3,4.517186);
   jpt_1->SetBinContent(4,5.466885);
   jpt_1->SetBinContent(5,13.28913);
   jpt_1->SetBinContent(6,4.764837);
   jpt_1->SetBinContent(7,2.44768);
   jpt_1->SetBinContent(8,4.080301);
   jpt_1->SetBinContent(9,4.07081e-05);
   jpt_1->SetBinContent(10,2.979962);
   jpt_1->SetBinContent(24,0.1572778);
   jpt_1->SetBinError(2,0.137446);
   jpt_1->SetBinError(3,2.18288);
   jpt_1->SetBinError(4,2.822794);
   jpt_1->SetBinError(5,4.961138);
   jpt_1->SetBinError(6,2.480993);
   jpt_1->SetBinError(7,2.247481);
   jpt_1->SetBinError(8,2.75655);
   jpt_1->SetBinError(9,4.07081e-05);
   jpt_1->SetBinError(10,2.979962);
   jpt_1->SetBinError(24,0.1572778);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(4050000);
   jpt_1->SetEntries(83);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(4);
   jpt_1->SetLineColor(4);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(4);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0);
   jpt_1->GetXaxis()->SetTitleSize(0);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Events");
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"HIST");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,3.440392);
   jpt_1->SetBinContent(3,47.19267);
   jpt_1->SetBinContent(4,82.33975);
   jpt_1->SetBinContent(5,63.40667);
   jpt_1->SetBinContent(6,33.97486);
   jpt_1->SetBinContent(7,28.39358);
   jpt_1->SetBinContent(8,6.748163);
   jpt_1->SetBinContent(9,4.711126);
   jpt_1->SetBinContent(10,2.365602);
   jpt_1->SetBinContent(11,1.220279);
   jpt_1->SetBinContent(14,0.1724105);
   jpt_1->SetBinError(2,1.265601);
   jpt_1->SetBinError(3,5.905651);
   jpt_1->SetBinError(4,7.638598);
   jpt_1->SetBinError(5,6.789632);
   jpt_1->SetBinError(6,4.891501);
   jpt_1->SetBinError(7,4.531045);
   jpt_1->SetBinError(8,2.030427);
   jpt_1->SetBinError(9,1.920563);
   jpt_1->SetBinError(10,1.366304);
   jpt_1->SetBinError(11,0.8827628);
   jpt_1->SetBinError(14,0.1724105);
   jpt_1->SetEntries(486);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(5);
   jpt_1->SetLineColor(5);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(5);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,20.16152);
   jpt_1->SetBinContent(3,128.0112);
   jpt_1->SetBinContent(4,206.3244);
   jpt_1->SetBinContent(5,176.3034);
   jpt_1->SetBinContent(6,112.3112);
   jpt_1->SetBinContent(7,68.1404);
   jpt_1->SetBinContent(8,47.0422);
   jpt_1->SetBinContent(9,20.99801);
   jpt_1->SetBinContent(10,10.09622);
   jpt_1->SetBinContent(11,2.102513);
   jpt_1->SetBinContent(12,1.923346);
   jpt_1->SetBinContent(13,0.6874127);
   jpt_1->SetBinContent(14,2.027252);
   jpt_1->SetBinContent(15,1.484418);
   jpt_1->SetBinContent(17,0.9486237);
   jpt_1->SetBinContent(20,0.4483769);
   jpt_1->SetBinError(2,3.359876);
   jpt_1->SetBinError(3,8.401514);
   jpt_1->SetBinError(4,10.98095);
   jpt_1->SetBinError(5,9.756524);
   jpt_1->SetBinError(6,7.801857);
   jpt_1->SetBinError(7,6.425558);
   jpt_1->SetBinError(8,5.540127);
   jpt_1->SetBinError(9,3.393032);
   jpt_1->SetBinError(10,2.188945);
   jpt_1->SetBinError(11,1.208266);
   jpt_1->SetBinError(12,0.9185916);
   jpt_1->SetBinError(13,0.4888239);
   jpt_1->SetBinError(14,1.019053);
   jpt_1->SetBinError(15,0.883276);
   jpt_1->SetBinError(17,0.6759176);
   jpt_1->SetBinError(20,0.4483769);
   jpt_1->SetEntries(1848);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(6);
   jpt_1->SetLineColor(6);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(6);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,1.004435);
   jpt_1->SetBinContent(3,10.53558);
   jpt_1->SetBinContent(4,23.17325);
   jpt_1->SetBinContent(5,25.05799);
   jpt_1->SetBinContent(6,20.91464);
   jpt_1->SetBinContent(7,14.08301);
   jpt_1->SetBinContent(8,8.424854);
   jpt_1->SetBinContent(9,4.51418);
   jpt_1->SetBinContent(10,2.570126);
   jpt_1->SetBinContent(11,1.072554);
   jpt_1->SetBinContent(12,0.7369242);
   jpt_1->SetBinContent(13,0.3955233);
   jpt_1->SetBinContent(14,0.177377);
   jpt_1->SetBinContent(15,0.2438537);
   jpt_1->SetBinContent(16,0.03882774);
   jpt_1->SetBinContent(17,0.03235713);
   jpt_1->SetBinContent(18,0.03710131);
   jpt_1->SetBinContent(19,0.03935533);
   jpt_1->SetBinError(2,0.1434289);
   jpt_1->SetBinError(3,0.4583835);
   jpt_1->SetBinError(4,0.6878561);
   jpt_1->SetBinError(5,0.7155058);
   jpt_1->SetBinError(6,0.6588945);
   jpt_1->SetBinError(7,0.5395515);
   jpt_1->SetBinError(8,0.4149424);
   jpt_1->SetBinError(9,0.3042734);
   jpt_1->SetBinError(10,0.2328893);
   jpt_1->SetBinError(11,0.1455267);
   jpt_1->SetBinError(12,0.1245347);
   jpt_1->SetBinError(13,0.09461121);
   jpt_1->SetBinError(14,0.06265193);
   jpt_1->SetBinError(15,0.0746817);
   jpt_1->SetBinError(16,0.02752318);
   jpt_1->SetBinError(17,0.02377221);
   jpt_1->SetBinError(18,0.02649036);
   jpt_1->SetBinError(19,0.02763594);
   jpt_1->SetEntries(6349);
   jpt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_1->SetLineColor(ci);
   jpt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_1->SetMarkerColor(ci);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.7573032);
   jpt_1->SetBinContent(3,6.77112);
   jpt_1->SetBinContent(4,10.96823);
   jpt_1->SetBinContent(5,11.31756);
   jpt_1->SetBinContent(6,6.993202);
   jpt_1->SetBinContent(7,3.838801);
   jpt_1->SetBinContent(8,1.623823);
   jpt_1->SetBinContent(9,0.9985948);
   jpt_1->SetBinContent(10,0.08448009);
   jpt_1->SetBinContent(11,0.352042);
   jpt_1->SetBinContent(12,0.05972209);
   jpt_1->SetBinContent(13,0.1262183);
   jpt_1->SetBinError(2,0.2845456);
   jpt_1->SetBinError(3,0.8372342);
   jpt_1->SetBinError(4,1.132053);
   jpt_1->SetBinError(5,1.092228);
   jpt_1->SetBinError(6,0.9085859);
   jpt_1->SetBinError(7,0.6589761);
   jpt_1->SetBinError(8,0.4185307);
   jpt_1->SetBinError(9,0.5769377);
   jpt_1->SetBinError(10,0.08448009);
   jpt_1->SetBinError(11,0.2065437);
   jpt_1->SetBinError(12,0.05972209);
   jpt_1->SetBinError(13,0.1262183);
   jpt_1->SetEntries(519);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.08279637);
   jpt_1->SetBinContent(3,0.9253827);
   jpt_1->SetBinContent(4,2.288896);
   jpt_1->SetBinContent(5,2.830981);
   jpt_1->SetBinContent(6,2.056274);
   jpt_1->SetBinContent(7,1.075826);
   jpt_1->SetBinContent(8,0.5647585);
   jpt_1->SetBinContent(9,0.3729604);
   jpt_1->SetBinContent(10,0.09964762);
   jpt_1->SetBinContent(11,0.1837939);
   jpt_1->SetBinContent(12,0.04459534);
   jpt_1->SetBinContent(13,0.01995389);
   jpt_1->SetBinContent(14,0.02971755);
   jpt_1->SetBinContent(16,0.01427437);
   jpt_1->SetBinError(2,0.02831763);
   jpt_1->SetBinError(3,0.09666395);
   jpt_1->SetBinError(4,0.1473952);
   jpt_1->SetBinError(5,0.1655652);
   jpt_1->SetBinError(6,0.1410317);
   jpt_1->SetBinError(7,0.09758819);
   jpt_1->SetBinError(8,0.0747813);
   jpt_1->SetBinError(9,0.06102186);
   jpt_1->SetBinError(10,0.03017104);
   jpt_1->SetBinError(11,0.04219563);
   jpt_1->SetBinError(12,0.01985044);
   jpt_1->SetBinError(13,0.01154439);
   jpt_1->SetBinError(14,0.01832842);
   jpt_1->SetBinError(16,0.01061662);
   jpt_1->SetEntries(1413);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   stack->Draw("hist");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,21);
   jpt_1->SetBinContent(3,166);
   jpt_1->SetBinContent(4,270);
   jpt_1->SetBinContent(5,223);
   jpt_1->SetBinContent(6,166);
   jpt_1->SetBinContent(7,91);
   jpt_1->SetBinContent(8,36);
   jpt_1->SetBinContent(9,21);
   jpt_1->SetBinContent(10,8);
   jpt_1->SetBinContent(11,4);
   jpt_1->SetBinContent(12,2);
   jpt_1->SetBinContent(13,2);
   jpt_1->SetBinContent(15,3);
   jpt_1->SetBinError(2,4.582576);
   jpt_1->SetBinError(3,12.8841);
   jpt_1->SetBinError(4,16.43168);
   jpt_1->SetBinError(5,14.93318);
   jpt_1->SetBinError(6,12.8841);
   jpt_1->SetBinError(7,9.539392);
   jpt_1->SetBinError(8,6);
   jpt_1->SetBinError(9,4.582576);
   jpt_1->SetBinError(10,2.828427);
   jpt_1->SetBinError(11,2);
   jpt_1->SetBinError(12,1.414214);
   jpt_1->SetBinError(13,1.414214);
   jpt_1->SetBinError(15,1.732051);
   jpt_1->SetEntries(1013);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(1.3);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEPE1");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineStyle(2);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("jpt_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Dibosons","f");
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
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.8252627);
   jpt_1->SetBinContent(3,0.8581651);
   jpt_1->SetBinContent(4,0.8305276);
   jpt_1->SetBinContent(5,0.7995222);
   jpt_1->SetBinContent(6,0.9418431);
   jpt_1->SetBinContent(7,0.7876632);
   jpt_1->SetBinContent(8,0.5589733);
   jpt_1->SetBinContent(9,0.6646647);
   jpt_1->SetBinContent(10,0.5257598);
   jpt_1->SetBinContent(11,0.8111644);
   jpt_1->SetBinContent(12,0.7234352);
   jpt_1->SetBinContent(13,1.627196);
   jpt_1->SetBinContent(15,1.735838);
   jpt_1->SetBinError(2,0.2147025);
   jpt_1->SetBinError(3,0.08080991);
   jpt_1->SetBinError(4,0.0611075);
   jpt_1->SetBinError(5,0.0635746);
   jpt_1->SetBinError(6,0.08832755);
   jpt_1->SetBinError(7,0.09861685);
   jpt_1->SetBinError(8,0.1064349);
   jpt_1->SetBinError(9,0.167196);
   jpt_1->SetBinError(10,0.206341);
   jpt_1->SetBinError(11,0.4763013);
   jpt_1->SetBinError(12,0.5663861);
   jpt_1->SetBinError(13,1.33661);
   jpt_1->SetBinError(15,1.340532);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(31.84724);
   jpt_1->SetStats(0);
   jpt_1->SetFillStyle(0);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.1);
   jpt_1->GetXaxis()->SetTitleSize(0.12);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Data/MC");
   jpt_1->GetYaxis()->SetNdivisions(505);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.1);
   jpt_1->GetYaxis()->SetTitleSize(0.12);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(0.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
