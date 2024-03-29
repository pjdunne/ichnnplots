{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:17 2013) by ROOT version5.32/00
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
   upper->Range(-89.11392,-2.975373,467.8481,8.274232);
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
   stack->SetMaximum(1.805936e+07);
   
   TH1F *mupt_1_stack_6 = new TH1F("mupt_1_stack_6","stack",25,0,1000);
   mupt_1_stack_6->SetBinContent(1,16.23466);
   mupt_1_stack_6->SetBinContent(2,37.83511);
   mupt_1_stack_6->SetBinContent(3,33.23693);
   mupt_1_stack_6->SetBinContent(4,25.14995);
   mupt_1_stack_6->SetBinContent(5,14.29838);
   mupt_1_stack_6->SetBinContent(6,1.458055);
   mupt_1_stack_6->SetBinContent(7,2.421545);
   mupt_1_stack_6->SetBinContent(8,0.06882724);
   mupt_1_stack_6->SetBinError(1,5.179574);
   mupt_1_stack_6->SetBinError(2,7.975915);
   mupt_1_stack_6->SetBinError(3,7.205333);
   mupt_1_stack_6->SetBinError(4,6.360501);
   mupt_1_stack_6->SetBinError(5,4.915562);
   mupt_1_stack_6->SetBinError(6,0.4234082);
   mupt_1_stack_6->SetBinError(7,2.315658);
   mupt_1_stack_6->SetBinError(8,0.06882725);
   mupt_1_stack_6->SetMinimum(0.001776719);
   mupt_1_stack_6->SetMaximum(5.14934e+07);
   mupt_1_stack_6->SetEntries(450);
   mupt_1_stack_6->SetStats(0);
   mupt_1_stack_6->SetFillColor(4);
   mupt_1_stack_6->SetLineColor(4);
   mupt_1_stack_6->SetLineWidth(2);
   mupt_1_stack_6->SetMarkerColor(4);
   mupt_1_stack_6->SetMarkerStyle(21);
   mupt_1_stack_6->SetMarkerSize(0.8);
   mupt_1_stack_6->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1_stack_6->GetXaxis()->SetRange(1,11);
   mupt_1_stack_6->GetXaxis()->SetLabelFont(42);
   mupt_1_stack_6->GetXaxis()->SetLabelOffset(0.007);
   mupt_1_stack_6->GetXaxis()->SetLabelSize(0);
   mupt_1_stack_6->GetXaxis()->SetTitleSize(0);
   mupt_1_stack_6->GetXaxis()->SetTickLength(0.02);
   mupt_1_stack_6->GetXaxis()->SetTitleOffset(0.9);
   mupt_1_stack_6->GetXaxis()->SetTitleFont(42);
   mupt_1_stack_6->GetYaxis()->SetTitle("Events");
   mupt_1_stack_6->GetYaxis()->SetLabelFont(42);
   mupt_1_stack_6->GetYaxis()->SetLabelOffset(0.007);
   mupt_1_stack_6->GetYaxis()->SetLabelSize(0.035);
   mupt_1_stack_6->GetYaxis()->SetTitleSize(0.045);
   mupt_1_stack_6->GetYaxis()->SetTickLength(0.02);
   mupt_1_stack_6->GetYaxis()->SetTitleOffset(1.55);
   mupt_1_stack_6->GetYaxis()->SetTitleFont(42);
   mupt_1_stack_6->GetZaxis()->SetLabelFont(42);
   mupt_1_stack_6->GetZaxis()->SetLabelOffset(0.007);
   mupt_1_stack_6->GetZaxis()->SetLabelSize(0.035);
   mupt_1_stack_6->GetZaxis()->SetTitleSize(0.045);
   mupt_1_stack_6->GetZaxis()->SetTickLength(0.02);
   mupt_1_stack_6->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mupt_1_stack_6);
   
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,16.23466);
   mupt_1->SetBinContent(2,37.83511);
   mupt_1->SetBinContent(3,33.23693);
   mupt_1->SetBinContent(4,25.14995);
   mupt_1->SetBinContent(5,14.29838);
   mupt_1->SetBinContent(6,1.458055);
   mupt_1->SetBinContent(7,2.421545);
   mupt_1->SetBinContent(8,0.06882724);
   mupt_1->SetBinError(1,5.179574);
   mupt_1->SetBinError(2,7.975915);
   mupt_1->SetBinError(3,7.205333);
   mupt_1->SetBinError(4,6.360501);
   mupt_1->SetBinError(5,4.915562);
   mupt_1->SetBinError(6,0.4234082);
   mupt_1->SetBinError(7,2.315658);
   mupt_1->SetBinError(8,0.06882725);
   mupt_1->SetMinimum(0.01);
   mupt_1->SetMaximum(1.3965e+07);
   mupt_1->SetEntries(450);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(4);
   mupt_1->SetLineColor(4);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(4);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1->GetXaxis()->SetRange(1,11);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0);
   mupt_1->GetXaxis()->SetTitleSize(0);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetTitle("Events");
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"HIST");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,96.07741);
   mupt_1->SetBinContent(2,165.8428);
   mupt_1->SetBinContent(3,135.8865);
   mupt_1->SetBinContent(4,83.79169);
   mupt_1->SetBinContent(5,26.59163);
   mupt_1->SetBinContent(6,9.552988);
   mupt_1->SetBinContent(7,2.790692);
   mupt_1->SetBinContent(8,0.01919866);
   mupt_1->SetBinError(1,7.774967);
   mupt_1->SetBinError(2,10.03875);
   mupt_1->SetBinError(3,9.2033);
   mupt_1->SetBinError(4,7.527861);
   mupt_1->SetBinError(5,4.268891);
   mupt_1->SetBinError(6,2.514783);
   mupt_1->SetBinError(7,1.404361);
   mupt_1->SetBinError(8,0.01919866);
   mupt_1->SetEntries(1162);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(5);
   mupt_1->SetLineColor(5);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(5);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,476.6634);
   mupt_1->SetBinContent(2,774.6735);
   mupt_1->SetBinContent(3,684.1357);
   mupt_1->SetBinContent(4,506.3409);
   mupt_1->SetBinContent(5,256.6069);
   mupt_1->SetBinContent(6,92.57922);
   mupt_1->SetBinContent(7,31.24081);
   mupt_1->SetBinContent(8,19.74008);
   mupt_1->SetBinContent(9,8.463665);
   mupt_1->SetBinContent(10,4.866116);
   mupt_1->SetBinContent(11,2.430665);
   mupt_1->SetBinContent(12,0.4409723);
   mupt_1->SetBinContent(13,0.7255089);
   mupt_1->SetBinContent(14,0.8080869);
   mupt_1->SetBinContent(15,0.3070954);
   mupt_1->SetBinError(1,18.61627);
   mupt_1->SetBinError(2,23.02394);
   mupt_1->SetBinError(3,21.96403);
   mupt_1->SetBinError(4,19.49735);
   mupt_1->SetBinError(5,14.0777);
   mupt_1->SetBinError(6,8.195287);
   mupt_1->SetBinError(7,4.570719);
   mupt_1->SetBinError(8,3.540322);
   mupt_1->SetBinError(9,2.375349);
   mupt_1->SetBinError(10,1.686904);
   mupt_1->SetBinError(11,1.138044);
   mupt_1->SetBinError(12,0.4409723);
   mupt_1->SetBinError(13,0.5609217);
   mupt_1->SetBinError(14,0.8080869);
   mupt_1->SetBinError(15,0.3070954);
   mupt_1->SetEntries(6393);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(6);
   mupt_1->SetLineColor(6);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(6);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,117.0759);
   mupt_1->SetBinContent(2,192.1247);
   mupt_1->SetBinContent(3,166.3107);
   mupt_1->SetBinContent(4,135.2536);
   mupt_1->SetBinContent(5,71.18442);
   mupt_1->SetBinContent(6,30.3682);
   mupt_1->SetBinContent(7,14.39857);
   mupt_1->SetBinContent(8,6.691873);
   mupt_1->SetBinContent(9,3.156535);
   mupt_1->SetBinContent(10,1.732069);
   mupt_1->SetBinContent(11,0.8601549);
   mupt_1->SetBinContent(12,0.3035867);
   mupt_1->SetBinContent(13,0.2258579);
   mupt_1->SetBinContent(14,0.1127949);
   mupt_1->SetBinContent(15,0.03286673);
   mupt_1->SetBinContent(16,0.01171636);
   mupt_1->SetBinContent(19,0.0202262);
   mupt_1->SetBinContent(21,0.02061893);
   mupt_1->SetBinContent(24,0.02100997);
   mupt_1->SetBinError(1,1.511792);
   mupt_1->SetBinError(2,1.925756);
   mupt_1->SetBinError(3,1.805677);
   mupt_1->SetBinError(4,1.63917);
   mupt_1->SetBinError(5,1.201176);
   mupt_1->SetBinError(6,0.7944176);
   mupt_1->SetBinError(7,0.5472219);
   mupt_1->SetBinError(8,0.3724939);
   mupt_1->SetBinError(9,0.2490724);
   mupt_1->SetBinError(10,0.1909303);
   mupt_1->SetBinError(11,0.1310226);
   mupt_1->SetBinError(12,0.07565784);
   mupt_1->SetBinError(13,0.06438871);
   mupt_1->SetBinError(14,0.04545954);
   mupt_1->SetBinError(15,0.02396337);
   mupt_1->SetBinError(16,0.01171636);
   mupt_1->SetBinError(19,0.0202262);
   mupt_1->SetBinError(21,0.02061893);
   mupt_1->SetBinError(24,0.02100997);
   mupt_1->SetEntries(44506);
   mupt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mupt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mupt_1->SetLineColor(ci);
   mupt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mupt_1->SetMarkerColor(ci);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(3);
   mupt_1->SetLineColor(3);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(3);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,16.14878);
   mupt_1->SetBinContent(2,28.97111);
   mupt_1->SetBinContent(3,26.85503);
   mupt_1->SetBinContent(4,37.67789);
   mupt_1->SetBinContent(5,20.17241);
   mupt_1->SetBinContent(6,8.296423);
   mupt_1->SetBinContent(7,3.144284);
   mupt_1->SetBinContent(8,1.081009);
   mupt_1->SetBinContent(9,0.3956507);
   mupt_1->SetBinContent(10,0.3661859);
   mupt_1->SetBinContent(11,0.08310422);
   mupt_1->SetBinContent(12,0.1265395);
   mupt_1->SetBinError(1,1.373728);
   mupt_1->SetBinError(2,1.903659);
   mupt_1->SetBinError(3,1.687171);
   mupt_1->SetBinError(4,2.003853);
   mupt_1->SetBinError(5,1.586554);
   mupt_1->SetBinError(6,1.044532);
   mupt_1->SetBinError(7,0.5506181);
   mupt_1->SetBinError(8,0.3581665);
   mupt_1->SetBinError(9,0.1911634);
   mupt_1->SetBinError(10,0.1848731);
   mupt_1->SetBinError(11,0.08310422);
   mupt_1->SetBinError(12,0.1265395);
   mupt_1->SetEntries(1811);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(3);
   mupt_1->SetLineColor(3);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(3);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,2.656005);
   mupt_1->SetBinContent(2,4.510556);
   mupt_1->SetBinContent(3,6.423611);
   mupt_1->SetBinContent(4,13.38284);
   mupt_1->SetBinContent(5,8.666653);
   mupt_1->SetBinContent(6,3.585037);
   mupt_1->SetBinContent(7,1.900554);
   mupt_1->SetBinContent(8,0.7319268);
   mupt_1->SetBinContent(9,0.3323687);
   mupt_1->SetBinContent(10,0.1533619);
   mupt_1->SetBinContent(11,0.119754);
   mupt_1->SetBinContent(12,0.08313619);
   mupt_1->SetBinContent(13,0.01892648);
   mupt_1->SetBinContent(14,0.0363464);
   mupt_1->SetBinContent(16,0.01844458);
   mupt_1->SetBinContent(18,0.003141607);
   mupt_1->SetBinError(1,0.1395477);
   mupt_1->SetBinError(2,0.1843215);
   mupt_1->SetBinError(3,0.2404663);
   mupt_1->SetBinError(4,0.3639984);
   mupt_1->SetBinError(5,0.3020618);
   mupt_1->SetBinError(6,0.1933969);
   mupt_1->SetBinError(7,0.1425143);
   mupt_1->SetBinError(8,0.0920086);
   mupt_1->SetBinError(9,0.06138033);
   mupt_1->SetBinError(10,0.03971541);
   mupt_1->SetBinError(11,0.03672322);
   mupt_1->SetBinError(12,0.0339774);
   mupt_1->SetBinError(13,0.01407046);
   mupt_1->SetBinError(14,0.01983135);
   mupt_1->SetBinError(16,0.0137122);
   mupt_1->SetBinError(18,0.002335556);
   mupt_1->SetEntries(5927);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(3);
   mupt_1->SetLineColor(3);
   mupt_1->SetLineWidth(2);
   mupt_1->SetMarkerColor(3);
   mupt_1->SetMarkerStyle(21);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mupt_1,"");
   stack->Draw("hist");
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,531);
   mupt_1->SetBinContent(2,931);
   mupt_1->SetBinContent(3,789);
   mupt_1->SetBinContent(4,619);
   mupt_1->SetBinContent(5,296);
   mupt_1->SetBinContent(6,102);
   mupt_1->SetBinContent(7,28);
   mupt_1->SetBinContent(8,16);
   mupt_1->SetBinContent(9,6);
   mupt_1->SetBinContent(10,8);
   mupt_1->SetBinContent(11,5);
   mupt_1->SetBinContent(12,2);
   mupt_1->SetBinContent(16,1);
   mupt_1->SetBinError(1,23.04344);
   mupt_1->SetBinError(2,30.51229);
   mupt_1->SetBinError(3,28.08914);
   mupt_1->SetBinError(4,24.87971);
   mupt_1->SetBinError(5,17.20465);
   mupt_1->SetBinError(6,10.0995);
   mupt_1->SetBinError(7,5.291503);
   mupt_1->SetBinError(8,4);
   mupt_1->SetBinError(9,2.44949);
   mupt_1->SetBinError(10,2.828427);
   mupt_1->SetBinError(11,2.236068);
   mupt_1->SetBinError(12,1.414214);
   mupt_1->SetBinError(16,1);
   mupt_1->SetEntries(3334);
   mupt_1->SetStats(0);
   mupt_1->SetFillColor(1);
   mupt_1->SetFillStyle(0);
   mupt_1->SetLineWidth(3);
   mupt_1->SetMarkerStyle(20);
   mupt_1->SetMarkerSize(1.3);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.035);
   mupt_1->GetXaxis()->SetTitleSize(0.045);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.035);
   mupt_1->GetYaxis()->SetTitleSize(0.045);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(1.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   mupt_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"MET");
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
   TLegendEntry *entry=leg->AddEntry("mupt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mupt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mupt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("mupt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mupt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mupt_1","Dibosons","f");
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
   lower->Range(-89.11392,-0.653951,467.8481,2.070845);
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
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,0.7493423);
   mupt_1->SetBinContent(2,0.7983723);
   mupt_1->SetBinContent(3,0.7738241);
   mupt_1->SetBinContent(4,0.7972213);
   mupt_1->SetBinContent(5,0.7723982);
   mupt_1->SetBinContent(6,0.70646);
   mupt_1->SetBinContent(7,0.52361);
   mupt_1->SetBinContent(8,0.5660895);
   mupt_1->SetBinContent(9,0.4859);
   mupt_1->SetBinContent(10,1.123953);
   mupt_1->SetBinContent(11,1.431156);
   mupt_1->SetBinContent(12,2.095921);
   mupt_1->SetBinContent(16,33.15546);
   mupt_1->SetBinError(1,0.03895241);
   mupt_1->SetBinError(2,0.03136563);
   mupt_1->SetBinError(3,0.03300221);
   mupt_1->SetBinError(4,0.0386583);
   mupt_1->SetBinError(5,0.05395477);
   mupt_1->SetBinError(6,0.08181994);
   mupt_1->SetBinError(7,0.109743);
   mupt_1->SetBinError(8,0.1586415);
   mupt_1->SetBinError(9,0.2196471);
   mupt_1->SetBinError(10,0.4802773);
   mupt_1->SetBinError(11,0.7945067);
   mupt_1->SetBinError(12,1.801389);
   mupt_1->SetBinError(16,38.63137);
   mupt_1->SetMinimum(0);
   mupt_1->SetMaximum(2);
   mupt_1->SetEntries(79.18867);
   mupt_1->SetStats(0);
   mupt_1->SetFillStyle(0);
   mupt_1->SetMarkerStyle(20);
   mupt_1->SetMarkerSize(0.8);
   mupt_1->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1->GetXaxis()->SetRange(1,11);
   mupt_1->GetXaxis()->SetLabelFont(42);
   mupt_1->GetXaxis()->SetLabelOffset(0.007);
   mupt_1->GetXaxis()->SetLabelSize(0.1);
   mupt_1->GetXaxis()->SetTitleSize(0.12);
   mupt_1->GetXaxis()->SetTickLength(0.02);
   mupt_1->GetXaxis()->SetTitleOffset(0.9);
   mupt_1->GetXaxis()->SetTitleFont(42);
   mupt_1->GetYaxis()->SetTitle("Data/MC");
   mupt_1->GetYaxis()->SetNdivisions(505);
   mupt_1->GetYaxis()->SetLabelFont(42);
   mupt_1->GetYaxis()->SetLabelOffset(0.007);
   mupt_1->GetYaxis()->SetLabelSize(0.1);
   mupt_1->GetYaxis()->SetTitleSize(0.12);
   mupt_1->GetYaxis()->SetTickLength(0.02);
   mupt_1->GetYaxis()->SetTitleOffset(0.55);
   mupt_1->GetYaxis()->SetTitleFont(42);
   mupt_1->GetZaxis()->SetLabelFont(42);
   mupt_1->GetZaxis()->SetLabelOffset(0.007);
   mupt_1->GetZaxis()->SetLabelSize(0.035);
   mupt_1->GetZaxis()->SetTitleSize(0.045);
   mupt_1->GetZaxis()->SetTickLength(0.02);
   mupt_1->GetZaxis()->SetTitleFont(42);
   mupt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
