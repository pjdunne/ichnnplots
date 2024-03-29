{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:57:22 2013) by ROOT version5.32/00
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
   upper->Range(-1.336709,-2.649987,7.017722,3.364038);
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
   stack->SetMaximum(591.9836);
   
   TH1F *dRmin_taujet2_stack_9 = new TH1F("dRmin_taujet2_stack_9","stack",50,0,10);
   dRmin_taujet2_stack_9->SetMinimum(0.002953202);
   dRmin_taujet2_stack_9->SetMaximum(1157.009);
   dRmin_taujet2_stack_9->SetStats(0);
   dRmin_taujet2_stack_9->SetFillColor(4);
   dRmin_taujet2_stack_9->SetLineColor(4);
   dRmin_taujet2_stack_9->SetLineWidth(2);
   dRmin_taujet2_stack_9->SetMarkerColor(4);
   dRmin_taujet2_stack_9->SetMarkerStyle(21);
   dRmin_taujet2_stack_9->SetMarkerSize(0.8);
   dRmin_taujet2_stack_9->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag2)");
   dRmin_taujet2_stack_9->GetXaxis()->SetRange(1,33);
   dRmin_taujet2_stack_9->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2_stack_9->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2_stack_9->GetXaxis()->SetLabelSize(0);
   dRmin_taujet2_stack_9->GetXaxis()->SetTitleSize(0);
   dRmin_taujet2_stack_9->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2_stack_9->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2_stack_9->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2_stack_9->GetYaxis()->SetTitle("Events");
   dRmin_taujet2_stack_9->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2_stack_9->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2_stack_9->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2_stack_9->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2_stack_9->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2_stack_9->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2_stack_9->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2_stack_9->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2_stack_9->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2_stack_9->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2_stack_9->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2_stack_9->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2_stack_9->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet2_stack_9);
   
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetMinimum(0.01);
   dRmin_taujet2->SetMaximum(4050);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(4);
   dRmin_taujet2->SetLineColor(4);
   dRmin_taujet2->SetLineWidth(2);
   dRmin_taujet2->SetMarkerColor(4);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag2)");
   dRmin_taujet2->GetXaxis()->SetRange(1,33);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetTitle("Events");
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"HIST");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,0.702615);
   dRmin_taujet2->SetBinContent(10,0.7881368);
   dRmin_taujet2->SetBinContent(12,0.7724873);
   dRmin_taujet2->SetBinContent(16,0.7574646);
   dRmin_taujet2->SetBinError(1,0.7026149);
   dRmin_taujet2->SetBinError(10,0.7881368);
   dRmin_taujet2->SetBinError(12,0.7724873);
   dRmin_taujet2->SetBinError(16,0.7574647);
   dRmin_taujet2->SetEntries(4);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(5);
   dRmin_taujet2->SetLineColor(5);
   dRmin_taujet2->SetLineWidth(2);
   dRmin_taujet2->SetMarkerColor(5);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,2.442895);
   dRmin_taujet2->SetBinContent(4,0.7637377);
   dRmin_taujet2->SetBinContent(6,0.4171451);
   dRmin_taujet2->SetBinContent(7,0.6024874);
   dRmin_taujet2->SetBinContent(9,0.8725212);
   dRmin_taujet2->SetBinContent(10,0.5719459);
   dRmin_taujet2->SetBinContent(11,0.8029085);
   dRmin_taujet2->SetBinContent(12,1.216799);
   dRmin_taujet2->SetBinContent(16,0.3845776);
   dRmin_taujet2->SetBinContent(17,1.018718);
   dRmin_taujet2->SetBinContent(18,1.234473);
   dRmin_taujet2->SetBinContent(19,0.4197137);
   dRmin_taujet2->SetBinContent(21,0.7961946);
   dRmin_taujet2->SetBinContent(22,0.6521651);
   dRmin_taujet2->SetBinContent(23,0.8870537);
   dRmin_taujet2->SetBinContent(24,0.5495611);
   dRmin_taujet2->SetBinContent(25,1.238042);
   dRmin_taujet2->SetBinContent(26,0.8218645);
   dRmin_taujet2->SetBinContent(27,0.4832706);
   dRmin_taujet2->SetBinContent(30,0.6716126);
   dRmin_taujet2->SetBinContent(31,0.4045283);
   dRmin_taujet2->SetBinError(1,0.9610451);
   dRmin_taujet2->SetBinError(4,0.7637377);
   dRmin_taujet2->SetBinError(6,0.4171451);
   dRmin_taujet2->SetBinError(7,0.4744475);
   dRmin_taujet2->SetBinError(9,0.6169656);
   dRmin_taujet2->SetBinError(10,0.4057944);
   dRmin_taujet2->SetBinError(11,0.8029085);
   dRmin_taujet2->SetBinError(12,0.9020727);
   dRmin_taujet2->SetBinError(16,0.3845776);
   dRmin_taujet2->SetBinError(17,0.8590813);
   dRmin_taujet2->SetBinError(18,0.9457469);
   dRmin_taujet2->SetBinError(19,0.4197137);
   dRmin_taujet2->SetBinError(21,0.5663789);
   dRmin_taujet2->SetBinError(22,0.6404379);
   dRmin_taujet2->SetBinError(23,0.6313832);
   dRmin_taujet2->SetBinError(24,0.3852372);
   dRmin_taujet2->SetBinError(25,0.9224216);
   dRmin_taujet2->SetBinError(26,0.5829407);
   dRmin_taujet2->SetBinError(27,0.3888324);
   dRmin_taujet2->SetBinError(30,0.6716125);
   dRmin_taujet2->SetBinError(31,0.4045283);
   dRmin_taujet2->SetEntries(42);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(6);
   dRmin_taujet2->SetLineColor(6);
   dRmin_taujet2->SetLineWidth(2);
   dRmin_taujet2->SetMarkerColor(6);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,0.3510018);
   dRmin_taujet2->SetBinContent(5,0.1068225);
   dRmin_taujet2->SetBinContent(6,0.05209029);
   dRmin_taujet2->SetBinContent(7,0.1177742);
   dRmin_taujet2->SetBinContent(8,0.2955586);
   dRmin_taujet2->SetBinContent(9,0.2301689);
   dRmin_taujet2->SetBinContent(10,0.2458632);
   dRmin_taujet2->SetBinContent(11,0.385626);
   dRmin_taujet2->SetBinContent(12,0.3492332);
   dRmin_taujet2->SetBinContent(13,0.4616688);
   dRmin_taujet2->SetBinContent(14,0.3679262);
   dRmin_taujet2->SetBinContent(15,0.4712892);
   dRmin_taujet2->SetBinContent(16,0.4115663);
   dRmin_taujet2->SetBinContent(17,0.2706548);
   dRmin_taujet2->SetBinContent(18,0.6084852);
   dRmin_taujet2->SetBinContent(19,0.2958362);
   dRmin_taujet2->SetBinContent(20,0.159032);
   dRmin_taujet2->SetBinContent(21,0.2068113);
   dRmin_taujet2->SetBinContent(22,0.1853485);
   dRmin_taujet2->SetBinContent(23,0.1055493);
   dRmin_taujet2->SetBinContent(24,0.1041085);
   dRmin_taujet2->SetBinContent(25,0.07419604);
   dRmin_taujet2->SetBinContent(26,0.08594262);
   dRmin_taujet2->SetBinContent(27,0.02050504);
   dRmin_taujet2->SetBinContent(28,0.0187998);
   dRmin_taujet2->SetBinContent(29,0.04082361);
   dRmin_taujet2->SetBinContent(30,0.004979272);
   dRmin_taujet2->SetBinContent(32,0.01991059);
   dRmin_taujet2->SetBinError(1,0.08172764);
   dRmin_taujet2->SetBinError(5,0.04416933);
   dRmin_taujet2->SetBinError(6,0.03082776);
   dRmin_taujet2->SetBinError(7,0.04759676);
   dRmin_taujet2->SetBinError(8,0.08109545);
   dRmin_taujet2->SetBinError(9,0.06835493);
   dRmin_taujet2->SetBinError(10,0.07343018);
   dRmin_taujet2->SetBinError(11,0.08988539);
   dRmin_taujet2->SetBinError(12,0.08587037);
   dRmin_taujet2->SetBinError(13,0.0954792);
   dRmin_taujet2->SetBinError(14,0.08917173);
   dRmin_taujet2->SetBinError(15,0.0983561);
   dRmin_taujet2->SetBinError(16,0.09276616);
   dRmin_taujet2->SetBinError(17,0.07163991);
   dRmin_taujet2->SetBinError(18,0.111461);
   dRmin_taujet2->SetBinError(19,0.07462471);
   dRmin_taujet2->SetBinError(20,0.05173422);
   dRmin_taujet2->SetBinError(21,0.06424186);
   dRmin_taujet2->SetBinError(22,0.06364087);
   dRmin_taujet2->SetBinError(23,0.0440473);
   dRmin_taujet2->SetBinError(24,0.04597553);
   dRmin_taujet2->SetBinError(25,0.03790084);
   dRmin_taujet2->SetBinError(26,0.04312323);
   dRmin_taujet2->SetBinError(27,0.01935469);
   dRmin_taujet2->SetBinError(28,0.0187998);
   dRmin_taujet2->SetBinError(29,0.02893676);
   dRmin_taujet2->SetBinError(30,0.004979272);
   dRmin_taujet2->SetBinError(32,0.01991059);
   dRmin_taujet2->SetEntries(353);
   dRmin_taujet2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dRmin_taujet2->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dRmin_taujet2->SetLineColor(ci);
   dRmin_taujet2->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dRmin_taujet2->SetMarkerColor(ci);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,0.09258567);
   dRmin_taujet2->SetBinContent(5,0.08612941);
   dRmin_taujet2->SetBinContent(6,0.1224472);
   dRmin_taujet2->SetBinContent(7,0.1663799);
   dRmin_taujet2->SetBinContent(8,0.06446939);
   dRmin_taujet2->SetBinContent(12,0.1718155);
   dRmin_taujet2->SetBinContent(16,0.1697759);
   dRmin_taujet2->SetBinContent(26,0.09741174);
   dRmin_taujet2->SetBinContent(27,0.1805422);
   dRmin_taujet2->SetBinContent(28,0.107372);
   dRmin_taujet2->SetBinError(1,0.09258567);
   dRmin_taujet2->SetBinError(5,0.08612942);
   dRmin_taujet2->SetBinError(6,0.1224472);
   dRmin_taujet2->SetBinError(7,0.1663799);
   dRmin_taujet2->SetBinError(8,0.06446939);
   dRmin_taujet2->SetBinError(12,0.1718155);
   dRmin_taujet2->SetBinError(16,0.169776);
   dRmin_taujet2->SetBinError(26,0.09741173);
   dRmin_taujet2->SetBinError(27,0.1805422);
   dRmin_taujet2->SetBinError(28,0.107372);
   dRmin_taujet2->SetEntries(10);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(3);
   dRmin_taujet2->SetLineColor(3);
   dRmin_taujet2->SetLineWidth(2);
   dRmin_taujet2->SetMarkerColor(3);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,0.3273089);
   dRmin_taujet2->SetBinContent(5,0.1120297);
   dRmin_taujet2->SetBinContent(10,0.05661136);
   dRmin_taujet2->SetBinContent(15,0.1076695);
   dRmin_taujet2->SetBinContent(17,0.1771442);
   dRmin_taujet2->SetBinContent(20,0.06443273);
   dRmin_taujet2->SetBinContent(21,0.03338007);
   dRmin_taujet2->SetBinContent(23,0.08432826);
   dRmin_taujet2->SetBinContent(24,0.08349333);
   dRmin_taujet2->SetBinContent(28,0.01932581);
   dRmin_taujet2->SetBinError(1,0.2511649);
   dRmin_taujet2->SetBinError(5,0.1120297);
   dRmin_taujet2->SetBinError(10,0.05661136);
   dRmin_taujet2->SetBinError(15,0.1076695);
   dRmin_taujet2->SetBinError(17,0.1252837);
   dRmin_taujet2->SetBinError(20,0.06443273);
   dRmin_taujet2->SetBinError(21,0.03338007);
   dRmin_taujet2->SetBinError(23,0.08432826);
   dRmin_taujet2->SetBinError(24,0.08349333);
   dRmin_taujet2->SetBinError(28,0.01932581);
   dRmin_taujet2->SetEntries(12);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(3);
   dRmin_taujet2->SetLineColor(3);
   dRmin_taujet2->SetLineWidth(2);
   dRmin_taujet2->SetMarkerColor(3);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,0.03015147);
   dRmin_taujet2->SetBinContent(5,0.005692167);
   dRmin_taujet2->SetBinContent(7,0.006649794);
   dRmin_taujet2->SetBinContent(8,0.01153781);
   dRmin_taujet2->SetBinContent(9,0.005977024);
   dRmin_taujet2->SetBinContent(11,0.01390716);
   dRmin_taujet2->SetBinContent(12,0.006120275);
   dRmin_taujet2->SetBinContent(14,0.01370775);
   dRmin_taujet2->SetBinContent(15,0.02894917);
   dRmin_taujet2->SetBinContent(16,0.006230633);
   dRmin_taujet2->SetBinContent(17,0.001192208);
   dRmin_taujet2->SetBinContent(19,0.01207544);
   dRmin_taujet2->SetBinContent(20,0.006485209);
   dRmin_taujet2->SetBinContent(23,0.02038364);
   dRmin_taujet2->SetBinContent(24,0.006475113);
   dRmin_taujet2->SetBinContent(25,0.009226302);
   dRmin_taujet2->SetBinContent(27,0.002873864);
   dRmin_taujet2->SetBinError(1,0.01807572);
   dRmin_taujet2->SetBinError(5,0.005692167);
   dRmin_taujet2->SetBinError(7,0.006649794);
   dRmin_taujet2->SetBinError(8,0.008180505);
   dRmin_taujet2->SetBinError(9,0.005977024);
   dRmin_taujet2->SetBinError(11,0.0094499);
   dRmin_taujet2->SetBinError(12,0.006120275);
   dRmin_taujet2->SetBinError(14,0.009389113);
   dRmin_taujet2->SetBinError(15,0.01490455);
   dRmin_taujet2->SetBinError(16,0.006230633);
   dRmin_taujet2->SetBinError(17,0.001192208);
   dRmin_taujet2->SetBinError(19,0.008541762);
   dRmin_taujet2->SetBinError(20,0.006485209);
   dRmin_taujet2->SetBinError(23,0.01521201);
   dRmin_taujet2->SetBinError(24,0.006475113);
   dRmin_taujet2->SetBinError(25,0.008487968);
   dRmin_taujet2->SetBinError(27,0.002873864);
   dRmin_taujet2->SetEntries(31);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(3);
   dRmin_taujet2->SetLineColor(3);
   dRmin_taujet2->SetLineWidth(2);
   dRmin_taujet2->SetMarkerColor(3);
   dRmin_taujet2->SetMarkerStyle(21);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet2,"");
   stack->Draw("hist");
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,27);
   dRmin_taujet2->SetBinContent(7,2);
   dRmin_taujet2->SetBinContent(9,2);
   dRmin_taujet2->SetBinContent(10,1);
   dRmin_taujet2->SetBinContent(11,1);
   dRmin_taujet2->SetBinContent(12,5);
   dRmin_taujet2->SetBinContent(13,2);
   dRmin_taujet2->SetBinContent(15,1);
   dRmin_taujet2->SetBinContent(16,4);
   dRmin_taujet2->SetBinContent(17,1);
   dRmin_taujet2->SetBinContent(18,2);
   dRmin_taujet2->SetBinContent(19,2);
   dRmin_taujet2->SetBinContent(20,2);
   dRmin_taujet2->SetBinContent(21,2);
   dRmin_taujet2->SetBinContent(22,1);
   dRmin_taujet2->SetBinContent(24,3);
   dRmin_taujet2->SetBinContent(25,1);
   dRmin_taujet2->SetBinContent(26,2);
   dRmin_taujet2->SetBinContent(27,1);
   dRmin_taujet2->SetBinContent(28,1);
   dRmin_taujet2->SetBinContent(31,1);
   dRmin_taujet2->SetBinError(1,5.196152);
   dRmin_taujet2->SetBinError(7,1.414214);
   dRmin_taujet2->SetBinError(9,1.414214);
   dRmin_taujet2->SetBinError(10,1);
   dRmin_taujet2->SetBinError(11,1);
   dRmin_taujet2->SetBinError(12,2.236068);
   dRmin_taujet2->SetBinError(13,1.414214);
   dRmin_taujet2->SetBinError(15,1);
   dRmin_taujet2->SetBinError(16,2);
   dRmin_taujet2->SetBinError(17,1);
   dRmin_taujet2->SetBinError(18,1.414214);
   dRmin_taujet2->SetBinError(19,1.414214);
   dRmin_taujet2->SetBinError(20,1.414214);
   dRmin_taujet2->SetBinError(21,1.414214);
   dRmin_taujet2->SetBinError(22,1);
   dRmin_taujet2->SetBinError(24,1.732051);
   dRmin_taujet2->SetBinError(25,1);
   dRmin_taujet2->SetBinError(26,1.414214);
   dRmin_taujet2->SetBinError(27,1);
   dRmin_taujet2->SetBinError(28,1);
   dRmin_taujet2->SetBinError(31,1);
   dRmin_taujet2->SetEntries(64);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillColor(1);
   dRmin_taujet2->SetFillStyle(0);
   dRmin_taujet2->SetLineWidth(3);
   dRmin_taujet2->SetMarkerStyle(20);
   dRmin_taujet2->SetMarkerSize(1.3);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   dRmin_taujet2->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_noCJV");
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
   TLegendEntry *entry=leg->AddEntry("dRmin_taujet2","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dRmin_taujet2","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet2","EWK W+jets","f");

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
   entry=leg->AddEntry("dRmin_taujet2","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet2","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet2","Dibosons","f");
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
   lower->Range(-1.336709,-0.653951,7.017722,2.070845);
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
   
   TH1F *dRmin_taujet2 = new TH1F("dRmin_taujet2","dRmin_taujet2",50,0,10);
   dRmin_taujet2->SetBinContent(1,6.841405);
   dRmin_taujet2->SetBinContent(7,2.238911);
   dRmin_taujet2->SetBinContent(9,1.803968);
   dRmin_taujet2->SetBinContent(10,0.601483);
   dRmin_taujet2->SetBinContent(11,0.8316411);
   dRmin_taujet2->SetBinContent(12,1.986921);
   dRmin_taujet2->SetBinContent(13,4.33211);
   dRmin_taujet2->SetBinContent(15,1.644986);
   dRmin_taujet2->SetBinContent(16,2.312653);
   dRmin_taujet2->SetBinContent(17,0.6813338);
   dRmin_taujet2->SetBinContent(18,1.085212);
   dRmin_taujet2->SetBinContent(19,2.748668);
   dRmin_taujet2->SetBinContent(20,8.697545);
   dRmin_taujet2->SetBinContent(21,1.929783);
   dRmin_taujet2->SetBinContent(22,1.19401);
   dRmin_taujet2->SetBinContent(24,4.03422);
   dRmin_taujet2->SetBinContent(25,0.7567366);
   dRmin_taujet2->SetBinContent(26,1.989617);
   dRmin_taujet2->SetBinContent(27,1.455198);
   dRmin_taujet2->SetBinContent(28,6.872963);
   dRmin_taujet2->SetBinContent(31,2.472015);
   dRmin_taujet2->SetBinError(1,2.495777);
   dRmin_taujet2->SetBinError(7,2.027021);
   dRmin_taujet2->SetBinError(9,1.62709);
   dRmin_taujet2->SetBinError(10,0.6824669);
   dRmin_taujet2->SetBinError(11,1.001952);
   dRmin_taujet2->SetBinError(12,1.300737);
   dRmin_taujet2->SetBinError(13,3.191597);
   dRmin_taujet2->SetBinError(15,1.692137);
   dRmin_taujet2->SetBinError(16,1.641419);
   dRmin_taujet2->SetBinError(17,0.7923037);
   dRmin_taujet2->SetBinError(18,0.9504116);
   dRmin_taujet2->SetBinError(19,2.524267);
   dRmin_taujet2->SetBinError(20,6.903054);
   dRmin_taujet2->SetBinError(21,1.72986);
   dRmin_taujet2->SetBinError(22,1.505838);
   dRmin_taujet2->SetBinError(24,3.171952);
   dRmin_taujet2->SetBinError(25,0.9231286);
   dRmin_taujet2->SetBinError(26,1.83167);
   dRmin_taujet2->SetBinError(27,1.715651);
   dRmin_taujet2->SetBinError(28,8.636252);
   dRmin_taujet2->SetBinError(31,3.495957);
   dRmin_taujet2->SetMinimum(0);
   dRmin_taujet2->SetMaximum(2);
   dRmin_taujet2->SetEntries(16.23357);
   dRmin_taujet2->SetStats(0);
   dRmin_taujet2->SetFillStyle(0);
   dRmin_taujet2->SetMarkerStyle(20);
   dRmin_taujet2->SetMarkerSize(0.8);
   dRmin_taujet2->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag2)");
   dRmin_taujet2->GetXaxis()->SetRange(1,33);
   dRmin_taujet2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetXaxis()->SetLabelSize(0.1);
   dRmin_taujet2->GetXaxis()->SetTitleSize(0.12);
   dRmin_taujet2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet2->GetYaxis()->SetTitle("Data/MC");
   dRmin_taujet2->GetYaxis()->SetNdivisions(505);
   dRmin_taujet2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetYaxis()->SetLabelSize(0.1);
   dRmin_taujet2->GetYaxis()->SetTitleSize(0.12);
   dRmin_taujet2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetYaxis()->SetTitleOffset(0.55);
   dRmin_taujet2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet2->GetZaxis()->SetTitleFont(42);
   dRmin_taujet2->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
