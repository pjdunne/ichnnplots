{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:59 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.901176,1063.291,7.007012);
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
   stack->SetMaximum(1240271);
   
   TH1F *met_nomuons_stack_14 = new TH1F("met_nomuons_stack_14","stack",50,0,1000);
   met_nomuons_stack_14->SetBinContent(7,1.840054);
   met_nomuons_stack_14->SetBinContent(8,2.453251);
   met_nomuons_stack_14->SetBinContent(9,4.464701);
   met_nomuons_stack_14->SetBinContent(10,0.4261543);
   met_nomuons_stack_14->SetBinContent(11,0.227268);
   met_nomuons_stack_14->SetBinContent(12,4.814571);
   met_nomuons_stack_14->SetBinContent(13,2.503873);
   met_nomuons_stack_14->SetBinContent(14,0.3848357);
   met_nomuons_stack_14->SetBinContent(15,0.434868);
   met_nomuons_stack_14->SetBinContent(16,0.1012127);
   met_nomuons_stack_14->SetBinContent(17,0.0719116);
   met_nomuons_stack_14->SetBinContent(20,0.07569044);
   met_nomuons_stack_14->SetBinError(7,1.646228);
   met_nomuons_stack_14->SetBinError(8,1.399192);
   met_nomuons_stack_14->SetBinError(9,2.822763);
   met_nomuons_stack_14->SetBinError(10,0.2232119);
   met_nomuons_stack_14->SetBinError(11,0.1604977);
   met_nomuons_stack_14->SetBinError(12,2.920145);
   met_nomuons_stack_14->SetBinError(13,2.22566);
   met_nomuons_stack_14->SetBinError(14,0.2334427);
   met_nomuons_stack_14->SetBinError(15,0.2103247);
   met_nomuons_stack_14->SetBinError(16,0.07731793);
   met_nomuons_stack_14->SetBinError(17,0.07191161);
   met_nomuons_stack_14->SetBinError(20,0.07569044);
   met_nomuons_stack_14->SetMinimum(0.00198147);
   met_nomuons_stack_14->SetMaximum(3247901);
   met_nomuons_stack_14->SetEntries(49);
   met_nomuons_stack_14->SetStats(0);
   met_nomuons_stack_14->SetFillColor(4);
   met_nomuons_stack_14->SetLineColor(4);
   met_nomuons_stack_14->SetLineWidth(2);
   met_nomuons_stack_14->SetMarkerColor(4);
   met_nomuons_stack_14->SetMarkerStyle(21);
   met_nomuons_stack_14->SetMarkerSize(0.8);
   met_nomuons_stack_14->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons_stack_14->GetXaxis()->SetLabelFont(42);
   met_nomuons_stack_14->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_14->GetXaxis()->SetLabelSize(0);
   met_nomuons_stack_14->GetXaxis()->SetTitleSize(0);
   met_nomuons_stack_14->GetXaxis()->SetTickLength(0.02);
   met_nomuons_stack_14->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons_stack_14->GetXaxis()->SetTitleFont(42);
   met_nomuons_stack_14->GetYaxis()->SetTitle("Events");
   met_nomuons_stack_14->GetYaxis()->SetLabelFont(42);
   met_nomuons_stack_14->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_14->GetYaxis()->SetLabelSize(0.035);
   met_nomuons_stack_14->GetYaxis()->SetTitleSize(0.045);
   met_nomuons_stack_14->GetYaxis()->SetTickLength(0.02);
   met_nomuons_stack_14->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons_stack_14->GetYaxis()->SetTitleFont(42);
   met_nomuons_stack_14->GetZaxis()->SetLabelFont(42);
   met_nomuons_stack_14->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_14->GetZaxis()->SetLabelSize(0.035);
   met_nomuons_stack_14->GetZaxis()->SetTitleSize(0.045);
   met_nomuons_stack_14->GetZaxis()->SetTickLength(0.02);
   met_nomuons_stack_14->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_nomuons_stack_14);
   
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,1.840054);
   met_nomuons->SetBinContent(8,2.453251);
   met_nomuons->SetBinContent(9,4.464701);
   met_nomuons->SetBinContent(10,0.4261543);
   met_nomuons->SetBinContent(11,0.227268);
   met_nomuons->SetBinContent(12,4.814571);
   met_nomuons->SetBinContent(13,2.503873);
   met_nomuons->SetBinContent(14,0.3848357);
   met_nomuons->SetBinContent(15,0.434868);
   met_nomuons->SetBinContent(16,0.1012127);
   met_nomuons->SetBinContent(17,0.0719116);
   met_nomuons->SetBinContent(20,0.07569044);
   met_nomuons->SetBinError(7,1.646228);
   met_nomuons->SetBinError(8,1.399192);
   met_nomuons->SetBinError(9,2.822763);
   met_nomuons->SetBinError(10,0.2232119);
   met_nomuons->SetBinError(11,0.1604977);
   met_nomuons->SetBinError(12,2.920145);
   met_nomuons->SetBinError(13,2.22566);
   met_nomuons->SetBinError(14,0.2334427);
   met_nomuons->SetBinError(15,0.2103247);
   met_nomuons->SetBinError(16,0.07731793);
   met_nomuons->SetBinError(17,0.07191161);
   met_nomuons->SetBinError(20,0.07569044);
   met_nomuons->SetMinimum(0.01);
   met_nomuons->SetMaximum(862006.1);
   met_nomuons->SetEntries(49);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(4);
   met_nomuons->SetLineColor(4);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(4);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0);
   met_nomuons->GetXaxis()->SetTitleSize(0);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetTitle("Events");
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"HIST");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,4.452482);
   met_nomuons->SetBinContent(8,9.12035);
   met_nomuons->SetBinContent(9,8.090087);
   met_nomuons->SetBinContent(10,11.84254);
   met_nomuons->SetBinContent(11,15.64723);
   met_nomuons->SetBinContent(12,12.25348);
   met_nomuons->SetBinContent(13,8.159023);
   met_nomuons->SetBinContent(14,4.72279);
   met_nomuons->SetBinContent(15,5.559787);
   met_nomuons->SetBinContent(16,4.310076);
   met_nomuons->SetBinContent(17,3.0273);
   met_nomuons->SetBinContent(18,1.110034);
   met_nomuons->SetBinContent(19,0.01919866);
   met_nomuons->SetBinContent(20,2.191495);
   met_nomuons->SetBinContent(21,0.4583384);
   met_nomuons->SetBinError(7,1.545137);
   met_nomuons->SetBinError(8,2.434194);
   met_nomuons->SetBinError(9,2.305403);
   met_nomuons->SetBinError(10,2.857978);
   met_nomuons->SetBinError(11,3.388433);
   met_nomuons->SetBinError(12,2.954546);
   met_nomuons->SetBinError(13,2.530345);
   met_nomuons->SetBinError(14,1.633094);
   met_nomuons->SetBinError(15,2.083063);
   met_nomuons->SetBinError(16,1.812608);
   met_nomuons->SetBinError(17,1.581975);
   met_nomuons->SetBinError(18,0.8238942);
   met_nomuons->SetBinError(19,0.01919866);
   met_nomuons->SetBinError(20,1.28138);
   met_nomuons->SetBinError(21,0.4583384);
   met_nomuons->SetEntries(165);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(5);
   met_nomuons->SetLineColor(5);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(5);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,20.62164);
   met_nomuons->SetBinContent(8,47.70197);
   met_nomuons->SetBinContent(9,48.72439);
   met_nomuons->SetBinContent(10,57.46707);
   met_nomuons->SetBinContent(11,47.99142);
   met_nomuons->SetBinContent(12,34.95201);
   met_nomuons->SetBinContent(13,24.98297);
   met_nomuons->SetBinContent(14,19.82447);
   met_nomuons->SetBinContent(15,34.56043);
   met_nomuons->SetBinContent(16,16.13755);
   met_nomuons->SetBinContent(17,7.567769);
   met_nomuons->SetBinContent(18,9.487);
   met_nomuons->SetBinContent(19,4.672331);
   met_nomuons->SetBinContent(20,5.423911);
   met_nomuons->SetBinContent(21,4.792541);
   met_nomuons->SetBinContent(22,3.576892);
   met_nomuons->SetBinContent(23,2.814386);
   met_nomuons->SetBinContent(24,3.125269);
   met_nomuons->SetBinContent(25,0.8753148);
   met_nomuons->SetBinContent(27,0.1297146);
   met_nomuons->SetBinContent(31,0.3070954);
   met_nomuons->SetBinContent(34,1.433113);
   met_nomuons->SetBinContent(35,0.4483769);
   met_nomuons->SetBinError(7,4.951335);
   met_nomuons->SetBinError(8,7.022669);
   met_nomuons->SetBinError(9,6.120752);
   met_nomuons->SetBinError(10,7.284452);
   met_nomuons->SetBinError(11,5.885588);
   met_nomuons->SetBinError(12,5.838955);
   met_nomuons->SetBinError(13,4.262853);
   met_nomuons->SetBinError(14,3.70465);
   met_nomuons->SetBinError(15,5.362394);
   met_nomuons->SetBinError(16,3.020567);
   met_nomuons->SetBinError(17,2.283298);
   met_nomuons->SetBinError(18,2.812691);
   met_nomuons->SetBinError(19,1.922472);
   met_nomuons->SetBinError(20,1.923334);
   met_nomuons->SetBinError(21,1.975606);
   met_nomuons->SetBinError(22,1.453873);
   met_nomuons->SetBinError(23,1.237688);
   met_nomuons->SetBinError(24,1.553428);
   met_nomuons->SetBinError(25,0.6189463);
   met_nomuons->SetBinError(27,0.1297146);
   met_nomuons->SetBinError(31,0.3070954);
   met_nomuons->SetBinError(34,1.021598);
   met_nomuons->SetBinError(35,0.4483769);
   met_nomuons->SetEntries(732);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(6);
   met_nomuons->SetLineColor(6);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(6);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,2.904802);
   met_nomuons->SetBinContent(8,6.718109);
   met_nomuons->SetBinContent(9,10.30758);
   met_nomuons->SetBinContent(10,10.84819);
   met_nomuons->SetBinContent(11,11.81209);
   met_nomuons->SetBinContent(12,9.823745);
   met_nomuons->SetBinContent(13,10.33441);
   met_nomuons->SetBinContent(14,9.212849);
   met_nomuons->SetBinContent(15,7.732983);
   met_nomuons->SetBinContent(16,6.240097);
   met_nomuons->SetBinContent(17,4.881462);
   met_nomuons->SetBinContent(18,4.115738);
   met_nomuons->SetBinContent(19,3.092259);
   met_nomuons->SetBinContent(20,1.836035);
   met_nomuons->SetBinContent(21,1.877259);
   met_nomuons->SetBinContent(22,1.295401);
   met_nomuons->SetBinContent(23,1.086358);
   met_nomuons->SetBinContent(24,0.6066279);
   met_nomuons->SetBinContent(25,0.5136264);
   met_nomuons->SetBinContent(26,0.5654559);
   met_nomuons->SetBinContent(27,0.3562309);
   met_nomuons->SetBinContent(28,0.172952);
   met_nomuons->SetBinContent(29,0.2198217);
   met_nomuons->SetBinContent(30,0.04278497);
   met_nomuons->SetBinContent(31,0.06516206);
   met_nomuons->SetBinContent(32,0.1299186);
   met_nomuons->SetBinContent(33,0.02494225);
   met_nomuons->SetBinContent(34,0.02059319);
   met_nomuons->SetBinContent(35,0.05849544);
   met_nomuons->SetBinContent(36,0.03111335);
   met_nomuons->SetBinContent(38,0.009289274);
   met_nomuons->SetBinContent(51,0.02100997);
   met_nomuons->SetBinError(7,0.2326102);
   met_nomuons->SetBinError(8,0.3644284);
   met_nomuons->SetBinError(9,0.4539011);
   met_nomuons->SetBinError(10,0.4718308);
   met_nomuons->SetBinError(11,0.4990027);
   met_nomuons->SetBinError(12,0.4483119);
   met_nomuons->SetBinError(13,0.4632516);
   met_nomuons->SetBinError(14,0.437679);
   met_nomuons->SetBinError(15,0.3995755);
   met_nomuons->SetBinError(16,0.3604104);
   met_nomuons->SetBinError(17,0.3208047);
   met_nomuons->SetBinError(18,0.2981995);
   met_nomuons->SetBinError(19,0.2596995);
   met_nomuons->SetBinError(20,0.195219);
   met_nomuons->SetBinError(21,0.1983647);
   met_nomuons->SetBinError(22,0.1669125);
   met_nomuons->SetBinError(23,0.1481868);
   met_nomuons->SetBinError(24,0.1105713);
   met_nomuons->SetBinError(25,0.1008513);
   met_nomuons->SetBinError(26,0.1042914);
   met_nomuons->SetBinError(27,0.08499805);
   met_nomuons->SetBinError(28,0.05867531);
   met_nomuons->SetBinError(29,0.07466755);
   met_nomuons->SetBinError(30,0.03002506);
   met_nomuons->SetBinError(31,0.03373846);
   met_nomuons->SetBinError(32,0.05398603);
   met_nomuons->SetBinError(33,0.02087968);
   met_nomuons->SetBinError(34,0.02059319);
   met_nomuons->SetBinError(35,0.03559365);
   met_nomuons->SetBinError(36,0.0308209);
   met_nomuons->SetBinError(38,0.009289274);
   met_nomuons->SetBinError(51,0.02100997);
   met_nomuons->SetEntries(5990);
   met_nomuons->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met_nomuons->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met_nomuons->SetLineColor(ci);
   met_nomuons->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met_nomuons->SetMarkerColor(ci);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,1.064039);
   met_nomuons->SetBinContent(8,2.534559);
   met_nomuons->SetBinContent(9,2.783787);
   met_nomuons->SetBinContent(10,1.549066);
   met_nomuons->SetBinContent(11,1.674952);
   met_nomuons->SetBinContent(12,1.6738);
   met_nomuons->SetBinContent(13,1.976282);
   met_nomuons->SetBinContent(14,1.242195);
   met_nomuons->SetBinContent(15,0.8055687);
   met_nomuons->SetBinContent(16,0.1655267);
   met_nomuons->SetBinContent(17,0.08446104);
   met_nomuons->SetBinContent(18,0.2986131);
   met_nomuons->SetBinContent(19,0.225923);
   met_nomuons->SetBinContent(20,0.3577989);
   met_nomuons->SetBinContent(24,0.2044777);
   met_nomuons->SetBinContent(25,0.1265395);
   met_nomuons->SetBinError(7,0.3675462);
   met_nomuons->SetBinError(8,0.5588331);
   met_nomuons->SetBinError(9,0.6891025);
   met_nomuons->SetBinError(10,0.3909551);
   met_nomuons->SetBinError(11,0.4155408);
   met_nomuons->SetBinError(12,0.5334977);
   met_nomuons->SetBinError(13,0.6341578);
   met_nomuons->SetBinError(14,0.4030069);
   met_nomuons->SetBinError(15,0.2986818);
   met_nomuons->SetBinError(16,0.1177152);
   met_nomuons->SetBinError(17,0.08446104);
   met_nomuons->SetBinError(18,0.2265433);
   met_nomuons->SetBinError(19,0.1613636);
   met_nomuons->SetBinError(20,0.1816808);
   met_nomuons->SetBinError(24,0.1448605);
   met_nomuons->SetBinError(25,0.1265395);
   met_nomuons->SetEntries(174);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.1453124);
   met_nomuons->SetBinContent(8,0.5049101);
   met_nomuons->SetBinContent(9,0.5454931);
   met_nomuons->SetBinContent(10,0.5516789);
   met_nomuons->SetBinContent(11,0.6585184);
   met_nomuons->SetBinContent(12,0.368625);
   met_nomuons->SetBinContent(13,0.2455775);
   met_nomuons->SetBinContent(14,0.5368328);
   met_nomuons->SetBinContent(15,0.3767056);
   met_nomuons->SetBinContent(16,0.1361397);
   met_nomuons->SetBinContent(17,0.1706356);
   met_nomuons->SetBinContent(18,0.0268743);
   met_nomuons->SetBinContent(19,0.06972587);
   met_nomuons->SetBinContent(20,0.02883661);
   met_nomuons->SetBinContent(21,0.01356256);
   met_nomuons->SetBinContent(22,0.006328322);
   met_nomuons->SetBinContent(23,0.02110812);
   met_nomuons->SetBinContent(24,0.003827302);
   met_nomuons->SetBinContent(25,0.006762422);
   met_nomuons->SetBinContent(30,0.02286724);
   met_nomuons->SetBinContent(35,0.003141607);
   met_nomuons->SetBinError(7,0.03396161);
   met_nomuons->SetBinError(8,0.06847921);
   met_nomuons->SetBinError(9,0.07201527);
   met_nomuons->SetBinError(10,0.07177986);
   met_nomuons->SetBinError(11,0.08127336);
   met_nomuons->SetBinError(12,0.05681563);
   met_nomuons->SetBinError(13,0.04791859);
   met_nomuons->SetBinError(14,0.07599716);
   met_nomuons->SetBinError(15,0.06552066);
   met_nomuons->SetBinError(16,0.03662113);
   met_nomuons->SetBinError(17,0.04483002);
   met_nomuons->SetBinError(18,0.01368358);
   met_nomuons->SetBinError(19,0.02601871);
   met_nomuons->SetBinError(20,0.01557284);
   met_nomuons->SetBinError(21,0.008235327);
   met_nomuons->SetBinError(22,0.006328322);
   met_nomuons->SetBinError(23,0.01571674);
   met_nomuons->SetBinError(24,0.003827302);
   met_nomuons->SetBinError(25,0.006762422);
   met_nomuons->SetBinError(30,0.01700013);
   met_nomuons->SetBinError(35,0.002335556);
   met_nomuons->SetEntries(592);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   stack->Draw("hist");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,17);
   met_nomuons->SetBinContent(8,54);
   met_nomuons->SetBinContent(9,52);
   met_nomuons->SetBinContent(10,49);
   met_nomuons->SetBinContent(11,46);
   met_nomuons->SetBinContent(12,45);
   met_nomuons->SetBinContent(13,51);
   met_nomuons->SetBinContent(14,29);
   met_nomuons->SetBinContent(15,28);
   met_nomuons->SetBinContent(16,18);
   met_nomuons->SetBinContent(17,16);
   met_nomuons->SetBinContent(18,8);
   met_nomuons->SetBinContent(19,4);
   met_nomuons->SetBinContent(20,1);
   met_nomuons->SetBinContent(21,4);
   met_nomuons->SetBinContent(23,2);
   met_nomuons->SetBinContent(25,4);
   met_nomuons->SetBinContent(27,2);
   met_nomuons->SetBinContent(29,1);
   met_nomuons->SetBinContent(35,1);
   met_nomuons->SetBinError(7,4.123106);
   met_nomuons->SetBinError(8,7.348469);
   met_nomuons->SetBinError(9,7.211103);
   met_nomuons->SetBinError(10,7);
   met_nomuons->SetBinError(11,6.78233);
   met_nomuons->SetBinError(12,6.708204);
   met_nomuons->SetBinError(13,7.141428);
   met_nomuons->SetBinError(14,5.385165);
   met_nomuons->SetBinError(15,5.291503);
   met_nomuons->SetBinError(16,4.242641);
   met_nomuons->SetBinError(17,4);
   met_nomuons->SetBinError(18,2.828427);
   met_nomuons->SetBinError(19,2);
   met_nomuons->SetBinError(20,1);
   met_nomuons->SetBinError(21,2);
   met_nomuons->SetBinError(23,1.414214);
   met_nomuons->SetBinError(25,2);
   met_nomuons->SetBinError(27,1.414214);
   met_nomuons->SetBinError(29,1);
   met_nomuons->SetBinError(35,1);
   met_nomuons->SetEntries(432);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(1);
   met_nomuons->SetFillStyle(0);
   met_nomuons->SetLineWidth(3);
   met_nomuons->SetMarkerStyle(20);
   met_nomuons->SetMarkerSize(1.3);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   met_nomuons->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("met_nomuons","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met_nomuons","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","EWK W+jets","f");

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
   entry=leg->AddEntry("met_nomuons","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","Dibosons","f");
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
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.5824257);
   met_nomuons->SetBinContent(8,0.8110555);
   met_nomuons->SetBinContent(9,0.738098);
   met_nomuons->SetBinContent(10,0.5956827);
   met_nomuons->SetBinContent(11,0.5913797);
   met_nomuons->SetBinContent(12,0.7617865);
   met_nomuons->SetBinContent(13,1.116016);
   met_nomuons->SetBinContent(14,0.816002);
   met_nomuons->SetBinContent(15,0.5710152);
   met_nomuons->SetBinContent(16,0.6669288);
   met_nomuons->SetBinContent(17,1.017059);
   met_nomuons->SetBinContent(18,0.5319764);
   met_nomuons->SetBinContent(19,0.4950839);
   met_nomuons->SetBinContent(20,0.1016459);
   met_nomuons->SetBinContent(21,0.5600907);
   met_nomuons->SetBinContent(23,0.5099632);
   met_nomuons->SetBinContent(25,2.627701);
   met_nomuons->SetBinContent(27,4.115688);
   met_nomuons->SetBinContent(29,4.549141);
   met_nomuons->SetBinContent(35,1.960731);
   met_nomuons->SetBinError(7,0.1753334);
   met_nomuons->SetBinError(8,0.1429901);
   met_nomuons->SetBinError(9,0.1234805);
   met_nomuons->SetBinError(10,0.1023355);
   met_nomuons->SetBinError(11,0.1014571);
   met_nomuons->SetBinError(12,0.1417708);
   met_nomuons->SetBinError(13,0.1986127);
   met_nomuons->SetBinError(14,0.1783024);
   met_nomuons->SetBinError(15,0.1271496);
   met_nomuons->SetBinError(16,0.1799356);
   met_nomuons->SetBinError(17,0.3120416);
   met_nomuons->SetBinError(18,0.2151743);
   met_nomuons->SetBinError(19,0.2747901);
   met_nomuons->SetBinError(20,0.1044493);
   met_nomuons->SetBinError(21,0.322437);
   met_nomuons->SetBinError(23,0.3953577);
   met_nomuons->SetBinError(25,1.716361);
   met_nomuons->SetBinError(27,3.192902);
   met_nomuons->SetBinError(29,4.804414);
   met_nomuons->SetBinError(35,2.614317);
   met_nomuons->SetMinimum(0);
   met_nomuons->SetMaximum(2);
   met_nomuons->SetEntries(12.85238);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillStyle(0);
   met_nomuons->SetMarkerStyle(20);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.1);
   met_nomuons->GetXaxis()->SetTitleSize(0.12);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetTitle("Data/MC");
   met_nomuons->GetYaxis()->SetNdivisions(505);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.1);
   met_nomuons->GetYaxis()->SetTitleSize(0.12);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(0.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   met_nomuons->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
