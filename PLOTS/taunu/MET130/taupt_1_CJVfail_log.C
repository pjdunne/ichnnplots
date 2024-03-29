{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:56:38 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-2.75937,446.5823,4.828732);
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
   stack->SetMaximum(12672.49);
   
   TH1F *taupt_1_stack_10 = new TH1F("taupt_1_stack_10","stack",50,0,1000);
   taupt_1_stack_10->SetBinContent(2,2.902788);
   taupt_1_stack_10->SetBinContent(3,2.24644);
   taupt_1_stack_10->SetBinContent(4,0.1287503);
   taupt_1_stack_10->SetBinError(2,2.262955);
   taupt_1_stack_10->SetBinError(3,2.025498);
   taupt_1_stack_10->SetBinError(4,0.1287503);
   taupt_1_stack_10->SetMinimum(0.002468264);
   taupt_1_stack_10->SetMaximum(28140.17);
   taupt_1_stack_10->SetEntries(14);
   taupt_1_stack_10->SetStats(0);
   taupt_1_stack_10->SetFillColor(4);
   taupt_1_stack_10->SetLineColor(4);
   taupt_1_stack_10->SetLineWidth(2);
   taupt_1_stack_10->SetMarkerColor(4);
   taupt_1_stack_10->SetMarkerStyle(21);
   taupt_1_stack_10->SetMarkerSize(0.8);
   taupt_1_stack_10->GetXaxis()->SetTitle("Leading tau p_{T} [GeV]");
   taupt_1_stack_10->GetXaxis()->SetRange(1,21);
   taupt_1_stack_10->GetXaxis()->SetLabelFont(42);
   taupt_1_stack_10->GetXaxis()->SetLabelOffset(0.007);
   taupt_1_stack_10->GetXaxis()->SetLabelSize(0);
   taupt_1_stack_10->GetXaxis()->SetTitleSize(0);
   taupt_1_stack_10->GetXaxis()->SetTickLength(0.02);
   taupt_1_stack_10->GetXaxis()->SetTitleOffset(0.9);
   taupt_1_stack_10->GetXaxis()->SetTitleFont(42);
   taupt_1_stack_10->GetYaxis()->SetTitle("Events");
   taupt_1_stack_10->GetYaxis()->SetLabelFont(42);
   taupt_1_stack_10->GetYaxis()->SetLabelOffset(0.007);
   taupt_1_stack_10->GetYaxis()->SetLabelSize(0.035);
   taupt_1_stack_10->GetYaxis()->SetTitleSize(0.045);
   taupt_1_stack_10->GetYaxis()->SetTickLength(0.02);
   taupt_1_stack_10->GetYaxis()->SetTitleOffset(1.55);
   taupt_1_stack_10->GetYaxis()->SetTitleFont(42);
   taupt_1_stack_10->GetZaxis()->SetLabelFont(42);
   taupt_1_stack_10->GetZaxis()->SetLabelOffset(0.007);
   taupt_1_stack_10->GetZaxis()->SetLabelSize(0.035);
   taupt_1_stack_10->GetZaxis()->SetTitleSize(0.045);
   taupt_1_stack_10->GetZaxis()->SetTickLength(0.02);
   taupt_1_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taupt_1_stack_10);
   
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,2.902788);
   taupt_1->SetBinContent(3,2.24644);
   taupt_1->SetBinContent(4,0.1287503);
   taupt_1->SetBinError(2,2.262955);
   taupt_1->SetBinError(3,2.025498);
   taupt_1->SetBinError(4,0.1287503);
   taupt_1->SetMinimum(0.01);
   taupt_1->SetMaximum(13050);
   taupt_1->SetEntries(14);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(4);
   taupt_1->SetLineColor(4);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(4);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetTitle("Leading tau p_{T} [GeV]");
   taupt_1->GetXaxis()->SetRange(1,21);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0);
   taupt_1->GetXaxis()->SetTitleSize(0);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetTitle("Events");
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"HIST");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,15.90385);
   taupt_1->SetBinContent(3,6.845584);
   taupt_1->SetBinContent(4,2.09305);
   taupt_1->SetBinContent(5,0.4702012);
   taupt_1->SetBinContent(6,0.2943209);
   taupt_1->SetBinError(2,3.345953);
   taupt_1->SetBinError(3,2.116152);
   taupt_1->SetBinError(4,1.116268);
   taupt_1->SetBinError(5,0.4129767);
   taupt_1->SetBinError(6,0.2943209);
   taupt_1->SetEntries(47);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(5);
   taupt_1->SetLineColor(5);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(5);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,44.34532);
   taupt_1->SetBinContent(3,22.85294);
   taupt_1->SetBinContent(4,7.873271);
   taupt_1->SetBinContent(5,3.635404);
   taupt_1->SetBinContent(6,0.5417517);
   taupt_1->SetBinContent(7,0.3666053);
   taupt_1->SetBinError(2,5.563307);
   taupt_1->SetBinError(3,3.990435);
   taupt_1->SetBinError(4,2.152988);
   taupt_1->SetBinError(5,1.32845);
   taupt_1->SetBinError(6,0.4093043);
   taupt_1->SetBinError(7,0.3666053);
   taupt_1->SetEntries(161);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(6);
   taupt_1->SetLineColor(6);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(6);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,17.04821);
   taupt_1->SetBinContent(3,10.21323);
   taupt_1->SetBinContent(4,3.940979);
   taupt_1->SetBinContent(5,1.761694);
   taupt_1->SetBinContent(6,0.5494712);
   taupt_1->SetBinContent(7,0.2594057);
   taupt_1->SetBinContent(8,0.09798641);
   taupt_1->SetBinContent(9,0.03970683);
   taupt_1->SetBinContent(10,0.0503953);
   taupt_1->SetBinContent(11,0.0483579);
   taupt_1->SetBinError(2,0.5922172);
   taupt_1->SetBinError(3,0.4531643);
   taupt_1->SetBinError(4,0.282778);
   taupt_1->SetBinError(5,0.1922983);
   taupt_1->SetBinError(6,0.1073498);
   taupt_1->SetBinError(7,0.07380253);
   taupt_1->SetBinError(8,0.04389991);
   taupt_1->SetBinError(9,0.0280776);
   taupt_1->SetBinError(10,0.03083909);
   taupt_1->SetBinError(11,0.03472292);
   taupt_1->SetEntries(1917);
   taupt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   taupt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   taupt_1->SetLineColor(ci);
   taupt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   taupt_1->SetMarkerColor(ci);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,1.456221);
   taupt_1->SetBinContent(3,0.3172677);
   taupt_1->SetBinContent(4,0.2891884);
   taupt_1->SetBinContent(6,0.1036819);
   taupt_1->SetBinError(2,0.466401);
   taupt_1->SetBinError(3,0.1832952);
   taupt_1->SetBinError(4,0.2140118);
   taupt_1->SetBinError(6,0.1036819);
   taupt_1->SetEntries(18);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(3);
   taupt_1->SetLineColor(3);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(3);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,2.227264);
   taupt_1->SetBinContent(3,0.7488354);
   taupt_1->SetBinContent(4,0.7609444);
   taupt_1->SetBinContent(5,0.5406371);
   taupt_1->SetBinContent(6,0.2326408);
   taupt_1->SetBinContent(8,0.05393247);
   taupt_1->SetBinContent(10,0.1181421);
   taupt_1->SetBinError(2,0.4907889);
   taupt_1->SetBinError(3,0.2524247);
   taupt_1->SetBinError(4,0.3294031);
   taupt_1->SetBinError(5,0.2513313);
   taupt_1->SetBinError(6,0.2326408);
   taupt_1->SetBinError(8,0.05393247);
   taupt_1->SetBinError(10,0.1181421);
   taupt_1->SetEntries(51);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(3);
   taupt_1->SetLineColor(3);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(3);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,0.5995967);
   taupt_1->SetBinContent(3,0.4091811);
   taupt_1->SetBinContent(4,0.188113);
   taupt_1->SetBinContent(5,0.1036235);
   taupt_1->SetBinContent(6,0.04931127);
   taupt_1->SetBinContent(7,0.006153993);
   taupt_1->SetBinContent(8,0.01242065);
   taupt_1->SetBinError(2,0.06562012);
   taupt_1->SetBinError(3,0.05284035);
   taupt_1->SetBinError(4,0.03492265);
   taupt_1->SetBinError(5,0.02530034);
   taupt_1->SetBinError(6,0.01769988);
   taupt_1->SetBinError(7,0.006067575);
   taupt_1->SetBinError(8,0.008793595);
   taupt_1->SetEntries(237);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(3);
   taupt_1->SetLineColor(3);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(3);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taupt_1,"");
   stack->Draw("hist");
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,87);
   taupt_1->SetBinContent(3,34);
   taupt_1->SetBinContent(4,11);
   taupt_1->SetBinContent(5,4);
   taupt_1->SetBinContent(6,3);
   taupt_1->SetBinContent(7,1);
   taupt_1->SetBinError(2,9.327379);
   taupt_1->SetBinError(3,5.830952);
   taupt_1->SetBinError(4,3.316625);
   taupt_1->SetBinError(5,2);
   taupt_1->SetBinError(6,1.732051);
   taupt_1->SetBinError(7,1);
   taupt_1->SetEntries(140);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(1);
   taupt_1->SetFillStyle(0);
   taupt_1->SetLineWidth(3);
   taupt_1->SetMarkerStyle(20);
   taupt_1->SetMarkerSize(1.3);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.035);
   taupt_1->GetXaxis()->SetTitleSize(0.045);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.035);
   taupt_1->GetYaxis()->SetTitleSize(0.045);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(1.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   taupt_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("taupt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("taupt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taupt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("taupt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taupt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taupt_1","Dibosons","f");
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
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,1.066432);
   taupt_1->SetBinContent(3,0.8215132);
   taupt_1->SetBinContent(4,0.7262861);
   taupt_1->SetBinContent(5,0.6142922);
   taupt_1->SetBinContent(6,1.693788);
   taupt_1->SetBinContent(7,1.581865);
   taupt_1->SetBinError(2,0.1428743);
   taupt_1->SetBinError(3,0.1673566);
   taupt_1->SetBinError(4,0.2490381);
   taupt_1->SetBinError(5,0.3353502);
   taupt_1->SetBinError(6,1.122002);
   taupt_1->SetBinError(7,1.837981);
   taupt_1->SetMinimum(0);
   taupt_1->SetMaximum(2);
   taupt_1->SetEntries(8.704655);
   taupt_1->SetStats(0);
   taupt_1->SetFillStyle(0);
   taupt_1->SetMarkerStyle(20);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetTitle("Leading tau p_{T} [GeV]");
   taupt_1->GetXaxis()->SetRange(1,21);
   taupt_1->GetXaxis()->SetLabelFont(42);
   taupt_1->GetXaxis()->SetLabelOffset(0.007);
   taupt_1->GetXaxis()->SetLabelSize(0.1);
   taupt_1->GetXaxis()->SetTitleSize(0.12);
   taupt_1->GetXaxis()->SetTickLength(0.02);
   taupt_1->GetXaxis()->SetTitleOffset(0.9);
   taupt_1->GetXaxis()->SetTitleFont(42);
   taupt_1->GetYaxis()->SetTitle("Data/MC");
   taupt_1->GetYaxis()->SetNdivisions(505);
   taupt_1->GetYaxis()->SetLabelFont(42);
   taupt_1->GetYaxis()->SetLabelOffset(0.007);
   taupt_1->GetYaxis()->SetLabelSize(0.1);
   taupt_1->GetYaxis()->SetTitleSize(0.12);
   taupt_1->GetYaxis()->SetTickLength(0.02);
   taupt_1->GetYaxis()->SetTitleOffset(0.55);
   taupt_1->GetYaxis()->SetTitleFont(42);
   taupt_1->GetZaxis()->SetLabelFont(42);
   taupt_1->GetZaxis()->SetLabelOffset(0.007);
   taupt_1->GetZaxis()->SetLabelSize(0.035);
   taupt_1->GetZaxis()->SetTitleSize(0.045);
   taupt_1->GetZaxis()->SetTickLength(0.02);
   taupt_1->GetZaxis()->SetTitleFont(42);
   taupt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
