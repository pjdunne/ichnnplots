{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:41 2013) by ROOT version5.32/00
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
   upper->Range(-2.810127,-2.958829,2.253165,7.98407);
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
   stack->SetMaximum(9774056);
   
   TH1F *mudz_all_stack_10 = new TH1F("mudz_all_stack_10","stack",100,-2,2);
   mudz_all_stack_10->SetBinContent(50,15.88952);
   mudz_all_stack_10->SetBinContent(51,21.99481);
   mudz_all_stack_10->SetBinError(50,5.253718);
   mudz_all_stack_10->SetBinError(51,6.121547);
   mudz_all_stack_10->SetMinimum(0.001819824);
   mudz_all_stack_10->SetMaximum(2.734796e+07);
   mudz_all_stack_10->SetEntries(83);
   mudz_all_stack_10->SetStats(0);
   mudz_all_stack_10->SetFillColor(4);
   mudz_all_stack_10->SetLineColor(4);
   mudz_all_stack_10->SetLineWidth(2);
   mudz_all_stack_10->SetMarkerColor(4);
   mudz_all_stack_10->SetMarkerStyle(21);
   mudz_all_stack_10->SetMarkerSize(0.8);
   mudz_all_stack_10->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all_stack_10->GetXaxis()->SetLabelFont(42);
   mudz_all_stack_10->GetXaxis()->SetLabelOffset(0.007);
   mudz_all_stack_10->GetXaxis()->SetLabelSize(0);
   mudz_all_stack_10->GetXaxis()->SetTitleSize(0);
   mudz_all_stack_10->GetXaxis()->SetTickLength(0.02);
   mudz_all_stack_10->GetXaxis()->SetTitleOffset(0.9);
   mudz_all_stack_10->GetXaxis()->SetTitleFont(42);
   mudz_all_stack_10->GetYaxis()->SetTitle("Events");
   mudz_all_stack_10->GetYaxis()->SetLabelFont(42);
   mudz_all_stack_10->GetYaxis()->SetLabelOffset(0.007);
   mudz_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   mudz_all_stack_10->GetYaxis()->SetTitleSize(0.045);
   mudz_all_stack_10->GetYaxis()->SetTickLength(0.02);
   mudz_all_stack_10->GetYaxis()->SetTitleOffset(1.55);
   mudz_all_stack_10->GetYaxis()->SetTitleFont(42);
   mudz_all_stack_10->GetZaxis()->SetLabelFont(42);
   mudz_all_stack_10->GetZaxis()->SetLabelOffset(0.007);
   mudz_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   mudz_all_stack_10->GetZaxis()->SetTitleSize(0.045);
   mudz_all_stack_10->GetZaxis()->SetTickLength(0.02);
   mudz_all_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mudz_all_stack_10);
   
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,15.88952);
   mudz_all->SetBinContent(51,21.99481);
   mudz_all->SetBinError(50,5.253718);
   mudz_all->SetBinError(51,6.121547);
   mudz_all->SetMinimum(0.01);
   mudz_all->SetMaximum(7605000);
   mudz_all->SetEntries(83);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(4);
   mudz_all->SetLineColor(4);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(4);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0);
   mudz_all->GetXaxis()->SetTitleSize(0);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetTitle("Events");
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"HIST");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(50,149.9923);
   mudz_all->SetBinContent(51,123.9732);
   mudz_all->SetBinError(50,10.38018);
   mudz_all->SetBinError(51,9.387316);
   mudz_all->SetEntries(486);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(5);
   mudz_all->SetLineColor(5);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(5);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(49,1.83618);
   mudz_all->SetBinContent(50,402.9895);
   mudz_all->SetBinContent(51,392.6282);
   mudz_all->SetBinContent(52,1.5567);
   mudz_all->SetBinError(49,0.8265918);
   mudz_all->SetBinError(50,15.24285);
   mudz_all->SetBinError(51,14.77105);
   mudz_all->SetBinError(52,0.7790442);
   mudz_all->SetEntries(1848);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(6);
   mudz_all->SetLineColor(6);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(6);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(47,0.01660634);
   mudz_all->SetBinContent(49,0.1158445);
   mudz_all->SetBinContent(50,55.55239);
   mudz_all->SetBinContent(51,57.12774);
   mudz_all->SetBinContent(52,0.1504062);
   mudz_all->SetBinContent(53,0.03380414);
   mudz_all->SetBinContent(54,0.03896095);
   mudz_all->SetBinContent(55,0.01626651);
   mudz_all->SetBinError(47,0.01660634);
   mudz_all->SetBinError(49,0.05398006);
   mudz_all->SetBinError(50,1.066022);
   mudz_all->SetBinError(51,1.083263);
   mudz_all->SetBinError(52,0.05233433);
   mudz_all->SetBinError(53,0.03380414);
   mudz_all->SetBinError(54,0.0277345);
   mudz_all->SetBinError(55,0.01626651);
   mudz_all->SetEntries(6349);
   mudz_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mudz_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mudz_all->SetLineColor(ci);
   mudz_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mudz_all->SetMarkerColor(ci);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(3);
   mudz_all->SetLineColor(3);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(3);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(47,0.02966289);
   mudz_all->SetBinContent(48,0.07649256);
   mudz_all->SetBinContent(49,0.3462579);
   mudz_all->SetBinContent(50,21.90248);
   mudz_all->SetBinContent(51,20.96411);
   mudz_all->SetBinContent(52,0.5720803);
   mudz_all->SetBinError(47,0.02966289);
   mudz_all->SetBinError(48,0.07649256);
   mudz_all->SetBinError(49,0.2650246);
   mudz_all->SetBinError(50,1.670475);
   mudz_all->SetBinError(51,1.466539);
   mudz_all->SetBinError(52,0.2744783);
   mudz_all->SetEntries(519);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(3);
   mudz_all->SetLineColor(3);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(3);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(49,0.01405773);
   mudz_all->SetBinContent(50,5.277672);
   mudz_all->SetBinContent(51,5.255105);
   mudz_all->SetBinContent(52,0.04302459);
   mudz_all->SetBinError(49,0.01022007);
   mudz_all->SetBinError(50,0.2271222);
   mudz_all->SetBinError(51,0.2228806);
   mudz_all->SetBinError(52,0.01772797);
   mudz_all->SetEntries(1413);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(3);
   mudz_all->SetLineColor(3);
   mudz_all->SetLineWidth(2);
   mudz_all->SetMarkerColor(3);
   mudz_all->SetMarkerStyle(21);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudz_all,"");
   stack->Draw("hist");
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(48,1);
   mudz_all->SetBinContent(49,5);
   mudz_all->SetBinContent(50,497);
   mudz_all->SetBinContent(51,507);
   mudz_all->SetBinContent(52,2);
   mudz_all->SetBinContent(54,1);
   mudz_all->SetBinError(48,1);
   mudz_all->SetBinError(49,2.236068);
   mudz_all->SetBinError(50,22.2935);
   mudz_all->SetBinError(51,22.51666);
   mudz_all->SetBinError(52,1.414214);
   mudz_all->SetBinError(54,1);
   mudz_all->SetEntries(1013);
   mudz_all->SetStats(0);
   mudz_all->SetFillColor(1);
   mudz_all->SetFillStyle(0);
   mudz_all->SetLineWidth(3);
   mudz_all->SetMarkerStyle(20);
   mudz_all->SetMarkerSize(1.3);
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.035);
   mudz_all->GetXaxis()->SetTitleSize(0.045);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.035);
   mudz_all->GetYaxis()->SetTitleSize(0.045);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(1.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   mudz_all->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("mudz_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mudz_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudz_all","EWK W+jets","f");

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
   entry=leg->AddEntry("mudz_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudz_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudz_all","Dibosons","f");
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
   lower->Range(-2.810127,-0.653951,2.253165,2.070845);
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
   
   TH1F *mudz_all = new TH1F("mudz_all","mudz_all",100,-2,2);
   mudz_all->SetBinContent(48,13.07317);
   mudz_all->SetBinContent(49,2.162312);
   mudz_all->SetBinContent(50,0.7817978);
   mudz_all->SetBinContent(51,0.8450727);
   mudz_all->SetBinContent(52,0.8612484);
   mudz_all->SetBinContent(54,25.66672);
   mudz_all->SetBinError(48,18.48825);
   mudz_all->SetBinError(49,1.263585);
   mudz_all->SetBinError(50,0.04183498);
   mudz_all->SetBinError(51,0.04497784);
   mudz_all->SetBinError(52,0.6820088);
   mudz_all->SetBinError(54,31.50569);
   mudz_all->SetMinimum(0);
   mudz_all->SetMaximum(2);
   mudz_all->SetEntries(1.408706);
   mudz_all->SetStats(0);
   mudz_all->SetFillStyle(0);
   mudz_all->SetMarkerStyle(20);
   mudz_all->SetMarkerSize(0.8);
   mudz_all->GetXaxis()->SetTitle("Muon d_{z}");
   mudz_all->GetXaxis()->SetLabelFont(42);
   mudz_all->GetXaxis()->SetLabelOffset(0.007);
   mudz_all->GetXaxis()->SetLabelSize(0.1);
   mudz_all->GetXaxis()->SetTitleSize(0.12);
   mudz_all->GetXaxis()->SetTickLength(0.02);
   mudz_all->GetXaxis()->SetTitleOffset(0.9);
   mudz_all->GetXaxis()->SetTitleFont(42);
   mudz_all->GetYaxis()->SetTitle("Data/MC");
   mudz_all->GetYaxis()->SetNdivisions(505);
   mudz_all->GetYaxis()->SetLabelFont(42);
   mudz_all->GetYaxis()->SetLabelOffset(0.007);
   mudz_all->GetYaxis()->SetLabelSize(0.1);
   mudz_all->GetYaxis()->SetTitleSize(0.12);
   mudz_all->GetYaxis()->SetTickLength(0.02);
   mudz_all->GetYaxis()->SetTitleOffset(0.55);
   mudz_all->GetYaxis()->SetTitleFont(42);
   mudz_all->GetZaxis()->SetLabelFont(42);
   mudz_all->GetZaxis()->SetLabelOffset(0.007);
   mudz_all->GetZaxis()->SetLabelSize(0.035);
   mudz_all->GetZaxis()->SetTitleSize(0.045);
   mudz_all->GetZaxis()->SetTickLength(0.02);
   mudz_all->GetZaxis()->SetTitleFont(42);
   mudz_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
