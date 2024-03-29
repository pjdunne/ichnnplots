{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:56:41 2013) by ROOT version5.32/00
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
   upper->Range(-44.55696,-10.93333,233.9241,535.7333);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
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
   stack->SetMaximum(484.1904);
   
   TH1F *taupt_1_stack_5 = new TH1F("taupt_1_stack_5","stack",50,0,1000);
   taupt_1_stack_5->SetBinContent(2,7.297241);
   taupt_1_stack_5->SetBinContent(3,3.024002);
   taupt_1_stack_5->SetBinContent(4,0.343813);
   taupt_1_stack_5->SetBinContent(5,0.03545951);
   taupt_1_stack_5->SetBinContent(6,0.1379028);
   taupt_1_stack_5->SetBinContent(7,0.03063271);
   taupt_1_stack_5->SetBinError(2,3.105491);
   taupt_1_stack_5->SetBinError(3,2.037015);
   taupt_1_stack_5->SetBinError(4,0.1776461);
   taupt_1_stack_5->SetBinError(5,0.02514438);
   taupt_1_stack_5->SetBinError(6,0.0721093);
   taupt_1_stack_5->SetBinError(7,0.03063271);
   taupt_1_stack_5->SetMinimum(0);
   taupt_1_stack_5->SetMaximum(508.3999);
   taupt_1_stack_5->SetEntries(86);
   taupt_1_stack_5->SetStats(0);
   taupt_1_stack_5->SetFillColor(4);
   taupt_1_stack_5->SetLineColor(4);
   taupt_1_stack_5->SetLineWidth(2);
   taupt_1_stack_5->SetMarkerColor(4);
   taupt_1_stack_5->SetMarkerStyle(21);
   taupt_1_stack_5->SetMarkerSize(0.8);
   taupt_1_stack_5->GetXaxis()->SetTitle("Leading tau p_{T} [GeV]");
   taupt_1_stack_5->GetXaxis()->SetRange(1,11);
   taupt_1_stack_5->GetXaxis()->SetLabelFont(42);
   taupt_1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   taupt_1_stack_5->GetXaxis()->SetLabelSize(0);
   taupt_1_stack_5->GetXaxis()->SetTitleSize(0);
   taupt_1_stack_5->GetXaxis()->SetTickLength(0.02);
   taupt_1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   taupt_1_stack_5->GetXaxis()->SetTitleFont(42);
   taupt_1_stack_5->GetYaxis()->SetTitle("Events");
   taupt_1_stack_5->GetYaxis()->SetLabelFont(42);
   taupt_1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   taupt_1_stack_5->GetYaxis()->SetLabelSize(0.035);
   taupt_1_stack_5->GetYaxis()->SetTitleSize(0.045);
   taupt_1_stack_5->GetYaxis()->SetTickLength(0.02);
   taupt_1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   taupt_1_stack_5->GetYaxis()->SetTitleFont(42);
   taupt_1_stack_5->GetZaxis()->SetLabelFont(42);
   taupt_1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   taupt_1_stack_5->GetZaxis()->SetLabelSize(0.035);
   taupt_1_stack_5->GetZaxis()->SetTitleSize(0.045);
   taupt_1_stack_5->GetZaxis()->SetTickLength(0.02);
   taupt_1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taupt_1_stack_5);
   
   
   TH1F *taupt_1 = new TH1F("taupt_1","taupt_1",50,0,1000);
   taupt_1->SetBinContent(2,7.297241);
   taupt_1->SetBinContent(3,3.024002);
   taupt_1->SetBinContent(4,0.343813);
   taupt_1->SetBinContent(5,0.03545951);
   taupt_1->SetBinContent(6,0.1379028);
   taupt_1->SetBinContent(7,0.03063271);
   taupt_1->SetBinError(2,3.105491);
   taupt_1->SetBinError(3,2.037015);
   taupt_1->SetBinError(4,0.1776461);
   taupt_1->SetBinError(5,0.02514438);
   taupt_1->SetBinError(6,0.0721093);
   taupt_1->SetBinError(7,0.03063271);
   taupt_1->SetMaximum(2624.16);
   taupt_1->SetEntries(86);
   taupt_1->SetStats(0);
   taupt_1->SetFillColor(4);
   taupt_1->SetLineColor(4);
   taupt_1->SetLineWidth(2);
   taupt_1->SetMarkerColor(4);
   taupt_1->SetMarkerStyle(21);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetTitle("Leading tau p_{T} [GeV]");
   taupt_1->GetXaxis()->SetRange(1,11);
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
   taupt_1->SetBinContent(2,54.45945);
   taupt_1->SetBinContent(3,17.29169);
   taupt_1->SetBinContent(4,4.829359);
   taupt_1->SetBinContent(5,2.045628);
   taupt_1->SetBinContent(6,0.2943209);
   taupt_1->SetBinError(2,5.244333);
   taupt_1->SetBinError(3,2.946264);
   taupt_1->SetBinError(4,1.516611);
   taupt_1->SetBinError(5,0.9914655);
   taupt_1->SetBinError(6,0.2943209);
   taupt_1->SetEntries(242);
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
   taupt_1->SetBinContent(2,222.5388);
   taupt_1->SetBinContent(3,89.83691);
   taupt_1->SetBinContent(4,21.19275);
   taupt_1->SetBinContent(5,8.945737);
   taupt_1->SetBinContent(6,5.0453);
   taupt_1->SetBinContent(7,2.047302);
   taupt_1->SetBinContent(8,0.5276958);
   taupt_1->SetBinContent(9,0.3488577);
   taupt_1->SetBinError(2,12.55074);
   taupt_1->SetBinError(3,7.123321);
   taupt_1->SetBinError(4,3.427444);
   taupt_1->SetBinError(5,1.822713);
   taupt_1->SetBinError(6,1.927274);
   taupt_1->SetBinError(7,0.8115253);
   taupt_1->SetBinError(8,0.5276958);
   taupt_1->SetBinError(9,0.3488577);
   taupt_1->SetEntries(1034);
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
   taupt_1->SetBinContent(2,55.87691);
   taupt_1->SetBinContent(3,23.13384);
   taupt_1->SetBinContent(4,8.536244);
   taupt_1->SetBinContent(5,3.397071);
   taupt_1->SetBinContent(6,1.240118);
   taupt_1->SetBinContent(7,0.5221116);
   taupt_1->SetBinContent(8,0.1695266);
   taupt_1->SetBinContent(9,0.1162032);
   taupt_1->SetBinContent(10,0.09029457);
   taupt_1->SetBinContent(11,0.0483579);
   taupt_1->SetBinContent(12,0.008741542);
   taupt_1->SetBinError(2,0.9557145);
   taupt_1->SetBinError(3,0.6154065);
   taupt_1->SetBinError(4,0.3793492);
   taupt_1->SetBinError(5,0.2449571);
   taupt_1->SetBinError(6,0.1445608);
   taupt_1->SetBinError(7,0.09639143);
   taupt_1->SetBinError(8,0.05317771);
   taupt_1->SetBinError(9,0.04643115);
   taupt_1->SetBinError(10,0.04180025);
   taupt_1->SetBinError(11,0.03472292);
   taupt_1->SetBinError(12,0.008741542);
   taupt_1->SetEntries(7302);
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
   taupt_1->SetBinContent(2,8.935623);
   taupt_1->SetBinContent(3,2.628894);
   taupt_1->SetBinContent(4,3.950797);
   taupt_1->SetBinContent(5,1.328554);
   taupt_1->SetBinContent(6,0.7416606);
   taupt_1->SetBinContent(7,0.2779691);
   taupt_1->SetBinContent(8,0.1687733);
   taupt_1->SetBinContent(9,0.1106946);
   taupt_1->SetBinContent(10,0.1257809);
   taupt_1->SetBinError(2,1.469323);
   taupt_1->SetBinError(3,0.8853066);
   taupt_1->SetBinError(4,1.162188);
   taupt_1->SetBinError(5,0.794717);
   taupt_1->SetBinError(6,0.3305896);
   taupt_1->SetBinError(7,0.2076073);
   taupt_1->SetBinError(8,0.1687733);
   taupt_1->SetBinError(9,0.1106946);
   taupt_1->SetBinError(10,0.1257809);
   taupt_1->SetEntries(142);
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
   taupt_1->SetBinContent(2,14.91004);
   taupt_1->SetBinContent(3,5.558329);
   taupt_1->SetBinContent(4,2.486534);
   taupt_1->SetBinContent(5,1.272946);
   taupt_1->SetBinContent(6,0.3528832);
   taupt_1->SetBinContent(7,0.1423649);
   taupt_1->SetBinContent(8,0.09788276);
   taupt_1->SetBinContent(9,0.1443503);
   taupt_1->SetBinContent(10,0.1181421);
   taupt_1->SetBinError(2,1.586022);
   taupt_1->SetBinError(3,0.6932047);
   taupt_1->SetBinError(4,0.4534694);
   taupt_1->SetBinError(5,0.3400045);
   taupt_1->SetBinError(6,0.2563668);
   taupt_1->SetBinError(7,0.1011434);
   taupt_1->SetBinError(8,0.06957255);
   taupt_1->SetBinError(9,0.1059948);
   taupt_1->SetBinError(10,0.1181421);
   taupt_1->SetEntries(406);
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
   taupt_1->SetBinContent(2,2.79286);
   taupt_1->SetBinContent(3,1.492798);
   taupt_1->SetBinContent(4,0.7365046);
   taupt_1->SetBinContent(5,0.2745429);
   taupt_1->SetBinContent(6,0.1590305);
   taupt_1->SetBinContent(7,0.0468966);
   taupt_1->SetBinContent(8,0.03783283);
   taupt_1->SetBinContent(9,0.02619327);
   taupt_1->SetBinError(2,0.1214609);
   taupt_1->SetBinError(3,0.08983436);
   taupt_1->SetBinError(4,0.06391166);
   taupt_1->SetBinError(5,0.03967078);
   taupt_1->SetBinError(6,0.03079253);
   taupt_1->SetBinError(7,0.01953156);
   taupt_1->SetBinError(8,0.01759836);
   taupt_1->SetBinError(9,0.01370155);
   taupt_1->SetEntries(1384);
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
   taupt_1->SetBinContent(2,1988);
   taupt_1->SetBinContent(3,578);
   taupt_1->SetBinContent(4,288);
   taupt_1->SetBinContent(5,164);
   taupt_1->SetBinContent(6,86);
   taupt_1->SetBinContent(7,56);
   taupt_1->SetBinContent(8,25);
   taupt_1->SetBinContent(9,16);
   taupt_1->SetBinContent(10,11);
   taupt_1->SetBinContent(11,4);
   taupt_1->SetBinContent(12,2);
   taupt_1->SetBinContent(13,4);
   taupt_1->SetBinContent(19,1);
   taupt_1->SetBinError(2,44.58699);
   taupt_1->SetBinError(3,24.04163);
   taupt_1->SetBinError(4,16.97056);
   taupt_1->SetBinError(5,12.80625);
   taupt_1->SetBinError(6,9.273618);
   taupt_1->SetBinError(7,7.483315);
   taupt_1->SetBinError(8,5);
   taupt_1->SetBinError(9,4);
   taupt_1->SetBinError(10,3.316625);
   taupt_1->SetBinError(11,2);
   taupt_1->SetBinError(12,1.414214);
   taupt_1->SetBinError(13,2);
   taupt_1->SetBinError(19,1);
   taupt_1->SetEntries(3223);
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
   lower->Range(-44.55696,-0.653951,233.9241,2.070845);
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
   taupt_1->SetBinContent(2,5.529692);
   taupt_1->SetBinContent(3,4.130269);
   taupt_1->SetBinContent(4,6.901147);
   taupt_1->SetBinContent(5,9.499272);
   taupt_1->SetBinContent(6,10.97875);
   taupt_1->SetBinContent(7,18.44141);
   taupt_1->SetBinContent(8,24.95729);
   taupt_1->SetBinContent(9,21.43912);
   taupt_1->SetBinContent(10,32.91269);
   taupt_1->SetBinContent(11,82.71657);
   taupt_1->SetBinContent(12,228.7926);
   taupt_1->SetBinError(2,0.2459243);
   taupt_1->SetBinError(3,0.2875999);
   taupt_1->SetBinError(4,0.7720894);
   taupt_1->SetBinError(5,1.448606);
   taupt_1->SetBinError(6,3.042153);
   taupt_1->SetBinError(7,5.717105);
   taupt_1->SetBinError(8,14.84592);
   taupt_1->SetBinError(9,12.26703);
   taupt_1->SetBinError(10,20.10479);
   taupt_1->SetBinError(11,72.37496);
   taupt_1->SetBinError(12,280.2126);
   taupt_1->SetMinimum(0);
   taupt_1->SetMaximum(2);
   taupt_1->SetEntries(7.80934);
   taupt_1->SetStats(0);
   taupt_1->SetFillStyle(0);
   taupt_1->SetMarkerStyle(20);
   taupt_1->SetMarkerSize(0.8);
   taupt_1->GetXaxis()->SetTitle("Leading tau p_{T} [GeV]");
   taupt_1->GetXaxis()->SetRange(1,11);
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
