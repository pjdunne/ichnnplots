{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:19 2013) by ROOT version5.32/00
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
   upper->Range(-8.101265,-2.84161,42.53165,6.053145);
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
   stack->SetMaximum(166071.8);
   
   TH1F *n_vtx_stack_13 = new TH1F("n_vtx_stack_13","stack",40,0,40);
   n_vtx_stack_13->SetBinContent(10,0.1101612);
   n_vtx_stack_13->SetBinContent(13,0.04125056);
   n_vtx_stack_13->SetBinContent(14,0.2900106);
   n_vtx_stack_13->SetBinContent(16,0.1324126);
   n_vtx_stack_13->SetBinContent(17,0.03750346);
   n_vtx_stack_13->SetBinContent(19,0.1194836);
   n_vtx_stack_13->SetBinContent(20,0.03723304);
   n_vtx_stack_13->SetBinContent(21,0.1105212);
   n_vtx_stack_13->SetBinContent(35,0.007715259);
   n_vtx_stack_13->SetBinError(10,0.0805077);
   n_vtx_stack_13->SetBinError(13,0.04125056);
   n_vtx_stack_13->SetBinError(14,0.1627858);
   n_vtx_stack_13->SetBinError(16,0.09399092);
   n_vtx_stack_13->SetBinError(17,0.03750346);
   n_vtx_stack_13->SetBinError(19,0.08874812);
   n_vtx_stack_13->SetBinError(20,0.03723304);
   n_vtx_stack_13->SetBinError(21,0.0815166);
   n_vtx_stack_13->SetBinError(35,0.007715259);
   n_vtx_stack_13->SetMinimum(0.002169128);
   n_vtx_stack_13->SetMaximum(405889.3);
   n_vtx_stack_13->SetEntries(16);
   n_vtx_stack_13->SetStats(0);
   n_vtx_stack_13->SetFillColor(4);
   n_vtx_stack_13->SetLineColor(4);
   n_vtx_stack_13->SetLineWidth(2);
   n_vtx_stack_13->SetMarkerColor(4);
   n_vtx_stack_13->SetMarkerStyle(21);
   n_vtx_stack_13->SetMarkerSize(0.8);
   n_vtx_stack_13->GetXaxis()->SetTitle("Number of vertices");
   n_vtx_stack_13->GetXaxis()->SetLabelFont(42);
   n_vtx_stack_13->GetXaxis()->SetLabelOffset(0.007);
   n_vtx_stack_13->GetXaxis()->SetLabelSize(0);
   n_vtx_stack_13->GetXaxis()->SetTitleSize(0);
   n_vtx_stack_13->GetXaxis()->SetTickLength(0.02);
   n_vtx_stack_13->GetXaxis()->SetTitleOffset(0.9);
   n_vtx_stack_13->GetXaxis()->SetTitleFont(42);
   n_vtx_stack_13->GetYaxis()->SetTitle("Events");
   n_vtx_stack_13->GetYaxis()->SetLabelFont(42);
   n_vtx_stack_13->GetYaxis()->SetLabelOffset(0.007);
   n_vtx_stack_13->GetYaxis()->SetLabelSize(0.035);
   n_vtx_stack_13->GetYaxis()->SetTitleSize(0.045);
   n_vtx_stack_13->GetYaxis()->SetTickLength(0.02);
   n_vtx_stack_13->GetYaxis()->SetTitleOffset(1.55);
   n_vtx_stack_13->GetYaxis()->SetTitleFont(42);
   n_vtx_stack_13->GetZaxis()->SetLabelFont(42);
   n_vtx_stack_13->GetZaxis()->SetLabelOffset(0.007);
   n_vtx_stack_13->GetZaxis()->SetLabelSize(0.035);
   n_vtx_stack_13->GetZaxis()->SetTitleSize(0.045);
   n_vtx_stack_13->GetZaxis()->SetTickLength(0.02);
   n_vtx_stack_13->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_vtx_stack_13);
   
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(10,0.1101612);
   n_vtx->SetBinContent(13,0.04125056);
   n_vtx->SetBinContent(14,0.2900106);
   n_vtx->SetBinContent(16,0.1324126);
   n_vtx->SetBinContent(17,0.03750346);
   n_vtx->SetBinContent(19,0.1194836);
   n_vtx->SetBinContent(20,0.03723304);
   n_vtx->SetBinContent(21,0.1105212);
   n_vtx->SetBinContent(35,0.007715259);
   n_vtx->SetBinError(10,0.0805077);
   n_vtx->SetBinError(13,0.04125056);
   n_vtx->SetBinError(14,0.1627858);
   n_vtx->SetBinError(16,0.09399092);
   n_vtx->SetBinError(17,0.03750346);
   n_vtx->SetBinError(19,0.08874812);
   n_vtx->SetBinError(20,0.03723304);
   n_vtx->SetBinError(21,0.0815166);
   n_vtx->SetBinError(35,0.007715259);
   n_vtx->SetMinimum(0.01);
   n_vtx->SetMaximum(195000);
   n_vtx->SetEntries(16);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(4);
   n_vtx->SetLineColor(4);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(4);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetTitle("Number of vertices");
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0);
   n_vtx->GetXaxis()->SetTitleSize(0);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetTitle("Events");
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"HIST");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(5,0.5210658);
   n_vtx->SetBinContent(21,0.7474956);
   n_vtx->SetBinError(5,0.5210658);
   n_vtx->SetBinError(21,0.7474956);
   n_vtx->SetEntries(2);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(5);
   n_vtx->SetLineColor(5);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(5);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(6);
   n_vtx->SetLineColor(6);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(6);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_vtx->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_vtx->SetLineColor(ci);
   n_vtx->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_vtx->SetMarkerColor(ci);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(3);
   n_vtx->SetLineColor(3);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(3);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(4,0.2765325);
   n_vtx->SetBinContent(5,0.05098619);
   n_vtx->SetBinContent(6,1.087621);
   n_vtx->SetBinContent(7,1.2316);
   n_vtx->SetBinContent(8,1.560016);
   n_vtx->SetBinContent(9,1.625976);
   n_vtx->SetBinContent(10,4.363307);
   n_vtx->SetBinContent(11,3.668718);
   n_vtx->SetBinContent(12,4.206998);
   n_vtx->SetBinContent(13,4.749593);
   n_vtx->SetBinContent(14,4.57408);
   n_vtx->SetBinContent(15,3.448894);
   n_vtx->SetBinContent(16,3.328599);
   n_vtx->SetBinContent(17,4.454812);
   n_vtx->SetBinContent(18,3.75126);
   n_vtx->SetBinContent(19,3.5459);
   n_vtx->SetBinContent(20,2.88804);
   n_vtx->SetBinContent(21,2.406086);
   n_vtx->SetBinContent(22,1.998601);
   n_vtx->SetBinContent(23,2.010024);
   n_vtx->SetBinContent(24,1.569732);
   n_vtx->SetBinContent(25,0.9401894);
   n_vtx->SetBinContent(26,0.6784078);
   n_vtx->SetBinContent(27,0.1173347);
   n_vtx->SetBinContent(28,0.3272836);
   n_vtx->SetBinContent(29,0.2011336);
   n_vtx->SetBinContent(30,0.004797724);
   n_vtx->SetBinContent(31,0.09801266);
   n_vtx->SetBinContent(33,0.01127373);
   n_vtx->SetBinContent(34,0.002500444);
   n_vtx->SetBinError(4,0.2765325);
   n_vtx->SetBinError(5,0.05098619);
   n_vtx->SetBinError(6,0.4214132);
   n_vtx->SetBinError(7,0.4482475);
   n_vtx->SetBinError(8,0.4642045);
   n_vtx->SetBinError(9,0.4964797);
   n_vtx->SetBinError(10,0.8573655);
   n_vtx->SetBinError(11,0.7154511);
   n_vtx->SetBinError(12,0.8052715);
   n_vtx->SetBinError(13,0.8597941);
   n_vtx->SetBinError(14,0.8221178);
   n_vtx->SetBinError(15,0.7023966);
   n_vtx->SetBinError(16,0.6810539);
   n_vtx->SetBinError(17,0.7958518);
   n_vtx->SetBinError(18,0.7516426);
   n_vtx->SetBinError(19,0.6277769);
   n_vtx->SetBinError(20,0.5936563);
   n_vtx->SetBinError(21,0.5436369);
   n_vtx->SetBinError(22,0.4905764);
   n_vtx->SetBinError(23,0.495836);
   n_vtx->SetBinError(24,0.4499277);
   n_vtx->SetBinError(25,0.3152019);
   n_vtx->SetBinError(26,0.21679);
   n_vtx->SetBinError(27,0.07012239);
   n_vtx->SetBinError(28,0.2104878);
   n_vtx->SetBinError(29,0.1339218);
   n_vtx->SetBinError(30,0.004797724);
   n_vtx->SetBinError(31,0.07221801);
   n_vtx->SetBinError(33,0.007326954);
   n_vtx->SetBinError(34,0.00189814);
   n_vtx->SetEntries(533);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(3);
   n_vtx->SetLineColor(3);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(3);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(3,0.01676121);
   n_vtx->SetBinContent(4,0.245361);
   n_vtx->SetBinContent(5,0.4290209);
   n_vtx->SetBinContent(6,1.307122);
   n_vtx->SetBinContent(7,1.624086);
   n_vtx->SetBinContent(8,2.897626);
   n_vtx->SetBinContent(9,3.683803);
   n_vtx->SetBinContent(10,4.611786);
   n_vtx->SetBinContent(11,4.978048);
   n_vtx->SetBinContent(12,5.560255);
   n_vtx->SetBinContent(13,5.9175);
   n_vtx->SetBinContent(14,6.207364);
   n_vtx->SetBinContent(15,6.142083);
   n_vtx->SetBinContent(16,5.274636);
   n_vtx->SetBinContent(17,5.474901);
   n_vtx->SetBinContent(18,4.860419);
   n_vtx->SetBinContent(19,4.200787);
   n_vtx->SetBinContent(20,3.676184);
   n_vtx->SetBinContent(21,3.027276);
   n_vtx->SetBinContent(22,2.356212);
   n_vtx->SetBinContent(23,1.661974);
   n_vtx->SetBinContent(24,1.413989);
   n_vtx->SetBinContent(25,1.098639);
   n_vtx->SetBinContent(26,0.6509904);
   n_vtx->SetBinContent(27,0.4714135);
   n_vtx->SetBinContent(28,0.40689);
   n_vtx->SetBinContent(29,0.2098737);
   n_vtx->SetBinContent(30,0.1280223);
   n_vtx->SetBinContent(31,0.1275208);
   n_vtx->SetBinContent(32,0.05407751);
   n_vtx->SetBinContent(33,0.05687155);
   n_vtx->SetBinContent(34,0.02757105);
   n_vtx->SetBinContent(35,0.01418038);
   n_vtx->SetBinContent(36,0.0002249698);
   n_vtx->SetBinContent(37,0.009374563);
   n_vtx->SetBinContent(38,0.0004451934);
   n_vtx->SetBinContent(39,1.478681e-05);
   n_vtx->SetBinContent(40,0.01124267);
   n_vtx->SetBinContent(41,0.001607183);
   n_vtx->SetBinError(3,0.007228258);
   n_vtx->SetBinError(4,0.0507327);
   n_vtx->SetBinError(5,0.0678464);
   n_vtx->SetBinError(6,0.1281275);
   n_vtx->SetBinError(7,0.1450374);
   n_vtx->SetBinError(8,0.1934874);
   n_vtx->SetBinError(9,0.211155);
   n_vtx->SetBinError(10,0.2375881);
   n_vtx->SetBinError(11,0.2426526);
   n_vtx->SetBinError(12,0.2557353);
   n_vtx->SetBinError(13,0.258141);
   n_vtx->SetBinError(14,0.2619889);
   n_vtx->SetBinError(15,0.255045);
   n_vtx->SetBinError(16,0.2351211);
   n_vtx->SetBinError(17,0.2391393);
   n_vtx->SetBinError(18,0.2218565);
   n_vtx->SetBinError(19,0.2051076);
   n_vtx->SetBinError(20,0.1924605);
   n_vtx->SetBinError(21,0.1699135);
   n_vtx->SetBinError(22,0.1457678);
   n_vtx->SetBinError(23,0.1208742);
   n_vtx->SetBinError(24,0.1118917);
   n_vtx->SetBinError(25,0.09469615);
   n_vtx->SetBinError(26,0.06870695);
   n_vtx->SetBinError(27,0.05934848);
   n_vtx->SetBinError(28,0.05281178);
   n_vtx->SetBinError(29,0.03847905);
   n_vtx->SetBinError(30,0.02710722);
   n_vtx->SetBinError(31,0.02825078);
   n_vtx->SetBinError(32,0.01729623);
   n_vtx->SetBinError(33,0.01872793);
   n_vtx->SetBinError(34,0.01418699);
   n_vtx->SetBinError(35,0.005049823);
   n_vtx->SetBinError(36,9.128198e-05);
   n_vtx->SetBinError(37,0.006014);
   n_vtx->SetBinError(38,0.0003322092);
   n_vtx->SetBinError(39,1.097397e-05);
   n_vtx->SetBinError(40,0.008341132);
   n_vtx->SetBinError(41,0.001078646);
   n_vtx->SetEntries(9409);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(3);
   n_vtx->SetLineColor(3);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(3);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   stack->Draw("hist");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(6,2);
   n_vtx->SetBinContent(8,1);
   n_vtx->SetBinContent(9,2);
   n_vtx->SetBinContent(10,4);
   n_vtx->SetBinContent(11,4);
   n_vtx->SetBinContent(12,1);
   n_vtx->SetBinContent(13,4);
   n_vtx->SetBinContent(14,8);
   n_vtx->SetBinContent(15,13);
   n_vtx->SetBinContent(16,5);
   n_vtx->SetBinContent(17,4);
   n_vtx->SetBinContent(18,3);
   n_vtx->SetBinContent(19,5);
   n_vtx->SetBinContent(20,2);
   n_vtx->SetBinContent(21,3);
   n_vtx->SetBinContent(22,1);
   n_vtx->SetBinContent(23,1);
   n_vtx->SetBinContent(25,1);
   n_vtx->SetBinError(6,1.414214);
   n_vtx->SetBinError(8,1);
   n_vtx->SetBinError(9,1.414214);
   n_vtx->SetBinError(10,2);
   n_vtx->SetBinError(11,2);
   n_vtx->SetBinError(12,1);
   n_vtx->SetBinError(13,2);
   n_vtx->SetBinError(14,2.828427);
   n_vtx->SetBinError(15,3.605551);
   n_vtx->SetBinError(16,2.236068);
   n_vtx->SetBinError(17,2);
   n_vtx->SetBinError(18,1.732051);
   n_vtx->SetBinError(19,2.236068);
   n_vtx->SetBinError(20,1.414214);
   n_vtx->SetBinError(21,1.732051);
   n_vtx->SetBinError(22,1);
   n_vtx->SetBinError(23,1);
   n_vtx->SetBinError(25,1);
   n_vtx->SetEntries(64);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(1);
   n_vtx->SetFillStyle(0);
   n_vtx->SetLineWidth(3);
   n_vtx->SetMarkerStyle(20);
   n_vtx->SetMarkerSize(1.3);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   n_vtx->Draw("SAMEPE1");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(1);
   n_vtx->SetFillStyle(0);
   n_vtx->SetLineStyle(2);
   n_vtx->SetLineWidth(3);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   n_vtx->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"CJVpass");
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
   TLegendEntry *entry=leg->AddEntry("n_vtx","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_vtx","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","EWK W+jets","f");

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
   entry=leg->AddEntry("n_vtx","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","Dibosons","f");
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
   lower->Range(-8.101265,-0.653951,42.53165,2.070845);
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
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(6,0.8351631);
   n_vtx->SetBinContent(8,0.2243339);
   n_vtx->SetBinContent(9,0.3766635);
   n_vtx->SetBinContent(10,0.4456778);
   n_vtx->SetBinContent(11,0.4626007);
   n_vtx->SetBinContent(12,0.1023829);
   n_vtx->SetBinContent(13,0.374985);
   n_vtx->SetBinContent(14,0.7420157);
   n_vtx->SetBinContent(15,1.355441);
   n_vtx->SetBinContent(16,0.5811767);
   n_vtx->SetBinContent(17,0.4028314);
   n_vtx->SetBinContent(18,0.3483641);
   n_vtx->SetBinContent(19,0.6454372);
   n_vtx->SetBinContent(20,0.3046819);
   n_vtx->SetBinContent(21,0.4853695);
   n_vtx->SetBinContent(22,0.229631);
   n_vtx->SetBinContent(23,0.2723312);
   n_vtx->SetBinContent(25,0.4904777);
   n_vtx->SetBinError(6,0.6102005);
   n_vtx->SetBinError(8,0.2257571);
   n_vtx->SetBinError(9,0.2690771);
   n_vtx->SetBinError(10,0.227176);
   n_vtx->SetBinError(11,0.2348052);
   n_vtx->SetBinError(12,0.1027653);
   n_vtx->SetBinError(13,0.1901298);
   n_vtx->SetBinError(14,0.2689794);
   n_vtx->SetBinError(15,0.3904836);
   n_vtx->SetBinError(16,0.2644281);
   n_vtx->SetBinError(17,0.2042175);
   n_vtx->SetBinError(18,0.2036114);
   n_vtx->SetBinError(19,0.2938464);
   n_vtx->SetBinError(20,0.2173812);
   n_vtx->SetBinError(21,0.2897827);
   n_vtx->SetBinError(22,0.2312112);
   n_vtx->SetBinError(23,0.274949);
   n_vtx->SetBinError(25,0.4968271);
   n_vtx->SetMinimum(0);
   n_vtx->SetMaximum(2);
   n_vtx->SetEntries(46.48735);
   n_vtx->SetStats(0);
   n_vtx->SetFillStyle(0);
   n_vtx->SetMarkerStyle(20);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetTitle("Number of vertices");
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.1);
   n_vtx->GetXaxis()->SetTitleSize(0.12);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetTitle("Data/MC");
   n_vtx->GetYaxis()->SetNdivisions(505);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.1);
   n_vtx->GetYaxis()->SetTitleSize(0.12);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(0.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   n_vtx->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
