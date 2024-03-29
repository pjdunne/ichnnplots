{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:03 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.897037,1063.291,6.9389);
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
   stack->SetMaximum(1074218);
   
   TH1F *jpt_1_stack_10 = new TH1F("jpt_1_stack_10","stack",25,0,1000);
   jpt_1_stack_10->SetBinContent(2,0.0647964);
   jpt_1_stack_10->SetBinContent(3,0.1642736);
   jpt_1_stack_10->SetBinContent(4,2.221091);
   jpt_1_stack_10->SetBinContent(5,4.190934);
   jpt_1_stack_10->SetBinContent(6,0.1094028);
   jpt_1_stack_10->SetBinContent(7,4.180628);
   jpt_1_stack_10->SetBinContent(8,0.07310357);
   jpt_1_stack_10->SetBinContent(9,0.6096776);
   jpt_1_stack_10->SetBinError(2,0.0647964);
   jpt_1_stack_10->SetBinError(3,0.09623482);
   jpt_1_stack_10->SetBinError(4,2.124088);
   jpt_1_stack_10->SetBinError(5,2.794742);
   jpt_1_stack_10->SetBinError(6,0.08279219);
   jpt_1_stack_10->SetBinError(7,2.910158);
   jpt_1_stack_10->SetBinError(8,0.07310357);
   jpt_1_stack_10->SetBinError(9,0.6096775);
   jpt_1_stack_10->SetMinimum(0.001993801);
   jpt_1_stack_10->SetMaximum(2799646);
   jpt_1_stack_10->SetEntries(19);
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
   jpt_1->SetBinContent(2,0.0647964);
   jpt_1->SetBinContent(3,0.1642736);
   jpt_1->SetBinContent(4,2.221091);
   jpt_1->SetBinContent(5,4.190934);
   jpt_1->SetBinContent(6,0.1094028);
   jpt_1->SetBinContent(7,4.180628);
   jpt_1->SetBinContent(8,0.07310357);
   jpt_1->SetBinContent(9,0.6096776);
   jpt_1->SetBinError(2,0.0647964);
   jpt_1->SetBinError(3,0.09623482);
   jpt_1->SetBinError(4,2.124088);
   jpt_1->SetBinError(5,2.794742);
   jpt_1->SetBinError(6,0.08279219);
   jpt_1->SetBinError(7,2.910158);
   jpt_1->SetBinError(8,0.07310357);
   jpt_1->SetBinError(9,0.6096775);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(795000);
   jpt_1->SetEntries(19);
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
   jpt_1->SetBinContent(2,1.327641);
   jpt_1->SetBinContent(3,11.62352);
   jpt_1->SetBinContent(4,23.04379);
   jpt_1->SetBinContent(5,24.66861);
   jpt_1->SetBinContent(6,10.0836);
   jpt_1->SetBinContent(7,9.905797);
   jpt_1->SetBinContent(8,3.722414);
   jpt_1->SetBinContent(9,3.929415);
   jpt_1->SetBinContent(10,2.055532);
   jpt_1->SetBinContent(11,1.098147);
   jpt_1->SetBinError(2,0.8219896);
   jpt_1->SetBinError(3,2.964794);
   jpt_1->SetBinError(4,3.960758);
   jpt_1->SetBinError(5,4.086599);
   jpt_1->SetBinError(6,2.605937);
   jpt_1->SetBinError(7,2.652504);
   jpt_1->SetBinError(8,1.552135);
   jpt_1->SetBinError(9,1.586135);
   jpt_1->SetBinError(10,1.193425);
   jpt_1->SetBinError(11,1.074764);
   jpt_1->SetEntries(165);
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
   jpt_1->SetBinContent(2,3.622619);
   jpt_1->SetBinContent(3,17.37337);
   jpt_1->SetBinContent(4,39.9859);
   jpt_1->SetBinContent(5,34.62886);
   jpt_1->SetBinContent(6,36.50005);
   jpt_1->SetBinContent(7,27.54616);
   jpt_1->SetBinContent(8,10.32267);
   jpt_1->SetBinContent(9,8.776068);
   jpt_1->SetBinContent(10,2.486717);
   jpt_1->SetBinContent(11,1.312924);
   jpt_1->SetBinContent(12,2.307681);
   jpt_1->SetBinContent(14,0.09826312);
   jpt_1->SetBinContent(18,0.2597711);
   jpt_1->SetBinError(2,1.564345);
   jpt_1->SetBinError(3,2.908218);
   jpt_1->SetBinError(4,4.454776);
   jpt_1->SetBinError(5,3.953776);
   jpt_1->SetBinError(6,4.340027);
   jpt_1->SetBinError(7,3.932038);
   jpt_1->SetBinError(8,2.403095);
   jpt_1->SetBinError(9,2.041342);
   jpt_1->SetBinError(10,1.094229);
   jpt_1->SetBinError(11,0.7721842);
   jpt_1->SetBinError(12,1.320012);
   jpt_1->SetBinError(14,0.09826312);
   jpt_1->SetBinError(18,0.2597712);
   jpt_1->SetEntries(460);
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
   jpt_1->SetBinContent(2,0.07129829);
   jpt_1->SetBinContent(3,1.441165);
   jpt_1->SetBinContent(4,5.222018);
   jpt_1->SetBinContent(5,6.882879);
   jpt_1->SetBinContent(6,5.546382);
   jpt_1->SetBinContent(7,4.762969);
   jpt_1->SetBinContent(8,2.933045);
   jpt_1->SetBinContent(9,2.013667);
   jpt_1->SetBinContent(10,1.14559);
   jpt_1->SetBinContent(11,0.7101084);
   jpt_1->SetBinContent(12,0.4386959);
   jpt_1->SetBinContent(13,0.3816301);
   jpt_1->SetBinContent(14,0.1171281);
   jpt_1->SetBinContent(15,0.08534801);
   jpt_1->SetBinContent(16,0.02189279);
   jpt_1->SetBinContent(17,0.006462768);
   jpt_1->SetBinContent(22,0.02318903);
   jpt_1->SetBinError(2,0.03485039);
   jpt_1->SetBinError(3,0.1663389);
   jpt_1->SetBinError(4,0.3211751);
   jpt_1->SetBinError(5,0.3751117);
   jpt_1->SetBinError(6,0.333706);
   jpt_1->SetBinError(7,0.3130219);
   jpt_1->SetBinError(8,0.2397784);
   jpt_1->SetBinError(9,0.2059099);
   jpt_1->SetBinError(10,0.1487739);
   jpt_1->SetBinError(11,0.1217984);
   jpt_1->SetBinError(12,0.09827327);
   jpt_1->SetBinError(13,0.09172);
   jpt_1->SetBinError(14,0.05242386);
   jpt_1->SetBinError(15,0.03937688);
   jpt_1->SetBinError(16,0.02189279);
   jpt_1->SetBinError(17,0.006462768);
   jpt_1->SetBinError(22,0.02318903);
   jpt_1->SetEntries(1830);
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
   jpt_1->SetBinContent(2,0.03938988);
   jpt_1->SetBinContent(3,0.1862012);
   jpt_1->SetBinContent(4,0.6685368);
   jpt_1->SetBinContent(5,1.057235);
   jpt_1->SetBinContent(6,0.8765036);
   jpt_1->SetBinContent(7,0.1265718);
   jpt_1->SetBinContent(8,0.1381898);
   jpt_1->SetBinContent(9,0.08497582);
   jpt_1->SetBinContent(10,0.02199414);
   jpt_1->SetBinError(2,0.03938988);
   jpt_1->SetBinError(3,0.1334372);
   jpt_1->SetBinError(4,0.2139759);
   jpt_1->SetBinError(5,0.3141938);
   jpt_1->SetBinError(6,0.3149674);
   jpt_1->SetBinError(7,0.1061208);
   jpt_1->SetBinError(8,0.1361831);
   jpt_1->SetBinError(9,0.081773);
   jpt_1->SetBinError(10,0.02199414);
   jpt_1->SetEntries(46);
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
   jpt_1->SetBinContent(3,0.005916547);
   jpt_1->SetBinContent(4,0.1232207);
   jpt_1->SetBinContent(5,0.1860044);
   jpt_1->SetBinContent(6,0.1760343);
   jpt_1->SetBinContent(7,0.1436942);
   jpt_1->SetBinContent(8,0.1142973);
   jpt_1->SetBinContent(9,0.07437078);
   jpt_1->SetBinContent(10,0.03892329);
   jpt_1->SetBinContent(11,0.01733707);
   jpt_1->SetBinContent(12,0.006099524);
   jpt_1->SetBinContent(17,0.004405835);
   jpt_1->SetBinError(3,0.005916546);
   jpt_1->SetBinError(4,0.02776428);
   jpt_1->SetBinError(5,0.03472471);
   jpt_1->SetBinError(6,0.03432433);
   jpt_1->SetBinError(7,0.02968901);
   jpt_1->SetBinError(8,0.02688571);
   jpt_1->SetBinError(9,0.02179873);
   jpt_1->SetBinError(10,0.0154203);
   jpt_1->SetBinError(11,0.009604367);
   jpt_1->SetBinError(12,0.006099524);
   jpt_1->SetBinError(17,0.004405835);
   jpt_1->SetEntries(163);
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
   jpt_1->SetBinContent(2,2);
   jpt_1->SetBinContent(3,21);
   jpt_1->SetBinContent(4,52);
   jpt_1->SetBinContent(5,53);
   jpt_1->SetBinContent(6,43);
   jpt_1->SetBinContent(7,18);
   jpt_1->SetBinContent(8,12);
   jpt_1->SetBinContent(9,9);
   jpt_1->SetBinContent(10,2);
   jpt_1->SetBinContent(13,3);
   jpt_1->SetBinError(2,1.414214);
   jpt_1->SetBinError(3,4.582576);
   jpt_1->SetBinError(4,7.211103);
   jpt_1->SetBinError(5,7.28011);
   jpt_1->SetBinError(6,6.557439);
   jpt_1->SetBinError(7,4.242641);
   jpt_1->SetBinError(8,3.464102);
   jpt_1->SetBinError(9,3);
   jpt_1->SetBinError(10,1.414214);
   jpt_1->SetBinError(13,1.732051);
   jpt_1->SetEntries(215);
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
   jpt_1->SetBinContent(2,0.3951829);
   jpt_1->SetBinContent(3,0.6855985);
   jpt_1->SetBinContent(4,0.7531487);
   jpt_1->SetBinContent(5,0.7860751);
   jpt_1->SetBinContent(6,0.8085356);
   jpt_1->SetBinContent(7,0.423677);
   jpt_1->SetBinContent(8,0.6964346);
   jpt_1->SetBinContent(9,0.6048998);
   jpt_1->SetBinContent(10,0.3479013);
   jpt_1->SetBinContent(13,7.861015);
   jpt_1->SetBinError(2,0.3116767);
   jpt_1->SetBinError(3,0.1762018);
   jpt_1->SetBinError(4,0.1231025);
   jpt_1->SetBinError(5,0.1268319);
   jpt_1->SetBinError(6,0.1455167);
   jpt_1->SetBinError(7,0.1105465);
   jpt_1->SetBinError(8,0.232193);
   jpt_1->SetBinError(9,0.2275612);
   jpt_1->SetBinError(10,0.2649579);
   jpt_1->SetBinError(13,4.916092);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(7.277086);
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
