{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:30 2013) by ROOT version5.32/00
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
   upper->Range(-89.11392,-2.89675,467.8481,6.934185);
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
   stack->SetMaximum(1063584);
   
   TH1F *ept_1_stack_14 = new TH1F("ept_1_stack_14","stack",25,0,1000);
   ept_1_stack_14->SetBinContent(1,0.1178052);
   ept_1_stack_14->SetBinContent(2,0.5729228);
   ept_1_stack_14->SetBinContent(3,2.785352);
   ept_1_stack_14->SetBinContent(5,0.1071887);
   ept_1_stack_14->SetBinContent(6,0.0677407);
   ept_1_stack_14->SetBinError(1,0.1178052);
   ept_1_stack_14->SetBinError(2,0.2223931);
   ept_1_stack_14->SetBinError(3,2.499594);
   ept_1_stack_14->SetBinError(5,0.1071887);
   ept_1_stack_14->SetBinError(6,0.0677407);
   ept_1_stack_14->SetMinimum(0.00199466);
   ept_1_stack_14->SetMaximum(2771012);
   ept_1_stack_14->SetEntries(15);
   ept_1_stack_14->SetStats(0);
   ept_1_stack_14->SetFillColor(4);
   ept_1_stack_14->SetLineColor(4);
   ept_1_stack_14->SetLineWidth(2);
   ept_1_stack_14->SetMarkerColor(4);
   ept_1_stack_14->SetMarkerStyle(21);
   ept_1_stack_14->SetMarkerSize(0.8);
   ept_1_stack_14->GetXaxis()->SetTitle("Leading electron p_{T} [GeV]");
   ept_1_stack_14->GetXaxis()->SetRange(1,11);
   ept_1_stack_14->GetXaxis()->SetLabelFont(42);
   ept_1_stack_14->GetXaxis()->SetLabelOffset(0.007);
   ept_1_stack_14->GetXaxis()->SetLabelSize(0);
   ept_1_stack_14->GetXaxis()->SetTitleSize(0);
   ept_1_stack_14->GetXaxis()->SetTickLength(0.02);
   ept_1_stack_14->GetXaxis()->SetTitleOffset(0.9);
   ept_1_stack_14->GetXaxis()->SetTitleFont(42);
   ept_1_stack_14->GetYaxis()->SetTitle("Events");
   ept_1_stack_14->GetYaxis()->SetLabelFont(42);
   ept_1_stack_14->GetYaxis()->SetLabelOffset(0.007);
   ept_1_stack_14->GetYaxis()->SetLabelSize(0.035);
   ept_1_stack_14->GetYaxis()->SetTitleSize(0.045);
   ept_1_stack_14->GetYaxis()->SetTickLength(0.02);
   ept_1_stack_14->GetYaxis()->SetTitleOffset(1.55);
   ept_1_stack_14->GetYaxis()->SetTitleFont(42);
   ept_1_stack_14->GetZaxis()->SetLabelFont(42);
   ept_1_stack_14->GetZaxis()->SetLabelOffset(0.007);
   ept_1_stack_14->GetZaxis()->SetLabelSize(0.035);
   ept_1_stack_14->GetZaxis()->SetTitleSize(0.045);
   ept_1_stack_14->GetZaxis()->SetTickLength(0.02);
   ept_1_stack_14->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(ept_1_stack_14);
   
   
   TH1F *ept_1 = new TH1F("ept_1","ept_1",25,0,1000);
   ept_1->SetBinContent(1,0.1178052);
   ept_1->SetBinContent(2,0.5729228);
   ept_1->SetBinContent(3,2.785352);
   ept_1->SetBinContent(5,0.1071887);
   ept_1->SetBinContent(6,0.0677407);
   ept_1->SetBinError(1,0.1178052);
   ept_1->SetBinError(2,0.2223931);
   ept_1->SetBinError(3,2.499594);
   ept_1->SetBinError(5,0.1071887);
   ept_1->SetBinError(6,0.0677407);
   ept_1->SetMinimum(0.01);
   ept_1->SetMaximum(735000);
   ept_1->SetEntries(15);
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
   ept_1->SetBinContent(1,9.669328);
   ept_1->SetBinContent(2,8.622456);
   ept_1->SetBinContent(3,6.460429);
   ept_1->SetBinContent(4,2.16201);
   ept_1->SetBinContent(5,1.293649);
   ept_1->SetBinError(1,2.545269);
   ept_1->SetBinError(2,2.373889);
   ept_1->SetBinError(3,2.017087);
   ept_1->SetBinError(4,1.150996);
   ept_1->SetBinError(5,0.8590076);
   ept_1->SetEntries(55);
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
   ept_1->SetBinContent(1,31.63206);
   ept_1->SetBinContent(2,46.86396);
   ept_1->SetBinContent(3,17.51271);
   ept_1->SetBinContent(4,8.725306);
   ept_1->SetBinContent(5,3.973367);
   ept_1->SetBinContent(6,2.049352);
   ept_1->SetBinContent(7,0.188163);
   ept_1->SetBinContent(11,0.02444959);
   ept_1->SetBinError(1,4.788464);
   ept_1->SetBinError(2,5.834724);
   ept_1->SetBinError(3,3.613139);
   ept_1->SetBinError(4,2.684419);
   ept_1->SetBinError(5,1.274458);
   ept_1->SetBinError(6,1.496053);
   ept_1->SetBinError(7,0.1356717);
   ept_1->SetBinError(11,0.02444958);
   ept_1->SetEntries(214);
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
   ept_1->SetBinContent(1,8.893946);
   ept_1->SetBinContent(2,13.99803);
   ept_1->SetBinContent(3,7.800446);
   ept_1->SetBinContent(4,4.159981);
   ept_1->SetBinContent(5,2.167146);
   ept_1->SetBinContent(6,0.9241444);
   ept_1->SetBinContent(7,0.5018356);
   ept_1->SetBinContent(8,0.3615753);
   ept_1->SetBinContent(9,0.1004444);
   ept_1->SetBinContent(10,0.09164049);
   ept_1->SetBinContent(11,0.04590776);
   ept_1->SetBinContent(12,0.03078683);
   ept_1->SetBinContent(13,0.001011659);
   ept_1->SetBinContent(14,0.05138622);
   ept_1->SetBinContent(15,0.02189279);
   ept_1->SetBinError(1,0.4215809);
   ept_1->SetBinError(2,0.5323998);
   ept_1->SetBinError(3,0.3978803);
   ept_1->SetBinError(4,0.2875682);
   ept_1->SetBinError(5,0.2076194);
   ept_1->SetBinError(6,0.1392156);
   ept_1->SetBinError(7,0.1018436);
   ept_1->SetBinError(8,0.08117389);
   ept_1->SetBinError(9,0.04275904);
   ept_1->SetBinError(10,0.04647733);
   ept_1->SetBinError(11,0.02714522);
   ept_1->SetBinError(12,0.02187029);
   ept_1->SetBinError(13,0.001011659);
   ept_1->SetBinError(14,0.03635744);
   ept_1->SetBinError(15,0.02189279);
   ept_1->SetEntries(2244);
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
   ept_1->SetBinContent(1,0.3399489);
   ept_1->SetBinContent(2,0.6043198);
   ept_1->SetBinContent(3,0.8456743);
   ept_1->SetBinContent(4,0.1102882);
   ept_1->SetBinContent(5,0.1047787);
   ept_1->SetBinError(1,0.1669482);
   ept_1->SetBinError(2,0.2428265);
   ept_1->SetBinError(3,0.3657882);
   ept_1->SetBinError(4,0.08999019);
   ept_1->SetBinError(5,0.1047787);
   ept_1->SetEntries(24);
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
   ept_1->SetBinContent(1,0.1298411);
   ept_1->SetBinContent(2,0.2438882);
   ept_1->SetBinContent(3,0.07978746);
   ept_1->SetBinContent(4,0.02279292);
   ept_1->SetBinContent(5,0.01151835);
   ept_1->SetBinContent(6,0.007382356);
   ept_1->SetBinContent(7,0.005270739);
   ept_1->SetBinContent(9,0.006099524);
   ept_1->SetBinError(1,0.02960406);
   ept_1->SetBinError(2,0.04058407);
   ept_1->SetBinError(3,0.02460012);
   ept_1->SetBinError(4,0.01179312);
   ept_1->SetBinError(5,0.008148419);
   ept_1->SetBinError(6,0.006072652);
   ept_1->SetBinError(7,0.005270739);
   ept_1->SetBinError(9,0.006099524);
   ept_1->SetEntries(86);
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
   ept_1->SetBinContent(1,38);
   ept_1->SetBinContent(2,49);
   ept_1->SetBinContent(3,18);
   ept_1->SetBinContent(4,8);
   ept_1->SetBinContent(5,5);
   ept_1->SetBinContent(6,1);
   ept_1->SetBinError(1,6.164414);
   ept_1->SetBinError(2,7);
   ept_1->SetBinError(3,4.242641);
   ept_1->SetBinError(4,2.828427);
   ept_1->SetBinError(5,2.236068);
   ept_1->SetBinError(6,1);
   ept_1->SetEntries(119);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_CJVpass");
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
   ept_1->SetBinContent(1,0.7500228);
   ept_1->SetBinContent(2,0.6966892);
   ept_1->SetBinContent(3,0.5504748);
   ept_1->SetBinContent(4,0.5269961);
   ept_1->SetBinContent(5,0.6622113);
   ept_1->SetBinContent(6,0.3354716);
   ept_1->SetBinError(1,0.1459224);
   ept_1->SetBinError(2,0.1176129);
   ept_1->SetBinError(3,0.1475478);
   ept_1->SetBinError(4,0.2123827);
   ept_1->SetBinError(5,0.3260232);
   ept_1->SetBinError(6,0.375679);
   ept_1->SetMinimum(0);
   ept_1->SetMaximum(2);
   ept_1->SetEntries(35.49661);
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
