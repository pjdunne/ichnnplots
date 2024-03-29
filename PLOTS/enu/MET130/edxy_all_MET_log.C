{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:50 2013) by ROOT version5.32/00
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
   upper->Range(-1.405063,-2.954618,1.126582,7.910913);
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
   stack->SetMaximum(8372924);
   
   TH1F *edxy_all_stack_6 = new TH1F("edxy_all_stack_6","stack",100,-1,1);
   edxy_all_stack_6->SetBinContent(50,12.06949);
   edxy_all_stack_6->SetBinContent(51,24.04482);
   edxy_all_stack_6->SetBinError(50,4.051982);
   edxy_all_stack_6->SetBinError(51,6.478632);
   edxy_all_stack_6->SetMinimum(0.001831019);
   edxy_all_stack_6->SetMaximum(2.331504e+07);
   edxy_all_stack_6->SetEntries(113);
   edxy_all_stack_6->SetStats(0);
   edxy_all_stack_6->SetFillColor(4);
   edxy_all_stack_6->SetLineColor(4);
   edxy_all_stack_6->SetLineWidth(2);
   edxy_all_stack_6->SetMarkerColor(4);
   edxy_all_stack_6->SetMarkerStyle(21);
   edxy_all_stack_6->SetMarkerSize(0.8);
   edxy_all_stack_6->GetXaxis()->SetTitle("Electron d_{xy}");
   edxy_all_stack_6->GetXaxis()->SetLabelFont(42);
   edxy_all_stack_6->GetXaxis()->SetLabelOffset(0.007);
   edxy_all_stack_6->GetXaxis()->SetLabelSize(0);
   edxy_all_stack_6->GetXaxis()->SetTitleSize(0);
   edxy_all_stack_6->GetXaxis()->SetTickLength(0.02);
   edxy_all_stack_6->GetXaxis()->SetTitleOffset(0.9);
   edxy_all_stack_6->GetXaxis()->SetTitleFont(42);
   edxy_all_stack_6->GetYaxis()->SetTitle("Events");
   edxy_all_stack_6->GetYaxis()->SetLabelFont(42);
   edxy_all_stack_6->GetYaxis()->SetLabelOffset(0.007);
   edxy_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   edxy_all_stack_6->GetYaxis()->SetTitleSize(0.045);
   edxy_all_stack_6->GetYaxis()->SetTickLength(0.02);
   edxy_all_stack_6->GetYaxis()->SetTitleOffset(1.55);
   edxy_all_stack_6->GetYaxis()->SetTitleFont(42);
   edxy_all_stack_6->GetZaxis()->SetLabelFont(42);
   edxy_all_stack_6->GetZaxis()->SetLabelOffset(0.007);
   edxy_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   edxy_all_stack_6->GetZaxis()->SetTitleSize(0.045);
   edxy_all_stack_6->GetZaxis()->SetTickLength(0.02);
   edxy_all_stack_6->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(edxy_all_stack_6);
   
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,12.06949);
   edxy_all->SetBinContent(51,24.04482);
   edxy_all->SetBinError(50,4.051982);
   edxy_all->SetBinError(51,6.478632);
   edxy_all->SetMinimum(0.01);
   edxy_all->SetMaximum(6420000);
   edxy_all->SetEntries(113);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(4);
   edxy_all->SetLineColor(4);
   edxy_all->SetLineWidth(2);
   edxy_all->SetMarkerColor(4);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetTitle("Electron d_{xy}");
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0);
   edxy_all->GetXaxis()->SetTitleSize(0);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetTitle("Events");
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"HIST");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,79.73586);
   edxy_all->SetBinContent(51,69.20967);
   edxy_all->SetBinError(50,7.161797);
   edxy_all->SetBinError(51,6.608243);
   edxy_all->SetEntries(316);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(5);
   edxy_all->SetLineColor(5);
   edxy_all->SetLineWidth(2);
   edxy_all->SetMarkerColor(5);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,256.236);
   edxy_all->SetBinContent(51,351.0432);
   edxy_all->SetBinError(50,12.78675);
   edxy_all->SetBinError(51,15.54548);
   edxy_all->SetEntries(1364);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(6);
   edxy_all->SetLineColor(6);
   edxy_all->SetLineWidth(2);
   edxy_all->SetMarkerColor(6);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,75.75797);
   edxy_all->SetBinContent(51,108.5284);
   edxy_all->SetBinError(50,1.2067);
   edxy_all->SetBinError(51,1.459521);
   edxy_all->SetEntries(11206);
   edxy_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   edxy_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   edxy_all->SetLineColor(ci);
   edxy_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   edxy_all->SetMarkerColor(ci);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(51,0.1562384);
   edxy_all->SetBinError(51,0.1562384);
   edxy_all->SetEntries(1);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(3);
   edxy_all->SetLineColor(3);
   edxy_all->SetLineWidth(2);
   edxy_all->SetMarkerColor(3);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,4.538753);
   edxy_all->SetBinContent(51,4.136406);
   edxy_all->SetBinError(50,0.662973);
   edxy_all->SetBinError(51,0.7062082);
   edxy_all->SetEntries(113);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(3);
   edxy_all->SetLineColor(3);
   edxy_all->SetLineWidth(2);
   edxy_all->SetMarkerColor(3);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,1.054129);
   edxy_all->SetBinContent(51,1.076241);
   edxy_all->SetBinError(50,0.08032476);
   edxy_all->SetBinError(51,0.08346905);
   edxy_all->SetEntries(398);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(3);
   edxy_all->SetLineColor(3);
   edxy_all->SetLineWidth(2);
   edxy_all->SetMarkerColor(3);
   edxy_all->SetMarkerStyle(21);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edxy_all,"");
   stack->Draw("hist");
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,291);
   edxy_all->SetBinContent(51,428);
   edxy_all->SetBinError(50,17.05872);
   edxy_all->SetBinError(51,20.68816);
   edxy_all->SetEntries(719);
   edxy_all->SetStats(0);
   edxy_all->SetFillColor(1);
   edxy_all->SetFillStyle(0);
   edxy_all->SetLineWidth(3);
   edxy_all->SetMarkerStyle(20);
   edxy_all->SetMarkerSize(1.3);
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.035);
   edxy_all->GetXaxis()->SetTitleSize(0.045);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.035);
   edxy_all->GetYaxis()->SetTitleSize(0.045);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(1.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   edxy_all->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"MET");
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
   TLegendEntry *entry=leg->AddEntry("edxy_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("edxy_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edxy_all","EWK W+jets","f");

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
   entry=leg->AddEntry("edxy_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edxy_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edxy_all","Dibosons","f");
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
   lower->Range(-1.405063,-0.653951,1.126582,2.070845);
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
   
   TH1F *edxy_all = new TH1F("edxy_all","edxy_all",100,-1,1);
   edxy_all->SetBinContent(50,0.697302);
   edxy_all->SetBinContent(51,0.8012728);
   edxy_all->SetBinError(50,0.04770619);
   edxy_all->SetBinError(51,0.0463481);
   edxy_all->SetMinimum(0);
   edxy_all->SetMaximum(2);
   edxy_all->SetEntries(507.6205);
   edxy_all->SetStats(0);
   edxy_all->SetFillStyle(0);
   edxy_all->SetMarkerStyle(20);
   edxy_all->SetMarkerSize(0.8);
   edxy_all->GetXaxis()->SetTitle("Electron d_{xy}");
   edxy_all->GetXaxis()->SetLabelFont(42);
   edxy_all->GetXaxis()->SetLabelOffset(0.007);
   edxy_all->GetXaxis()->SetLabelSize(0.1);
   edxy_all->GetXaxis()->SetTitleSize(0.12);
   edxy_all->GetXaxis()->SetTickLength(0.02);
   edxy_all->GetXaxis()->SetTitleOffset(0.9);
   edxy_all->GetXaxis()->SetTitleFont(42);
   edxy_all->GetYaxis()->SetTitle("Data/MC");
   edxy_all->GetYaxis()->SetNdivisions(505);
   edxy_all->GetYaxis()->SetLabelFont(42);
   edxy_all->GetYaxis()->SetLabelOffset(0.007);
   edxy_all->GetYaxis()->SetLabelSize(0.1);
   edxy_all->GetYaxis()->SetTitleSize(0.12);
   edxy_all->GetYaxis()->SetTickLength(0.02);
   edxy_all->GetYaxis()->SetTitleOffset(0.55);
   edxy_all->GetYaxis()->SetTitleFont(42);
   edxy_all->GetZaxis()->SetLabelFont(42);
   edxy_all->GetZaxis()->SetLabelOffset(0.007);
   edxy_all->GetZaxis()->SetLabelSize(0.035);
   edxy_all->GetZaxis()->SetTitleSize(0.045);
   edxy_all->GetZaxis()->SetTickLength(0.02);
   edxy_all->GetZaxis()->SetTitleFont(42);
   edxy_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
