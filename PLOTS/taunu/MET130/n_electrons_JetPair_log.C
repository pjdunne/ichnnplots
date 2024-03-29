{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:55:41 2013) by ROOT version5.32/00
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
   upper->Range(-1.21519,-2.971431,6.379747,8.204694);
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
   stack->SetMaximum(1.558798e+07);
   
   TH1F *n_electrons_stack_3 = new TH1F("n_electrons_stack_3","stack",10,0,10);
   n_electrons_stack_3->SetBinContent(1,29.89436);
   n_electrons_stack_3->SetBinContent(2,10.12501);
   n_electrons_stack_3->SetBinContent(3,0.3687643);
   n_electrons_stack_3->SetBinContent(4,0.02766888);
   n_electrons_stack_3->SetBinError(1,5.517917);
   n_electrons_stack_3->SetBinError(2,3.368601);
   n_electrons_stack_3->SetBinError(3,0.1092139);
   n_electrons_stack_3->SetBinError(4,0.02748439);
   n_electrons_stack_3->SetMinimum(0.001786865);
   n_electrons_stack_3->SetMaximum(4.424738e+07);
   n_electrons_stack_3->SetEntries(427);
   n_electrons_stack_3->SetStats(0);
   n_electrons_stack_3->SetFillColor(4);
   n_electrons_stack_3->SetLineColor(4);
   n_electrons_stack_3->SetLineWidth(2);
   n_electrons_stack_3->SetMarkerColor(4);
   n_electrons_stack_3->SetMarkerStyle(21);
   n_electrons_stack_3->SetMarkerSize(0.8);
   n_electrons_stack_3->GetXaxis()->SetTitle("Number of electrons");
   n_electrons_stack_3->GetXaxis()->SetRange(1,6);
   n_electrons_stack_3->GetXaxis()->SetLabelFont(42);
   n_electrons_stack_3->GetXaxis()->SetLabelOffset(0.007);
   n_electrons_stack_3->GetXaxis()->SetLabelSize(0);
   n_electrons_stack_3->GetXaxis()->SetTitleSize(0);
   n_electrons_stack_3->GetXaxis()->SetTickLength(0.02);
   n_electrons_stack_3->GetXaxis()->SetTitleOffset(0.9);
   n_electrons_stack_3->GetXaxis()->SetTitleFont(42);
   n_electrons_stack_3->GetYaxis()->SetTitle("Events");
   n_electrons_stack_3->GetYaxis()->SetLabelFont(42);
   n_electrons_stack_3->GetYaxis()->SetLabelOffset(0.007);
   n_electrons_stack_3->GetYaxis()->SetLabelSize(0.035);
   n_electrons_stack_3->GetYaxis()->SetTitleSize(0.045);
   n_electrons_stack_3->GetYaxis()->SetTickLength(0.02);
   n_electrons_stack_3->GetYaxis()->SetTitleOffset(1.55);
   n_electrons_stack_3->GetYaxis()->SetTitleFont(42);
   n_electrons_stack_3->GetZaxis()->SetLabelFont(42);
   n_electrons_stack_3->GetZaxis()->SetLabelOffset(0.007);
   n_electrons_stack_3->GetZaxis()->SetLabelSize(0.035);
   n_electrons_stack_3->GetZaxis()->SetTitleSize(0.045);
   n_electrons_stack_3->GetZaxis()->SetTickLength(0.02);
   n_electrons_stack_3->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_electrons_stack_3);
   
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,29.89436);
   n_electrons->SetBinContent(2,10.12501);
   n_electrons->SetBinContent(3,0.3687643);
   n_electrons->SetBinContent(4,0.02766888);
   n_electrons->SetBinError(1,5.517917);
   n_electrons->SetBinError(2,3.368601);
   n_electrons->SetBinError(3,0.1092139);
   n_electrons->SetBinError(4,0.02748439);
   n_electrons->SetMinimum(0.01);
   n_electrons->SetMaximum(8.1195e+07);
   n_electrons->SetEntries(427);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(4);
   n_electrons->SetLineColor(4);
   n_electrons->SetLineWidth(2);
   n_electrons->SetMarkerColor(4);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetTitle("Number of electrons");
   n_electrons->GetXaxis()->SetRange(1,6);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0);
   n_electrons->GetXaxis()->SetTitleSize(0);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetTitle("Events");
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"HIST");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,143.2393);
   n_electrons->SetBinContent(2,98.60966);
   n_electrons->SetBinContent(3,27.50284);
   n_electrons->SetBinContent(4,6.969261);
   n_electrons->SetBinContent(5,0.6109802);
   n_electrons->SetBinError(1,7.390389);
   n_electrons->SetBinError(2,6.572893);
   n_electrons->SetBinError(3,3.220259);
   n_electrons->SetBinError(4,1.826525);
   n_electrons->SetBinError(5,0.533054);
   n_electrons->SetEntries(1295);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(5);
   n_electrons->SetLineColor(5);
   n_electrons->SetLineWidth(2);
   n_electrons->SetMarkerColor(5);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,647.0359);
   n_electrons->SetBinContent(2,243.6277);
   n_electrons->SetBinContent(3,28.4822);
   n_electrons->SetBinContent(4,3.799119);
   n_electrons->SetBinContent(5,0.4065679);
   n_electrons->SetBinContent(6,0.08028913);
   n_electrons->SetBinError(1,18.34578);
   n_electrons->SetBinError(2,10.682);
   n_electrons->SetBinError(3,3.507424);
   n_electrons->SetBinError(4,0.9525766);
   n_electrons->SetBinError(5,0.2586025);
   n_electrons->SetBinError(6,0.08028913);
   n_electrons->SetEntries(4140);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(6);
   n_electrons->SetLineColor(6);
   n_electrons->SetLineWidth(2);
   n_electrons->SetMarkerColor(6);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,137.1162);
   n_electrons->SetBinContent(2,38.6746);
   n_electrons->SetBinContent(3,4.156409);
   n_electrons->SetBinContent(4,0.2435069);
   n_electrons->SetBinContent(5,0.04750429);
   n_electrons->SetBinError(1,1.459212);
   n_electrons->SetBinError(2,0.7733388);
   n_electrons->SetBinError(3,0.2478353);
   n_electrons->SetBinError(4,0.06344577);
   n_electrons->SetBinError(5,0.02792675);
   n_electrons->SetEntries(16474);
   n_electrons->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_electrons->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_electrons->SetLineColor(ci);
   n_electrons->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_electrons->SetMarkerColor(ci);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,27.33795);
   n_electrons->SetBinContent(2,8.455338);
   n_electrons->SetBinContent(3,1.059338);
   n_electrons->SetBinContent(4,0.1247211);
   n_electrons->SetBinError(1,2.273627);
   n_electrons->SetBinError(2,1.211875);
   n_electrons->SetBinError(3,0.3665699);
   n_electrons->SetBinError(4,0.09339054);
   n_electrons->SetEntries(522);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(3);
   n_electrons->SetLineColor(3);
   n_electrons->SetLineWidth(2);
   n_electrons->SetMarkerColor(3);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,46.87123);
   n_electrons->SetBinContent(2,22.09719);
   n_electrons->SetBinContent(3,4.125301);
   n_electrons->SetBinContent(4,0.4789277);
   n_electrons->SetBinContent(5,0.05112128);
   n_electrons->SetBinError(1,2.191691);
   n_electrons->SetBinError(2,1.309355);
   n_electrons->SetBinError(3,0.4995036);
   n_electrons->SetBinError(4,0.2080003);
   n_electrons->SetBinError(5,0.0458711);
   n_electrons->SetEntries(1893);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(3);
   n_electrons->SetLineColor(3);
   n_electrons->SetLineWidth(2);
   n_electrons->SetMarkerColor(3);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,7.703516);
   n_electrons->SetBinContent(2,3.111267);
   n_electrons->SetBinContent(3,0.5771292);
   n_electrons->SetBinContent(4,0.04221417);
   n_electrons->SetBinError(1,0.1964556);
   n_electrons->SetBinError(2,0.1253617);
   n_electrons->SetBinError(3,0.05229843);
   n_electrons->SetBinError(4,0.01500787);
   n_electrons->SetEntries(3456);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(3);
   n_electrons->SetLineColor(3);
   n_electrons->SetLineWidth(2);
   n_electrons->SetMarkerColor(3);
   n_electrons->SetMarkerStyle(21);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   stack->Add(n_electrons,"");
   stack->Draw("hist");
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,5413);
   n_electrons->SetBinContent(2,1963);
   n_electrons->SetBinContent(3,340);
   n_electrons->SetBinContent(4,34);
   n_electrons->SetBinContent(5,2);
   n_electrons->SetBinContent(6,2);
   n_electrons->SetBinError(1,73.57309);
   n_electrons->SetBinError(2,44.30576);
   n_electrons->SetBinError(3,18.43909);
   n_electrons->SetBinError(4,5.830952);
   n_electrons->SetBinError(5,1.414214);
   n_electrons->SetBinError(6,1.414214);
   n_electrons->SetEntries(7754);
   n_electrons->SetStats(0);
   n_electrons->SetFillColor(1);
   n_electrons->SetFillStyle(0);
   n_electrons->SetLineWidth(3);
   n_electrons->SetMarkerStyle(20);
   n_electrons->SetMarkerSize(1.3);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.035);
   n_electrons->GetXaxis()->SetTitleSize(0.045);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.035);
   n_electrons->GetYaxis()->SetTitleSize(0.045);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(1.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   n_electrons->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("n_electrons","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_electrons","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_electrons","EWK W+jets","f");

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
   entry=leg->AddEntry("n_electrons","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_electrons","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_electrons","Dibosons","f");
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
   
   TH1F *n_electrons = new TH1F("n_electrons","n_electrons",10,0,10);
   n_electrons->SetBinContent(1,5.363101);
   n_electrons->SetBinContent(2,4.734961);
   n_electrons->SetBinContent(3,5.15908);
   n_electrons->SetBinContent(4,2.916514);
   n_electrons->SetBinContent(5,1.791836);
   n_electrons->SetBinContent(6,24.90997);
   n_electrons->SetBinError(1,0.1292346);
   n_electrons->SetBinError(2,0.1801012);
   n_electrons->SetBinError(3,0.4690063);
   n_electrons->SetBinError(4,0.7206253);
   n_electrons->SetBinError(5,1.586629);
   n_electrons->SetBinError(6,30.50836);
   n_electrons->SetMinimum(0);
   n_electrons->SetMaximum(2);
   n_electrons->SetEntries(2.155959);
   n_electrons->SetStats(0);
   n_electrons->SetFillStyle(0);
   n_electrons->SetMarkerStyle(20);
   n_electrons->SetMarkerSize(0.8);
   n_electrons->GetXaxis()->SetTitle("Number of electrons");
   n_electrons->GetXaxis()->SetRange(1,6);
   n_electrons->GetXaxis()->SetLabelFont(42);
   n_electrons->GetXaxis()->SetLabelOffset(0.007);
   n_electrons->GetXaxis()->SetLabelSize(0.1);
   n_electrons->GetXaxis()->SetTitleSize(0.12);
   n_electrons->GetXaxis()->SetTickLength(0.02);
   n_electrons->GetXaxis()->SetTitleOffset(0.9);
   n_electrons->GetXaxis()->SetTitleFont(42);
   n_electrons->GetYaxis()->SetTitle("Data/MC");
   n_electrons->GetYaxis()->SetNdivisions(505);
   n_electrons->GetYaxis()->SetLabelFont(42);
   n_electrons->GetYaxis()->SetLabelOffset(0.007);
   n_electrons->GetYaxis()->SetLabelSize(0.1);
   n_electrons->GetYaxis()->SetTitleSize(0.12);
   n_electrons->GetYaxis()->SetTickLength(0.02);
   n_electrons->GetYaxis()->SetTitleOffset(0.55);
   n_electrons->GetYaxis()->SetTitleFont(42);
   n_electrons->GetZaxis()->SetLabelFont(42);
   n_electrons->GetZaxis()->SetLabelOffset(0.007);
   n_electrons->GetZaxis()->SetLabelSize(0.035);
   n_electrons->GetZaxis()->SetTitleSize(0.045);
   n_electrons->GetZaxis()->SetTickLength(0.02);
   n_electrons->GetZaxis()->SetTitleFont(42);
   n_electrons->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
