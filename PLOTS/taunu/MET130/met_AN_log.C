{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:57:07 2013) by ROOT version5.32/00
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
   upper->Range(-145.8228,-2.906318,765.5696,7.091995);
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
   stack->SetMaximum(1483943);
   
   TH1F *met_stack_4 = new TH1F("met_stack_4","stack",50,0,1000);
   met_stack_4->SetBinContent(7,2.151105);
   met_stack_4->SetBinContent(8,6.842251);
   met_stack_4->SetBinContent(9,0.3974005);
   met_stack_4->SetBinContent(10,0.6173485);
   met_stack_4->SetBinContent(11,0.2051611);
   met_stack_4->SetBinContent(12,2.407894);
   met_stack_4->SetBinContent(13,0.3679114);
   met_stack_4->SetBinContent(16,0.1915174);
   met_stack_4->SetBinContent(17,0.1148367);
   met_stack_4->SetBinError(7,2.061413);
   met_stack_4->SetBinError(8,3.624029);
   met_stack_4->SetBinError(9,0.2344454);
   met_stack_4->SetBinError(10,0.2913122);
   met_stack_4->SetBinError(11,0.1370407);
   met_stack_4->SetBinError(12,2.249041);
   met_stack_4->SetBinError(13,0.195341);
   met_stack_4->SetBinError(16,0.1379805);
   met_stack_4->SetBinError(17,0.1148367);
   met_stack_4->SetMinimum(0.001966294);
   met_stack_4->SetMaximum(3909126);
   met_stack_4->SetEntries(41);
   met_stack_4->SetStats(0);
   met_stack_4->SetFillColor(4);
   met_stack_4->SetLineColor(4);
   met_stack_4->SetLineWidth(2);
   met_stack_4->SetMarkerColor(4);
   met_stack_4->SetMarkerStyle(21);
   met_stack_4->SetMarkerSize(0.8);
   met_stack_4->GetXaxis()->SetTitle("PF MET (GeV)");
   met_stack_4->GetXaxis()->SetRange(1,36);
   met_stack_4->GetXaxis()->SetLabelFont(42);
   met_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_stack_4->GetXaxis()->SetLabelSize(0);
   met_stack_4->GetXaxis()->SetTitleSize(0);
   met_stack_4->GetXaxis()->SetTickLength(0.02);
   met_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_stack_4->GetXaxis()->SetTitleFont(42);
   met_stack_4->GetYaxis()->SetTitle("Events");
   met_stack_4->GetYaxis()->SetLabelFont(42);
   met_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_stack_4->GetYaxis()->SetLabelSize(0.035);
   met_stack_4->GetYaxis()->SetTitleSize(0.045);
   met_stack_4->GetYaxis()->SetTickLength(0.02);
   met_stack_4->GetYaxis()->SetTitleOffset(1.55);
   met_stack_4->GetYaxis()->SetTitleFont(42);
   met_stack_4->GetZaxis()->SetLabelFont(42);
   met_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_stack_4->GetZaxis()->SetLabelSize(0.035);
   met_stack_4->GetZaxis()->SetTitleSize(0.045);
   met_stack_4->GetZaxis()->SetTickLength(0.02);
   met_stack_4->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(met_stack_4);
   
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,2.151105);
   met->SetBinContent(8,6.842251);
   met->SetBinContent(9,0.3974005);
   met->SetBinContent(10,0.6173485);
   met->SetBinContent(11,0.2051611);
   met->SetBinContent(12,2.407894);
   met->SetBinContent(13,0.3679114);
   met->SetBinContent(16,0.1915174);
   met->SetBinContent(17,0.1148367);
   met->SetBinError(7,2.061413);
   met->SetBinError(8,3.624029);
   met->SetBinError(9,0.2344454);
   met->SetBinError(10,0.2913122);
   met->SetBinError(11,0.1370407);
   met->SetBinError(12,2.249041);
   met->SetBinError(13,0.195341);
   met->SetBinError(16,0.1379805);
   met->SetBinError(17,0.1148367);
   met->SetMinimum(0.01);
   met->SetMaximum(1650000);
   met->SetEntries(41);
   met->SetStats(0);
   met->SetFillColor(4);
   met->SetLineColor(4);
   met->SetLineWidth(2);
   met->SetMarkerColor(4);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0);
   met->GetXaxis()->SetTitleSize(0);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Events");
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"HIST");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,7.317631);
   met->SetBinContent(8,15.38407);
   met->SetBinContent(9,8.901251);
   met->SetBinContent(10,6.723324);
   met->SetBinContent(11,8.250835);
   met->SetBinContent(12,4.825318);
   met->SetBinContent(13,3.250113);
   met->SetBinContent(14,1.415396);
   met->SetBinContent(15,1.165136);
   met->SetBinContent(16,1.033504);
   met->SetBinContent(18,0.8217042);
   met->SetBinContent(21,0.2285386);
   met->SetBinError(7,2.225621);
   met->SetBinError(8,3.189822);
   met->SetBinError(9,2.506292);
   met->SetBinError(10,2.257925);
   met->SetBinError(11,2.38002);
   met->SetBinError(12,1.87149);
   met->SetBinError(13,1.331816);
   met->SetBinError(14,0.8752845);
   met->SetBinError(15,0.8852771);
   met->SetBinError(16,0.7793094);
   met->SetBinError(18,0.8217042);
   met->SetBinError(21,0.2285386);
   met->SetEntries(113);
   met->SetStats(0);
   met->SetFillColor(5);
   met->SetLineColor(5);
   met->SetLineWidth(2);
   met->SetMarkerColor(5);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,30.66486);
   met->SetBinContent(8,52.99678);
   met->SetBinContent(9,31.78708);
   met->SetBinContent(10,17.61157);
   met->SetBinContent(11,25.19975);
   met->SetBinContent(12,17.07789);
   met->SetBinContent(13,11.9288);
   met->SetBinContent(14,15.44148);
   met->SetBinContent(15,6.182222);
   met->SetBinContent(16,5.139138);
   met->SetBinContent(17,4.407195);
   met->SetBinContent(18,3.858927);
   met->SetBinContent(19,4.639663);
   met->SetBinContent(20,1.932965);
   met->SetBinContent(22,0.4610232);
   met->SetBinContent(23,0.7951796);
   met->SetBinContent(25,0.3820547);
   met->SetBinContent(26,0.4385066);
   met->SetBinContent(27,0.3966935);
   met->SetBinContent(28,0.01587742);
   met->SetBinContent(35,0.4141428);
   met->SetBinContent(38,0.394111);
   met->SetBinError(7,4.322301);
   met->SetBinError(8,6.012137);
   met->SetBinError(9,4.864218);
   met->SetBinError(10,3.141714);
   met->SetBinError(11,4.051741);
   met->SetBinError(12,3.757991);
   met->SetBinError(13,3.031482);
   met->SetBinError(14,3.521253);
   met->SetBinError(15,2.172468);
   met->SetBinError(16,1.870584);
   met->SetBinError(17,1.73992);
   met->SetBinError(18,1.536724);
   met->SetBinError(19,1.599295);
   met->SetBinError(20,0.9963725);
   met->SetBinError(22,0.4345725);
   met->SetBinError(23,0.56362);
   met->SetBinError(25,0.3820547);
   met->SetBinError(26,0.4385066);
   met->SetBinError(27,0.3966935);
   met->SetBinError(28,0.01587742);
   met->SetBinError(35,0.4141429);
   met->SetBinError(38,0.394111);
   met->SetEntries(488);
   met->SetStats(0);
   met->SetFillColor(6);
   met->SetLineColor(6);
   met->SetLineWidth(2);
   met->SetMarkerColor(6);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,9.133044);
   met->SetBinContent(8,15.96315);
   met->SetBinContent(9,11.9413);
   met->SetBinContent(10,8.629639);
   met->SetBinContent(11,7.229762);
   met->SetBinContent(12,4.912421);
   met->SetBinContent(13,4.72153);
   met->SetBinContent(14,3.011362);
   met->SetBinContent(15,2.533801);
   met->SetBinContent(16,1.438706);
   met->SetBinContent(17,1.391878);
   met->SetBinContent(18,1.159175);
   met->SetBinContent(19,0.9018092);
   met->SetBinContent(20,0.8113445);
   met->SetBinContent(21,0.6120629);
   met->SetBinContent(22,0.2387295);
   met->SetBinContent(23,0.3174166);
   met->SetBinContent(24,0.3272655);
   met->SetBinContent(25,0.1290717);
   met->SetBinContent(26,0.1833792);
   met->SetBinContent(27,0.05483086);
   met->SetBinContent(28,0.06079096);
   met->SetBinContent(29,0.04246831);
   met->SetBinContent(30,0.01983522);
   met->SetBinContent(31,0.07329342);
   met->SetBinContent(32,0.01188132);
   met->SetBinContent(33,0.01821194);
   met->SetBinContent(34,0.02021044);
   met->SetBinContent(35,0.05886219);
   met->SetBinContent(36,0.01999697);
   met->SetBinContent(38,0.0201658);
   met->SetBinContent(41,0.01959942);
   met->SetBinContent(44,2.740554e-05);
   met->SetBinContent(45,0.007613784);
   met->SetBinContent(51,0.02906363);
   met->SetBinError(7,0.4142811);
   met->SetBinError(8,0.564062);
   met->SetBinError(9,0.4931438);
   met->SetBinError(10,0.4224375);
   met->SetBinError(11,0.3900024);
   met->SetBinError(12,0.3172607);
   met->SetBinError(13,0.3141081);
   met->SetBinError(14,0.2476947);
   met->SetBinError(15,0.2290052);
   met->SetBinError(16,0.1699616);
   met->SetBinError(17,0.1672895);
   met->SetBinError(18,0.1540968);
   met->SetBinError(19,0.1377007);
   met->SetBinError(20,0.1269358);
   met->SetBinError(21,0.1122833);
   met->SetBinError(22,0.06671139);
   met->SetBinError(23,0.08115779);
   met->SetBinError(24,0.08209016);
   met->SetBinError(25,0.05047668);
   met->SetBinError(26,0.06447033);
   met->SetBinError(27,0.03214059);
   met->SetBinError(28,0.03740582);
   met->SetBinError(29,0.03003712);
   met->SetBinError(30,0.01983522);
   met->SetBinError(31,0.0389766);
   met->SetBinError(32,0.01034938);
   met->SetBinError(33,0.01788782);
   met->SetBinError(34,0.02021045);
   met->SetBinError(35,0.03398811);
   met->SetBinError(36,0.01999696);
   met->SetBinError(38,0.0201658);
   met->SetBinError(41,0.01959942);
   met->SetBinError(44,2.740554e-05);
   met->SetBinError(45,0.007613784);
   met->SetBinError(51,0.02906363);
   met->SetEntries(4395);
   met->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   met->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   met->SetLineColor(ci);
   met->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   met->SetMarkerColor(ci);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,1.638134);
   met->SetBinContent(8,3.30385);
   met->SetBinContent(9,1.546364);
   met->SetBinContent(10,2.199797);
   met->SetBinContent(11,0.9397109);
   met->SetBinContent(12,0.3391924);
   met->SetBinContent(13,0.2635403);
   met->SetBinContent(14,0.6591255);
   met->SetBinContent(15,0.2147875);
   met->SetBinContent(17,0.1899421);
   met->SetBinContent(18,0.4011742);
   met->SetBinContent(19,0.1371629);
   met->SetBinContent(21,0.1106946);
   met->SetBinContent(23,0.1188381);
   met->SetBinError(7,0.4891045);
   met->SetBinError(8,1.110198);
   met->SetBinError(9,0.4768671);
   met->SetBinError(10,0.8605424);
   met->SetBinError(11,0.3668491);
   met->SetBinError(12,0.1856787);
   met->SetBinError(13,0.1960042);
   met->SetBinError(14,0.3283168);
   met->SetBinError(15,0.152179);
   met->SetBinError(17,0.1899421);
   met->SetBinError(18,0.2353242);
   met->SetBinError(19,0.1370528);
   met->SetBinError(21,0.1106946);
   met->SetBinError(23,0.1188381);
   met->SetEntries(88);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,2.944064);
   met->SetBinContent(8,3.468388);
   met->SetBinContent(9,2.467851);
   met->SetBinContent(10,1.693467);
   met->SetBinContent(11,0.9775276);
   met->SetBinContent(12,0.2651309);
   met->SetBinContent(13,0.7366256);
   met->SetBinContent(14,0.2932056);
   met->SetBinContent(15,0.05977024);
   met->SetBinContent(21,0.001333162);
   met->SetBinContent(22,0.004718032);
   met->SetBinError(7,0.5833441);
   met->SetBinError(8,0.6711334);
   met->SetBinError(9,0.5242523);
   met->SetBinError(10,0.4279484);
   met->SetBinError(11,0.3585188);
   met->SetBinError(12,0.1787294);
   met->SetBinError(13,0.4031644);
   met->SetBinError(14,0.1563849);
   met->SetBinError(15,0.04911489);
   met->SetBinError(21,0.001333162);
   met->SetBinError(22,0.004718032);
   met->SetEntries(143);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,0.6127743);
   met->SetBinContent(8,0.9710372);
   met->SetBinContent(9,0.5177824);
   met->SetBinContent(10,0.3499776);
   met->SetBinContent(11,0.2896858);
   met->SetBinContent(12,0.1620234);
   met->SetBinContent(13,0.1027493);
   met->SetBinContent(14,0.09309482);
   met->SetBinContent(15,0.04523616);
   met->SetBinContent(16,0.03153755);
   met->SetBinContent(17,0.01350995);
   met->SetBinContent(18,0.01043244);
   met->SetBinContent(20,0.01236391);
   met->SetBinContent(21,3.065204e-05);
   met->SetBinContent(23,0.01246771);
   met->SetBinError(7,0.06449065);
   met->SetBinError(8,0.08195596);
   met->SetBinError(9,0.06084775);
   met->SetBinError(10,0.051429);
   met->SetBinError(11,0.0472632);
   met->SetBinError(12,0.03585071);
   met->SetBinError(13,0.02630934);
   met->SetBinError(14,0.02696758);
   met->SetBinError(15,0.01829682);
   met->SetBinError(16,0.01864607);
   met->SetBinError(17,0.009559898);
   met->SetBinError(18,0.00733709);
   met->SetBinError(20,0.008743234);
   met->SetBinError(21,3.065204e-05);
   met->SetBinError(23,0.01246771);
   met->SetEntries(557);
   met->SetStats(0);
   met->SetFillColor(3);
   met->SetLineColor(3);
   met->SetLineWidth(2);
   met->SetMarkerColor(3);
   met->SetMarkerStyle(21);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   stack->Add(met,"");
   stack->Draw("hist");
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,103);
   met->SetBinContent(8,110);
   met->SetBinContent(9,66);
   met->SetBinContent(10,42);
   met->SetBinContent(11,30);
   met->SetBinContent(12,20);
   met->SetBinContent(13,16);
   met->SetBinContent(14,8);
   met->SetBinContent(15,4);
   met->SetBinContent(16,5);
   met->SetBinContent(17,2);
   met->SetBinContent(18,3);
   met->SetBinContent(19,2);
   met->SetBinContent(21,1);
   met->SetBinContent(23,1);
   met->SetBinContent(33,1);
   met->SetBinError(7,10.14889);
   met->SetBinError(8,10.48809);
   met->SetBinError(9,8.124038);
   met->SetBinError(10,6.480741);
   met->SetBinError(11,5.477226);
   met->SetBinError(12,4.472136);
   met->SetBinError(13,4);
   met->SetBinError(14,2.828427);
   met->SetBinError(15,2);
   met->SetBinError(16,2.236068);
   met->SetBinError(17,1.414214);
   met->SetBinError(18,1.732051);
   met->SetBinError(19,1.414214);
   met->SetBinError(21,1);
   met->SetBinError(23,1);
   met->SetBinError(33,1);
   met->SetEntries(414);
   met->SetStats(0);
   met->SetFillColor(1);
   met->SetFillStyle(0);
   met->SetLineWidth(3);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(1.3);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.035);
   met->GetXaxis()->SetTitleSize(0.045);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.035);
   met->GetYaxis()->SetTitleSize(0.045);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(1.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("SAMEPE1");
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
   TLegendEntry *entry=leg->AddEntry("met","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("met","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","EWK W+jets","f");

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
   entry=leg->AddEntry("met","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("met","Dibosons","f");
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
   lower->Range(-145.8228,-0.653951,765.5696,2.070845);
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
   
   TH1F *met = new TH1F("met","met",50,0,1000);
   met->SetBinContent(7,1.969012);
   met->SetBinContent(8,1.194519);
   met->SetBinContent(9,1.154621);
   met->SetBinContent(10,1.128796);
   met->SetBinContent(11,0.6995083);
   met->SetBinContent(12,0.7251113);
   met->SetBinContent(13,0.761783);
   met->SetBinContent(14,0.382525);
   met->SetBinContent(15,0.3921202);
   met->SetBinContent(16,0.6542032);
   met->SetBinContent(17,0.3331932);
   met->SetBinContent(18,0.4798915);
   met->SetBinContent(19,0.3521973);
   met->SetBinContent(21,1.049693);
   met->SetBinContent(23,0.8039218);
   met->SetBinContent(33,54.90902);
   met->SetBinError(7,0.2686983);
   met->SetBinError(8,0.1452704);
   met->SetBinError(9,0.1808909);
   met->SetBinError(10,0.2124409);
   met->SetBinError(11,0.1493173);
   met->SetBinError(12,0.1964352);
   met->SetBinError(13,0.2260245);
   met->SetBinError(14,0.1508646);
   met->SetBinError(15,0.2160719);
   met->SetBinError(16,0.3404367);
   met->SetBinError(17,0.2550184);
   met->SetBinError(18,0.3084266);
   met->SetBinError(19,0.2683383);
   met->SetBinError(21,1.093367);
   met->SetBinError(23,0.8875202);
   met->SetBinError(33,76.96518);
   met->SetMinimum(0);
   met->SetMaximum(2);
   met->SetEntries(0.7572446);
   met->SetStats(0);
   met->SetFillStyle(0);
   met->SetMarkerStyle(20);
   met->SetMarkerSize(0.8);
   met->GetXaxis()->SetTitle("PF MET (GeV)");
   met->GetXaxis()->SetRange(1,36);
   met->GetXaxis()->SetLabelFont(42);
   met->GetXaxis()->SetLabelOffset(0.007);
   met->GetXaxis()->SetLabelSize(0.1);
   met->GetXaxis()->SetTitleSize(0.12);
   met->GetXaxis()->SetTickLength(0.02);
   met->GetXaxis()->SetTitleOffset(0.9);
   met->GetXaxis()->SetTitleFont(42);
   met->GetYaxis()->SetTitle("Data/MC");
   met->GetYaxis()->SetNdivisions(505);
   met->GetYaxis()->SetLabelFont(42);
   met->GetYaxis()->SetLabelOffset(0.007);
   met->GetYaxis()->SetLabelSize(0.1);
   met->GetYaxis()->SetTitleSize(0.12);
   met->GetYaxis()->SetTickLength(0.02);
   met->GetYaxis()->SetTitleOffset(0.55);
   met->GetYaxis()->SetTitleFont(42);
   met->GetZaxis()->SetLabelFont(42);
   met->GetZaxis()->SetLabelOffset(0.007);
   met->GetZaxis()->SetLabelSize(0.035);
   met->GetZaxis()->SetTitleSize(0.045);
   met->GetZaxis()->SetTickLength(0.02);
   met->GetZaxis()->SetTitleFont(42);
   met->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
