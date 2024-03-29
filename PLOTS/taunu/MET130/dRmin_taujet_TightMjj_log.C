{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:57:26 2013) by ROOT version5.32/00
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
   upper->Range(-0.9316455,-2.723699,4.891139,4.330719);
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
   stack->SetMaximum(4463.064);
   
   TH1F *dRmin_taujet_stack_7 = new TH1F("dRmin_taujet_stack_7","stack",50,0,10);
   dRmin_taujet_stack_7->SetBinContent(1,0.02780752);
   dRmin_taujet_stack_7->SetBinContent(5,2.019112);
   dRmin_taujet_stack_7->SetBinContent(7,0.03132461);
   dRmin_taujet_stack_7->SetBinContent(13,2.248855);
   dRmin_taujet_stack_7->SetBinContent(15,0.3027283);
   dRmin_taujet_stack_7->SetBinContent(16,0.2414061);
   dRmin_taujet_stack_7->SetBinContent(17,0.3516484);
   dRmin_taujet_stack_7->SetBinContent(18,0.08290368);
   dRmin_taujet_stack_7->SetBinError(1,0.02780752);
   dRmin_taujet_stack_7->SetBinError(5,2.019112);
   dRmin_taujet_stack_7->SetBinError(7,0.03132461);
   dRmin_taujet_stack_7->SetBinError(13,2.245752);
   dRmin_taujet_stack_7->SetBinError(15,0.1835374);
   dRmin_taujet_stack_7->SetBinError(16,0.1927126);
   dRmin_taujet_stack_7->SetBinError(17,0.2032212);
   dRmin_taujet_stack_7->SetBinError(18,0.08283912);
   dRmin_taujet_stack_7->SetMinimum(0.002614504);
   dRmin_taujet_stack_7->SetMaximum(9505.999);
   dRmin_taujet_stack_7->SetEntries(15);
   dRmin_taujet_stack_7->SetStats(0);
   dRmin_taujet_stack_7->SetFillColor(4);
   dRmin_taujet_stack_7->SetLineColor(4);
   dRmin_taujet_stack_7->SetLineWidth(2);
   dRmin_taujet_stack_7->SetMarkerColor(4);
   dRmin_taujet_stack_7->SetMarkerStyle(21);
   dRmin_taujet_stack_7->SetMarkerSize(0.8);
   dRmin_taujet_stack_7->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet_stack_7->GetXaxis()->SetRange(1,23);
   dRmin_taujet_stack_7->GetXaxis()->SetLabelFont(42);
   dRmin_taujet_stack_7->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_7->GetXaxis()->SetLabelSize(0);
   dRmin_taujet_stack_7->GetXaxis()->SetTitleSize(0);
   dRmin_taujet_stack_7->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_7->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet_stack_7->GetXaxis()->SetTitleFont(42);
   dRmin_taujet_stack_7->GetYaxis()->SetTitle("Events");
   dRmin_taujet_stack_7->GetYaxis()->SetLabelFont(42);
   dRmin_taujet_stack_7->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_7->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_7->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_7->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_7->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet_stack_7->GetYaxis()->SetTitleFont(42);
   dRmin_taujet_stack_7->GetZaxis()->SetLabelFont(42);
   dRmin_taujet_stack_7->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_7->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_7->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_7->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_7->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet_stack_7);
   
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.02780752);
   dRmin_taujet->SetBinContent(5,2.019112);
   dRmin_taujet->SetBinContent(7,0.03132461);
   dRmin_taujet->SetBinContent(13,2.248855);
   dRmin_taujet->SetBinContent(15,0.3027283);
   dRmin_taujet->SetBinContent(16,0.2414061);
   dRmin_taujet->SetBinContent(17,0.3516484);
   dRmin_taujet->SetBinContent(18,0.08290368);
   dRmin_taujet->SetBinError(1,0.02780752);
   dRmin_taujet->SetBinError(5,2.019112);
   dRmin_taujet->SetBinError(7,0.03132461);
   dRmin_taujet->SetBinError(13,2.245752);
   dRmin_taujet->SetBinError(15,0.1835374);
   dRmin_taujet->SetBinError(16,0.1927126);
   dRmin_taujet->SetBinError(17,0.2032212);
   dRmin_taujet->SetBinError(18,0.08283912);
   dRmin_taujet->SetMinimum(0.01);
   dRmin_taujet->SetMaximum(7050);
   dRmin_taujet->SetEntries(15);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(4);
   dRmin_taujet->SetLineColor(4);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(4);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0);
   dRmin_taujet->GetXaxis()->SetTitleSize(0);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Events");
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"HIST");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.702615);
   dRmin_taujet->SetBinContent(6,1.072778);
   dRmin_taujet->SetBinContent(7,0.005667101);
   dRmin_taujet->SetBinContent(8,1.373066);
   dRmin_taujet->SetBinContent(9,0.5057197);
   dRmin_taujet->SetBinContent(10,0.7881368);
   dRmin_taujet->SetBinContent(12,1.847209);
   dRmin_taujet->SetBinContent(13,0.7648435);
   dRmin_taujet->SetBinContent(14,3.928047);
   dRmin_taujet->SetBinContent(15,3.852371);
   dRmin_taujet->SetBinContent(16,3.870013);
   dRmin_taujet->SetBinContent(17,2.445353);
   dRmin_taujet->SetBinContent(18,4.307132);
   dRmin_taujet->SetBinContent(20,0.1440549);
   dRmin_taujet->SetBinError(1,0.7026149);
   dRmin_taujet->SetBinError(6,1.072778);
   dRmin_taujet->SetBinError(7,0.005667101);
   dRmin_taujet->SetBinError(8,0.9709042);
   dRmin_taujet->SetBinError(9,0.5057197);
   dRmin_taujet->SetBinError(10,0.7881368);
   dRmin_taujet->SetBinError(12,1.119659);
   dRmin_taujet->SetBinError(13,0.7648435);
   dRmin_taujet->SetBinError(14,1.525773);
   dRmin_taujet->SetBinError(15,1.609047);
   dRmin_taujet->SetBinError(16,1.746252);
   dRmin_taujet->SetBinError(17,1.192435);
   dRmin_taujet->SetBinError(18,1.570006);
   dRmin_taujet->SetBinError(20,0.144055);
   dRmin_taujet->SetEntries(47);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(5);
   dRmin_taujet->SetLineColor(5);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(5);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,6.33606);
   dRmin_taujet->SetBinContent(4,1.299902);
   dRmin_taujet->SetBinContent(5,0.9182949);
   dRmin_taujet->SetBinContent(6,0.4171451);
   dRmin_taujet->SetBinContent(7,3.346079);
   dRmin_taujet->SetBinContent(8,1.203118);
   dRmin_taujet->SetBinContent(9,2.707028);
   dRmin_taujet->SetBinContent(10,4.066123);
   dRmin_taujet->SetBinContent(11,5.384034);
   dRmin_taujet->SetBinContent(12,7.556561);
   dRmin_taujet->SetBinContent(13,9.769665);
   dRmin_taujet->SetBinContent(14,10.54311);
   dRmin_taujet->SetBinContent(15,16.10002);
   dRmin_taujet->SetBinContent(16,17.27868);
   dRmin_taujet->SetBinContent(17,3.911741);
   dRmin_taujet->SetBinContent(18,2.466619);
   dRmin_taujet->SetBinContent(19,0.8229011);
   dRmin_taujet->SetBinError(1,1.96079);
   dRmin_taujet->SetBinError(4,0.9331495);
   dRmin_taujet->SetBinError(5,0.5432102);
   dRmin_taujet->SetBinError(6,0.4171451);
   dRmin_taujet->SetBinError(7,1.672233);
   dRmin_taujet->SetBinError(8,0.9072803);
   dRmin_taujet->SetBinError(9,1.572204);
   dRmin_taujet->SetBinError(10,1.45467);
   dRmin_taujet->SetBinError(11,2.021558);
   dRmin_taujet->SetBinError(12,2.204982);
   dRmin_taujet->SetBinError(13,2.515933);
   dRmin_taujet->SetBinError(14,2.979172);
   dRmin_taujet->SetBinError(15,3.455967);
   dRmin_taujet->SetBinError(16,3.305772);
   dRmin_taujet->SetBinError(17,1.68697);
   dRmin_taujet->SetBinError(18,1.398459);
   dRmin_taujet->SetBinError(19,0.8229011);
   dRmin_taujet->SetEntries(189);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(6);
   dRmin_taujet->SetLineColor(6);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(6);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,1.099397);
   dRmin_taujet->SetBinContent(3,0.01865955);
   dRmin_taujet->SetBinContent(4,0.09854726);
   dRmin_taujet->SetBinContent(5,0.264894);
   dRmin_taujet->SetBinContent(6,0.1536705);
   dRmin_taujet->SetBinContent(7,0.2726908);
   dRmin_taujet->SetBinContent(8,0.7987288);
   dRmin_taujet->SetBinContent(9,0.7410266);
   dRmin_taujet->SetBinContent(10,1.031261);
   dRmin_taujet->SetBinContent(11,1.532305);
   dRmin_taujet->SetBinContent(12,2.395321);
   dRmin_taujet->SetBinContent(13,3.731168);
   dRmin_taujet->SetBinContent(14,4.714504);
   dRmin_taujet->SetBinContent(15,6.297069);
   dRmin_taujet->SetBinContent(16,7.099492);
   dRmin_taujet->SetBinContent(17,4.885277);
   dRmin_taujet->SetBinContent(18,3.464308);
   dRmin_taujet->SetBinContent(19,1.603938);
   dRmin_taujet->SetBinContent(20,0.6266192);
   dRmin_taujet->SetBinContent(21,0.1719765);
   dRmin_taujet->SetBinContent(22,0.05463748);
   dRmin_taujet->SetBinError(1,0.1477299);
   dRmin_taujet->SetBinError(3,0.01865955);
   dRmin_taujet->SetBinError(4,0.04421215);
   dRmin_taujet->SetBinError(5,0.07277506);
   dRmin_taujet->SetBinError(6,0.05195341);
   dRmin_taujet->SetBinError(7,0.07058941);
   dRmin_taujet->SetBinError(8,0.1285829);
   dRmin_taujet->SetBinError(9,0.1222148);
   dRmin_taujet->SetBinError(10,0.1453286);
   dRmin_taujet->SetBinError(11,0.175879);
   dRmin_taujet->SetBinError(12,0.2171499);
   dRmin_taujet->SetBinError(13,0.2760111);
   dRmin_taujet->SetBinError(14,0.309729);
   dRmin_taujet->SetBinError(15,0.3599601);
   dRmin_taujet->SetBinError(16,0.382496);
   dRmin_taujet->SetBinError(17,0.316166);
   dRmin_taujet->SetBinError(18,0.264264);
   dRmin_taujet->SetBinError(19,0.1792823);
   dRmin_taujet->SetBinError(20,0.1144493);
   dRmin_taujet->SetBinError(21,0.06148007);
   dRmin_taujet->SetBinError(22,0.03871884);
   dRmin_taujet->SetEntries(2326);
   dRmin_taujet->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetLineColor(ci);
   dRmin_taujet->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetMarkerColor(ci);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,3.321652);
   dRmin_taujet->SetBinContent(3,0.1907149);
   dRmin_taujet->SetBinContent(4,0.107372);
   dRmin_taujet->SetBinContent(5,0.08612941);
   dRmin_taujet->SetBinContent(6,0.1224472);
   dRmin_taujet->SetBinContent(7,0.2758159);
   dRmin_taujet->SetBinContent(8,0.06446939);
   dRmin_taujet->SetBinContent(9,0.2879943);
   dRmin_taujet->SetBinContent(12,0.4856452);
   dRmin_taujet->SetBinContent(15,0.1637507);
   dRmin_taujet->SetBinContent(16,0.1697759);
   dRmin_taujet->SetBinContent(17,0.1036819);
   dRmin_taujet->SetBinContent(18,0.1879632);
   dRmin_taujet->SetBinError(1,1.164923);
   dRmin_taujet->SetBinError(3,0.1907149);
   dRmin_taujet->SetBinError(4,0.107372);
   dRmin_taujet->SetBinError(5,0.08612942);
   dRmin_taujet->SetBinError(6,0.1224472);
   dRmin_taujet->SetBinError(7,0.1991444);
   dRmin_taujet->SetBinError(8,0.06446939);
   dRmin_taujet->SetBinError(9,0.2069654);
   dRmin_taujet->SetBinError(12,0.2814455);
   dRmin_taujet->SetBinError(15,0.1178139);
   dRmin_taujet->SetBinError(16,0.169776);
   dRmin_taujet->SetBinError(17,0.1036819);
   dRmin_taujet->SetBinError(18,0.1879632);
   dRmin_taujet->SetEntries(34);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.445451);
   dRmin_taujet->SetBinContent(5,0.1185238);
   dRmin_taujet->SetBinContent(6,0.09783485);
   dRmin_taujet->SetBinContent(8,0.08349333);
   dRmin_taujet->SetBinContent(10,0.1744334);
   dRmin_taujet->SetBinContent(11,0.6467147);
   dRmin_taujet->SetBinContent(12,0.4621865);
   dRmin_taujet->SetBinContent(13,0.2829073);
   dRmin_taujet->SetBinContent(14,0.4515828);
   dRmin_taujet->SetBinContent(15,0.5988482);
   dRmin_taujet->SetBinContent(16,0.8089353);
   dRmin_taujet->SetBinContent(17,0.5282054);
   dRmin_taujet->SetBinContent(18,0.09354786);
   dRmin_taujet->SetBinError(1,0.2775632);
   dRmin_taujet->SetBinError(5,0.1122178);
   dRmin_taujet->SetBinError(6,0.09783485);
   dRmin_taujet->SetBinError(8,0.08349333);
   dRmin_taujet->SetBinError(10,0.1307168);
   dRmin_taujet->SetBinError(11,0.3035075);
   dRmin_taujet->SetBinError(12,0.2744767);
   dRmin_taujet->SetBinError(13,0.1503579);
   dRmin_taujet->SetBinError(14,0.2263072);
   dRmin_taujet->SetBinError(15,0.2165978);
   dRmin_taujet->SetBinError(16,0.2790681);
   dRmin_taujet->SetBinError(17,0.2476439);
   dRmin_taujet->SetBinError(18,0.09354786);
   dRmin_taujet->SetEntries(52);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.1739835);
   dRmin_taujet->SetBinContent(5,0.005692167);
   dRmin_taujet->SetBinContent(6,0.006966507);
   dRmin_taujet->SetBinContent(7,0.02626457);
   dRmin_taujet->SetBinContent(8,0.05894052);
   dRmin_taujet->SetBinContent(9,0.03623895);
   dRmin_taujet->SetBinContent(10,0.05241328);
   dRmin_taujet->SetBinContent(11,0.06696573);
   dRmin_taujet->SetBinContent(12,0.09913085);
   dRmin_taujet->SetBinContent(13,0.1075822);
   dRmin_taujet->SetBinContent(14,0.09918585);
   dRmin_taujet->SetBinContent(15,0.2869313);
   dRmin_taujet->SetBinContent(16,0.2854574);
   dRmin_taujet->SetBinContent(17,0.2197924);
   dRmin_taujet->SetBinContent(18,0.05125389);
   dRmin_taujet->SetBinContent(19,0.03878224);
   dRmin_taujet->SetBinContent(20,0.01325768);
   dRmin_taujet->SetBinContent(21,0.007865145);
   dRmin_taujet->SetBinError(1,0.04653188);
   dRmin_taujet->SetBinError(5,0.005692167);
   dRmin_taujet->SetBinError(6,0.006966506);
   dRmin_taujet->SetBinError(7,0.01580963);
   dRmin_taujet->SetBinError(8,0.01969965);
   dRmin_taujet->SetBinError(9,0.01591004);
   dRmin_taujet->SetBinError(10,0.02076314);
   dRmin_taujet->SetBinError(11,0.02101832);
   dRmin_taujet->SetBinError(12,0.02528757);
   dRmin_taujet->SetBinError(13,0.028326);
   dRmin_taujet->SetBinError(14,0.02502602);
   dRmin_taujet->SetBinError(15,0.04542641);
   dRmin_taujet->SetBinError(16,0.04440735);
   dRmin_taujet->SetBinError(17,0.03780579);
   dRmin_taujet->SetBinError(18,0.01702144);
   dRmin_taujet->SetBinError(19,0.01477012);
   dRmin_taujet->SetBinError(20,0.009781837);
   dRmin_taujet->SetBinError(21,0.007865145);
   dRmin_taujet->SetEntries(269);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   stack->Draw("hist");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,47);
   dRmin_taujet->SetBinContent(5,1);
   dRmin_taujet->SetBinContent(6,1);
   dRmin_taujet->SetBinContent(7,4);
   dRmin_taujet->SetBinContent(9,7);
   dRmin_taujet->SetBinContent(10,5);
   dRmin_taujet->SetBinContent(11,4);
   dRmin_taujet->SetBinContent(12,7);
   dRmin_taujet->SetBinContent(13,12);
   dRmin_taujet->SetBinContent(14,8);
   dRmin_taujet->SetBinContent(15,21);
   dRmin_taujet->SetBinContent(16,27);
   dRmin_taujet->SetBinContent(17,20);
   dRmin_taujet->SetBinContent(18,5);
   dRmin_taujet->SetBinContent(19,1);
   dRmin_taujet->SetBinError(1,6.855655);
   dRmin_taujet->SetBinError(5,1);
   dRmin_taujet->SetBinError(6,1);
   dRmin_taujet->SetBinError(7,2);
   dRmin_taujet->SetBinError(9,2.645751);
   dRmin_taujet->SetBinError(10,2.236068);
   dRmin_taujet->SetBinError(11,2);
   dRmin_taujet->SetBinError(12,2.645751);
   dRmin_taujet->SetBinError(13,3.464102);
   dRmin_taujet->SetBinError(14,2.828427);
   dRmin_taujet->SetBinError(15,4.582576);
   dRmin_taujet->SetBinError(16,5.196152);
   dRmin_taujet->SetBinError(17,4.472136);
   dRmin_taujet->SetBinError(18,2.236068);
   dRmin_taujet->SetBinError(19,1);
   dRmin_taujet->SetEntries(170);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(1);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetLineWidth(3);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(1.3);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"TightMjj");
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
   TLegendEntry *entry=leg->AddEntry("dRmin_taujet","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dRmin_taujet","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","EWK W+jets","f");

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
   entry=leg->AddEntry("dRmin_taujet","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","Dibosons","f");
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
   lower->Range(-0.9316455,-0.653951,4.891139,2.070845);
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
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,3.890999);
   dRmin_taujet->SetBinContent(5,0.7175999);
   dRmin_taujet->SetBinContent(6,0.5345187);
   dRmin_taujet->SetBinContent(7,1.018714);
   dRmin_taujet->SetBinContent(9,1.636276);
   dRmin_taujet->SetBinContent(10,0.8180135);
   dRmin_taujet->SetBinContent(11,0.5242451);
   dRmin_taujet->SetBinContent(12,0.5449144);
   dRmin_taujet->SetBinContent(13,0.8187681);
   dRmin_taujet->SetBinContent(14,0.4053418);
   dRmin_taujet->SetBinContent(15,0.7692592);
   dRmin_taujet->SetBinContent(16,0.914871);
   dRmin_taujet->SetBinContent(17,1.653706);
   dRmin_taujet->SetBinContent(18,0.473);
   dRmin_taujet->SetBinContent(19,0.4055773);
   dRmin_taujet->SetBinError(1,0.961036);
   dRmin_taujet->SetBinError(5,0.7745422);
   dRmin_taujet->SetBinError(6,0.6293558);
   dRmin_taujet->SetBinError(7,0.6713392);
   dRmin_taujet->SetBinError(9,0.8888227);
   dRmin_taujet->SetBinError(10,0.4284223);
   dRmin_taujet->SetBinError(11,0.2976303);
   dRmin_taujet->SetBinError(12,0.2319203);
   dRmin_taujet->SetBinError(13,0.2788489);
   dRmin_taujet->SetBinError(14,0.1591405);
   dRmin_taujet->SetBinError(15,0.1996789);
   dRmin_taujet->SetBinError(16,0.2113686);
   dRmin_taujet->SetBinError(17,0.4688018);
   dRmin_taujet->SetBinError(18,0.2320029);
   dRmin_taujet->SetBinError(19,0.4285922);
   dRmin_taujet->SetMinimum(0);
   dRmin_taujet->SetMaximum(2);
   dRmin_taujet->SetEntries(55.38186);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Data/MC");
   dRmin_taujet->GetYaxis()->SetNdivisions(505);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(0.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
