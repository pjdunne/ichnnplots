{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:56:11 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-2.915336,446.5823,7.242082);
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
   stack->SetMaximum(2037202);
   
   TH1F *mt_taunu_stack_5 = new TH1F("mt_taunu_stack_5","stack",25,0,500);
   mt_taunu_stack_5->SetBinContent(1,2.51708);
   mt_taunu_stack_5->SetBinContent(2,2.482138);
   mt_taunu_stack_5->SetBinContent(3,2.759969);
   mt_taunu_stack_5->SetBinContent(4,0.2188167);
   mt_taunu_stack_5->SetBinContent(5,0.2560132);
   mt_taunu_stack_5->SetBinContent(6,0.2265441);
   mt_taunu_stack_5->SetBinContent(7,2.210954);
   mt_taunu_stack_5->SetBinContent(8,0.1091764);
   mt_taunu_stack_5->SetBinContent(9,0.0190623);
   mt_taunu_stack_5->SetBinContent(10,0.008367784);
   mt_taunu_stack_5->SetBinContent(14,0.03063271);
   mt_taunu_stack_5->SetBinContent(15,0.03029686);
   mt_taunu_stack_5->SetBinError(1,1.287349);
   mt_taunu_stack_5->SetBinError(2,1.722855);
   mt_taunu_stack_5->SetBinError(3,2.251132);
   mt_taunu_stack_5->SetBinError(4,0.1369445);
   mt_taunu_stack_5->SetBinError(5,0.1170182);
   mt_taunu_stack_5->SetBinError(6,0.09709686);
   mt_taunu_stack_5->SetBinError(7,2.022504);
   mt_taunu_stack_5->SetBinError(8,0.0636609);
   mt_taunu_stack_5->SetBinError(9,0.0190623);
   mt_taunu_stack_5->SetBinError(10,0.008367785);
   mt_taunu_stack_5->SetBinError(14,0.03063271);
   mt_taunu_stack_5->SetBinError(15,0.03029686);
   mt_taunu_stack_5->SetMinimum(0.001940046);
   mt_taunu_stack_5->SetMaximum(5422638);
   mt_taunu_stack_5->SetEntries(86);
   mt_taunu_stack_5->SetStats(0);
   mt_taunu_stack_5->SetFillColor(4);
   mt_taunu_stack_5->SetLineColor(4);
   mt_taunu_stack_5->SetLineWidth(2);
   mt_taunu_stack_5->SetMarkerColor(4);
   mt_taunu_stack_5->SetMarkerStyle(21);
   mt_taunu_stack_5->SetMarkerSize(0.8);
   mt_taunu_stack_5->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu_stack_5->GetXaxis()->SetRange(1,21);
   mt_taunu_stack_5->GetXaxis()->SetLabelFont(42);
   mt_taunu_stack_5->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_5->GetXaxis()->SetLabelSize(0);
   mt_taunu_stack_5->GetXaxis()->SetTitleSize(0);
   mt_taunu_stack_5->GetXaxis()->SetTickLength(0.02);
   mt_taunu_stack_5->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu_stack_5->GetXaxis()->SetTitleFont(42);
   mt_taunu_stack_5->GetYaxis()->SetTitle("Events");
   mt_taunu_stack_5->GetYaxis()->SetLabelFont(42);
   mt_taunu_stack_5->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_5->GetYaxis()->SetLabelSize(0.035);
   mt_taunu_stack_5->GetYaxis()->SetTitleSize(0.045);
   mt_taunu_stack_5->GetYaxis()->SetTickLength(0.02);
   mt_taunu_stack_5->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu_stack_5->GetYaxis()->SetTitleFont(42);
   mt_taunu_stack_5->GetZaxis()->SetLabelFont(42);
   mt_taunu_stack_5->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu_stack_5->GetZaxis()->SetLabelSize(0.035);
   mt_taunu_stack_5->GetZaxis()->SetTitleSize(0.045);
   mt_taunu_stack_5->GetZaxis()->SetTickLength(0.02);
   mt_taunu_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mt_taunu_stack_5);
   
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,2.51708);
   mt_taunu->SetBinContent(2,2.482138);
   mt_taunu->SetBinContent(3,2.759969);
   mt_taunu->SetBinContent(4,0.2188167);
   mt_taunu->SetBinContent(5,0.2560132);
   mt_taunu->SetBinContent(6,0.2265441);
   mt_taunu->SetBinContent(7,2.210954);
   mt_taunu->SetBinContent(8,0.1091764);
   mt_taunu->SetBinContent(9,0.0190623);
   mt_taunu->SetBinContent(10,0.008367784);
   mt_taunu->SetBinContent(14,0.03063271);
   mt_taunu->SetBinContent(15,0.03029686);
   mt_taunu->SetBinError(1,1.287349);
   mt_taunu->SetBinError(2,1.722855);
   mt_taunu->SetBinError(3,2.251132);
   mt_taunu->SetBinError(4,0.1369445);
   mt_taunu->SetBinError(5,0.1170182);
   mt_taunu->SetBinError(6,0.09709686);
   mt_taunu->SetBinError(7,2.022504);
   mt_taunu->SetBinError(8,0.0636609);
   mt_taunu->SetBinError(9,0.0190623);
   mt_taunu->SetBinError(10,0.008367785);
   mt_taunu->SetBinError(14,0.03063271);
   mt_taunu->SetBinError(15,0.03029686);
   mt_taunu->SetMinimum(0.01);
   mt_taunu->SetMaximum(1.038e+07);
   mt_taunu->SetEntries(86);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(4);
   mt_taunu->SetLineColor(4);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(4);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu->GetXaxis()->SetRange(1,21);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0);
   mt_taunu->GetXaxis()->SetTitleSize(0);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetTitle("Events");
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"HIST");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,14.96931);
   mt_taunu->SetBinContent(2,15.55497);
   mt_taunu->SetBinContent(3,19.23569);
   mt_taunu->SetBinContent(4,9.8653);
   mt_taunu->SetBinContent(5,9.592325);
   mt_taunu->SetBinContent(6,2.487208);
   mt_taunu->SetBinContent(7,1.414099);
   mt_taunu->SetBinContent(8,2.188249);
   mt_taunu->SetBinContent(9,3.042196);
   mt_taunu->SetBinContent(10,0.571111);
   mt_taunu->SetBinError(1,2.690082);
   mt_taunu->SetBinError(2,2.859438);
   mt_taunu->SetBinError(3,3.101252);
   mt_taunu->SetBinError(4,1.994542);
   mt_taunu->SetBinError(5,2.253456);
   mt_taunu->SetBinError(6,1.165388);
   mt_taunu->SetBinError(7,0.8698032);
   mt_taunu->SetBinError(8,1.119996);
   mt_taunu->SetBinError(9,1.390402);
   mt_taunu->SetBinError(10,0.4049478);
   mt_taunu->SetEntries(242);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(5);
   mt_taunu->SetLineColor(5);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(5);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,78.90572);
   mt_taunu->SetBinContent(2,71.24579);
   mt_taunu->SetBinContent(3,82.62112);
   mt_taunu->SetBinContent(4,55.78056);
   mt_taunu->SetBinContent(5,20.24909);
   mt_taunu->SetBinContent(6,11.49224);
   mt_taunu->SetBinContent(7,11.52062);
   mt_taunu->SetBinContent(8,9.704524);
   mt_taunu->SetBinContent(9,1.551072);
   mt_taunu->SetBinContent(10,2.08134);
   mt_taunu->SetBinContent(11,1.452858);
   mt_taunu->SetBinContent(12,2.07966);
   mt_taunu->SetBinContent(13,1.477126);
   mt_taunu->SetBinContent(15,0.3216693);
   mt_taunu->SetBinError(1,7.134441);
   mt_taunu->SetBinError(2,5.900584);
   mt_taunu->SetBinError(3,7.444045);
   mt_taunu->SetBinError(4,5.528305);
   mt_taunu->SetBinError(5,2.746512);
   mt_taunu->SetBinError(6,2.671661);
   mt_taunu->SetBinError(7,5.46278);
   mt_taunu->SetBinError(8,2.547773);
   mt_taunu->SetBinError(9,0.7197393);
   mt_taunu->SetBinError(10,1.067009);
   mt_taunu->SetBinError(11,1.354041);
   mt_taunu->SetBinError(12,0.9401548);
   mt_taunu->SetBinError(13,0.9596455);
   mt_taunu->SetBinError(15,0.3216693);
   mt_taunu->SetEntries(1034);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(6);
   mt_taunu->SetLineColor(6);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(6);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,26.05905);
   mt_taunu->SetBinContent(2,22.71299);
   mt_taunu->SetBinContent(3,19.95016);
   mt_taunu->SetBinContent(4,14.44534);
   mt_taunu->SetBinContent(5,5.873448);
   mt_taunu->SetBinContent(6,1.323805);
   mt_taunu->SetBinContent(7,0.8278885);
   mt_taunu->SetBinContent(8,0.5044116);
   mt_taunu->SetBinContent(9,0.3983862);
   mt_taunu->SetBinContent(10,0.2700499);
   mt_taunu->SetBinContent(11,0.1387435);
   mt_taunu->SetBinContent(12,0.1204363);
   mt_taunu->SetBinContent(13,0.2202056);
   mt_taunu->SetBinContent(14,0.07504277);
   mt_taunu->SetBinContent(15,0.0279276);
   mt_taunu->SetBinContent(17,0.04518763);
   mt_taunu->SetBinContent(18,0.08496589);
   mt_taunu->SetBinContent(19,0.04130735);
   mt_taunu->SetBinContent(20,0.01992632);
   mt_taunu->SetBinContent(21,0.0001441882);
   mt_taunu->SetBinError(1,0.667103);
   mt_taunu->SetBinError(2,0.6211778);
   mt_taunu->SetBinError(3,0.5736201);
   mt_taunu->SetBinError(4,0.4773756);
   mt_taunu->SetBinError(5,0.2873634);
   mt_taunu->SetBinError(6,0.1346933);
   mt_taunu->SetBinError(7,0.1177977);
   mt_taunu->SetBinError(8,0.08455827);
   mt_taunu->SetBinError(9,0.07656207);
   mt_taunu->SetBinError(10,0.0658533);
   mt_taunu->SetBinError(11,0.04395661);
   mt_taunu->SetBinError(12,0.04607353);
   mt_taunu->SetBinError(13,0.06580766);
   mt_taunu->SetBinError(14,0.04013059);
   mt_taunu->SetBinError(15,0.02156929);
   mt_taunu->SetBinError(17,0.02958967);
   mt_taunu->SetBinError(18,0.04334912);
   mt_taunu->SetBinError(19,0.02921859);
   mt_taunu->SetBinError(20,0.01992632);
   mt_taunu->SetBinError(21,0.0001441882);
   mt_taunu->SetEntries(7302);
   mt_taunu->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mt_taunu->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mt_taunu->SetLineColor(ci);
   mt_taunu->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mt_taunu->SetMarkerColor(ci);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,1.458638);
   mt_taunu->SetBinContent(2,1.011378);
   mt_taunu->SetBinContent(3,0.8911564);
   mt_taunu->SetBinContent(4,1.929013);
   mt_taunu->SetBinContent(5,2.172632);
   mt_taunu->SetBinContent(6,2.112608);
   mt_taunu->SetBinContent(7,2.340554);
   mt_taunu->SetBinContent(8,0.633287);
   mt_taunu->SetBinContent(9,0.3770464);
   mt_taunu->SetBinContent(10,1.658553);
   mt_taunu->SetBinContent(11,1.395348);
   mt_taunu->SetBinContent(12,0.51996);
   mt_taunu->SetBinContent(13,0.9171132);
   mt_taunu->SetBinContent(14,0.1518434);
   mt_taunu->SetBinContent(15,0.181475);
   mt_taunu->SetBinContent(16,0.1257809);
   mt_taunu->SetBinContent(17,0.2816647);
   mt_taunu->SetBinContent(26,0.1106946);
   mt_taunu->SetBinError(1,0.5916681);
   mt_taunu->SetBinError(2,0.3908473);
   mt_taunu->SetBinError(3,0.3275524);
   mt_taunu->SetBinError(4,0.7782827);
   mt_taunu->SetBinError(5,0.7786217);
   mt_taunu->SetBinError(6,0.6225978);
   mt_taunu->SetBinError(7,0.7814845);
   mt_taunu->SetBinError(8,0.3786235);
   mt_taunu->SetBinError(9,0.2167974);
   mt_taunu->SetBinError(10,0.8193851);
   mt_taunu->SetBinError(11,0.8147134);
   mt_taunu->SetBinError(12,0.3008701);
   mt_taunu->SetBinError(13,0.7542241);
   mt_taunu->SetBinError(14,0.1518434);
   mt_taunu->SetBinError(15,0.181475);
   mt_taunu->SetBinError(16,0.1257809);
   mt_taunu->SetBinError(17,0.210929);
   mt_taunu->SetBinError(26,0.1106946);
   mt_taunu->SetEntries(142);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,9.566362);
   mt_taunu->SetBinContent(2,4.04873);
   mt_taunu->SetBinContent(3,3.938594);
   mt_taunu->SetBinContent(4,3.783763);
   mt_taunu->SetBinContent(5,1.939942);
   mt_taunu->SetBinContent(6,0.8088493);
   mt_taunu->SetBinContent(7,0.3423055);
   mt_taunu->SetBinContent(8,0.3478369);
   mt_taunu->SetBinContent(9,0.01881936);
   mt_taunu->SetBinContent(10,0.1701326);
   mt_taunu->SetBinContent(19,0.1181421);
   mt_taunu->SetBinError(1,0.9029471);
   mt_taunu->SetBinError(2,0.5706903);
   mt_taunu->SetBinError(3,0.5911991);
   mt_taunu->SetBinError(4,1.241557);
   mt_taunu->SetBinError(5,0.4824224);
   mt_taunu->SetBinError(6,0.2532635);
   mt_taunu->SetBinError(7,0.2148257);
   mt_taunu->SetBinError(8,0.1369971);
   mt_taunu->SetBinError(9,0.01881936);
   mt_taunu->SetBinError(10,0.1230357);
   mt_taunu->SetBinError(19,0.1181421);
   mt_taunu->SetEntries(406);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,2.337299);
   mt_taunu->SetBinContent(2,1.078753);
   mt_taunu->SetBinContent(3,0.7353786);
   mt_taunu->SetBinContent(4,0.504657);
   mt_taunu->SetBinContent(5,0.3427803);
   mt_taunu->SetBinContent(6,0.1423067);
   mt_taunu->SetBinContent(7,0.1692991);
   mt_taunu->SetBinContent(8,0.06811997);
   mt_taunu->SetBinContent(9,0.06138519);
   mt_taunu->SetBinContent(10,0.06026926);
   mt_taunu->SetBinContent(11,0.002711223);
   mt_taunu->SetBinContent(12,0.005022064);
   mt_taunu->SetBinContent(13,0.01807031);
   mt_taunu->SetBinContent(17,0.01649939);
   mt_taunu->SetBinContent(22,0.01246771);
   mt_taunu->SetBinContent(23,0.01164037);
   mt_taunu->SetBinError(1,0.1072801);
   mt_taunu->SetBinError(2,0.07319531);
   mt_taunu->SetBinError(3,0.06054028);
   mt_taunu->SetBinError(4,0.0545332);
   mt_taunu->SetBinError(5,0.04408167);
   mt_taunu->SetBinError(6,0.03016964);
   mt_taunu->SetBinError(7,0.03999925);
   mt_taunu->SetBinError(8,0.02272223);
   mt_taunu->SetBinError(9,0.02370628);
   mt_taunu->SetBinError(10,0.02402307);
   mt_taunu->SetBinError(11,0.002711223);
   mt_taunu->SetBinError(12,0.004497078);
   mt_taunu->SetBinError(13,0.01348383);
   mt_taunu->SetBinError(17,0.01392531);
   mt_taunu->SetBinError(22,0.01246771);
   mt_taunu->SetBinError(23,0.01164037);
   mt_taunu->SetEntries(1384);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(3);
   mt_taunu->SetLineColor(3);
   mt_taunu->SetLineWidth(2);
   mt_taunu->SetMarkerColor(3);
   mt_taunu->SetMarkerStyle(21);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_taunu,"");
   stack->Draw("hist");
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,692);
   mt_taunu->SetBinContent(2,479);
   mt_taunu->SetBinContent(3,420);
   mt_taunu->SetBinContent(4,470);
   mt_taunu->SetBinContent(5,403);
   mt_taunu->SetBinContent(6,250);
   mt_taunu->SetBinContent(7,186);
   mt_taunu->SetBinContent(8,133);
   mt_taunu->SetBinContent(9,93);
   mt_taunu->SetBinContent(10,43);
   mt_taunu->SetBinContent(11,22);
   mt_taunu->SetBinContent(12,14);
   mt_taunu->SetBinContent(13,8);
   mt_taunu->SetBinContent(14,3);
   mt_taunu->SetBinContent(15,2);
   mt_taunu->SetBinContent(16,3);
   mt_taunu->SetBinContent(17,1);
   mt_taunu->SetBinContent(18,1);
   mt_taunu->SetBinError(1,26.30589);
   mt_taunu->SetBinError(2,21.88607);
   mt_taunu->SetBinError(3,20.4939);
   mt_taunu->SetBinError(4,21.67948);
   mt_taunu->SetBinError(5,20.07486);
   mt_taunu->SetBinError(6,15.81139);
   mt_taunu->SetBinError(7,13.63818);
   mt_taunu->SetBinError(8,11.53256);
   mt_taunu->SetBinError(9,9.643651);
   mt_taunu->SetBinError(10,6.557439);
   mt_taunu->SetBinError(11,4.690416);
   mt_taunu->SetBinError(12,3.741657);
   mt_taunu->SetBinError(13,2.828427);
   mt_taunu->SetBinError(14,1.732051);
   mt_taunu->SetBinError(15,1.414214);
   mt_taunu->SetBinError(16,1.732051);
   mt_taunu->SetBinError(17,1);
   mt_taunu->SetBinError(18,1);
   mt_taunu->SetEntries(3223);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillColor(1);
   mt_taunu->SetFillStyle(0);
   mt_taunu->SetLineWidth(3);
   mt_taunu->SetMarkerStyle(20);
   mt_taunu->SetMarkerSize(1.3);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.035);
   mt_taunu->GetXaxis()->SetTitleSize(0.045);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.035);
   mt_taunu->GetYaxis()->SetTitleSize(0.045);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(1.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   mt_taunu->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   TLegendEntry *entry=leg->AddEntry("mt_taunu","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mt_taunu","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","EWK W+jets","f");

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
   entry=leg->AddEntry("mt_taunu","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_taunu","Dibosons","f");
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
   
   TH1F *mt_taunu = new TH1F("mt_taunu","mt_taunu",25,0,500);
   mt_taunu->SetBinContent(1,5.191439);
   mt_taunu->SetBinContent(2,4.141714);
   mt_taunu->SetBinContent(3,3.297425);
   mt_taunu->SetBinContent(4,5.445574);
   mt_taunu->SetBinContent(5,10.03231);
   mt_taunu->SetBinContent(6,13.61136);
   mt_taunu->SetBinContent(7,11.19486);
   mt_taunu->SetBinContent(8,9.891103);
   mt_taunu->SetBinContent(9,17.06765);
   mt_taunu->SetBinContent(10,8.937004);
   mt_taunu->SetBinContent(11,7.358693);
   mt_taunu->SetBinContent(12,5.137467);
   mt_taunu->SetBinContent(13,3.038919);
   mt_taunu->SetBinContent(14,13.22249);
   mt_taunu->SetBinContent(15,3.765968);
   mt_taunu->SetBinContent(16,23.85099);
   mt_taunu->SetBinContent(17,2.912465);
   mt_taunu->SetBinContent(18,11.76943);
   mt_taunu->SetBinError(1,0.3599872);
   mt_taunu->SetBinError(2,0.3034219);
   mt_taunu->SetBinError(3,0.2645772);
   mt_taunu->SetBinError(4,0.4583251);
   mt_taunu->SetBinError(5,1.046219);
   mt_taunu->SetBinError(6,2.380241);
   mt_taunu->SetBinError(7,3.856234);
   mt_taunu->SetBinError(8,2.240214);
   mt_taunu->SetBinError(9,5.264027);
   mt_taunu->SetBinError(10,2.955791);
   mt_taunu->SetBinError(11,4.195481);
   mt_taunu->SetBinError(12,2.314329);
   mt_taunu->SetBinError(13,1.773598);
   mt_taunu->SetBinError(14,11.91868);
   mt_taunu->SetBinError(15,3.738165);
   mt_taunu->SetBinError(16,27.54075);
   mt_taunu->SetBinError(17,3.429377);
   mt_taunu->SetBinError(18,13.21271);
   mt_taunu->SetMinimum(0);
   mt_taunu->SetMaximum(2);
   mt_taunu->SetEntries(21.46672);
   mt_taunu->SetStats(0);
   mt_taunu->SetFillStyle(0);
   mt_taunu->SetMarkerStyle(20);
   mt_taunu->SetMarkerSize(0.8);
   mt_taunu->GetXaxis()->SetTitle("m_{T}(#tau#nu) (GeV)");
   mt_taunu->GetXaxis()->SetRange(1,21);
   mt_taunu->GetXaxis()->SetLabelFont(42);
   mt_taunu->GetXaxis()->SetLabelOffset(0.007);
   mt_taunu->GetXaxis()->SetLabelSize(0.1);
   mt_taunu->GetXaxis()->SetTitleSize(0.12);
   mt_taunu->GetXaxis()->SetTickLength(0.02);
   mt_taunu->GetXaxis()->SetTitleOffset(0.9);
   mt_taunu->GetXaxis()->SetTitleFont(42);
   mt_taunu->GetYaxis()->SetTitle("Data/MC");
   mt_taunu->GetYaxis()->SetNdivisions(505);
   mt_taunu->GetYaxis()->SetLabelFont(42);
   mt_taunu->GetYaxis()->SetLabelOffset(0.007);
   mt_taunu->GetYaxis()->SetLabelSize(0.1);
   mt_taunu->GetYaxis()->SetTitleSize(0.12);
   mt_taunu->GetYaxis()->SetTickLength(0.02);
   mt_taunu->GetYaxis()->SetTitleOffset(0.55);
   mt_taunu->GetYaxis()->SetTitleFont(42);
   mt_taunu->GetZaxis()->SetLabelFont(42);
   mt_taunu->GetZaxis()->SetLabelOffset(0.007);
   mt_taunu->GetZaxis()->SetLabelSize(0.035);
   mt_taunu->GetZaxis()->SetTitleSize(0.045);
   mt_taunu->GetZaxis()->SetTickLength(0.02);
   mt_taunu->GetZaxis()->SetTitleFont(42);
   mt_taunu->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
