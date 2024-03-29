{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:27:58 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-3.030291,1063.291,9.268523);
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
   stack->SetMaximum(1.484303e+08);
   
   TH1F *jpt_1_stack_3 = new TH1F("jpt_1_stack_3","stack",25,0,1000);
   jpt_1_stack_3->SetBinContent(2,53.0358);
   jpt_1_stack_3->SetBinContent(3,192.1892);
   jpt_1_stack_3->SetBinContent(4,205.3022);
   jpt_1_stack_3->SetBinContent(5,204.0567);
   jpt_1_stack_3->SetBinContent(6,106.0045);
   jpt_1_stack_3->SetBinContent(7,71.12872);
   jpt_1_stack_3->SetBinContent(8,45.45948);
   jpt_1_stack_3->SetBinContent(9,18.8928);
   jpt_1_stack_3->SetBinContent(10,11.56822);
   jpt_1_stack_3->SetBinContent(11,12.86905);
   jpt_1_stack_3->SetBinContent(12,5.80255);
   jpt_1_stack_3->SetBinContent(13,2.672036);
   jpt_1_stack_3->SetBinContent(14,4.812775);
   jpt_1_stack_3->SetBinContent(15,0.6209472);
   jpt_1_stack_3->SetBinContent(16,1.397706);
   jpt_1_stack_3->SetBinContent(17,0.4519767);
   jpt_1_stack_3->SetBinContent(18,0.4423081);
   jpt_1_stack_3->SetBinContent(19,1.382695);
   jpt_1_stack_3->SetBinContent(20,0.1400189);
   jpt_1_stack_3->SetBinContent(21,0.105632);
   jpt_1_stack_3->SetBinContent(22,0.1331263);
   jpt_1_stack_3->SetBinContent(23,0.01720165);
   jpt_1_stack_3->SetBinContent(26,0.5707616);
   jpt_1_stack_3->SetBinError(2,6.004246);
   jpt_1_stack_3->SetBinError(3,12.99932);
   jpt_1_stack_3->SetBinError(4,14.25346);
   jpt_1_stack_3->SetBinError(5,15.27092);
   jpt_1_stack_3->SetBinError(6,11.15858);
   jpt_1_stack_3->SetBinError(7,9.85961);
   jpt_1_stack_3->SetBinError(8,7.376878);
   jpt_1_stack_3->SetBinError(9,5.06126);
   jpt_1_stack_3->SetBinError(10,3.554401);
   jpt_1_stack_3->SetBinError(11,4.100076);
   jpt_1_stack_3->SetBinError(12,2.423818);
   jpt_1_stack_3->SetBinError(13,1.337118);
   jpt_1_stack_3->SetBinError(14,2.867567);
   jpt_1_stack_3->SetBinError(15,0.1660953);
   jpt_1_stack_3->SetBinError(16,1.003306);
   jpt_1_stack_3->SetBinError(17,0.1862505);
   jpt_1_stack_3->SetBinError(18,0.2164272);
   jpt_1_stack_3->SetBinError(19,0.9947165);
   jpt_1_stack_3->SetBinError(20,0.09837697);
   jpt_1_stack_3->SetBinError(21,0.05722676);
   jpt_1_stack_3->SetBinError(22,0.1214534);
   jpt_1_stack_3->SetBinError(23,0.0164678);
   jpt_1_stack_3->SetBinError(26,0.4283777);
   jpt_1_stack_3->SetMinimum(0.00164318);
   jpt_1_stack_3->SetMaximum(4.503829e+08);
   jpt_1_stack_3->SetEntries(10362);
   jpt_1_stack_3->SetStats(0);
   jpt_1_stack_3->SetFillColor(4);
   jpt_1_stack_3->SetLineColor(4);
   jpt_1_stack_3->SetLineWidth(2);
   jpt_1_stack_3->SetMarkerColor(4);
   jpt_1_stack_3->SetMarkerStyle(21);
   jpt_1_stack_3->SetMarkerSize(0.8);
   jpt_1_stack_3->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_3->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_3->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_3->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_3->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_3->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_3->GetYaxis()->SetTitle("Events");
   jpt_1_stack_3->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_3->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_3->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_3->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_3->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_3->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_3->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_3->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_3->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_3->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_3->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_3);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,53.0358);
   jpt_1->SetBinContent(3,192.1892);
   jpt_1->SetBinContent(4,205.3022);
   jpt_1->SetBinContent(5,204.0567);
   jpt_1->SetBinContent(6,106.0045);
   jpt_1->SetBinContent(7,71.12872);
   jpt_1->SetBinContent(8,45.45948);
   jpt_1->SetBinContent(9,18.8928);
   jpt_1->SetBinContent(10,11.56822);
   jpt_1->SetBinContent(11,12.86905);
   jpt_1->SetBinContent(12,5.80255);
   jpt_1->SetBinContent(13,2.672036);
   jpt_1->SetBinContent(14,4.812775);
   jpt_1->SetBinContent(15,0.6209472);
   jpt_1->SetBinContent(16,1.397706);
   jpt_1->SetBinContent(17,0.4519767);
   jpt_1->SetBinContent(18,0.4423081);
   jpt_1->SetBinContent(19,1.382695);
   jpt_1->SetBinContent(20,0.1400189);
   jpt_1->SetBinContent(21,0.105632);
   jpt_1->SetBinContent(22,0.1331263);
   jpt_1->SetBinContent(23,0.01720165);
   jpt_1->SetBinContent(26,0.5707616);
   jpt_1->SetBinError(2,6.004246);
   jpt_1->SetBinError(3,12.99932);
   jpt_1->SetBinError(4,14.25346);
   jpt_1->SetBinError(5,15.27092);
   jpt_1->SetBinError(6,11.15858);
   jpt_1->SetBinError(7,9.85961);
   jpt_1->SetBinError(8,7.376878);
   jpt_1->SetBinError(9,5.06126);
   jpt_1->SetBinError(10,3.554401);
   jpt_1->SetBinError(11,4.100076);
   jpt_1->SetBinError(12,2.423818);
   jpt_1->SetBinError(13,1.337118);
   jpt_1->SetBinError(14,2.867567);
   jpt_1->SetBinError(15,0.1660953);
   jpt_1->SetBinError(16,1.003306);
   jpt_1->SetBinError(17,0.1862505);
   jpt_1->SetBinError(18,0.2164272);
   jpt_1->SetBinError(19,0.9947165);
   jpt_1->SetBinError(20,0.09837697);
   jpt_1->SetBinError(21,0.05722676);
   jpt_1->SetBinError(22,0.1214534);
   jpt_1->SetBinError(23,0.0164678);
   jpt_1->SetBinError(26,0.4283777);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(5.149395e+09);
   jpt_1->SetEntries(10362);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(4);
   jpt_1->SetLineColor(4);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(4);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0);
   jpt_1->GetXaxis()->SetTitleSize(0);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Events");
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"HIST");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,137.232);
   jpt_1->SetBinContent(3,732.4692);
   jpt_1->SetBinContent(4,999.8085);
   jpt_1->SetBinContent(5,870.1318);
   jpt_1->SetBinContent(6,610.0969);
   jpt_1->SetBinContent(7,394.4219);
   jpt_1->SetBinContent(8,289.7272);
   jpt_1->SetBinContent(9,188.2511);
   jpt_1->SetBinContent(10,124.901);
   jpt_1->SetBinContent(11,92.47913);
   jpt_1->SetBinContent(12,79.92107);
   jpt_1->SetBinContent(13,52.16623);
   jpt_1->SetBinContent(14,37.74949);
   jpt_1->SetBinContent(15,22.72232);
   jpt_1->SetBinContent(16,20.52016);
   jpt_1->SetBinContent(17,13.39336);
   jpt_1->SetBinContent(18,5.804026);
   jpt_1->SetBinContent(19,6.925208);
   jpt_1->SetBinContent(20,5.854981);
   jpt_1->SetBinContent(21,3.851202);
   jpt_1->SetBinContent(22,6.231527);
   jpt_1->SetBinContent(23,0.8848168);
   jpt_1->SetBinContent(24,1.451645);
   jpt_1->SetBinContent(25,2.236133);
   jpt_1->SetBinContent(26,4.832988);
   jpt_1->SetBinError(2,5.691102);
   jpt_1->SetBinError(3,15.47872);
   jpt_1->SetBinError(4,19.24436);
   jpt_1->SetBinError(5,18.6614);
   jpt_1->SetBinError(6,16.22947);
   jpt_1->SetBinError(7,12.95578);
   jpt_1->SetBinError(8,11.84099);
   jpt_1->SetBinError(9,9.666955);
   jpt_1->SetBinError(10,7.62737);
   jpt_1->SetBinError(11,6.948112);
   jpt_1->SetBinError(12,7.042203);
   jpt_1->SetBinError(13,5.332027);
   jpt_1->SetBinError(14,4.529209);
   jpt_1->SetBinError(15,3.677917);
   jpt_1->SetBinError(16,3.549077);
   jpt_1->SetBinError(17,3.405072);
   jpt_1->SetBinError(18,1.867574);
   jpt_1->SetBinError(19,2.056512);
   jpt_1->SetBinError(20,2.356068);
   jpt_1->SetBinError(21,1.45403);
   jpt_1->SetBinError(22,2.227849);
   jpt_1->SetBinError(23,0.566633);
   jpt_1->SetBinError(24,0.8837574);
   jpt_1->SetBinError(25,1.300913);
   jpt_1->SetBinError(26,1.817484);
   jpt_1->SetEntries(22503);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(5);
   jpt_1->SetLineColor(5);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(5);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,1466.62);
   jpt_1->SetBinContent(3,4930.948);
   jpt_1->SetBinContent(4,5684.171);
   jpt_1->SetBinContent(5,4600.571);
   jpt_1->SetBinContent(6,2886.114);
   jpt_1->SetBinContent(7,1662.659);
   jpt_1->SetBinContent(8,985.3912);
   jpt_1->SetBinContent(9,563.1987);
   jpt_1->SetBinContent(10,301.8398);
   jpt_1->SetBinContent(11,207.8296);
   jpt_1->SetBinContent(12,125.9776);
   jpt_1->SetBinContent(13,79.16202);
   jpt_1->SetBinContent(14,56.07529);
   jpt_1->SetBinContent(15,33.55717);
   jpt_1->SetBinContent(16,24.91995);
   jpt_1->SetBinContent(17,13.14239);
   jpt_1->SetBinContent(18,7.056139);
   jpt_1->SetBinContent(19,3.487713);
   jpt_1->SetBinContent(20,6.308342);
   jpt_1->SetBinContent(21,2.26032);
   jpt_1->SetBinContent(22,1.761321);
   jpt_1->SetBinContent(23,0.4450279);
   jpt_1->SetBinContent(25,0.07956024);
   jpt_1->SetBinContent(26,2.950286);
   jpt_1->SetBinError(2,29.72936);
   jpt_1->SetBinError(3,49.13739);
   jpt_1->SetBinError(4,52.19733);
   jpt_1->SetBinError(5,47.07437);
   jpt_1->SetBinError(6,38.13933);
   jpt_1->SetBinError(7,29.29374);
   jpt_1->SetBinError(8,22.18425);
   jpt_1->SetBinError(9,17.06761);
   jpt_1->SetBinError(10,11.52613);
   jpt_1->SetBinError(11,9.974504);
   jpt_1->SetBinError(12,7.803921);
   jpt_1->SetBinError(13,6.187056);
   jpt_1->SetBinError(14,5.193992);
   jpt_1->SetBinError(15,3.829223);
   jpt_1->SetBinError(16,3.177228);
   jpt_1->SetBinError(17,2.383221);
   jpt_1->SetBinError(18,1.579903);
   jpt_1->SetBinError(19,1.161014);
   jpt_1->SetBinError(20,1.802037);
   jpt_1->SetBinError(21,0.8552692);
   jpt_1->SetBinError(22,0.7701945);
   jpt_1->SetBinError(23,0.4015691);
   jpt_1->SetBinError(25,0.07956024);
   jpt_1->SetBinError(26,1.194901);
   jpt_1->SetEntries(103542);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(6);
   jpt_1->SetLineColor(6);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(6);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,40.16372);
   jpt_1->SetBinContent(3,295.1015);
   jpt_1->SetBinContent(4,489.2868);
   jpt_1->SetBinContent(5,477.7073);
   jpt_1->SetBinContent(6,344.0137);
   jpt_1->SetBinContent(7,217.1523);
   jpt_1->SetBinContent(8,129.3858);
   jpt_1->SetBinContent(9,74.24358);
   jpt_1->SetBinContent(10,45.09865);
   jpt_1->SetBinContent(11,27.72405);
   jpt_1->SetBinContent(12,15.93777);
   jpt_1->SetBinContent(13,10.69443);
   jpt_1->SetBinContent(14,6.060638);
   jpt_1->SetBinContent(15,4.424582);
   jpt_1->SetBinContent(16,2.714897);
   jpt_1->SetBinContent(17,1.580831);
   jpt_1->SetBinContent(18,1.168153);
   jpt_1->SetBinContent(19,0.8372991);
   jpt_1->SetBinContent(20,0.5296568);
   jpt_1->SetBinContent(21,0.3640748);
   jpt_1->SetBinContent(22,0.3628142);
   jpt_1->SetBinContent(23,0.2079582);
   jpt_1->SetBinContent(24,0.08690663);
   jpt_1->SetBinContent(25,0.05048953);
   jpt_1->SetBinContent(26,0.3095871);
   jpt_1->SetBinError(2,0.694061);
   jpt_1->SetBinError(3,2.014968);
   jpt_1->SetBinError(4,2.681196);
   jpt_1->SetBinError(5,2.739308);
   jpt_1->SetBinError(6,2.404407);
   jpt_1->SetBinError(7,1.952383);
   jpt_1->SetBinError(8,1.530177);
   jpt_1->SetBinError(9,1.170905);
   jpt_1->SetBinError(10,0.913735);
   jpt_1->SetBinError(11,0.7168648);
   jpt_1->SetBinError(12,0.5392576);
   jpt_1->SetBinError(13,0.4487271);
   jpt_1->SetBinError(14,0.3368532);
   jpt_1->SetBinError(15,0.2936947);
   jpt_1->SetBinError(16,0.2229044);
   jpt_1->SetBinError(17,0.1723249);
   jpt_1->SetBinError(18,0.1587255);
   jpt_1->SetBinError(19,0.1193142);
   jpt_1->SetBinError(20,0.09976097);
   jpt_1->SetBinError(21,0.0789765);
   jpt_1->SetBinError(22,0.08143789);
   jpt_1->SetBinError(23,0.06250906);
   jpt_1->SetBinError(24,0.03749221);
   jpt_1->SetBinError(25,0.02931066);
   jpt_1->SetBinError(26,0.07771173);
   jpt_1->SetEntries(195338);
   jpt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_1->SetLineColor(ci);
   jpt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_1->SetMarkerColor(ci);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,399.2136);
   jpt_1->SetBinContent(3,1794.417);
   jpt_1->SetBinContent(4,2233.355);
   jpt_1->SetBinContent(5,1885.892);
   jpt_1->SetBinContent(6,1296.331);
   jpt_1->SetBinContent(7,742.7396);
   jpt_1->SetBinContent(8,436.4457);
   jpt_1->SetBinContent(9,251.3978);
   jpt_1->SetBinContent(10,156.5985);
   jpt_1->SetBinContent(11,95.03729);
   jpt_1->SetBinContent(12,59.11289);
   jpt_1->SetBinContent(13,37.32867);
   jpt_1->SetBinContent(14,25.01741);
   jpt_1->SetBinContent(15,18.07982);
   jpt_1->SetBinContent(16,10.04195);
   jpt_1->SetBinContent(17,8.178631);
   jpt_1->SetBinContent(18,4.804126);
   jpt_1->SetBinContent(19,3.094624);
   jpt_1->SetBinContent(20,2.566104);
   jpt_1->SetBinContent(21,1.395952);
   jpt_1->SetBinContent(22,1.476781);
   jpt_1->SetBinContent(23,0.4075101);
   jpt_1->SetBinContent(24,0.9457893);
   jpt_1->SetBinContent(25,0.2121295);
   jpt_1->SetBinContent(26,1.272615);
   jpt_1->SetBinError(2,11.06959);
   jpt_1->SetBinError(3,20.9134);
   jpt_1->SetBinError(4,18.42982);
   jpt_1->SetBinError(5,15.21663);
   jpt_1->SetBinError(6,12.44968);
   jpt_1->SetBinError(7,9.074827);
   jpt_1->SetBinError(8,6.720848);
   jpt_1->SetBinError(9,4.950164);
   jpt_1->SetBinError(10,3.91782);
   jpt_1->SetBinError(11,3.04919);
   jpt_1->SetBinError(12,2.37608);
   jpt_1->SetBinError(13,1.922812);
   jpt_1->SetBinError(14,1.596283);
   jpt_1->SetBinError(15,1.357364);
   jpt_1->SetBinError(16,0.9799483);
   jpt_1->SetBinError(17,0.90753);
   jpt_1->SetBinError(18,0.679928);
   jpt_1->SetBinError(19,0.5454639);
   jpt_1->SetBinError(20,0.490091);
   jpt_1->SetBinError(21,0.3854022);
   jpt_1->SetBinError(22,0.3860897);
   jpt_1->SetBinError(23,0.2156953);
   jpt_1->SetBinError(24,0.2891757);
   jpt_1->SetBinError(25,0.1536626);
   jpt_1->SetBinError(26,0.3573102);
   jpt_1->SetEntries(125599);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,38.55115);
   jpt_1->SetBinContent(3,155.5137);
   jpt_1->SetBinContent(4,194.1907);
   jpt_1->SetBinContent(5,149.472);
   jpt_1->SetBinContent(6,98.77708);
   jpt_1->SetBinContent(7,56.99321);
   jpt_1->SetBinContent(8,36.67867);
   jpt_1->SetBinContent(9,22.25214);
   jpt_1->SetBinContent(10,12.14394);
   jpt_1->SetBinContent(11,9.741059);
   jpt_1->SetBinContent(12,7.602666);
   jpt_1->SetBinContent(13,4.010249);
   jpt_1->SetBinContent(14,2.089643);
   jpt_1->SetBinContent(15,2.560809);
   jpt_1->SetBinContent(16,1.386397);
   jpt_1->SetBinContent(17,0.7797102);
   jpt_1->SetBinContent(18,0.7885885);
   jpt_1->SetBinContent(19,0.5368319);
   jpt_1->SetBinContent(20,0.3182074);
   jpt_1->SetBinContent(21,0.3940001);
   jpt_1->SetBinContent(22,0.04361905);
   jpt_1->SetBinContent(23,2.034536e-05);
   jpt_1->SetBinContent(24,0.09079733);
   jpt_1->SetBinContent(25,0.01482453);
   jpt_1->SetBinContent(26,0.1907575);
   jpt_1->SetBinError(2,1.792261);
   jpt_1->SetBinError(3,3.50789);
   jpt_1->SetBinError(4,3.911167);
   jpt_1->SetBinError(5,3.365415);
   jpt_1->SetBinError(6,2.762116);
   jpt_1->SetBinError(7,2.128143);
   jpt_1->SetBinError(8,1.810139);
   jpt_1->SetBinError(9,1.400684);
   jpt_1->SetBinError(10,0.9572276);
   jpt_1->SetBinError(11,1.011072);
   jpt_1->SetBinError(12,1.202877);
   jpt_1->SetBinError(13,0.5846762);
   jpt_1->SetBinError(14,0.4470186);
   jpt_1->SetBinError(15,0.8442421);
   jpt_1->SetBinError(16,0.3334536);
   jpt_1->SetBinError(17,0.2620177);
   jpt_1->SetBinError(18,0.3148881);
   jpt_1->SetBinError(19,0.2235984);
   jpt_1->SetBinError(20,0.175318);
   jpt_1->SetBinError(21,0.3785754);
   jpt_1->SetBinError(22,0.04120496);
   jpt_1->SetBinError(23,2.034536e-05);
   jpt_1->SetBinError(24,0.09079733);
   jpt_1->SetBinError(25,0.01482453);
   jpt_1->SetBinError(26,0.1150629);
   jpt_1->SetEntries(19588);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,4.900093);
   jpt_1->SetBinContent(3,47.67707);
   jpt_1->SetBinContent(4,89.24262);
   jpt_1->SetBinContent(5,92.57333);
   jpt_1->SetBinContent(6,69.97736);
   jpt_1->SetBinContent(7,43.58022);
   jpt_1->SetBinContent(8,25.83172);
   jpt_1->SetBinContent(9,14.9537);
   jpt_1->SetBinContent(10,9.070283);
   jpt_1->SetBinContent(11,5.598146);
   jpt_1->SetBinContent(12,3.438192);
   jpt_1->SetBinContent(13,2.083994);
   jpt_1->SetBinContent(14,1.292784);
   jpt_1->SetBinContent(15,0.9840591);
   jpt_1->SetBinContent(16,0.5374138);
   jpt_1->SetBinContent(17,0.3982732);
   jpt_1->SetBinContent(18,0.3583574);
   jpt_1->SetBinContent(19,0.1455772);
   jpt_1->SetBinContent(20,0.07052825);
   jpt_1->SetBinContent(21,0.1008043);
   jpt_1->SetBinContent(22,0.05152981);
   jpt_1->SetBinContent(23,0.06118449);
   jpt_1->SetBinContent(24,0.03785802);
   jpt_1->SetBinContent(25,0.04636406);
   jpt_1->SetBinContent(26,0.04788296);
   jpt_1->SetBinError(2,0.1881005);
   jpt_1->SetBinError(3,0.64091);
   jpt_1->SetBinError(4,0.8980228);
   jpt_1->SetBinError(5,0.9453035);
   jpt_1->SetBinError(6,0.8518524);
   jpt_1->SetBinError(7,0.6843795);
   jpt_1->SetBinError(8,0.5333121);
   jpt_1->SetBinError(9,0.4053331);
   jpt_1->SetBinError(10,0.3147705);
   jpt_1->SetBinError(11,0.2504691);
   jpt_1->SetBinError(12,0.195642);
   jpt_1->SetBinError(13,0.1509257);
   jpt_1->SetBinError(14,0.1170565);
   jpt_1->SetBinError(15,0.1003554);
   jpt_1->SetBinError(16,0.07743727);
   jpt_1->SetBinError(17,0.06504963);
   jpt_1->SetBinError(18,0.08562973);
   jpt_1->SetBinError(19,0.03743683);
   jpt_1->SetBinError(20,0.02632542);
   jpt_1->SetBinError(21,0.03166728);
   jpt_1->SetBinError(22,0.02007735);
   jpt_1->SetBinError(23,0.02582698);
   jpt_1->SetBinError(24,0.01825905);
   jpt_1->SetBinError(25,0.02110899);
   jpt_1->SetBinError(26,0.02142508);
   jpt_1->SetEntries(62628);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   stack->Draw("hist");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,40139);
   jpt_1->SetBinContent(3,181758);
   jpt_1->SetBinContent(4,327943);
   jpt_1->SetBinContent(5,343293);
   jpt_1->SetBinContent(6,228934);
   jpt_1->SetBinContent(7,128274);
   jpt_1->SetBinContent(8,72506);
   jpt_1->SetBinContent(9,42523);
   jpt_1->SetBinContent(10,25620);
   jpt_1->SetBinContent(11,16022);
   jpt_1->SetBinContent(12,10024);
   jpt_1->SetBinContent(13,6299);
   jpt_1->SetBinContent(14,4022);
   jpt_1->SetBinContent(15,2625);
   jpt_1->SetBinContent(16,1667);
   jpt_1->SetBinContent(17,1028);
   jpt_1->SetBinContent(18,791);
   jpt_1->SetBinContent(19,460);
   jpt_1->SetBinContent(20,330);
   jpt_1->SetBinContent(21,234);
   jpt_1->SetBinContent(22,175);
   jpt_1->SetBinContent(23,110);
   jpt_1->SetBinContent(24,82);
   jpt_1->SetBinContent(25,76);
   jpt_1->SetBinContent(26,128);
   jpt_1->SetBinError(2,200.3472);
   jpt_1->SetBinError(3,426.3309);
   jpt_1->SetBinError(4,572.6631);
   jpt_1->SetBinError(5,585.9121);
   jpt_1->SetBinError(6,478.4705);
   jpt_1->SetBinError(7,358.1536);
   jpt_1->SetBinError(8,269.2694);
   jpt_1->SetBinError(9,206.2111);
   jpt_1->SetBinError(10,160.0625);
   jpt_1->SetBinError(11,126.578);
   jpt_1->SetBinError(12,100.1199);
   jpt_1->SetBinError(13,79.36624);
   jpt_1->SetBinError(14,63.41924);
   jpt_1->SetBinError(15,51.23475);
   jpt_1->SetBinError(16,40.82891);
   jpt_1->SetBinError(17,32.06244);
   jpt_1->SetBinError(18,28.12472);
   jpt_1->SetBinError(19,21.44761);
   jpt_1->SetBinError(20,18.1659);
   jpt_1->SetBinError(21,15.29706);
   jpt_1->SetBinError(22,13.22876);
   jpt_1->SetBinError(23,10.48809);
   jpt_1->SetBinError(24,9.055385);
   jpt_1->SetBinError(25,8.717798);
   jpt_1->SetBinError(26,11.31371);
   jpt_1->SetEntries(1435063);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(1.3);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEPE1");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,78.68464);
   jpt_1->SetBinContent(3,375.8544);
   jpt_1->SetBinContent(4,390.6006);
   jpt_1->SetBinContent(5,256.046);
   jpt_1->SetBinContent(6,165.5555);
   jpt_1->SetBinContent(7,75.21909);
   jpt_1->SetBinContent(8,41.0947);
   jpt_1->SetBinContent(9,20.81263);
   jpt_1->SetBinContent(10,12.94776);
   jpt_1->SetBinContent(11,4.689723);
   jpt_1->SetBinContent(12,4.600716);
   jpt_1->SetBinContent(13,1.279094);
   jpt_1->SetBinContent(14,0.9990153);
   jpt_1->SetBinContent(15,1.769079);
   jpt_1->SetBinContent(17,0.35827);
   jpt_1->SetBinContent(19,0.3765558);
   jpt_1->SetBinContent(20,0.4539043);
   jpt_1->SetBinContent(24,0.1639066);
   jpt_1->SetBinError(2,4.395022);
   jpt_1->SetBinError(3,10.32897);
   jpt_1->SetBinError(4,10.92557);
   jpt_1->SetBinError(5,9.08656);
   jpt_1->SetBinError(6,7.504174);
   jpt_1->SetBinError(7,5.101412);
   jpt_1->SetBinError(8,3.739948);
   jpt_1->SetBinError(9,2.73839);
   jpt_1->SetBinError(10,2.182179);
   jpt_1->SetBinError(11,1.237198);
   jpt_1->SetBinError(12,1.369436);
   jpt_1->SetBinError(13,0.7505634);
   jpt_1->SetBinError(14,0.5621886);
   jpt_1->SetBinError(15,0.8419084);
   jpt_1->SetBinError(17,0.3218021);
   jpt_1->SetBinError(19,0.3765558);
   jpt_1->SetBinError(20,0.4539043);
   jpt_1->SetBinError(24,0.1639066);
   jpt_1->SetEntries(6156);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineStyle(2);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"JetPair");
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
   TLegendEntry *entry=leg->AddEntry("jpt_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Dibosons","f");
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
   lower->Range(-202.5316,-0.653951,1063.291,2.070845);
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
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,19.23581);
   jpt_1->SetBinContent(3,22.84504);
   jpt_1->SetBinContent(4,33.84325);
   jpt_1->SetBinContent(5,42.50597);
   jpt_1->SetBinContent(6,43.15186);
   jpt_1->SetBinContent(7,41.14582);
   jpt_1->SetBinContent(8,38.09167);
   jpt_1->SetBinContent(9,38.16128);
   jpt_1->SetBinContent(10,39.43649);
   jpt_1->SetBinContent(11,36.54576);
   jpt_1->SetBinContent(12,34.32992);
   jpt_1->SetBinContent(13,33.96684);
   jpt_1->SetBinContent(14,31.35201);
   jpt_1->SetBinContent(15,31.88436);
   jpt_1->SetBinContent(16,27.72752);
   jpt_1->SetBinContent(17,27.43294);
   jpt_1->SetBinContent(18,39.5908);
   jpt_1->SetBinContent(19,30.61105);
   jpt_1->SetBinContent(20,21.0892);
   jpt_1->SetBinContent(21,27.96918);
   jpt_1->SetBinContent(22,17.62764);
   jpt_1->SetBinContent(23,54.82134);
   jpt_1->SetBinContent(24,31.38159);
   jpt_1->SetBinContent(25,28.79332);
   jpt_1->SetBinContent(26,13.32762);
   jpt_1->SetBinError(2,0.3127419);
   jpt_1->SetBinError(3,0.1688136);
   jpt_1->SetBinError(4,0.2137097);
   jpt_1->SetBinError(5,0.2885324);
   jpt_1->SetBinError(6,0.3646662);
   jpt_1->SetBinError(7,0.4558436);
   jpt_1->SetBinError(8,0.5419441);
   jpt_1->SetBinError(9,0.7199637);
   jpt_1->SetBinError(10,0.9099561);
   jpt_1->SetBinError(11,1.088987);
   jpt_1->SetBinError(12,1.321947);
   jpt_1->SetBinError(13,1.601323);
   jpt_1->SetBinError(14,1.803517);
   jpt_1->SetBinError(15,2.238994);
   jpt_1->SetBinError(16,2.351027);
   jpt_1->SetBinError(17,3.238229);
   jpt_1->SetBinError(18,5.273599);
   jpt_1->SetBinError(19,5.165912);
   jpt_1->SetBinError(20,4.223816);
   jpt_1->SetBinError(21,6.203967);
   jpt_1->SetBinError(22,4.448804);
   jpt_1->SetBinError(23,20.62793);
   jpt_1->SetBinError(24,11.75427);
   jpt_1->SetBinError(25,14.69838);
   jpt_1->SetBinError(26,3.283619);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(668.231);
   jpt_1->SetStats(0);
   jpt_1->SetFillStyle(0);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.1);
   jpt_1->GetXaxis()->SetTitleSize(0.12);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Data/MC");
   jpt_1->GetYaxis()->SetNdivisions(505);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.1);
   jpt_1->GetYaxis()->SetTitleSize(0.12);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(0.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
