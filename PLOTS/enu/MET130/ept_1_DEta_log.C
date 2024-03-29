{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:29 2013) by ROOT version5.32/00
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
   upper->Range(-89.11392,-2.971465,467.8481,8.205301);
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
   stack->SetMaximum(1.560802e+07);
   
   TH1F *ept_1_stack_5 = new TH1F("ept_1_stack_5","stack",25,0,1000);
   ept_1_stack_5->SetBinContent(1,34.42226);
   ept_1_stack_5->SetBinContent(2,24.5898);
   ept_1_stack_5->SetBinContent(3,7.797569);
   ept_1_stack_5->SetBinContent(4,2.496621);
   ept_1_stack_5->SetBinContent(5,0.3462017);
   ept_1_stack_5->SetBinContent(6,1.585032);
   ept_1_stack_5->SetBinContent(8,0.08902425);
   ept_1_stack_5->SetBinContent(9,0.00163244);
   ept_1_stack_5->SetBinError(1,7.078006);
   ept_1_stack_5->SetBinError(2,5.177419);
   ept_1_stack_5->SetBinError(3,3.15671);
   ept_1_stack_5->SetBinError(4,1.939035);
   ept_1_stack_5->SetBinError(5,0.1684743);
   ept_1_stack_5->SetBinError(6,1.423863);
   ept_1_stack_5->SetBinError(8,0.07123259);
   ept_1_stack_5->SetBinError(9,0.00163244);
   ept_1_stack_5->SetMinimum(0.001786776);
   ept_1_stack_5->SetMaximum(4.430602e+07);
   ept_1_stack_5->SetEntries(333);
   ept_1_stack_5->SetStats(0);
   ept_1_stack_5->SetFillColor(4);
   ept_1_stack_5->SetLineColor(4);
   ept_1_stack_5->SetLineWidth(2);
   ept_1_stack_5->SetMarkerColor(4);
   ept_1_stack_5->SetMarkerStyle(21);
   ept_1_stack_5->SetMarkerSize(0.8);
   ept_1_stack_5->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1_stack_5->GetXaxis()->SetRange(1,11);
   ept_1_stack_5->GetXaxis()->SetLabelFont(42);
   ept_1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   ept_1_stack_5->GetXaxis()->SetLabelSize(0);
   ept_1_stack_5->GetXaxis()->SetTitleSize(0);
   ept_1_stack_5->GetXaxis()->SetTickLength(0.02);
   ept_1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   ept_1_stack_5->GetXaxis()->SetTitleFont(42);
   ept_1_stack_5->GetYaxis()->SetTitle("Events");
   ept_1_stack_5->GetYaxis()->SetLabelFont(42);
   ept_1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   ept_1_stack_5->GetYaxis()->SetLabelSize(0.035);
   ept_1_stack_5->GetYaxis()->SetTitleSize(0.045);
   ept_1_stack_5->GetYaxis()->SetTickLength(0.02);
   ept_1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   ept_1_stack_5->GetYaxis()->SetTitleFont(42);
   ept_1_stack_5->GetZaxis()->SetLabelFont(42);
   ept_1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   ept_1_stack_5->GetZaxis()->SetLabelSize(0.035);
   ept_1_stack_5->GetZaxis()->SetTitleSize(0.045);
   ept_1_stack_5->GetZaxis()->SetTickLength(0.02);
   ept_1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(ept_1_stack_5);
   
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,34.42226);
   ept_1->SetBinContent(2,24.5898);
   ept_1->SetBinContent(3,7.797569);
   ept_1->SetBinContent(4,2.496621);
   ept_1->SetBinContent(5,0.3462017);
   ept_1->SetBinContent(6,1.585032);
   ept_1->SetBinContent(8,0.08902425);
   ept_1->SetBinContent(9,0.00163244);
   ept_1->SetBinError(1,7.078006);
   ept_1->SetBinError(2,5.177419);
   ept_1->SetBinError(3,3.15671);
   ept_1->SetBinError(4,1.939035);
   ept_1->SetBinError(5,0.1684743);
   ept_1->SetBinError(6,1.423863);
   ept_1->SetBinError(8,0.07123259);
   ept_1->SetBinError(9,0.00163244);
   ept_1->SetMinimum(0.01);
   ept_1->SetMaximum(1.2945e+07);
   ept_1->SetEntries(333);
   ept_1->SetStats(0);
   ept_1->SetFillColor(4);
   ept_1->SetLineColor(4);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(4);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1->GetXaxis()->SetRange(1,11);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0);
   ept_1->GetXaxis()->SetTitleSize(0);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetTitle("Events");
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"HIST");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,132.8601);
   ept_1->SetBinContent(2,133.5607);
   ept_1->SetBinContent(3,42.31239);
   ept_1->SetBinContent(4,22.23967);
   ept_1->SetBinContent(5,4.45626);
   ept_1->SetBinContent(6,0.2512403);
   ept_1->SetBinContent(7,0.4697916);
   ept_1->SetBinContent(8,0.3404439);
   ept_1->SetBinError(1,7.916979);
   ept_1->SetBinError(2,7.950637);
   ept_1->SetBinError(3,4.687021);
   ept_1->SetBinError(4,3.63204);
   ept_1->SetBinError(5,1.577755);
   ept_1->SetBinError(6,0.2512402);
   ept_1->SetBinError(7,0.4697916);
   ept_1->SetBinError(8,0.3404439);
   ept_1->SetEntries(1122);
   ept_1->SetStats(0);
   ept_1->SetFillColor(5);
   ept_1->SetLineColor(5);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(5);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,699.5228);
   ept_1->SetBinContent(2,543.0812);
   ept_1->SetBinContent(3,174.697);
   ept_1->SetBinContent(4,49.46823);
   ept_1->SetBinContent(5,26.48999);
   ept_1->SetBinContent(6,9.898509);
   ept_1->SetBinContent(7,2.637183);
   ept_1->SetBinContent(8,0.4548788);
   ept_1->SetBinContent(9,0.51803);
   ept_1->SetBinContent(11,0.02444959);
   ept_1->SetBinError(1,19.02251);
   ept_1->SetBinError(2,17.47131);
   ept_1->SetBinError(3,9.77601);
   ept_1->SetBinError(4,5.365898);
   ept_1->SetBinError(5,4.016357);
   ept_1->SetBinError(6,2.496387);
   ept_1->SetBinError(7,1.133774);
   ept_1->SetBinError(8,0.307545);
   ept_1->SetBinError(9,0.3663041);
   ept_1->SetBinError(11,0.02444958);
   ept_1->SetEntries(4765);
   ept_1->SetStats(0);
   ept_1->SetFillColor(6);
   ept_1->SetLineColor(6);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(6);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,161.306);
   ept_1->SetBinContent(2,143.9348);
   ept_1->SetBinContent(3,49.0172);
   ept_1->SetBinContent(4,19.36123);
   ept_1->SetBinContent(5,8.062213);
   ept_1->SetBinContent(6,4.252357);
   ept_1->SetBinContent(7,2.132679);
   ept_1->SetBinContent(8,1.126524);
   ept_1->SetBinContent(9,0.4382144);
   ept_1->SetBinContent(10,0.3579949);
   ept_1->SetBinContent(11,0.1908584);
   ept_1->SetBinContent(12,0.1546848);
   ept_1->SetBinContent(13,0.09190547);
   ept_1->SetBinContent(14,0.0859223);
   ept_1->SetBinContent(15,0.02189279);
   ept_1->SetBinError(1,1.541369);
   ept_1->SetBinError(2,1.512123);
   ept_1->SetBinError(3,0.9064882);
   ept_1->SetBinError(4,0.5777411);
   ept_1->SetBinError(5,0.3755527);
   ept_1->SetBinError(6,0.2764686);
   ept_1->SetBinError(7,0.1967424);
   ept_1->SetBinError(8,0.1380223);
   ept_1->SetBinError(9,0.08923454);
   ept_1->SetBinError(10,0.08028342);
   ept_1->SetBinError(11,0.0576875);
   ept_1->SetBinError(12,0.05094466);
   ept_1->SetBinError(13,0.04328765);
   ept_1->SetBinError(14,0.04415527);
   ept_1->SetBinError(15,0.02189279);
   ept_1->SetEntries(32662);
   ept_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   ept_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   ept_1->SetLineColor(ci);
   ept_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   ept_1->SetMarkerColor(ci);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,0.1562384);
   ept_1->SetBinContent(4,0.01661818);
   ept_1->SetBinError(1,0.1562384);
   ept_1->SetBinError(4,0.01661817);
   ept_1->SetEntries(2);
   ept_1->SetStats(0);
   ept_1->SetFillColor(3);
   ept_1->SetLineColor(3);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(3);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,10.47999);
   ept_1->SetBinContent(2,8.617529);
   ept_1->SetBinContent(3,3.680539);
   ept_1->SetBinContent(4,0.7471311);
   ept_1->SetBinContent(5,1.059014);
   ept_1->SetBinContent(6,0.2244964);
   ept_1->SetBinContent(7,0.06359579);
   ept_1->SetBinContent(8,0.04790388);
   ept_1->SetBinError(1,0.9374214);
   ept_1->SetBinError(2,0.8219311);
   ept_1->SetBinError(3,0.6123022);
   ept_1->SetBinError(4,0.2312553);
   ept_1->SetBinError(5,0.3557959);
   ept_1->SetBinError(6,0.1706895);
   ept_1->SetBinError(7,0.04555126);
   ept_1->SetBinError(8,0.04790388);
   ept_1->SetEntries(460);
   ept_1->SetStats(0);
   ept_1->SetFillColor(3);
   ept_1->SetLineColor(3);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(3);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,1.787485);
   ept_1->SetBinContent(2,1.72706);
   ept_1->SetBinContent(3,0.5541887);
   ept_1->SetBinContent(4,0.1372127);
   ept_1->SetBinContent(5,0.137886);
   ept_1->SetBinContent(6,0.09847945);
   ept_1->SetBinContent(7,0.05021672);
   ept_1->SetBinContent(8,0.02558267);
   ept_1->SetBinContent(9,0.01272358);
   ept_1->SetBinContent(10,0.003825937);
   ept_1->SetBinContent(11,0.005806749);
   ept_1->SetBinContent(12,0.003991269);
   ept_1->SetBinError(1,0.09411077);
   ept_1->SetBinError(2,0.09649382);
   ept_1->SetBinError(3,0.05523035);
   ept_1->SetBinError(4,0.02605524);
   ept_1->SetBinError(5,0.02568914);
   ept_1->SetBinError(6,0.02271913);
   ept_1->SetBinError(7,0.01718059);
   ept_1->SetBinError(8,0.01006574);
   ept_1->SetBinError(9,0.008424359);
   ept_1->SetBinError(10,0.003825938);
   ept_1->SetBinError(11,0.005806749);
   ept_1->SetBinError(12,0.003991269);
   ept_1->SetEntries(1132);
   ept_1->SetStats(0);
   ept_1->SetFillColor(3);
   ept_1->SetLineColor(3);
   ept_1->SetLineWidth(2);
   ept_1->SetMarkerColor(3);
   ept_1->SetMarkerStyle(21);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   stack->Add(ept_1,"");
   stack->Draw("hist");
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,863);
   ept_1->SetBinContent(2,781);
   ept_1->SetBinContent(3,233);
   ept_1->SetBinContent(4,102);
   ept_1->SetBinContent(5,46);
   ept_1->SetBinContent(6,19);
   ept_1->SetBinContent(7,10);
   ept_1->SetBinContent(8,6);
   ept_1->SetBinContent(9,1);
   ept_1->SetBinContent(10,2);
   ept_1->SetBinError(1,29.37686);
   ept_1->SetBinError(2,27.94638);
   ept_1->SetBinError(3,15.26434);
   ept_1->SetBinError(4,10.0995);
   ept_1->SetBinError(5,6.78233);
   ept_1->SetBinError(6,4.358899);
   ept_1->SetBinError(7,3.162278);
   ept_1->SetBinError(8,2.44949);
   ept_1->SetBinError(9,1);
   ept_1->SetBinError(10,1.414214);
   ept_1->SetEntries(2063);
   ept_1->SetStats(0);
   ept_1->SetFillColor(1);
   ept_1->SetFillStyle(0);
   ept_1->SetLineWidth(3);
   ept_1->SetMarkerStyle(20);
   ept_1->SetMarkerSize(1.3);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.035);
   ept_1->GetXaxis()->SetTitleSize(0.045);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.035);
   ept_1->GetYaxis()->SetTitleSize(0.045);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(1.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   ept_1->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("ept_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("ept_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ept_1","EWK W+jets","f");

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
   entry=leg->AddEntry("ept_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ept_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ept_1","Dibosons","f");
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
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,0.8577569);
   ept_1->SetBinContent(2,0.9399204);
   ept_1->SetBinContent(3,0.8621284);
   ept_1->SetBinContent(4,1.109056);
   ept_1->SetBinContent(5,1.144126);
   ept_1->SetBinContent(6,1.290315);
   ept_1->SetBinContent(7,1.867949);
   ept_1->SetBinContent(8,3.007016);
   ept_1->SetBinContent(9,1.032026);
   ept_1->SetBinContent(10,5.527598);
   ept_1->SetBinError(1,0.03411013);
   ept_1->SetBinError(2,0.04008052);
   ept_1->SetBinError(3,0.06631936);
   ept_1->SetBinError(4,0.1349837);
   ept_1->SetBinError(5,0.2091726);
   ept_1->SetBinError(6,0.3698355);
   ept_1->SetBinError(7,0.7330033);
   ept_1->SetBinError(8,1.426103);
   ept_1->SetBinError(9,1.10743);
   ept_1->SetBinError(10,4.096938);
   ept_1->SetMinimum(0);
   ept_1->SetMaximum(2);
   ept_1->SetEntries(14.96493);
   ept_1->SetStats(0);
   ept_1->SetFillStyle(0);
   ept_1->SetMarkerStyle(20);
   ept_1->SetMarkerSize(0.8);
   ept_1->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1->GetXaxis()->SetRange(1,11);
   ept_1->GetXaxis()->SetLabelFont(42);
   ept_1->GetXaxis()->SetLabelOffset(0.007);
   ept_1->GetXaxis()->SetLabelSize(0.1);
   ept_1->GetXaxis()->SetTitleSize(0.12);
   ept_1->GetXaxis()->SetTickLength(0.02);
   ept_1->GetXaxis()->SetTitleOffset(0.9);
   ept_1->GetXaxis()->SetTitleFont(42);
   ept_1->GetYaxis()->SetTitle("Data/MC");
   ept_1->GetYaxis()->SetNdivisions(505);
   ept_1->GetYaxis()->SetLabelFont(42);
   ept_1->GetYaxis()->SetLabelOffset(0.007);
   ept_1->GetYaxis()->SetLabelSize(0.1);
   ept_1->GetYaxis()->SetTitleSize(0.12);
   ept_1->GetYaxis()->SetTickLength(0.02);
   ept_1->GetYaxis()->SetTitleOffset(0.55);
   ept_1->GetYaxis()->SetTitleFont(42);
   ept_1->GetZaxis()->SetLabelFont(42);
   ept_1->GetZaxis()->SetLabelOffset(0.007);
   ept_1->GetZaxis()->SetLabelSize(0.035);
   ept_1->GetZaxis()->SetTitleSize(0.045);
   ept_1->GetZaxis()->SetTickLength(0.02);
   ept_1->GetZaxis()->SetTitleFont(42);
   ept_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
