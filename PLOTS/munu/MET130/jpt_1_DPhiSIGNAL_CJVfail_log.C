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
   upper->Range(-202.5316,-2.901781,1063.291,7.016992);
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
   stack->SetMaximum(1266670);
   
   TH1F *jpt_1_stack_11 = new TH1F("jpt_1_stack_11","stack",25,0,1000);
   jpt_1_stack_11->SetBinContent(2,0.05512516);
   jpt_1_stack_11->SetBinContent(3,2.017419);
   jpt_1_stack_11->SetBinContent(4,2.242602);
   jpt_1_stack_11->SetBinContent(5,4.156004);
   jpt_1_stack_11->SetBinContent(6,0.9375136);
   jpt_1_stack_11->SetBinError(2,0.05512516);
   jpt_1_stack_11->SetBinError(3,1.376843);
   jpt_1_stack_11->SetBinError(4,1.662287);
   jpt_1_stack_11->SetBinError(5,2.81392);
   jpt_1_stack_11->SetBinError(6,0.7967814);
   jpt_1_stack_11->SetMinimum(0.001979676);
   jpt_1_stack_11->SetMaximum(3319349);
   jpt_1_stack_11->SetEntries(22);
   jpt_1_stack_11->SetStats(0);
   jpt_1_stack_11->SetFillColor(4);
   jpt_1_stack_11->SetLineColor(4);
   jpt_1_stack_11->SetLineWidth(2);
   jpt_1_stack_11->SetMarkerColor(4);
   jpt_1_stack_11->SetMarkerStyle(21);
   jpt_1_stack_11->SetMarkerSize(0.8);
   jpt_1_stack_11->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_11->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_11->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_11->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_11->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_11->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_11->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_11->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_11->GetYaxis()->SetTitle("Events");
   jpt_1_stack_11->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_11->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_11->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_11->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_11->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_11->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_11->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_11->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_11->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_11->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_11->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_11->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_11->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_11);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.05512516);
   jpt_1->SetBinContent(3,2.017419);
   jpt_1->SetBinContent(4,2.242602);
   jpt_1->SetBinContent(5,4.156004);
   jpt_1->SetBinContent(6,0.9375136);
   jpt_1->SetBinError(2,0.05512516);
   jpt_1->SetBinError(3,1.376843);
   jpt_1->SetBinError(4,1.662287);
   jpt_1->SetBinError(5,2.81392);
   jpt_1->SetBinError(6,0.7967814);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(960000);
   jpt_1->SetEntries(22);
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
   jpt_1->SetBinContent(2,1.473049);
   jpt_1->SetBinContent(3,21.72271);
   jpt_1->SetBinContent(4,26.30541);
   jpt_1->SetBinContent(5,17.56781);
   jpt_1->SetBinContent(6,6.935344);
   jpt_1->SetBinContent(7,4.633913);
   jpt_1->SetBinContent(8,2.451379);
   jpt_1->SetBinError(2,0.8254972);
   jpt_1->SetBinError(3,3.894696);
   jpt_1->SetBinError(4,4.346344);
   jpt_1->SetBinError(5,3.557471);
   jpt_1->SetBinError(6,2.345427);
   jpt_1->SetBinError(7,1.875185);
   jpt_1->SetBinError(8,1.280892);
   jpt_1->SetEntries(143);
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
   jpt_1->SetBinContent(2,10.09373);
   jpt_1->SetBinContent(3,45.13356);
   jpt_1->SetBinContent(4,48.30933);
   jpt_1->SetBinContent(5,37.41232);
   jpt_1->SetBinContent(6,14.11809);
   jpt_1->SetBinContent(7,10.53057);
   jpt_1->SetBinContent(8,7.426988);
   jpt_1->SetBinContent(9,3.577061);
   jpt_1->SetBinContent(10,1.555333);
   jpt_1->SetBinContent(12,0.1297146);
   jpt_1->SetBinContent(13,0.3070954);
   jpt_1->SetBinContent(14,0.6250263);
   jpt_1->SetBinContent(20,0.4483769);
   jpt_1->SetBinError(2,2.443626);
   jpt_1->SetBinError(3,5.039084);
   jpt_1->SetBinError(4,4.980116);
   jpt_1->SetBinError(5,4.546146);
   jpt_1->SetBinError(6,2.750032);
   jpt_1->SetBinError(7,2.649668);
   jpt_1->SetBinError(8,2.280147);
   jpt_1->SetBinError(9,1.561187);
   jpt_1->SetBinError(10,0.9841129);
   jpt_1->SetBinError(12,0.1297146);
   jpt_1->SetBinError(13,0.3070954);
   jpt_1->SetBinError(14,0.6250263);
   jpt_1->SetBinError(20,0.4483769);
   jpt_1->SetEntries(411);
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
   jpt_1->SetBinContent(2,0.4595481);
   jpt_1->SetBinContent(3,3.340865);
   jpt_1->SetBinContent(4,5.518535);
   jpt_1->SetBinContent(5,3.815041);
   jpt_1->SetBinContent(6,2.365421);
   jpt_1->SetBinContent(7,1.628043);
   jpt_1->SetBinContent(8,0.7145413);
   jpt_1->SetBinContent(9,0.3031812);
   jpt_1->SetBinContent(10,0.281588);
   jpt_1->SetBinContent(11,0.1474068);
   jpt_1->SetBinContent(12,0.06187233);
   jpt_1->SetBinContent(13,0.03906696);
   jpt_1->SetBinContent(14,0.05033939);
   jpt_1->SetBinContent(15,0.03931858);
   jpt_1->SetBinContent(19,0.0002938553);
   jpt_1->SetBinError(2,0.09989756);
   jpt_1->SetBinError(3,0.2620764);
   jpt_1->SetBinError(4,0.340718);
   jpt_1->SetBinError(5,0.2810398);
   jpt_1->SetBinError(6,0.2219464);
   jpt_1->SetBinError(7,0.1877538);
   jpt_1->SetBinError(8,0.1203595);
   jpt_1->SetBinError(9,0.07520879);
   jpt_1->SetBinError(10,0.07399164);
   jpt_1->SetBinError(11,0.05646127);
   jpt_1->SetBinError(12,0.0356783);
   jpt_1->SetBinError(13,0.02766513);
   jpt_1->SetBinError(14,0.02953599);
   jpt_1->SetBinError(15,0.02998592);
   jpt_1->SetBinError(19,0.0002938553);
   jpt_1->SetEntries(1046);
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
   jpt_1->SetBinContent(2,0.4701628);
   jpt_1->SetBinContent(3,2.634179);
   jpt_1->SetBinContent(4,1.637957);
   jpt_1->SetBinContent(5,1.590763);
   jpt_1->SetBinContent(6,1.086829);
   jpt_1->SetBinContent(7,0.09180462);
   jpt_1->SetBinContent(8,0.4002222);
   jpt_1->SetBinError(2,0.2411346);
   jpt_1->SetBinError(3,0.5336158);
   jpt_1->SetBinError(4,0.3936617);
   jpt_1->SetBinError(5,0.4049814);
   jpt_1->SetBinError(6,0.5260321);
   jpt_1->SetBinError(7,0.09180462);
   jpt_1->SetBinError(8,0.2481797);
   jpt_1->SetEntries(94);
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
   jpt_1->SetBinContent(2,0.006337821);
   jpt_1->SetBinContent(3,0.3444489);
   jpt_1->SetBinContent(4,0.4308027);
   jpt_1->SetBinContent(5,0.3673058);
   jpt_1->SetBinContent(6,0.1514086);
   jpt_1->SetBinContent(7,0.03678197);
   jpt_1->SetBinContent(8,0.06573066);
   jpt_1->SetBinContent(9,0.02696204);
   jpt_1->SetBinContent(11,0.02110812);
   jpt_1->SetBinContent(14,0.02286724);
   jpt_1->SetBinError(2,0.006337821);
   jpt_1->SetBinError(3,0.05981381);
   jpt_1->SetBinError(4,0.06004161);
   jpt_1->SetBinError(5,0.05933981);
   jpt_1->SetBinError(6,0.03768968);
   jpt_1->SetBinError(7,0.01458609);
   jpt_1->SetBinError(8,0.02873586);
   jpt_1->SetBinError(9,0.01611068);
   jpt_1->SetBinError(11,0.01571674);
   jpt_1->SetBinError(14,0.01700013);
   jpt_1->SetEntries(198);
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
   jpt_1->SetBinContent(2,6);
   jpt_1->SetBinContent(3,50);
   jpt_1->SetBinContent(4,64);
   jpt_1->SetBinContent(5,53);
   jpt_1->SetBinContent(6,21);
   jpt_1->SetBinContent(7,14);
   jpt_1->SetBinContent(8,2);
   jpt_1->SetBinContent(9,4);
   jpt_1->SetBinContent(11,1);
   jpt_1->SetBinContent(15,1);
   jpt_1->SetBinError(2,2.44949);
   jpt_1->SetBinError(3,7.071068);
   jpt_1->SetBinError(4,8);
   jpt_1->SetBinError(5,7.28011);
   jpt_1->SetBinError(6,4.582576);
   jpt_1->SetBinError(7,3.741657);
   jpt_1->SetBinError(8,1.414214);
   jpt_1->SetBinError(9,2);
   jpt_1->SetBinError(11,1);
   jpt_1->SetBinError(15,1);
   jpt_1->SetEntries(216);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_CJVfail");
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
   jpt_1->SetBinContent(2,0.4798916);
   jpt_1->SetBinContent(3,0.6832863);
   jpt_1->SetBinContent(4,0.7785695);
   jpt_1->SetBinContent(5,0.8723814);
   jpt_1->SetBinContent(6,0.8516819);
   jpt_1->SetBinContent(7,0.8273691);
   jpt_1->SetBinContent(8,0.1808505);
   jpt_1->SetBinContent(9,1.02375);
   jpt_1->SetBinContent(11,5.934194);
   jpt_1->SetBinContent(15,25.43327);
   jpt_1->SetBinError(2,0.2197365);
   jpt_1->SetBinError(3,0.1136014);
   jpt_1->SetBinError(4,0.1158257);
   jpt_1->SetBinError(5,0.1458809);
   jpt_1->SetBinError(6,0.2247615);
   jpt_1->SetBinError(7,0.272383);
   jpt_1->SetBinError(8,0.1349192);
   jpt_1->SetBinError(9,0.6555523);
   jpt_1->SetBinError(11,6.282848);
   jpt_1->SetBinError(15,31.98551);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(1.292149);
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
