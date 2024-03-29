{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:54:31 2013) by ROOT version5.32/00
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
   upper->Range(-1.405063,-3.041236,1.126582,9.472373);
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
   stack->SetMaximum(2.287133e+08);
   
   TH1F *mudxy_all_stack_2 = new TH1F("mudxy_all_stack_2","stack",100,-1,1);
   mudxy_all_stack_2->SetBinContent(49,2.470657);
   mudxy_all_stack_2->SetBinContent(50,421.2159);
   mudxy_all_stack_2->SetBinContent(51,433.9299);
   mudxy_all_stack_2->SetBinContent(52,1.611432);
   mudxy_all_stack_2->SetBinError(49,2.204564);
   mudxy_all_stack_2->SetBinError(50,19.35027);
   mudxy_all_stack_2->SetBinError(51,20.55145);
   mudxy_all_stack_2->SetBinError(52,1.297205);
   mudxy_all_stack_2->SetMinimum(0.001618216);
   mudxy_all_stack_2->SetMaximum(7.025748e+08);
   mudxy_all_stack_2->SetEntries(11415);
   mudxy_all_stack_2->SetStats(0);
   mudxy_all_stack_2->SetFillColor(4);
   mudxy_all_stack_2->SetLineColor(4);
   mudxy_all_stack_2->SetLineWidth(2);
   mudxy_all_stack_2->SetMarkerColor(4);
   mudxy_all_stack_2->SetMarkerStyle(21);
   mudxy_all_stack_2->SetMarkerSize(0.8);
   mudxy_all_stack_2->GetXaxis()->SetTitle("Muon d_{xy}");
   mudxy_all_stack_2->GetXaxis()->SetLabelFont(42);
   mudxy_all_stack_2->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all_stack_2->GetXaxis()->SetLabelSize(0);
   mudxy_all_stack_2->GetXaxis()->SetTitleSize(0);
   mudxy_all_stack_2->GetXaxis()->SetTickLength(0.02);
   mudxy_all_stack_2->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all_stack_2->GetXaxis()->SetTitleFont(42);
   mudxy_all_stack_2->GetYaxis()->SetTitle("Events");
   mudxy_all_stack_2->GetYaxis()->SetLabelFont(42);
   mudxy_all_stack_2->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   mudxy_all_stack_2->GetYaxis()->SetTitleSize(0.045);
   mudxy_all_stack_2->GetYaxis()->SetTickLength(0.02);
   mudxy_all_stack_2->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all_stack_2->GetYaxis()->SetTitleFont(42);
   mudxy_all_stack_2->GetZaxis()->SetLabelFont(42);
   mudxy_all_stack_2->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   mudxy_all_stack_2->GetZaxis()->SetTitleSize(0.045);
   mudxy_all_stack_2->GetZaxis()->SetTickLength(0.02);
   mudxy_all_stack_2->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mudxy_all_stack_2);
   
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(49,2.470657);
   mudxy_all->SetBinContent(50,421.2159);
   mudxy_all->SetBinContent(51,433.9299);
   mudxy_all->SetBinContent(52,1.611432);
   mudxy_all->SetBinError(49,2.204564);
   mudxy_all->SetBinError(50,19.35027);
   mudxy_all->SetBinError(51,20.55145);
   mudxy_all->SetBinError(52,1.297205);
   mudxy_all->SetMinimum(0.01);
   mudxy_all->SetMaximum(2.064e+08);
   mudxy_all->SetEntries(11415);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(4);
   mudxy_all->SetLineColor(4);
   mudxy_all->SetLineWidth(2);
   mudxy_all->SetMarkerColor(4);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetTitle("Muon d_{xy}");
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0);
   mudxy_all->GetXaxis()->SetTitleSize(0);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetTitle("Events");
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"HIST");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,0.3521195);
   mudxy_all->SetBinContent(49,2.198036);
   mudxy_all->SetBinContent(50,2533.509);
   mudxy_all->SetBinContent(51,2486.909);
   mudxy_all->SetBinContent(52,7.782773);
   mudxy_all->SetBinError(48,0.2520247);
   mudxy_all->SetBinError(49,0.6830781);
   mudxy_all->SetBinError(50,30.5011);
   mudxy_all->SetBinError(51,30.52061);
   mudxy_all->SetBinError(52,1.840189);
   mudxy_all->SetEntries(27402);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(5);
   mudxy_all->SetLineColor(5);
   mudxy_all->SetLineWidth(2);
   mudxy_all->SetMarkerColor(5);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,0.2479125);
   mudxy_all->SetBinContent(49,21.60984);
   mudxy_all->SetBinContent(50,10300.12);
   mudxy_all->SetBinContent(51,10208.38);
   mudxy_all->SetBinContent(52,13.13971);
   mudxy_all->SetBinContent(53,3.024806);
   mudxy_all->SetBinError(48,0.17689);
   mudxy_all->SetBinError(49,5.06339);
   mudxy_all->SetBinError(50,76.04156);
   mudxy_all->SetBinError(51,76.86961);
   mudxy_all->SetBinError(52,2.347348);
   mudxy_all->SetBinError(53,1.292786);
   mudxy_all->SetEntries(108838);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(6);
   mudxy_all->SetLineColor(6);
   mudxy_all->SetLineWidth(2);
   mudxy_all->SetMarkerColor(6);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,0.09275331);
   mudxy_all->SetBinContent(49,2.730331);
   mudxy_all->SetBinContent(50,1071.631);
   mudxy_all->SetBinContent(51,1042.681);
   mudxy_all->SetBinContent(52,2.471589);
   mudxy_all->SetBinContent(53,0.1464331);
   mudxy_all->SetBinError(48,0.03937416);
   mudxy_all->SetBinError(49,0.2210932);
   mudxy_all->SetBinError(50,4.168046);
   mudxy_all->SetBinError(51,4.114807);
   mudxy_all->SetBinError(52,0.2081815);
   mudxy_all->SetBinError(53,0.05259659);
   mudxy_all->SetEntries(195784);
   mudxy_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mudxy_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mudxy_all->SetLineColor(ci);
   mudxy_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mudxy_all->SetMarkerColor(ci);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(50,0.03535233);
   mudxy_all->SetBinContent(51,0.05170049);
   mudxy_all->SetBinError(50,0.03535234);
   mudxy_all->SetBinError(51,0.05156396);
   mudxy_all->SetEntries(3);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(3);
   mudxy_all->SetLineColor(3);
   mudxy_all->SetLineWidth(2);
   mudxy_all->SetMarkerColor(3);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,0.0904678);
   mudxy_all->SetBinContent(49,4.671834);
   mudxy_all->SetBinContent(50,839.2877);
   mudxy_all->SetBinContent(51,815.1581);
   mudxy_all->SetBinContent(52,4.980547);
   mudxy_all->SetBinContent(53,0.1253433);
   mudxy_all->SetBinError(48,0.06351237);
   mudxy_all->SetBinError(49,0.7681326);
   mudxy_all->SetBinError(50,8.407471);
   mudxy_all->SetBinError(51,8.300467);
   mudxy_all->SetBinError(52,0.8078918);
   mudxy_all->SetBinError(53,0.07571587);
   mudxy_all->SetEntries(51948);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(3);
   mudxy_all->SetLineColor(3);
   mudxy_all->SetLineWidth(2);
   mudxy_all->SetMarkerColor(3);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,0.03636952);
   mudxy_all->SetBinContent(49,0.3832743);
   mudxy_all->SetBinContent(50,81.75473);
   mudxy_all->SetBinContent(51,79.15081);
   mudxy_all->SetBinContent(52,0.385507);
   mudxy_all->SetBinContent(53,0.01292034);
   mudxy_all->SetBinError(48,0.01507386);
   mudxy_all->SetBinError(49,0.0446036);
   mudxy_all->SetBinError(50,0.775564);
   mudxy_all->SetBinError(51,0.7664543);
   mudxy_all->SetBinError(52,0.04470217);
   mudxy_all->SetBinError(53,0.008708991);
   mudxy_all->SetEntries(37654);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(3);
   mudxy_all->SetLineColor(3);
   mudxy_all->SetLineWidth(2);
   mudxy_all->SetMarkerColor(3);
   mudxy_all->SetMarkerStyle(21);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   stack->Add(mudxy_all,"");
   stack->Draw("hist");
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,2);
   mudxy_all->SetBinContent(49,78);
   mudxy_all->SetBinContent(50,10425);
   mudxy_all->SetBinContent(51,13760);
   mudxy_all->SetBinContent(52,65);
   mudxy_all->SetBinContent(53,11);
   mudxy_all->SetBinError(48,1.414214);
   mudxy_all->SetBinError(49,8.831761);
   mudxy_all->SetBinError(50,102.1029);
   mudxy_all->SetBinError(51,117.303);
   mudxy_all->SetBinError(52,8.062258);
   mudxy_all->SetBinError(53,3.316625);
   mudxy_all->SetEntries(24341);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillColor(1);
   mudxy_all->SetFillStyle(0);
   mudxy_all->SetLineWidth(3);
   mudxy_all->SetMarkerStyle(20);
   mudxy_all->SetMarkerSize(1.3);
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.035);
   mudxy_all->GetXaxis()->SetTitleSize(0.045);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.035);
   mudxy_all->GetYaxis()->SetTitleSize(0.045);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(1.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   mudxy_all->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"WSelection");
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
   TLegendEntry *entry=leg->AddEntry("mudxy_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mudxy_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudxy_all","EWK W+jets","f");

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
   entry=leg->AddEntry("mudxy_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudxy_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mudxy_all","Dibosons","f");
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
   
   TH1F *mudxy_all = new TH1F("mudxy_all","mudxy_all",100,-1,1);
   mudxy_all->SetBinContent(48,2.440147);
   mudxy_all->SetBinContent(49,2.468877);
   mudxy_all->SetBinContent(50,0.7031406);
   mudxy_all->SetBinContent(51,0.9403832);
   mudxy_all->SetBinContent(52,2.260074);
   mudxy_all->SetBinContent(53,3.323762);
   mudxy_all->SetBinError(48,1.966973);
   mudxy_all->SetBinError(49,0.4913985);
   mudxy_all->SetBinError(50,0.007919734);
   mudxy_all->SetBinError(51,0.009637301);
   mudxy_all->SetBinError(52,0.3712579);
   mudxy_all->SetBinError(53,1.642768);
   mudxy_all->SetMinimum(0);
   mudxy_all->SetMaximum(2);
   mudxy_all->SetEntries(21.20182);
   mudxy_all->SetStats(0);
   mudxy_all->SetFillStyle(0);
   mudxy_all->SetMarkerStyle(20);
   mudxy_all->SetMarkerSize(0.8);
   mudxy_all->GetXaxis()->SetTitle("Muon d_{xy}");
   mudxy_all->GetXaxis()->SetLabelFont(42);
   mudxy_all->GetXaxis()->SetLabelOffset(0.007);
   mudxy_all->GetXaxis()->SetLabelSize(0.1);
   mudxy_all->GetXaxis()->SetTitleSize(0.12);
   mudxy_all->GetXaxis()->SetTickLength(0.02);
   mudxy_all->GetXaxis()->SetTitleOffset(0.9);
   mudxy_all->GetXaxis()->SetTitleFont(42);
   mudxy_all->GetYaxis()->SetTitle("Data/MC");
   mudxy_all->GetYaxis()->SetNdivisions(505);
   mudxy_all->GetYaxis()->SetLabelFont(42);
   mudxy_all->GetYaxis()->SetLabelOffset(0.007);
   mudxy_all->GetYaxis()->SetLabelSize(0.1);
   mudxy_all->GetYaxis()->SetTitleSize(0.12);
   mudxy_all->GetYaxis()->SetTickLength(0.02);
   mudxy_all->GetYaxis()->SetTitleOffset(0.55);
   mudxy_all->GetYaxis()->SetTitleFont(42);
   mudxy_all->GetZaxis()->SetLabelFont(42);
   mudxy_all->GetZaxis()->SetLabelOffset(0.007);
   mudxy_all->GetZaxis()->SetLabelSize(0.035);
   mudxy_all->GetZaxis()->SetTitleSize(0.045);
   mudxy_all->GetZaxis()->SetTickLength(0.02);
   mudxy_all->GetZaxis()->SetTitleFont(42);
   mudxy_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
