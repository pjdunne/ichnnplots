{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:54 2013) by ROOT version5.32/00
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
   upper->Range(-3.613924,-0.008771018,3.348101,0.4297799);
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
   stack->SetMaximum(0.3884308);
   
   TH1F *taueta_1_stack_8 = new TH1F("taueta_1_stack_8","stack",20,-5,5);
   taueta_1_stack_8->SetBinContent(0,3.65101);
   taueta_1_stack_8->SetBinError(0,2.515429);
   taueta_1_stack_8->SetMinimum(0);
   taueta_1_stack_8->SetMaximum(0.4078524);
   taueta_1_stack_8->SetEntries(15);
   taueta_1_stack_8->SetStats(0);
   taueta_1_stack_8->SetFillColor(4);
   taueta_1_stack_8->SetLineColor(4);
   taueta_1_stack_8->SetLineWidth(2);
   taueta_1_stack_8->SetMarkerColor(4);
   taueta_1_stack_8->SetMarkerStyle(21);
   taueta_1_stack_8->SetMarkerSize(0.8);
   taueta_1_stack_8->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1_stack_8->GetXaxis()->SetRange(6,16);
   taueta_1_stack_8->GetXaxis()->SetLabelFont(42);
   taueta_1_stack_8->GetXaxis()->SetLabelOffset(0.007);
   taueta_1_stack_8->GetXaxis()->SetLabelSize(0);
   taueta_1_stack_8->GetXaxis()->SetTitleSize(0);
   taueta_1_stack_8->GetXaxis()->SetTickLength(0.02);
   taueta_1_stack_8->GetXaxis()->SetTitleOffset(0.9);
   taueta_1_stack_8->GetXaxis()->SetTitleFont(42);
   taueta_1_stack_8->GetYaxis()->SetTitle("Events");
   taueta_1_stack_8->GetYaxis()->SetLabelFont(42);
   taueta_1_stack_8->GetYaxis()->SetLabelOffset(0.007);
   taueta_1_stack_8->GetYaxis()->SetLabelSize(0.035);
   taueta_1_stack_8->GetYaxis()->SetTitleSize(0.045);
   taueta_1_stack_8->GetYaxis()->SetTickLength(0.02);
   taueta_1_stack_8->GetYaxis()->SetTitleOffset(1.55);
   taueta_1_stack_8->GetYaxis()->SetTitleFont(42);
   taueta_1_stack_8->GetZaxis()->SetLabelFont(42);
   taueta_1_stack_8->GetZaxis()->SetLabelOffset(0.007);
   taueta_1_stack_8->GetZaxis()->SetLabelSize(0.035);
   taueta_1_stack_8->GetZaxis()->SetTitleSize(0.045);
   taueta_1_stack_8->GetZaxis()->SetTickLength(0.02);
   taueta_1_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(taueta_1_stack_8);
   
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,3.65101);
   taueta_1->SetBinError(0,2.515429);
   taueta_1->SetMaximum(0.3342958);
   taueta_1->SetEntries(15);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(4);
   taueta_1->SetLineColor(4);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(4);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1->GetXaxis()->SetRange(6,16);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0);
   taueta_1->GetXaxis()->SetTitleSize(0);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetTitle("Events");
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"HIST");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,28.20787);
   taueta_1->SetBinError(0,4.271425);
   taueta_1->SetEntries(55);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(5);
   taueta_1->SetLineColor(5);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(5);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,110.9694);
   taueta_1->SetBinError(0,9.006425);
   taueta_1->SetEntries(214);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(6);
   taueta_1->SetLineColor(6);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(6);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,38.94313);
   taueta_1->SetBinContent(7,0.02094372);
   taueta_1->SetBinContent(8,0.03907363);
   taueta_1->SetBinContent(9,0.02673251);
   taueta_1->SetBinContent(10,0.03344005);
   taueta_1->SetBinContent(11,0.003138158);
   taueta_1->SetBinContent(12,0.01954203);
   taueta_1->SetBinContent(13,0.01178902);
   taueta_1->SetBinContent(14,0.02582451);
   taueta_1->SetBinContent(15,0.02655023);
   taueta_1->SetBinError(0,0.8857554);
   taueta_1->SetBinError(7,0.02094372);
   taueta_1->SetBinError(8,0.02762926);
   taueta_1->SetBinError(9,0.01989302);
   taueta_1->SetBinError(10,0.02876877);
   taueta_1->SetBinError(11,0.002413334);
   taueta_1->SetBinError(12,0.01954203);
   taueta_1->SetBinError(13,0.01178903);
   taueta_1->SetBinError(14,0.0204574);
   taueta_1->SetBinError(15,0.02655023);
   taueta_1->SetEntries(2244);
   taueta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   taueta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   taueta_1->SetLineColor(ci);
   taueta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   taueta_1->SetMarkerColor(ci);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,1.705527);
   taueta_1->SetBinContent(9,0.2026035);
   taueta_1->SetBinContent(10,0.08120943);
   taueta_1->SetBinContent(13,0.01566963);
   taueta_1->SetBinError(0,0.4379789);
   taueta_1->SetBinError(9,0.2026035);
   taueta_1->SetBinError(10,0.08120943);
   taueta_1->SetBinError(13,0.01566963);
   taueta_1->SetEntries(24);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,0.4235173);
   taueta_1->SetBinContent(8,0.006768879);
   taueta_1->SetBinContent(9,0.006076585);
   taueta_1->SetBinContent(10,0.02980101);
   taueta_1->SetBinContent(11,0.040319);
   taueta_1->SetBinContent(12,9.790847e-05);
   taueta_1->SetBinError(0,0.05374754);
   taueta_1->SetBinError(8,0.006768879);
   taueta_1->SetBinError(9,0.006076585);
   taueta_1->SetBinError(10,0.01371036);
   taueta_1->SetBinError(11,0.01662663);
   taueta_1->SetBinError(12,9.790846e-05);
   taueta_1->SetEntries(86);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(3);
   taueta_1->SetLineColor(3);
   taueta_1->SetLineWidth(2);
   taueta_1->SetMarkerColor(3);
   taueta_1->SetMarkerStyle(21);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(taueta_1,"");
   stack->Draw("hist");
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,119);
   taueta_1->SetBinError(0,10.90871);
   taueta_1->SetEntries(119);
   taueta_1->SetStats(0);
   taueta_1->SetFillColor(1);
   taueta_1->SetFillStyle(0);
   taueta_1->SetLineWidth(3);
   taueta_1->SetMarkerStyle(20);
   taueta_1->SetMarkerSize(1.3);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.035);
   taueta_1->GetXaxis()->SetTitleSize(0.045);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.035);
   taueta_1->GetYaxis()->SetTitleSize(0.045);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(1.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   taueta_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_noCJV");
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
   TLegendEntry *entry=leg->AddEntry("taueta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("taueta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("taueta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("taueta_1","Dibosons","f");
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
   lower->Range(-3.613924,-0.653951,3.348101,2.070845);
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
   
   TH1F *taueta_1 = new TH1F("taueta_1","taueta_1",20,-5,5);
   taueta_1->SetBinContent(0,0.6601964);
   taueta_1->SetBinError(0,0.07077266);
   taueta_1->SetMinimum(0);
   taueta_1->SetMaximum(2);
   taueta_1->SetStats(0);
   taueta_1->SetFillStyle(0);
   taueta_1->SetMarkerStyle(20);
   taueta_1->SetMarkerSize(0.8);
   taueta_1->GetXaxis()->SetTitle("Leading tau #eta");
   taueta_1->GetXaxis()->SetRange(6,16);
   taueta_1->GetXaxis()->SetLabelFont(42);
   taueta_1->GetXaxis()->SetLabelOffset(0.007);
   taueta_1->GetXaxis()->SetLabelSize(0.1);
   taueta_1->GetXaxis()->SetTitleSize(0.12);
   taueta_1->GetXaxis()->SetTickLength(0.02);
   taueta_1->GetXaxis()->SetTitleOffset(0.9);
   taueta_1->GetXaxis()->SetTitleFont(42);
   taueta_1->GetYaxis()->SetTitle("Data/MC");
   taueta_1->GetYaxis()->SetNdivisions(505);
   taueta_1->GetYaxis()->SetLabelFont(42);
   taueta_1->GetYaxis()->SetLabelOffset(0.007);
   taueta_1->GetYaxis()->SetLabelSize(0.1);
   taueta_1->GetYaxis()->SetTitleSize(0.12);
   taueta_1->GetYaxis()->SetTickLength(0.02);
   taueta_1->GetYaxis()->SetTitleOffset(0.55);
   taueta_1->GetYaxis()->SetTitleFont(42);
   taueta_1->GetZaxis()->SetLabelFont(42);
   taueta_1->GetZaxis()->SetLabelOffset(0.007);
   taueta_1->GetZaxis()->SetLabelSize(0.035);
   taueta_1->GetZaxis()->SetTitleSize(0.045);
   taueta_1->GetZaxis()->SetTickLength(0.02);
   taueta_1->GetZaxis()->SetTitleFont(42);
   taueta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
