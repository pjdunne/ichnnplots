{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:39 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-2.672602,446.5823,3.651753);
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
   stack->SetMaximum(1079.124);
   
   TH1F *taupt_1_stack_10 = new TH1F("taupt_1_stack_10","stack",50,0,1000);
   taupt_1_stack_10->SetBinContent(0,37.88433);
   taupt_1_stack_10->SetBinError(0,8.066901);
   taupt_1_stack_10->SetMinimum(0.002843708);
   taupt_1_stack_10->SetMaximum(2165.385);
   taupt_1_stack_10->SetEntries(83);
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
   taupt_1->SetBinContent(0,37.88433);
   taupt_1->SetBinError(0,8.066901);
   taupt_1->SetMinimum(0.01);
   taupt_1->SetMaximum(1200);
   taupt_1->SetEntries(83);
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
   taupt_1->SetBinContent(0,268.2703);
   taupt_1->SetBinContent(2,3.896016);
   taupt_1->SetBinContent(3,0.7514696);
   taupt_1->SetBinContent(4,1.047573);
   taupt_1->SetBinError(0,13.8244);
   taupt_1->SetBinError(2,1.758899);
   taupt_1->SetBinError(3,0.7514696);
   taupt_1->SetBinError(4,1.047573);
   taupt_1->SetEntries(486);
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
   taupt_1->SetBinContent(0,796.0161);
   taupt_1->SetBinContent(2,1.239712);
   taupt_1->SetBinContent(3,0.4229936);
   taupt_1->SetBinContent(4,0.7795709);
   taupt_1->SetBinContent(9,0.5523564);
   taupt_1->SetBinError(0,21.2254);
   taupt_1->SetBinError(2,0.7160653);
   taupt_1->SetBinError(3,0.4229936);
   taupt_1->SetBinError(4,0.5513679);
   taupt_1->SetBinError(9,0.5523564);
   taupt_1->SetEntries(1848);
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
   taupt_1->SetBinContent(0,112.7192);
   taupt_1->SetBinContent(2,0.2196199);
   taupt_1->SetBinContent(3,0.03562105);
   taupt_1->SetBinContent(5,0.01455189);
   taupt_1->SetBinContent(6,0.0205892);
   taupt_1->SetBinContent(8,0.01271736);
   taupt_1->SetBinContent(9,0.01436354);
   taupt_1->SetBinContent(11,0.01521366);
   taupt_1->SetBinError(0,1.520561);
   taupt_1->SetBinError(2,0.06338338);
   taupt_1->SetBinError(3,0.02466996);
   taupt_1->SetBinError(5,0.01455189);
   taupt_1->SetBinError(6,0.0205892);
   taupt_1->SetBinError(8,0.01271736);
   taupt_1->SetBinError(9,0.01436354);
   taupt_1->SetBinError(11,0.01521366);
   taupt_1->SetEntries(6349);
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
   taupt_1->SetBinContent(0,41.80077);
   taupt_1->SetBinContent(2,1.479974);
   taupt_1->SetBinContent(3,0.3265626);
   taupt_1->SetBinContent(4,0.1945153);
   taupt_1->SetBinContent(6,0.08927169);
   taupt_1->SetBinError(0,2.192143);
   taupt_1->SetBinError(2,0.4647874);
   taupt_1->SetBinError(3,0.2118528);
   taupt_1->SetBinError(4,0.1384265);
   taupt_1->SetBinError(6,0.08927169);
   taupt_1->SetEntries(519);
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
   taupt_1->SetBinContent(0,9.958076);
   taupt_1->SetBinContent(2,0.3588353);
   taupt_1->SetBinContent(3,0.1797025);
   taupt_1->SetBinContent(4,0.06180715);
   taupt_1->SetBinContent(5,0.01777448);
   taupt_1->SetBinContent(6,0.006672872);
   taupt_1->SetBinContent(7,0.006992959);
   taupt_1->SetBinError(0,0.3120767);
   taupt_1->SetBinError(2,0.05073153);
   taupt_1->SetBinError(3,0.03347406);
   taupt_1->SetBinError(4,0.0198936);
   taupt_1->SetBinError(5,0.01033782);
   taupt_1->SetBinError(6,0.006672872);
   taupt_1->SetBinError(7,0.00676635);
   taupt_1->SetEntries(1413);
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
   taupt_1->SetBinContent(0,1000);
   taupt_1->SetBinContent(2,8);
   taupt_1->SetBinContent(3,2);
   taupt_1->SetBinContent(4,1);
   taupt_1->SetBinContent(5,1);
   taupt_1->SetBinContent(8,1);
   taupt_1->SetBinError(0,31.62278);
   taupt_1->SetBinError(2,2.828427);
   taupt_1->SetBinError(3,1.414214);
   taupt_1->SetBinError(4,1);
   taupt_1->SetBinError(5,1);
   taupt_1->SetBinError(8,1);
   taupt_1->SetEntries(1013);
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
   taupt_1->SetBinContent(0,0.8138255);
   taupt_1->SetBinContent(2,1.112014);
   taupt_1->SetBinContent(3,1.165264);
   taupt_1->SetBinContent(4,0.4799693);
   taupt_1->SetBinContent(5,30.9345);
   taupt_1->SetBinContent(8,78.63268);
   taupt_1->SetBinError(0,0.03077228);
   taupt_1->SetBinError(2,0.4960425);
   taupt_1->SetBinError(3,1.021356);
   taupt_1->SetBinError(4,0.552976);
   taupt_1->SetBinError(5,35.33729);
   taupt_1->SetBinError(8,111.2034);
   taupt_1->SetMinimum(0);
   taupt_1->SetMaximum(2);
   taupt_1->SetEntries(0.926579);
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
