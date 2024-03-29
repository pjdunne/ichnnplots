{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:52 2013) by ROOT version5.32/00
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
   upper->Range(-1.21519,-2.708696,6.379747,4.127179);
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
   stack->SetMaximum(2914.954);
   
   TH1F *n_taus_stack_6 = new TH1F("n_taus_stack_6","stack",10,0,10);
   n_taus_stack_6->SetBinContent(1,33.97595);
   n_taus_stack_6->SetBinContent(2,2.138345);
   n_taus_stack_6->SetBinError(1,7.369125);
   n_taus_stack_6->SetBinError(2,2.021689);
   n_taus_stack_6->SetMinimum(0.002679302);
   n_taus_stack_6->SetMaximum(6100.783);
   n_taus_stack_6->SetEntries(113);
   n_taus_stack_6->SetStats(0);
   n_taus_stack_6->SetFillColor(4);
   n_taus_stack_6->SetLineColor(4);
   n_taus_stack_6->SetLineWidth(2);
   n_taus_stack_6->SetMarkerColor(4);
   n_taus_stack_6->SetMarkerStyle(21);
   n_taus_stack_6->SetMarkerSize(0.8);
   n_taus_stack_6->GetXaxis()->SetTitle("Number of taus");
   n_taus_stack_6->GetXaxis()->SetRange(1,6);
   n_taus_stack_6->GetXaxis()->SetLabelFont(42);
   n_taus_stack_6->GetXaxis()->SetLabelOffset(0.007);
   n_taus_stack_6->GetXaxis()->SetLabelSize(0);
   n_taus_stack_6->GetXaxis()->SetTitleSize(0);
   n_taus_stack_6->GetXaxis()->SetTickLength(0.02);
   n_taus_stack_6->GetXaxis()->SetTitleOffset(0.9);
   n_taus_stack_6->GetXaxis()->SetTitleFont(42);
   n_taus_stack_6->GetYaxis()->SetTitle("Events");
   n_taus_stack_6->GetYaxis()->SetLabelFont(42);
   n_taus_stack_6->GetYaxis()->SetLabelOffset(0.007);
   n_taus_stack_6->GetYaxis()->SetLabelSize(0.035);
   n_taus_stack_6->GetYaxis()->SetTitleSize(0.045);
   n_taus_stack_6->GetYaxis()->SetTickLength(0.02);
   n_taus_stack_6->GetYaxis()->SetTitleOffset(1.55);
   n_taus_stack_6->GetYaxis()->SetTitleFont(42);
   n_taus_stack_6->GetZaxis()->SetLabelFont(42);
   n_taus_stack_6->GetZaxis()->SetLabelOffset(0.007);
   n_taus_stack_6->GetZaxis()->SetLabelSize(0.035);
   n_taus_stack_6->GetZaxis()->SetTitleSize(0.045);
   n_taus_stack_6->GetZaxis()->SetTickLength(0.02);
   n_taus_stack_6->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_taus_stack_6);
   
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,33.97595);
   n_taus->SetBinContent(2,2.138345);
   n_taus->SetBinError(1,7.369125);
   n_taus->SetBinError(2,2.021689);
   n_taus->SetMinimum(0.01);
   n_taus->SetMaximum(2091);
   n_taus->SetEntries(113);
   n_taus->SetStats(0);
   n_taus->SetFillColor(4);
   n_taus->SetLineColor(4);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(4);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetTitle("Number of taus");
   n_taus->GetXaxis()->SetRange(1,6);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0);
   n_taus->GetXaxis()->SetTitleSize(0);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetTitle("Events");
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"HIST");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,144.4903);
   n_taus->SetBinContent(2,3.755253);
   n_taus->SetBinContent(3,0.6999702);
   n_taus->SetBinError(1,9.586238);
   n_taus->SetBinError(2,1.604462);
   n_taus->SetBinError(3,0.6999702);
   n_taus->SetEntries(316);
   n_taus->SetStats(0);
   n_taus->SetFillColor(5);
   n_taus->SetLineColor(5);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(5);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,600.6732);
   n_taus->SetBinContent(2,6.606006);
   n_taus->SetBinError(1,20.0262);
   n_taus->SetBinError(2,2.028368);
   n_taus->SetEntries(1364);
   n_taus->SetStats(0);
   n_taus->SetFillColor(6);
   n_taus->SetLineColor(6);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(6);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,182.763);
   n_taus->SetBinContent(2,1.505525);
   n_taus->SetBinContent(3,0.01808563);
   n_taus->SetBinError(1,1.886353);
   n_taus->SetBinError(2,0.1663539);
   n_taus->SetBinError(3,0.01808563);
   n_taus->SetEntries(11206);
   n_taus->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_taus->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_taus->SetLineColor(ci);
   n_taus->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_taus->SetMarkerColor(ci);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,0.1562384);
   n_taus->SetBinError(1,0.1562384);
   n_taus->SetEntries(1);
   n_taus->SetStats(0);
   n_taus->SetFillColor(3);
   n_taus->SetLineColor(3);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(3);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,7.686452);
   n_taus->SetBinContent(2,0.988706);
   n_taus->SetBinError(1,0.9023147);
   n_taus->SetBinError(2,0.352266);
   n_taus->SetEntries(113);
   n_taus->SetStats(0);
   n_taus->SetFillColor(3);
   n_taus->SetLineColor(3);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(3);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,1.906136);
   n_taus->SetBinContent(2,0.2154283);
   n_taus->SetBinContent(3,0.008807413);
   n_taus->SetBinError(1,0.1098088);
   n_taus->SetBinError(2,0.03582748);
   n_taus->SetBinError(3,0.008807414);
   n_taus->SetEntries(398);
   n_taus->SetStats(0);
   n_taus->SetFillColor(3);
   n_taus->SetLineColor(3);
   n_taus->SetLineWidth(2);
   n_taus->SetMarkerColor(3);
   n_taus->SetMarkerStyle(21);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   stack->Add(n_taus,"");
   stack->Draw("hist");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,697);
   n_taus->SetBinContent(2,22);
   n_taus->SetBinError(1,26.40076);
   n_taus->SetBinError(2,4.690416);
   n_taus->SetEntries(719);
   n_taus->SetStats(0);
   n_taus->SetFillColor(1);
   n_taus->SetFillStyle(0);
   n_taus->SetLineWidth(3);
   n_taus->SetMarkerStyle(20);
   n_taus->SetMarkerSize(1.3);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   n_taus->Draw("SAMEPE1");
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetStats(0);
   n_taus->SetFillColor(1);
   n_taus->SetFillStyle(0);
   n_taus->SetLineStyle(2);
   n_taus->SetLineWidth(3);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.035);
   n_taus->GetXaxis()->SetTitleSize(0.045);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.035);
   n_taus->GetYaxis()->SetTitleSize(0.045);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(1.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   n_taus->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"MET");
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
   TLegendEntry *entry=leg->AddEntry("n_taus","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_taus","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","EWK W+jets","f");

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
   entry=leg->AddEntry("n_taus","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_taus","Dibosons","f");
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
   lower->Range(-1.21519,-0.653951,6.379747,2.070845);
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
   
   TH1F *n_taus = new TH1F("n_taus","n_taus",10,0,10);
   n_taus->SetBinContent(1,0.7433277);
   n_taus->SetBinContent(2,1.683126);
   n_taus->SetBinError(1,0.03324584);
   n_taus->SetBinError(2,0.4921508);
   n_taus->SetMinimum(0);
   n_taus->SetMaximum(2);
   n_taus->SetEntries(24.19749);
   n_taus->SetStats(0);
   n_taus->SetFillStyle(0);
   n_taus->SetMarkerStyle(20);
   n_taus->SetMarkerSize(0.8);
   n_taus->GetXaxis()->SetTitle("Number of taus");
   n_taus->GetXaxis()->SetRange(1,6);
   n_taus->GetXaxis()->SetLabelFont(42);
   n_taus->GetXaxis()->SetLabelOffset(0.007);
   n_taus->GetXaxis()->SetLabelSize(0.1);
   n_taus->GetXaxis()->SetTitleSize(0.12);
   n_taus->GetXaxis()->SetTickLength(0.02);
   n_taus->GetXaxis()->SetTitleOffset(0.9);
   n_taus->GetXaxis()->SetTitleFont(42);
   n_taus->GetYaxis()->SetTitle("Data/MC");
   n_taus->GetYaxis()->SetNdivisions(505);
   n_taus->GetYaxis()->SetLabelFont(42);
   n_taus->GetYaxis()->SetLabelOffset(0.007);
   n_taus->GetYaxis()->SetLabelSize(0.1);
   n_taus->GetYaxis()->SetTitleSize(0.12);
   n_taus->GetYaxis()->SetTickLength(0.02);
   n_taus->GetYaxis()->SetTitleOffset(0.55);
   n_taus->GetYaxis()->SetTitleFont(42);
   n_taus->GetZaxis()->SetLabelFont(42);
   n_taus->GetZaxis()->SetLabelOffset(0.007);
   n_taus->GetZaxis()->SetLabelSize(0.035);
   n_taus->GetZaxis()->SetTitleSize(0.045);
   n_taus->GetZaxis()->SetTickLength(0.02);
   n_taus->GetZaxis()->SetTitleFont(42);
   n_taus->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
