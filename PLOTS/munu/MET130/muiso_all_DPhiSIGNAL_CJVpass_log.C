{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:48 2013) by ROOT version5.32/00
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
   upper->Range(-0.4050633,-2.949977,2.126582,7.830624);
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
   stack->SetMaximum(7065467);
   
   TH1F *muiso_all_stack_14 = new TH1F("muiso_all_stack_14","stack",100,0,2);
   muiso_all_stack_14->SetBinContent(1,9.941998);
   muiso_all_stack_14->SetBinContent(2,3.082855);
   muiso_all_stack_14->SetBinContent(3,1.713293);
   muiso_all_stack_14->SetBinContent(4,2.082297);
   muiso_all_stack_14->SetBinContent(5,0.1128355);
   muiso_all_stack_14->SetBinContent(6,0.8651122);
   muiso_all_stack_14->SetBinError(1,3.704788);
   muiso_all_stack_14->SetBinError(2,2.318494);
   muiso_all_stack_14->SetBinError(3,1.644159);
   muiso_all_stack_14->SetBinError(4,1.966644);
   muiso_all_stack_14->SetBinError(5,0.07984626);
   muiso_all_stack_14->SetBinError(6,0.7934831);
   muiso_all_stack_14->SetMinimum(0.001843464);
   muiso_all_stack_14->SetMaximum(1.957013e+07);
   muiso_all_stack_14->SetEntries(49);
   muiso_all_stack_14->SetStats(0);
   muiso_all_stack_14->SetFillColor(4);
   muiso_all_stack_14->SetLineColor(4);
   muiso_all_stack_14->SetLineWidth(2);
   muiso_all_stack_14->SetMarkerColor(4);
   muiso_all_stack_14->SetMarkerStyle(21);
   muiso_all_stack_14->SetMarkerSize(0.8);
   muiso_all_stack_14->GetXaxis()->SetTitle("Muon iso");
   muiso_all_stack_14->GetXaxis()->SetLabelFont(42);
   muiso_all_stack_14->GetXaxis()->SetLabelOffset(0.007);
   muiso_all_stack_14->GetXaxis()->SetLabelSize(0);
   muiso_all_stack_14->GetXaxis()->SetTitleSize(0);
   muiso_all_stack_14->GetXaxis()->SetTickLength(0.02);
   muiso_all_stack_14->GetXaxis()->SetTitleOffset(0.9);
   muiso_all_stack_14->GetXaxis()->SetTitleFont(42);
   muiso_all_stack_14->GetYaxis()->SetTitle("Events");
   muiso_all_stack_14->GetYaxis()->SetLabelFont(42);
   muiso_all_stack_14->GetYaxis()->SetLabelOffset(0.007);
   muiso_all_stack_14->GetYaxis()->SetLabelSize(0.035);
   muiso_all_stack_14->GetYaxis()->SetTitleSize(0.045);
   muiso_all_stack_14->GetYaxis()->SetTickLength(0.02);
   muiso_all_stack_14->GetYaxis()->SetTitleOffset(1.55);
   muiso_all_stack_14->GetYaxis()->SetTitleFont(42);
   muiso_all_stack_14->GetZaxis()->SetLabelFont(42);
   muiso_all_stack_14->GetZaxis()->SetLabelOffset(0.007);
   muiso_all_stack_14->GetZaxis()->SetLabelSize(0.035);
   muiso_all_stack_14->GetZaxis()->SetTitleSize(0.045);
   muiso_all_stack_14->GetZaxis()->SetTickLength(0.02);
   muiso_all_stack_14->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(muiso_all_stack_14);
   
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,9.941998);
   muiso_all->SetBinContent(2,3.082855);
   muiso_all->SetBinContent(3,1.713293);
   muiso_all->SetBinContent(4,2.082297);
   muiso_all->SetBinContent(5,0.1128355);
   muiso_all->SetBinContent(6,0.8651122);
   muiso_all->SetBinError(1,3.704788);
   muiso_all->SetBinError(2,2.318494);
   muiso_all->SetBinError(3,1.644159);
   muiso_all->SetBinError(4,1.966644);
   muiso_all->SetBinError(5,0.07984626);
   muiso_all->SetBinError(6,0.7934831);
   muiso_all->SetMinimum(0.01);
   muiso_all->SetMaximum(4557484);
   muiso_all->SetEntries(49);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(4);
   muiso_all->SetLineColor(4);
   muiso_all->SetLineWidth(2);
   muiso_all->SetMarkerColor(4);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetTitle("Muon iso");
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0);
   muiso_all->GetXaxis()->SetTitleSize(0);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetTitle("Events");
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"HIST");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,56.13216);
   muiso_all->SetBinContent(2,13.35932);
   muiso_all->SetBinContent(3,10.72661);
   muiso_all->SetBinContent(4,4.837898);
   muiso_all->SetBinContent(5,5.194619);
   muiso_all->SetBinContent(6,0.7136136);
   muiso_all->SetBinError(1,6.315437);
   muiso_all->SetBinError(2,2.908731);
   muiso_all->SetBinError(3,2.720738);
   muiso_all->SetBinError(4,2.009874);
   muiso_all->SetBinError(5,1.854169);
   muiso_all->SetBinError(6,0.7136135);
   muiso_all->SetEntries(165);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(5);
   muiso_all->SetLineColor(5);
   muiso_all->SetLineWidth(2);
   muiso_all->SetMarkerColor(5);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,303.8323);
   muiso_all->SetBinContent(2,55.29421);
   muiso_all->SetBinContent(3,20.06163);
   muiso_all->SetBinContent(4,8.786639);
   muiso_all->SetBinContent(5,5.690619);
   muiso_all->SetBinContent(6,3.95226);
   muiso_all->SetBinError(1,16.21738);
   muiso_all->SetBinError(2,6.944952);
   muiso_all->SetBinError(3,3.520895);
   muiso_all->SetBinError(4,2.510114);
   muiso_all->SetBinError(5,1.816048);
   muiso_all->SetBinError(6,1.363318);
   muiso_all->SetEntries(732);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(6);
   muiso_all->SetLineColor(6);
   muiso_all->SetLineWidth(2);
   muiso_all->SetMarkerColor(6);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,83.79126);
   muiso_all->SetBinContent(2,13.04607);
   muiso_all->SetBinContent(3,4.708411);
   muiso_all->SetBinContent(4,2.690564);
   muiso_all->SetBinContent(5,1.757274);
   muiso_all->SetBinContent(6,0.9637629);
   muiso_all->SetBinError(1,1.315725);
   muiso_all->SetBinError(2,0.5179005);
   muiso_all->SetBinError(3,0.3103588);
   muiso_all->SetBinError(4,0.2340129);
   muiso_all->SetBinError(5,0.1902653);
   muiso_all->SetBinError(6,0.1388209);
   muiso_all->SetEntries(5990);
   muiso_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   muiso_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   muiso_all->SetLineColor(ci);
   muiso_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   muiso_all->SetMarkerColor(ci);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(3);
   muiso_all->SetLineColor(3);
   muiso_all->SetLineWidth(2);
   muiso_all->SetMarkerColor(3);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,13.5371);
   muiso_all->SetBinContent(2,1.984339);
   muiso_all->SetBinContent(3,1.059082);
   muiso_all->SetBinContent(4,0.00938572);
   muiso_all->SetBinContent(5,0.1776814);
   muiso_all->SetBinError(1,1.402217);
   muiso_all->SetBinError(2,0.5053266);
   muiso_all->SetBinError(3,0.3421713);
   muiso_all->SetBinError(4,0.00938572);
   muiso_all->SetBinError(5,0.1256447);
   muiso_all->SetEntries(174);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(3);
   muiso_all->SetLineColor(3);
   muiso_all->SetLineWidth(2);
   muiso_all->SetMarkerColor(3);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,3.796367);
   muiso_all->SetBinContent(2,0.3606056);
   muiso_all->SetBinContent(3,0.1605942);
   muiso_all->SetBinContent(4,0.03849384);
   muiso_all->SetBinContent(5,0.04554311);
   muiso_all->SetBinContent(6,0.04186041);
   muiso_all->SetBinError(1,0.1941596);
   muiso_all->SetBinError(2,0.05815066);
   muiso_all->SetBinError(3,0.03914777);
   muiso_all->SetBinError(4,0.01573373);
   muiso_all->SetBinError(5,0.01941354);
   muiso_all->SetBinError(6,0.01761454);
   muiso_all->SetEntries(592);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(3);
   muiso_all->SetLineColor(3);
   muiso_all->SetLineWidth(2);
   muiso_all->SetMarkerColor(3);
   muiso_all->SetMarkerStyle(21);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   stack->Add(muiso_all,"");
   stack->Draw("hist");
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,301);
   muiso_all->SetBinContent(2,65);
   muiso_all->SetBinContent(3,30);
   muiso_all->SetBinContent(4,16);
   muiso_all->SetBinContent(5,14);
   muiso_all->SetBinContent(6,6);
   muiso_all->SetBinError(1,17.34935);
   muiso_all->SetBinError(2,8.062258);
   muiso_all->SetBinError(3,5.477226);
   muiso_all->SetBinError(4,4);
   muiso_all->SetBinError(5,3.741657);
   muiso_all->SetBinError(6,2.44949);
   muiso_all->SetEntries(432);
   muiso_all->SetStats(0);
   muiso_all->SetFillColor(1);
   muiso_all->SetFillStyle(0);
   muiso_all->SetLineWidth(3);
   muiso_all->SetMarkerStyle(20);
   muiso_all->SetMarkerSize(1.3);
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.035);
   muiso_all->GetXaxis()->SetTitleSize(0.045);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.035);
   muiso_all->GetYaxis()->SetTitleSize(0.045);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(1.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   muiso_all->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("muiso_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("muiso_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("muiso_all","EWK W+jets","f");

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
   entry=leg->AddEntry("muiso_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("muiso_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("muiso_all","Dibosons","f");
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
   lower->Range(-0.4050633,-0.653951,2.126582,2.070845);
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
   
   TH1F *muiso_all = new TH1F("muiso_all","muiso_all",100,0,2);
   muiso_all->SetBinContent(1,0.6528022);
   muiso_all->SetBinContent(2,0.7733994);
   muiso_all->SetBinContent(3,0.817075);
   muiso_all->SetBinContent(4,0.9778169);
   muiso_all->SetBinContent(5,1.088162);
   muiso_all->SetBinContent(6,1.057922);
   muiso_all->SetBinError(1,0.04505987);
   muiso_all->SetBinError(2,0.1185231);
   muiso_all->SetBinError(3,0.1793467);
   muiso_all->SetBinError(4,0.3112551);
   muiso_all->SetBinError(5,0.3648816);
   muiso_all->SetBinError(6,0.5192338);
   muiso_all->SetMinimum(0);
   muiso_all->SetMaximum(2);
   muiso_all->SetEntries(52.57968);
   muiso_all->SetStats(0);
   muiso_all->SetFillStyle(0);
   muiso_all->SetMarkerStyle(20);
   muiso_all->SetMarkerSize(0.8);
   muiso_all->GetXaxis()->SetTitle("Muon iso");
   muiso_all->GetXaxis()->SetLabelFont(42);
   muiso_all->GetXaxis()->SetLabelOffset(0.007);
   muiso_all->GetXaxis()->SetLabelSize(0.1);
   muiso_all->GetXaxis()->SetTitleSize(0.12);
   muiso_all->GetXaxis()->SetTickLength(0.02);
   muiso_all->GetXaxis()->SetTitleOffset(0.9);
   muiso_all->GetXaxis()->SetTitleFont(42);
   muiso_all->GetYaxis()->SetTitle("Data/MC");
   muiso_all->GetYaxis()->SetNdivisions(505);
   muiso_all->GetYaxis()->SetLabelFont(42);
   muiso_all->GetYaxis()->SetLabelOffset(0.007);
   muiso_all->GetYaxis()->SetLabelSize(0.1);
   muiso_all->GetYaxis()->SetTitleSize(0.12);
   muiso_all->GetYaxis()->SetTickLength(0.02);
   muiso_all->GetYaxis()->SetTitleOffset(0.55);
   muiso_all->GetYaxis()->SetTitleFont(42);
   muiso_all->GetZaxis()->SetLabelFont(42);
   muiso_all->GetZaxis()->SetLabelOffset(0.007);
   muiso_all->GetZaxis()->SetLabelSize(0.035);
   muiso_all->GetZaxis()->SetTitleSize(0.045);
   muiso_all->GetZaxis()->SetTickLength(0.02);
   muiso_all->GetZaxis()->SetTitleFont(42);
   muiso_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
