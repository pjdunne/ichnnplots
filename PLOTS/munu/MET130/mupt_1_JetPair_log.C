{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:16 2013) by ROOT version5.32/00
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
   upper->Range(-89.11392,-3.014059,467.8481,8.969662);
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
   stack->SetMaximum(7.877093e+07);
   
   TH1F *mupt_1_stack_3 = new TH1F("mupt_1_stack_3","stack",25,0,1000);
   mupt_1_stack_3->SetBinContent(1,65.12164);
   mupt_1_stack_3->SetBinContent(2,130.4633);
   mupt_1_stack_3->SetBinContent(3,109.0677);
   mupt_1_stack_3->SetBinContent(4,82.9968);
   mupt_1_stack_3->SetBinContent(5,35.9817);
   mupt_1_stack_3->SetBinContent(6,13.50311);
   mupt_1_stack_3->SetBinContent(7,6.670041);
   mupt_1_stack_3->SetBinContent(8,3.853346);
   mupt_1_stack_3->SetBinContent(9,4.197372);
   mupt_1_stack_3->SetBinContent(10,1.007686);
   mupt_1_stack_3->SetBinContent(11,0.06520528);
   mupt_1_stack_3->SetBinContent(12,0.09469094);
   mupt_1_stack_3->SetBinContent(13,0.128532);
   mupt_1_stack_3->SetBinContent(14,0.006833088);
   mupt_1_stack_3->SetBinError(1,8.666752);
   mupt_1_stack_3->SetBinError(2,12.13556);
   mupt_1_stack_3->SetBinError(3,11.15471);
   mupt_1_stack_3->SetBinError(4,10.31266);
   mupt_1_stack_3->SetBinError(5,6.498047);
   mupt_1_stack_3->SetBinError(6,4.415334);
   mupt_1_stack_3->SetBinError(7,3.075942);
   mupt_1_stack_3->SetBinError(8,2.101399);
   mupt_1_stack_3->SetBinError(9,2.374915);
   mupt_1_stack_3->SetBinError(10,0.8150234);
   mupt_1_stack_3->SetBinError(11,0.03426232);
   mupt_1_stack_3->SetBinError(12,0.06717378);
   mupt_1_stack_3->SetBinError(13,0.128532);
   mupt_1_stack_3->SetBinError(14,0.006833088);
   mupt_1_stack_3->SetMinimum(0.001681186);
   mupt_1_stack_3->SetMaximum(2.346801e+08);
   mupt_1_stack_3->SetEntries(2901);
   mupt_1_stack_3->SetStats(0);
   mupt_1_stack_3->SetFillColor(4);
   mupt_1_stack_3->SetLineColor(4);
   mupt_1_stack_3->SetLineWidth(2);
   mupt_1_stack_3->SetMarkerColor(4);
   mupt_1_stack_3->SetMarkerStyle(21);
   mupt_1_stack_3->SetMarkerSize(0.8);
   mupt_1_stack_3->GetXaxis()->SetTitle("Leading muon p_{T} [GeV]");
   mupt_1_stack_3->GetXaxis()->SetRange(1,11);
   mupt_1_stack_3->GetXaxis()->SetLabelFont(42);
   mupt_1_stack_3->GetXaxis()->SetLabelOffset(0.007);
   mupt_1_stack_3->GetXaxis()->SetLabelSize(0);
   mupt_1_stack_3->GetXaxis()->SetTitleSize(0);
   mupt_1_stack_3->GetXaxis()->SetTickLength(0.02);
   mupt_1_stack_3->GetXaxis()->SetTitleOffset(0.9);
   mupt_1_stack_3->GetXaxis()->SetTitleFont(42);
   mupt_1_stack_3->GetYaxis()->SetTitle("Events");
   mupt_1_stack_3->GetYaxis()->SetLabelFont(42);
   mupt_1_stack_3->GetYaxis()->SetLabelOffset(0.007);
   mupt_1_stack_3->GetYaxis()->SetLabelSize(0.035);
   mupt_1_stack_3->GetYaxis()->SetTitleSize(0.045);
   mupt_1_stack_3->GetYaxis()->SetTickLength(0.02);
   mupt_1_stack_3->GetYaxis()->SetTitleOffset(1.55);
   mupt_1_stack_3->GetYaxis()->SetTitleFont(42);
   mupt_1_stack_3->GetZaxis()->SetLabelFont(42);
   mupt_1_stack_3->GetZaxis()->SetLabelOffset(0.007);
   mupt_1_stack_3->GetZaxis()->SetLabelSize(0.035);
   mupt_1_stack_3->GetZaxis()->SetTitleSize(0.045);
   mupt_1_stack_3->GetZaxis()->SetTickLength(0.02);
   mupt_1_stack_3->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mupt_1_stack_3);
   
   
   TH1F *mupt_1 = new TH1F("mupt_1","mupt_1",25,0,1000);
   mupt_1->SetBinContent(1,65.12164);
   mupt_1->SetBinContent(2,130.4633);
   mupt_1->SetBinContent(3,109.0677);
   mupt_1->SetBinContent(4,82.9968);
   mupt_1->SetBinContent(5,35.9817);
   mupt_1->SetBinContent(6,13.50311);
   mupt_1->SetBinContent(7,6.670041);
   mupt_1->SetBinContent(8,3.853346);
   mupt_1->SetBinContent(9,4.197372);
   mupt_1->SetBinContent(10,1.007686);
   mupt_1->SetBinContent(11,0.06520528);
   mupt_1->SetBinContent(12,0.09469094);
   mupt_1->SetBinContent(13,0.128532);
   mupt_1->SetBinContent(14,0.006833088);
   mupt_1->SetBinError(1,8.666752);
   mupt_1->SetBinError(2,12.13556);
   mupt_1->SetBinError(3,11.15471);
   mupt_1->SetBinError(4,10.31266);
   mupt_1->SetBinError(5,6.498047);
   mupt_1->SetBinError(6,4.415334);
   mupt_1->SetBinError(7,3.075942);
   mupt_1->SetBinError(8,2.101399);
   mupt_1->SetBinError(9,2.374915);
   mupt_1->SetBinError(10,0.8150234);
   mupt_1->SetBinError(11,0.03426232);
   mupt_1->SetBinError(12,0.06717378);
   mupt_1->SetBinError(13,0.128532);
   mupt_1->SetBinError(14,0.006833088);
   mupt_1->SetMinimum(0.01);
   mupt_1->SetMaximum(7.1325e+07);
   mupt_1->SetEntries(2901);
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
   mupt_1->SetBinContent(1,562.2332);
   mupt_1->SetBinContent(2,999.6554);
   mupt_1->SetBinContent(3,657.7488);
   mupt_1->SetBinContent(4,352.3637);
   mupt_1->SetBinContent(5,144.7827);
   mupt_1->SetBinContent(6,48.40161);
   mupt_1->SetBinContent(7,29.30299);
   mupt_1->SetBinContent(8,12.61115);
   mupt_1->SetBinContent(9,7.250215);
   mupt_1->SetBinContent(10,1.813286);
   mupt_1->SetBinContent(11,1.391456);
   mupt_1->SetBinContent(12,0.4624071);
   mupt_1->SetBinContent(13,0.01262209);
   mupt_1->SetBinContent(14,0.2093609);
   mupt_1->SetBinContent(16,0.5064438);
   mupt_1->SetBinError(1,15.34104);
   mupt_1->SetBinError(2,20.34139);
   mupt_1->SetBinError(3,17.3002);
   mupt_1->SetBinError(4,13.38887);
   mupt_1->SetBinError(5,8.840672);
   mupt_1->SetBinError(6,4.837991);
   mupt_1->SetBinError(7,4.108033);
   mupt_1->SetBinError(8,2.889885);
   mupt_1->SetBinError(9,2.157772);
   mupt_1->SetBinError(10,1.023857);
   mupt_1->SetBinError(11,0.8399329);
   mupt_1->SetBinError(12,0.3273586);
   mupt_1->SetBinError(13,0.01262209);
   mupt_1->SetBinError(14,0.2093609);
   mupt_1->SetBinError(16,0.5064438);
   mupt_1->SetEntries(11519);
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
   mupt_1->SetBinContent(1,1902.122);
   mupt_1->SetBinContent(2,3328.104);
   mupt_1->SetBinContent(3,2715.518);
   mupt_1->SetBinContent(4,1592.298);
   mupt_1->SetBinContent(5,767.6002);
   mupt_1->SetBinContent(6,336.1866);
   mupt_1->SetBinContent(7,155.797);
   mupt_1->SetBinContent(8,78.1293);
   mupt_1->SetBinContent(9,37.0183);
   mupt_1->SetBinContent(10,23.34729);
   mupt_1->SetBinContent(11,12.70438);
   mupt_1->SetBinContent(12,5.0597);
   mupt_1->SetBinContent(13,3.518532);
   mupt_1->SetBinContent(14,2.679278);
   mupt_1->SetBinContent(15,1.720438);
   mupt_1->SetBinContent(16,0.4813732);
   mupt_1->SetBinContent(17,0.8143492);
   mupt_1->SetBinContent(19,0.09870216);
   mupt_1->SetBinContent(20,0.3347972);
   mupt_1->SetBinError(1,30.41311);
   mupt_1->SetBinError(2,39.94287);
   mupt_1->SetBinError(3,36.55003);
   mupt_1->SetBinError(4,29.09718);
   mupt_1->SetBinError(5,20.79595);
   mupt_1->SetBinError(6,13.08606);
   mupt_1->SetBinError(7,8.873951);
   mupt_1->SetBinError(8,6.22344);
   mupt_1->SetBinError(9,4.316996);
   mupt_1->SetBinError(10,3.321639);
   mupt_1->SetBinError(11,2.370827);
   mupt_1->SetBinError(12,1.485084);
   mupt_1->SetBinError(13,1.076516);
   mupt_1->SetBinError(14,1.16686);
   mupt_1->SetBinError(15,0.7442072);
   mupt_1->SetBinError(16,0.4436998);
   mupt_1->SetBinError(17,0.4225708);
   mupt_1->SetBinError(19,0.09870216);
   mupt_1->SetBinError(20,0.3347972);
   mupt_1->SetEntries(44607);
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
   mupt_1->SetBinContent(1,340.026);
   mupt_1->SetBinContent(2,544.4352);
   mupt_1->SetBinContent(3,431.6104);
   mupt_1->SetBinContent(4,257.8811);
   mupt_1->SetBinContent(5,130.2343);
   mupt_1->SetBinContent(6,62.53866);
   mupt_1->SetBinContent(7,33.17823);
   mupt_1->SetBinContent(8,17.03255);
   mupt_1->SetBinContent(9,8.738643);
   mupt_1->SetBinContent(10,4.717877);
   mupt_1->SetBinContent(11,2.806294);
   mupt_1->SetBinContent(12,1.323028);
   mupt_1->SetBinContent(13,1.081771);
   mupt_1->SetBinContent(14,0.4632155);
   mupt_1->SetBinContent(15,0.2873217);
   mupt_1->SetBinContent(16,0.1879212);
   mupt_1->SetBinContent(17,0.09455064);
   mupt_1->SetBinContent(18,0.05655602);
   mupt_1->SetBinContent(19,0.1000443);
   mupt_1->SetBinContent(20,0.06148493);
   mupt_1->SetBinContent(21,0.06204107);
   mupt_1->SetBinContent(23,0.01899825);
   mupt_1->SetBinContent(24,0.02100997);
   mupt_1->SetBinContent(26,0.03994196);
   mupt_1->SetBinError(1,2.32709);
   mupt_1->SetBinError(2,2.946384);
   mupt_1->SetBinError(3,2.681962);
   mupt_1->SetBinError(4,2.18795);
   mupt_1->SetBinError(5,1.581792);
   mupt_1->SetBinError(6,1.104156);
   mupt_1->SetBinError(7,0.8103702);
   mupt_1->SetBinError(8,0.5792653);
   mupt_1->SetBinError(9,0.4082771);
   mupt_1->SetBinError(10,0.3050245);
   mupt_1->SetBinError(11,0.2365282);
   mupt_1->SetBinError(12,0.1550978);
   mupt_1->SetBinError(13,0.1479793);
   mupt_1->SetBinError(14,0.09222335);
   mupt_1->SetBinError(15,0.07894318);
   mupt_1->SetBinError(16,0.05562635);
   mupt_1->SetBinError(17,0.04148282);
   mupt_1->SetBinError(18,0.02861082);
   mupt_1->SetBinError(19,0.05069165);
   mupt_1->SetBinError(20,0.0355683);
   mupt_1->SetBinError(21,0.03582377);
   mupt_1->SetBinError(23,0.01899825);
   mupt_1->SetBinError(24,0.02100997);
   mupt_1->SetBinError(26,0.02735717);
   mupt_1->SetEntries(146745);
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
   mupt_1->SetBinContent(1,0.08691611);
   mupt_1->SetBinError(1,0.06251888);
   mupt_1->SetEntries(2);
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
   mupt_1->SetBinContent(1,91.42497);
   mupt_1->SetBinContent(2,220.6346);
   mupt_1->SetBinContent(3,248.4432);
   mupt_1->SetBinContent(4,160.3448);
   mupt_1->SetBinContent(5,76.617);
   mupt_1->SetBinContent(6,33.4684);
   mupt_1->SetBinContent(7,16.02252);
   mupt_1->SetBinContent(8,8.213573);
   mupt_1->SetBinContent(9,2.944436);
   mupt_1->SetBinContent(10,2.102079);
   mupt_1->SetBinContent(11,0.4835992);
   mupt_1->SetBinContent(12,0.7261605);
   mupt_1->SetBinContent(13,0.2377184);
   mupt_1->SetBinContent(14,0.07335831);
   mupt_1->SetBinContent(15,0.08073109);
   mupt_1->SetBinContent(17,0.01415311);
   mupt_1->SetBinContent(18,0.06784569);
   mupt_1->SetBinContent(20,0.03182879);
   mupt_1->SetBinError(1,2.895408);
   mupt_1->SetBinError(2,3.99104);
   mupt_1->SetBinError(3,4.150167);
   mupt_1->SetBinError(4,3.538355);
   mupt_1->SetBinError(5,2.574627);
   mupt_1->SetBinError(6,1.693625);
   mupt_1->SetBinError(7,1.185467);
   mupt_1->SetBinError(8,0.8530749);
   mupt_1->SetBinError(9,0.4306916);
   mupt_1->SetBinError(10,0.4058249);
   mupt_1->SetBinError(11,0.1990254);
   mupt_1->SetBinError(12,0.2637757);
   mupt_1->SetBinError(13,0.1398886);
   mupt_1->SetBinError(14,0.05133832);
   mupt_1->SetBinError(15,0.08073109);
   mupt_1->SetBinError(17,0.01415311);
   mupt_1->SetBinError(18,0.05904397);
   mupt_1->SetBinError(20,0.03182879);
   mupt_1->SetEntries(20514);
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
   mupt_1->SetBinContent(1,10.74704);
   mupt_1->SetBinContent(2,28.10232);
   mupt_1->SetBinContent(3,38.87223);
   mupt_1->SetBinContent(4,30.37855);
   mupt_1->SetBinContent(5,16.8879);
   mupt_1->SetBinContent(6,8.333036);
   mupt_1->SetBinContent(7,3.772777);
   mupt_1->SetBinContent(8,1.90517);
   mupt_1->SetBinContent(9,0.9646345);
   mupt_1->SetBinContent(10,0.5590199);
   mupt_1->SetBinContent(11,0.2700994);
   mupt_1->SetBinContent(12,0.3152373);
   mupt_1->SetBinContent(13,0.08080466);
   mupt_1->SetBinContent(14,0.06705917);
   mupt_1->SetBinContent(15,0.03663339);
   mupt_1->SetBinContent(16,0.03578652);
   mupt_1->SetBinContent(17,0.007184089);
   mupt_1->SetBinContent(18,0.003856452);
   mupt_1->SetBinError(1,0.2494783);
   mupt_1->SetBinError(2,0.4117616);
   mupt_1->SetBinError(3,0.5250913);
   mupt_1->SetBinError(4,0.5186538);
   mupt_1->SetBinError(5,0.4039399);
   mupt_1->SetBinError(6,0.2852347);
   mupt_1->SetBinError(7,0.1904568);
   mupt_1->SetBinError(8,0.1378971);
   mupt_1->SetBinError(9,0.09763817);
   mupt_1->SetBinError(10,0.07461355);
   mupt_1->SetBinError(11,0.05405903);
   mupt_1->SetBinError(12,0.05966208);
   mupt_1->SetBinError(13,0.0298365);
   mupt_1->SetBinError(14,0.02552886);
   mupt_1->SetBinError(15,0.01856449);
   mupt_1->SetBinError(16,0.01882127);
   mupt_1->SetBinError(17,0.004663795);
   mupt_1->SetBinError(18,0.002395254);
   mupt_1->SetEntries(28395);
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
   mupt_1->SetBinContent(1,2700);
   mupt_1->SetBinContent(2,4755);
   mupt_1->SetBinContent(3,3890);
   mupt_1->SetBinContent(4,2241);
   mupt_1->SetBinContent(5,1018);
   mupt_1->SetBinContent(6,462);
   mupt_1->SetBinContent(7,175);
   mupt_1->SetBinContent(8,95);
   mupt_1->SetBinContent(9,43);
   mupt_1->SetBinContent(10,22);
   mupt_1->SetBinContent(11,18);
   mupt_1->SetBinContent(12,5);
   mupt_1->SetBinContent(13,2);
   mupt_1->SetBinContent(14,1);
   mupt_1->SetBinContent(15,1);
   mupt_1->SetBinContent(16,3);
   mupt_1->SetBinContent(17,1);
   mupt_1->SetBinContent(18,1);
   mupt_1->SetBinError(1,51.96152);
   mupt_1->SetBinError(2,68.95651);
   mupt_1->SetBinError(3,62.36986);
   mupt_1->SetBinError(4,47.3392);
   mupt_1->SetBinError(5,31.90611);
   mupt_1->SetBinError(6,21.49419);
   mupt_1->SetBinError(7,13.22876);
   mupt_1->SetBinError(8,9.746794);
   mupt_1->SetBinError(9,6.557439);
   mupt_1->SetBinError(10,4.690416);
   mupt_1->SetBinError(11,4.242641);
   mupt_1->SetBinError(12,2.236068);
   mupt_1->SetBinError(13,1.414214);
   mupt_1->SetBinError(14,1);
   mupt_1->SetBinError(15,1);
   mupt_1->SetBinError(16,1.732051);
   mupt_1->SetBinError(17,1);
   mupt_1->SetBinError(18,1);
   mupt_1->SetEntries(15433);
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
   mupt_1->SetBinContent(1,0.9289075);
   mupt_1->SetBinContent(2,0.9285419);
   mupt_1->SetBinContent(3,0.9505907);
   mupt_1->SetBinContent(4,0.9363773);
   mupt_1->SetBinContent(5,0.8960305);
   mupt_1->SetBinContent(6,0.9449238);
   mupt_1->SetBinContent(7,0.7350672);
   mupt_1->SetBinContent(8,0.805824);
   mupt_1->SetBinContent(9,0.7554963);
   mupt_1->SetBinContent(10,0.6761002);
   mupt_1->SetBinContent(11,1.019493);
   mupt_1->SetBinContent(12,0.6339921);
   mupt_1->SetBinContent(13,0.4055604);
   mupt_1->SetBinContent(14,0.2863466);
   mupt_1->SetBinContent(15,0.4705606);
   mupt_1->SetBinContent(16,2.476218);
   mupt_1->SetBinContent(17,1.074995);
   mupt_1->SetBinContent(18,7.796775);
   mupt_1->SetBinError(1,0.02096429);
   mupt_1->SetBinError(2,0.01575424);
   mupt_1->SetBinError(3,0.01794052);
   mupt_1->SetBinError(4,0.02347322);
   mupt_1->SetBinError(5,0.03334772);
   mupt_1->SetBinError(6,0.05172288);
   mupt_1->SetBinError(7,0.06339674);
   mupt_1->SetBinError(8,0.09531847);
   mupt_1->SetBinError(9,0.1320665);
   mupt_1->SetBinError(10,0.1615775);
   mupt_1->SetBinError(11,0.2813612);
   mupt_1->SetBinError(12,0.3097782);
   mupt_1->SetBinError(13,0.3006079);
   mupt_1->SetBinError(14,0.3025263);
   mupt_1->SetBinError(15,0.4992237);
   mupt_1->SetBinError(16,1.988006);
   mupt_1->SetBinError(17,1.181809);
   mupt_1->SetBinError(18,8.758921);
   mupt_1->SetMinimum(0);
   mupt_1->SetMaximum(2);
   mupt_1->SetEntries(649.7735);
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
