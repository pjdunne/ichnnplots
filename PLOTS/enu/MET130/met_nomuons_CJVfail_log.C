{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:50:59 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.897555,1063.291,6.947413);
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
   stack->SetMaximum(1093689);
   
   TH1F *met_nomuons_stack_10 = new TH1F("met_nomuons_stack_10","stack",50,0,1000);
   met_nomuons_stack_10->SetBinContent(7,0.09954202);
   met_nomuons_stack_10->SetBinContent(8,2.232484);
   met_nomuons_stack_10->SetBinContent(9,2.396062);
   met_nomuons_stack_10->SetBinContent(10,2.168585);
   met_nomuons_stack_10->SetBinContent(11,4.107556);
   met_nomuons_stack_10->SetBinContent(14,0.6096776);
   met_nomuons_stack_10->SetBinError(7,0.0712311);
   met_nomuons_stack_10->SetBinError(8,1.932303);
   met_nomuons_stack_10->SetBinError(9,2.126781);
   met_nomuons_stack_10->SetBinError(10,2.022687);
   met_nomuons_stack_10->SetBinError(11,2.909241);
   met_nomuons_stack_10->SetBinError(14,0.6096775);
   met_nomuons_stack_10->SetMinimum(0.001992251);
   met_nomuons_stack_10->SetMaximum(2852098);
   met_nomuons_stack_10->SetEntries(19);
   met_nomuons_stack_10->SetStats(0);
   met_nomuons_stack_10->SetFillColor(4);
   met_nomuons_stack_10->SetLineColor(4);
   met_nomuons_stack_10->SetLineWidth(2);
   met_nomuons_stack_10->SetMarkerColor(4);
   met_nomuons_stack_10->SetMarkerStyle(21);
   met_nomuons_stack_10->SetMarkerSize(0.8);
   met_nomuons_stack_10->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons_stack_10->GetXaxis()->SetLabelFont(42);
   met_nomuons_stack_10->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_10->GetXaxis()->SetLabelSize(0);
   met_nomuons_stack_10->GetXaxis()->SetTitleSize(0);
   met_nomuons_stack_10->GetXaxis()->SetTickLength(0.02);
   met_nomuons_stack_10->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons_stack_10->GetXaxis()->SetTitleFont(42);
   met_nomuons_stack_10->GetYaxis()->SetTitle("Events");
   met_nomuons_stack_10->GetYaxis()->SetLabelFont(42);
   met_nomuons_stack_10->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_10->GetYaxis()->SetLabelSize(0.035);
   met_nomuons_stack_10->GetYaxis()->SetTitleSize(0.045);
   met_nomuons_stack_10->GetYaxis()->SetTickLength(0.02);
   met_nomuons_stack_10->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons_stack_10->GetYaxis()->SetTitleFont(42);
   met_nomuons_stack_10->GetZaxis()->SetLabelFont(42);
   met_nomuons_stack_10->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons_stack_10->GetZaxis()->SetLabelSize(0.035);
   met_nomuons_stack_10->GetZaxis()->SetTitleSize(0.045);
   met_nomuons_stack_10->GetZaxis()->SetTickLength(0.02);
   met_nomuons_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_nomuons_stack_10);
   
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.09954202);
   met_nomuons->SetBinContent(8,2.232484);
   met_nomuons->SetBinContent(9,2.396062);
   met_nomuons->SetBinContent(10,2.168585);
   met_nomuons->SetBinContent(11,4.107556);
   met_nomuons->SetBinContent(14,0.6096776);
   met_nomuons->SetBinError(7,0.0712311);
   met_nomuons->SetBinError(8,1.932303);
   met_nomuons->SetBinError(9,2.126781);
   met_nomuons->SetBinError(10,2.022687);
   met_nomuons->SetBinError(11,2.909241);
   met_nomuons->SetBinError(14,0.6096775);
   met_nomuons->SetMinimum(0.01);
   met_nomuons->SetMaximum(975000);
   met_nomuons->SetEntries(19);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(4);
   met_nomuons->SetLineColor(4);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(4);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0);
   met_nomuons->GetXaxis()->SetTitleSize(0);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetTitle("Events");
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"HIST");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,19.39664);
   met_nomuons->SetBinContent(8,20.69655);
   met_nomuons->SetBinContent(9,12.05272);
   met_nomuons->SetBinContent(10,15.17272);
   met_nomuons->SetBinContent(11,10.99524);
   met_nomuons->SetBinContent(12,4.372008);
   met_nomuons->SetBinContent(13,1.542616);
   met_nomuons->SetBinContent(14,2.928927);
   met_nomuons->SetBinContent(15,1.063904);
   met_nomuons->SetBinContent(16,1.075731);
   met_nomuons->SetBinContent(17,0.7141592);
   met_nomuons->SetBinContent(21,1.074504);
   met_nomuons->SetBinContent(22,0.3727424);
   met_nomuons->SetBinError(7,3.508788);
   met_nomuons->SetBinError(8,3.797578);
   met_nomuons->SetBinError(9,2.78561);
   met_nomuons->SetBinError(10,3.349835);
   met_nomuons->SetBinError(11,2.761486);
   met_nomuons->SetBinError(12,1.633396);
   met_nomuons->SetBinError(13,1.091246);
   met_nomuons->SetBinError(14,1.375921);
   met_nomuons->SetBinError(15,1.063904);
   met_nomuons->SetBinError(16,1.075731);
   met_nomuons->SetBinError(17,0.7141592);
   met_nomuons->SetBinError(21,1.074504);
   met_nomuons->SetBinError(22,0.3727423);
   met_nomuons->SetEntries(165);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(5);
   met_nomuons->SetLineColor(5);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(5);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,31.47918);
   met_nomuons->SetBinContent(8,41.93164);
   met_nomuons->SetBinContent(9,36.59855);
   met_nomuons->SetBinContent(10,24.56692);
   met_nomuons->SetBinContent(11,21.47273);
   met_nomuons->SetBinContent(12,5.831346);
   met_nomuons->SetBinContent(13,6.446037);
   met_nomuons->SetBinContent(14,3.97855);
   met_nomuons->SetBinContent(15,4.260368);
   met_nomuons->SetBinContent(16,2.035612);
   met_nomuons->SetBinContent(17,2.457191);
   met_nomuons->SetBinContent(18,0.9079249);
   met_nomuons->SetBinContent(19,0.4060623);
   met_nomuons->SetBinContent(20,1.264508);
   met_nomuons->SetBinContent(21,1.584446);
   met_nomuons->SetBinError(7,3.831579);
   met_nomuons->SetBinError(8,4.473662);
   met_nomuons->SetBinError(9,4.353527);
   met_nomuons->SetBinError(10,3.705129);
   met_nomuons->SetBinError(11,3.346483);
   met_nomuons->SetBinError(12,1.735858);
   met_nomuons->SetBinError(13,1.9507);
   met_nomuons->SetBinError(14,1.299114);
   met_nomuons->SetBinError(15,1.400617);
   met_nomuons->SetBinError(16,0.8918053);
   met_nomuons->SetBinError(17,1.202517);
   met_nomuons->SetBinError(18,0.6471394);
   met_nomuons->SetBinError(19,0.4060623);
   met_nomuons->SetBinError(20,0.9168079);
   met_nomuons->SetBinError(21,1.235286);
   met_nomuons->SetEntries(460);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(6);
   met_nomuons->SetLineColor(6);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(6);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(6,0.04435837);
   met_nomuons->SetBinContent(7,4.684367);
   met_nomuons->SetBinContent(8,7.008736);
   met_nomuons->SetBinContent(9,5.040934);
   met_nomuons->SetBinContent(10,3.968329);
   met_nomuons->SetBinContent(11,3.022038);
   met_nomuons->SetBinContent(12,2.163963);
   met_nomuons->SetBinContent(13,1.663304);
   met_nomuons->SetBinContent(14,1.280754);
   met_nomuons->SetBinContent(15,0.6894864);
   met_nomuons->SetBinContent(16,0.642881);
   met_nomuons->SetBinContent(17,0.3955384);
   met_nomuons->SetBinContent(18,0.3407757);
   met_nomuons->SetBinContent(19,0.2022791);
   met_nomuons->SetBinContent(20,0.1604045);
   met_nomuons->SetBinContent(21,0.1214323);
   met_nomuons->SetBinContent(22,0.1503738);
   met_nomuons->SetBinContent(23,0.06969216);
   met_nomuons->SetBinContent(24,0.05454065);
   met_nomuons->SetBinContent(25,0.05982388);
   met_nomuons->SetBinContent(26,0.02318903);
   met_nomuons->SetBinContent(27,0.0162683);
   met_nomuons->SetBinError(6,0.02256035);
   met_nomuons->SetBinError(7,0.2946153);
   met_nomuons->SetBinError(8,0.3707319);
   met_nomuons->SetBinError(9,0.3173103);
   met_nomuons->SetBinError(10,0.2922696);
   met_nomuons->SetBinError(11,0.2480123);
   met_nomuons->SetBinError(12,0.2095792);
   met_nomuons->SetBinError(13,0.1881344);
   met_nomuons->SetBinError(14,0.1637825);
   met_nomuons->SetBinError(15,0.1218603);
   met_nomuons->SetBinError(16,0.1200514);
   met_nomuons->SetBinError(17,0.08917241);
   met_nomuons->SetBinError(18,0.0886052);
   met_nomuons->SetBinError(19,0.06748229);
   met_nomuons->SetBinError(20,0.05823795);
   met_nomuons->SetBinError(21,0.05226828);
   met_nomuons->SetBinError(22,0.05699191);
   met_nomuons->SetBinError(23,0.03619166);
   met_nomuons->SetBinError(24,0.03961712);
   met_nomuons->SetBinError(25,0.0345703);
   met_nomuons->SetBinError(26,0.02318903);
   met_nomuons->SetBinError(27,0.0162683);
   met_nomuons->SetEntries(1830);
   met_nomuons->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met_nomuons->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met_nomuons->SetLineColor(ci);
   met_nomuons->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met_nomuons->SetMarkerColor(ci);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.8543078);
   met_nomuons->SetBinContent(8,0.8507467);
   met_nomuons->SetBinContent(9,0.7002444);
   met_nomuons->SetBinContent(10,0.3615953);
   met_nomuons->SetBinContent(11,0.1299032);
   met_nomuons->SetBinContent(12,0.1385539);
   met_nomuons->SetBinContent(13,0.08303766);
   met_nomuons->SetBinContent(15,0.08120943);
   met_nomuons->SetBinError(7,0.2578425);
   met_nomuons->SetBinError(8,0.2710205);
   met_nomuons->SetBinError(9,0.2950288);
   met_nomuons->SetBinError(10,0.191422);
   met_nomuons->SetBinError(11,0.09414667);
   met_nomuons->SetBinError(12,0.1186167);
   met_nomuons->SetBinError(13,0.08303766);
   met_nomuons->SetBinError(15,0.08120943);
   met_nomuons->SetEntries(46);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.1583833);
   met_nomuons->SetBinContent(8,0.1924149);
   met_nomuons->SetBinContent(9,0.1289266);
   met_nomuons->SetBinContent(10,0.09788482);
   met_nomuons->SetBinContent(11,0.09014262);
   met_nomuons->SetBinContent(12,0.08699346);
   met_nomuons->SetBinContent(13,0.06735727);
   met_nomuons->SetBinContent(14,0.02631841);
   met_nomuons->SetBinContent(15,0.01763625);
   met_nomuons->SetBinContent(16,0.01234612);
   met_nomuons->SetBinContent(18,0.01190025);
   met_nomuons->SetBinError(7,0.03091807);
   met_nomuons->SetBinError(8,0.03335415);
   met_nomuons->SetBinError(9,0.02850159);
   met_nomuons->SetBinError(10,0.02587394);
   met_nomuons->SetBinError(11,0.02456079);
   met_nomuons->SetBinError(12,0.02455343);
   met_nomuons->SetBinError(13,0.0213402);
   met_nomuons->SetBinError(14,0.01354136);
   met_nomuons->SetBinError(15,0.01044065);
   met_nomuons->SetBinError(16,0.008731894);
   met_nomuons->SetBinError(18,0.008693541);
   met_nomuons->SetEntries(163);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(3);
   met_nomuons->SetLineColor(3);
   met_nomuons->SetLineWidth(2);
   met_nomuons->SetMarkerColor(3);
   met_nomuons->SetMarkerStyle(21);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   stack->Add(met_nomuons,"");
   stack->Draw("hist");
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,33);
   met_nomuons->SetBinContent(8,65);
   met_nomuons->SetBinContent(9,35);
   met_nomuons->SetBinContent(10,20);
   met_nomuons->SetBinContent(11,20);
   met_nomuons->SetBinContent(12,16);
   met_nomuons->SetBinContent(13,9);
   met_nomuons->SetBinContent(14,7);
   met_nomuons->SetBinContent(15,2);
   met_nomuons->SetBinContent(16,3);
   met_nomuons->SetBinContent(19,2);
   met_nomuons->SetBinContent(21,1);
   met_nomuons->SetBinContent(23,1);
   met_nomuons->SetBinContent(28,1);
   met_nomuons->SetBinError(7,5.744563);
   met_nomuons->SetBinError(8,8.062258);
   met_nomuons->SetBinError(9,5.91608);
   met_nomuons->SetBinError(10,4.472136);
   met_nomuons->SetBinError(11,4.472136);
   met_nomuons->SetBinError(12,4);
   met_nomuons->SetBinError(13,3);
   met_nomuons->SetBinError(14,2.645751);
   met_nomuons->SetBinError(15,1.414214);
   met_nomuons->SetBinError(16,1.732051);
   met_nomuons->SetBinError(19,1.414214);
   met_nomuons->SetBinError(21,1);
   met_nomuons->SetBinError(23,1);
   met_nomuons->SetBinError(28,1);
   met_nomuons->SetEntries(215);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillColor(1);
   met_nomuons->SetFillStyle(0);
   met_nomuons->SetLineWidth(3);
   met_nomuons->SetMarkerStyle(20);
   met_nomuons->SetMarkerSize(1.3);
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.035);
   met_nomuons->GetXaxis()->SetTitleSize(0.045);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.035);
   met_nomuons->GetYaxis()->SetTitleSize(0.045);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(1.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   met_nomuons->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("met_nomuons","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met_nomuons","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","EWK W+jets","f");

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
   entry=leg->AddEntry("met_nomuons","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met_nomuons","Dibosons","f");
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
   
   TH1F *met_nomuons = new TH1F("met_nomuons","met_nomuons",50,0,1000);
   met_nomuons->SetBinContent(7,0.5833184);
   met_nomuons->SetBinContent(8,0.9196366);
   met_nomuons->SetBinContent(9,0.6419502);
   met_nomuons->SetBinContent(10,0.4528222);
   met_nomuons->SetBinContent(11,0.5600664);
   met_nomuons->SetBinContent(12,1.270561);
   met_nomuons->SetBinContent(13,0.9181471);
   met_nomuons->SetBinContent(14,0.8521465);
   met_nomuons->SetBinContent(15,0.3271928);
   met_nomuons->SetBinContent(16,0.7964807);
   met_nomuons->SetBinContent(19,3.287627);
   met_nomuons->SetBinContent(21,0.3596627);
   met_nomuons->SetBinContent(23,14.34881);
   met_nomuons->SetBinError(7,0.1148784);
   met_nomuons->SetBinError(8,0.1373928);
   met_nomuons->SetBinError(9,0.124514);
   met_nomuons->SetBinError(10,0.1135243);
   met_nomuons->SetBinError(11,0.1425892);
   met_nomuons->SetBinError(12,0.399156);
   met_nomuons->SetBinError(13,0.3713125);
   met_nomuons->SetBinError(14,0.3775728);
   met_nomuons->SetBinError(15,0.2499063);
   met_nomuons->SetBinError(16,0.5471892);
   met_nomuons->SetBinError(19,3.217593);
   met_nomuons->SetBinError(21,0.4174404);
   met_nomuons->SetBinError(23,16.16826);
   met_nomuons->SetMinimum(0);
   met_nomuons->SetMaximum(2);
   met_nomuons->SetEntries(2.349599);
   met_nomuons->SetStats(0);
   met_nomuons->SetFillStyle(0);
   met_nomuons->SetMarkerStyle(20);
   met_nomuons->SetMarkerSize(0.8);
   met_nomuons->GetXaxis()->SetTitle("PF MET + #mu (GeV)");
   met_nomuons->GetXaxis()->SetLabelFont(42);
   met_nomuons->GetXaxis()->SetLabelOffset(0.007);
   met_nomuons->GetXaxis()->SetLabelSize(0.1);
   met_nomuons->GetXaxis()->SetTitleSize(0.12);
   met_nomuons->GetXaxis()->SetTickLength(0.02);
   met_nomuons->GetXaxis()->SetTitleOffset(0.9);
   met_nomuons->GetXaxis()->SetTitleFont(42);
   met_nomuons->GetYaxis()->SetTitle("Data/MC");
   met_nomuons->GetYaxis()->SetNdivisions(505);
   met_nomuons->GetYaxis()->SetLabelFont(42);
   met_nomuons->GetYaxis()->SetLabelOffset(0.007);
   met_nomuons->GetYaxis()->SetLabelSize(0.1);
   met_nomuons->GetYaxis()->SetTitleSize(0.12);
   met_nomuons->GetYaxis()->SetTickLength(0.02);
   met_nomuons->GetYaxis()->SetTitleOffset(0.55);
   met_nomuons->GetYaxis()->SetTitleFont(42);
   met_nomuons->GetZaxis()->SetLabelFont(42);
   met_nomuons->GetZaxis()->SetLabelOffset(0.007);
   met_nomuons->GetZaxis()->SetLabelSize(0.035);
   met_nomuons->GetZaxis()->SetTitleSize(0.045);
   met_nomuons->GetZaxis()->SetTickLength(0.02);
   met_nomuons->GetZaxis()->SetTitleFont(42);
   met_nomuons->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
