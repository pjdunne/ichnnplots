{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:55 2013) by ROOT version5.32/00
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
   upper->Range(-2.810127,-2.963759,2.253165,8.070076);
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
   stack->SetMaximum(1.172434e+07);
   
   TH1F *edz_all_stack_4 = new TH1F("edz_all_stack_4","stack",100,-2,2);
   edz_all_stack_4->SetBinContent(49,0.07199811);
   edz_all_stack_4->SetBinContent(50,31.68631);
   edz_all_stack_4->SetBinContent(51,13.84613);
   edz_all_stack_4->SetBinError(49,0.07199811);
   edz_all_stack_4->SetBinError(50,7.36857);
   edz_all_stack_4->SetBinError(51,4.405667);
   edz_all_stack_4->SetMinimum(0.001806834);
   edz_all_stack_4->SetMaximum(3.299016e+07);
   edz_all_stack_4->SetEntries(133);
   edz_all_stack_4->SetStats(0);
   edz_all_stack_4->SetFillColor(4);
   edz_all_stack_4->SetLineColor(4);
   edz_all_stack_4->SetLineWidth(2);
   edz_all_stack_4->SetMarkerColor(4);
   edz_all_stack_4->SetMarkerStyle(21);
   edz_all_stack_4->SetMarkerSize(0.8);
   edz_all_stack_4->GetXaxis()->SetTitle("Electron d_{z}");
   edz_all_stack_4->GetXaxis()->SetLabelFont(42);
   edz_all_stack_4->GetXaxis()->SetLabelOffset(0.007);
   edz_all_stack_4->GetXaxis()->SetLabelSize(0);
   edz_all_stack_4->GetXaxis()->SetTitleSize(0);
   edz_all_stack_4->GetXaxis()->SetTickLength(0.02);
   edz_all_stack_4->GetXaxis()->SetTitleOffset(0.9);
   edz_all_stack_4->GetXaxis()->SetTitleFont(42);
   edz_all_stack_4->GetYaxis()->SetTitle("Events");
   edz_all_stack_4->GetYaxis()->SetLabelFont(42);
   edz_all_stack_4->GetYaxis()->SetLabelOffset(0.007);
   edz_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   edz_all_stack_4->GetYaxis()->SetTitleSize(0.045);
   edz_all_stack_4->GetYaxis()->SetTickLength(0.02);
   edz_all_stack_4->GetYaxis()->SetTitleOffset(1.55);
   edz_all_stack_4->GetYaxis()->SetTitleFont(42);
   edz_all_stack_4->GetZaxis()->SetLabelFont(42);
   edz_all_stack_4->GetZaxis()->SetLabelOffset(0.007);
   edz_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   edz_all_stack_4->GetZaxis()->SetTitleSize(0.045);
   edz_all_stack_4->GetZaxis()->SetTickLength(0.02);
   edz_all_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(edz_all_stack_4);
   
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(49,0.07199811);
   edz_all->SetBinContent(50,31.68631);
   edz_all->SetBinContent(51,13.84613);
   edz_all->SetBinError(49,0.07199811);
   edz_all->SetBinError(50,7.36857);
   edz_all->SetBinError(51,4.405667);
   edz_all->SetMinimum(0.01);
   edz_all->SetMaximum(8115000);
   edz_all->SetEntries(133);
   edz_all->SetStats(0);
   edz_all->SetFillColor(4);
   edz_all->SetLineColor(4);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(4);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetTitle("Electron d_{z}");
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0);
   edz_all->GetXaxis()->SetTitleSize(0);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetTitle("Events");
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"HIST");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,140.0906);
   edz_all->SetBinContent(51,142.7319);
   edz_all->SetBinContent(52,0.1904784);
   edz_all->SetBinError(50,9.803457);
   edz_all->SetBinError(51,10.10396);
   edz_all->SetBinError(52,0.1904784);
   edz_all->SetEntries(505);
   edz_all->SetStats(0);
   edz_all->SetFillColor(5);
   edz_all->SetLineColor(5);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(5);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(48,1.179313);
   edz_all->SetBinContent(49,4.813708);
   edz_all->SetBinContent(50,460.4137);
   edz_all->SetBinContent(51,452.7054);
   edz_all->SetBinContent(52,7.455023);
   edz_all->SetBinContent(53,1.140918);
   edz_all->SetBinError(48,0.8768199);
   edz_all->SetBinError(49,1.637446);
   edz_all->SetBinError(50,17.16177);
   edz_all->SetBinError(51,17.44383);
   edz_all->SetBinError(52,2.365037);
   edz_all->SetBinError(53,0.9528123);
   edz_all->SetEntries(2004);
   edz_all->SetStats(0);
   edz_all->SetFillColor(6);
   edz_all->SetLineColor(6);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(6);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(48,0.08855373);
   edz_all->SetBinContent(49,0.8978742);
   edz_all->SetBinContent(50,139.7521);
   edz_all->SetBinContent(51,146.2168);
   edz_all->SetBinContent(52,0.9971883);
   edz_all->SetBinContent(53,0.1856895);
   edz_all->SetBinError(48,0.04415861);
   edz_all->SetBinError(49,0.132348);
   edz_all->SetBinError(50,1.667271);
   edz_all->SetBinError(51,1.708394);
   edz_all->SetBinError(52,0.1395848);
   edz_all->SetBinError(53,0.05998512);
   edz_all->SetEntries(16955);
   edz_all->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   edz_all->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   edz_all->SetLineColor(ci);
   edz_all->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   edz_all->SetMarkerColor(ci);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(50,0.1134007);
   edz_all->SetBinError(50,0.1134007);
   edz_all->SetEntries(1);
   edz_all->SetStats(0);
   edz_all->SetFillColor(3);
   edz_all->SetLineColor(3);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(3);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(49,0.5290543);
   edz_all->SetBinContent(50,7.934482);
   edz_all->SetBinContent(51,6.02816);
   edz_all->SetBinContent(52,0.2427561);
   edz_all->SetBinError(49,0.2360684);
   edz_all->SetBinError(50,0.9037486);
   edz_all->SetBinError(51,0.846678);
   edz_all->SetBinError(52,0.1479783);
   edz_all->SetEntries(176);
   edz_all->SetStats(0);
   edz_all->SetFillColor(3);
   edz_all->SetLineColor(3);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(3);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(49,0.05210263);
   edz_all->SetBinContent(50,1.632221);
   edz_all->SetBinContent(51,1.699378);
   edz_all->SetBinContent(52,0.03810759);
   edz_all->SetBinError(49,0.01784566);
   edz_all->SetBinError(50,0.101321);
   edz_all->SetBinError(51,0.1044553);
   edz_all->SetBinError(52,0.01617857);
   edz_all->SetEntries(640);
   edz_all->SetStats(0);
   edz_all->SetFillColor(3);
   edz_all->SetLineColor(3);
   edz_all->SetLineWidth(2);
   edz_all->SetMarkerColor(3);
   edz_all->SetMarkerStyle(21);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   stack->Add(edz_all,"");
   stack->Draw("hist");
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(48,2);
   edz_all->SetBinContent(49,2);
   edz_all->SetBinContent(50,540);
   edz_all->SetBinContent(51,541);
   edz_all->SetBinContent(52,6);
   edz_all->SetBinError(48,1.414214);
   edz_all->SetBinError(49,1.414214);
   edz_all->SetBinError(50,23.2379);
   edz_all->SetBinError(51,23.25941);
   edz_all->SetBinError(52,2.44949);
   edz_all->SetEntries(1091);
   edz_all->SetStats(0);
   edz_all->SetFillColor(1);
   edz_all->SetFillStyle(0);
   edz_all->SetLineWidth(3);
   edz_all->SetMarkerStyle(20);
   edz_all->SetMarkerSize(1.3);
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.035);
   edz_all->GetXaxis()->SetTitleSize(0.045);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.035);
   edz_all->GetYaxis()->SetTitleSize(0.045);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(1.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   edz_all->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"AN");
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
   TLegendEntry *entry=leg->AddEntry("edz_all","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("edz_all","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edz_all","EWK W+jets","f");

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
   entry=leg->AddEntry("edz_all","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edz_all","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("edz_all","Dibosons","f");
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
   
   TH1F *edz_all = new TH1F("edz_all","edz_all",100,-2,2);
   edz_all->SetBinContent(48,1.577452);
   edz_all->SetBinContent(49,0.3178266);
   edz_all->SetBinContent(50,0.7200609);
   edz_all->SetBinContent(51,0.7219286);
   edz_all->SetBinContent(52,0.6723779);
   edz_all->SetBinError(48,1.561186);
   edz_all->SetBinError(49,0.2398629);
   edz_all->SetBinError(50,0.03638172);
   edz_all->SetBinError(51,0.03665921);
   edz_all->SetBinError(52,0.3279439);
   edz_all->SetMinimum(0);
   edz_all->SetMaximum(2);
   edz_all->SetEntries(6.171571);
   edz_all->SetStats(0);
   edz_all->SetFillStyle(0);
   edz_all->SetMarkerStyle(20);
   edz_all->SetMarkerSize(0.8);
   edz_all->GetXaxis()->SetTitle("Electron d_{z}");
   edz_all->GetXaxis()->SetLabelFont(42);
   edz_all->GetXaxis()->SetLabelOffset(0.007);
   edz_all->GetXaxis()->SetLabelSize(0.1);
   edz_all->GetXaxis()->SetTitleSize(0.12);
   edz_all->GetXaxis()->SetTickLength(0.02);
   edz_all->GetXaxis()->SetTitleOffset(0.9);
   edz_all->GetXaxis()->SetTitleFont(42);
   edz_all->GetYaxis()->SetTitle("Data/MC");
   edz_all->GetYaxis()->SetNdivisions(505);
   edz_all->GetYaxis()->SetLabelFont(42);
   edz_all->GetYaxis()->SetLabelOffset(0.007);
   edz_all->GetYaxis()->SetLabelSize(0.1);
   edz_all->GetYaxis()->SetTitleSize(0.12);
   edz_all->GetYaxis()->SetTickLength(0.02);
   edz_all->GetYaxis()->SetTitleOffset(0.55);
   edz_all->GetYaxis()->SetTitleFont(42);
   edz_all->GetZaxis()->SetLabelFont(42);
   edz_all->GetZaxis()->SetLabelOffset(0.007);
   edz_all->GetZaxis()->SetLabelSize(0.035);
   edz_all->GetZaxis()->SetTitleSize(0.045);
   edz_all->GetZaxis()->SetTickLength(0.02);
   edz_all->GetZaxis()->SetTitleFont(42);
   edz_all->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
