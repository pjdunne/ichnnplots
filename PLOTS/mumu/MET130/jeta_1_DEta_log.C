{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:27 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.896123,5.632911,6.923905);
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
   stack->SetMaximum(1040760);
   
   TH1F *jeta_1_stack_5 = new TH1F("jeta_1_stack_5","stack",20,-5,5);
   jeta_1_stack_5->SetBinContent(3,0.06397708);
   jeta_1_stack_5->SetBinContent(4,0.05326847);
   jeta_1_stack_5->SetBinContent(5,0.4002883);
   jeta_1_stack_5->SetBinContent(6,0.6932384);
   jeta_1_stack_5->SetBinContent(7,0.671286);
   jeta_1_stack_5->SetBinContent(8,0.3480248);
   jeta_1_stack_5->SetBinContent(9,0.002996656);
   jeta_1_stack_5->SetBinContent(12,0.07018277);
   jeta_1_stack_5->SetBinContent(13,0.3855968);
   jeta_1_stack_5->SetBinContent(14,0.5552531);
   jeta_1_stack_5->SetBinContent(15,0.4600376);
   jeta_1_stack_5->SetBinContent(16,0.5666094);
   jeta_1_stack_5->SetBinContent(17,0.2078266);
   jeta_1_stack_5->SetBinError(3,0.04986671);
   jeta_1_stack_5->SetBinError(4,0.0344011);
   jeta_1_stack_5->SetBinError(5,0.13793);
   jeta_1_stack_5->SetBinError(6,0.203178);
   jeta_1_stack_5->SetBinError(7,0.187074);
   jeta_1_stack_5->SetBinError(8,0.1537264);
   jeta_1_stack_5->SetBinError(9,0.002996656);
   jeta_1_stack_5->SetBinError(12,0.04082224);
   jeta_1_stack_5->SetBinError(13,0.1429976);
   jeta_1_stack_5->SetBinError(14,0.1567309);
   jeta_1_stack_5->SetBinError(15,0.1268432);
   jeta_1_stack_5->SetBinError(16,0.2094101);
   jeta_1_stack_5->SetBinError(17,0.1154874);
   jeta_1_stack_5->SetMinimum(0.001996536);
   jeta_1_stack_5->SetMaximum(2709588);
   jeta_1_stack_5->SetEntries(125);
   jeta_1_stack_5->SetStats(0);
   jeta_1_stack_5->SetFillColor(4);
   jeta_1_stack_5->SetLineColor(4);
   jeta_1_stack_5->SetLineWidth(2);
   jeta_1_stack_5->SetMarkerColor(4);
   jeta_1_stack_5->SetMarkerStyle(21);
   jeta_1_stack_5->SetMarkerSize(0.8);
   jeta_1_stack_5->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1_stack_5->GetXaxis()->SetLabelFont(42);
   jeta_1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jeta_1_stack_5->GetXaxis()->SetLabelSize(0);
   jeta_1_stack_5->GetXaxis()->SetTitleSize(0);
   jeta_1_stack_5->GetXaxis()->SetTickLength(0.02);
   jeta_1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jeta_1_stack_5->GetXaxis()->SetTitleFont(42);
   jeta_1_stack_5->GetYaxis()->SetTitle("Events");
   jeta_1_stack_5->GetYaxis()->SetLabelFont(42);
   jeta_1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jeta_1_stack_5->GetYaxis()->SetLabelSize(0.035);
   jeta_1_stack_5->GetYaxis()->SetTitleSize(0.045);
   jeta_1_stack_5->GetYaxis()->SetTickLength(0.02);
   jeta_1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   jeta_1_stack_5->GetYaxis()->SetTitleFont(42);
   jeta_1_stack_5->GetZaxis()->SetLabelFont(42);
   jeta_1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jeta_1_stack_5->GetZaxis()->SetLabelSize(0.035);
   jeta_1_stack_5->GetZaxis()->SetTitleSize(0.045);
   jeta_1_stack_5->GetZaxis()->SetTickLength(0.02);
   jeta_1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_1_stack_5);
   
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,0.06397708);
   jeta_1->SetBinContent(4,0.05326847);
   jeta_1->SetBinContent(5,0.4002883);
   jeta_1->SetBinContent(6,0.6932384);
   jeta_1->SetBinContent(7,0.671286);
   jeta_1->SetBinContent(8,0.3480248);
   jeta_1->SetBinContent(9,0.002996656);
   jeta_1->SetBinContent(12,0.07018277);
   jeta_1->SetBinContent(13,0.3855968);
   jeta_1->SetBinContent(14,0.5552531);
   jeta_1->SetBinContent(15,0.4600376);
   jeta_1->SetBinContent(16,0.5666094);
   jeta_1->SetBinContent(17,0.2078266);
   jeta_1->SetBinError(3,0.04986671);
   jeta_1->SetBinError(4,0.0344011);
   jeta_1->SetBinError(5,0.13793);
   jeta_1->SetBinError(6,0.203178);
   jeta_1->SetBinError(7,0.187074);
   jeta_1->SetBinError(8,0.1537264);
   jeta_1->SetBinError(9,0.002996656);
   jeta_1->SetBinError(12,0.04082224);
   jeta_1->SetBinError(13,0.1429976);
   jeta_1->SetBinError(14,0.1567309);
   jeta_1->SetBinError(15,0.1268432);
   jeta_1->SetBinError(16,0.2094101);
   jeta_1->SetBinError(17,0.1154874);
   jeta_1->SetMinimum(0.01);
   jeta_1->SetMaximum(780000);
   jeta_1->SetEntries(125);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(4);
   jeta_1->SetLineColor(4);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(4);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0);
   jeta_1->GetXaxis()->SetTitleSize(0);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Events");
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"HIST");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,1.217428);
   jeta_1->SetBinContent(4,2.029007);
   jeta_1->SetBinContent(5,2.871644);
   jeta_1->SetBinContent(6,5.300217);
   jeta_1->SetBinContent(7,5.407282);
   jeta_1->SetBinContent(8,3.393875);
   jeta_1->SetBinContent(9,0.5464461);
   jeta_1->SetBinContent(11,0.8364548);
   jeta_1->SetBinContent(12,0.5681329);
   jeta_1->SetBinContent(13,0.4899129);
   jeta_1->SetBinContent(14,4.344898);
   jeta_1->SetBinContent(15,2.782897);
   jeta_1->SetBinContent(16,2.749549);
   jeta_1->SetBinContent(17,0.6070514);
   jeta_1->SetBinContent(18,0.02860695);
   jeta_1->SetBinError(3,0.7097366);
   jeta_1->SetBinError(4,1.195893);
   jeta_1->SetBinError(5,1.295402);
   jeta_1->SetBinError(6,1.798224);
   jeta_1->SetBinError(7,1.719817);
   jeta_1->SetBinError(8,1.434088);
   jeta_1->SetBinError(9,0.5100182);
   jeta_1->SetBinError(11,0.8364548);
   jeta_1->SetBinError(12,0.4025681);
   jeta_1->SetBinError(13,0.4899129);
   jeta_1->SetBinError(14,1.545439);
   jeta_1->SetBinError(15,1.555932);
   jeta_1->SetBinError(16,1.23547);
   jeta_1->SetBinError(17,0.6070514);
   jeta_1->SetBinError(18,0.02860696);
   jeta_1->SetEntries(78);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(5);
   jeta_1->SetLineColor(5);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(5);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(6);
   jeta_1->SetLineColor(6);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(6);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jeta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jeta_1->SetLineColor(ci);
   jeta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jeta_1->SetMarkerColor(ci);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.2852901);
   jeta_1->SetBinContent(3,1.129519);
   jeta_1->SetBinContent(4,5.878468);
   jeta_1->SetBinContent(5,26.80658);
   jeta_1->SetBinContent(6,35.78235);
   jeta_1->SetBinContent(7,31.72262);
   jeta_1->SetBinContent(8,20.87292);
   jeta_1->SetBinContent(9,10.55602);
   jeta_1->SetBinContent(10,1.956591);
   jeta_1->SetBinContent(11,1.190753);
   jeta_1->SetBinContent(12,8.077508);
   jeta_1->SetBinContent(13,20.43443);
   jeta_1->SetBinContent(14,31.99486);
   jeta_1->SetBinContent(15,33.00716);
   jeta_1->SetBinContent(16,29.95438);
   jeta_1->SetBinContent(17,8.663966);
   jeta_1->SetBinContent(18,1.994228);
   jeta_1->SetBinContent(19,0.06917053);
   jeta_1->SetBinError(2,0.1950034);
   jeta_1->SetBinError(3,0.2654681);
   jeta_1->SetBinError(4,0.7095469);
   jeta_1->SetBinError(5,1.677849);
   jeta_1->SetBinError(6,1.898721);
   jeta_1->SetBinError(7,1.799827);
   jeta_1->SetBinError(8,1.510636);
   jeta_1->SetBinError(9,1.053457);
   jeta_1->SetBinError(10,0.4640317);
   jeta_1->SetBinError(11,0.3346464);
   jeta_1->SetBinError(12,0.9420842);
   jeta_1->SetBinError(13,1.459242);
   jeta_1->SetBinError(14,1.845982);
   jeta_1->SetBinError(15,1.799373);
   jeta_1->SetBinError(16,1.744344);
   jeta_1->SetBinError(17,1.01096);
   jeta_1->SetBinError(18,0.4305634);
   jeta_1->SetBinError(19,0.04897443);
   jeta_1->SetEntries(3913);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(2,0.01998529);
   jeta_1->SetBinContent(3,1.031593);
   jeta_1->SetBinContent(4,5.39239);
   jeta_1->SetBinContent(5,22.18357);
   jeta_1->SetBinContent(6,27.60822);
   jeta_1->SetBinContent(7,20.47957);
   jeta_1->SetBinContent(8,8.841133);
   jeta_1->SetBinContent(9,2.913016);
   jeta_1->SetBinContent(10,0.1710785);
   jeta_1->SetBinContent(11,0.2532149);
   jeta_1->SetBinContent(12,2.816875);
   jeta_1->SetBinContent(13,9.260354);
   jeta_1->SetBinContent(14,20.91464);
   jeta_1->SetBinContent(15,28.02655);
   jeta_1->SetBinContent(16,21.65305);
   jeta_1->SetBinContent(17,5.886854);
   jeta_1->SetBinContent(18,0.9638472);
   jeta_1->SetBinContent(19,0.03849205);
   jeta_1->SetBinError(2,0.01486198);
   jeta_1->SetBinError(3,0.09448429);
   jeta_1->SetBinError(4,0.2168368);
   jeta_1->SetBinError(5,0.4486623);
   jeta_1->SetBinError(6,0.5091576);
   jeta_1->SetBinError(7,0.4443731);
   jeta_1->SetBinError(8,0.2883359);
   jeta_1->SetBinError(9,0.1658658);
   jeta_1->SetBinError(10,0.03554687);
   jeta_1->SetBinError(11,0.04774061);
   jeta_1->SetBinError(12,0.1634825);
   jeta_1->SetBinError(13,0.3036766);
   jeta_1->SetBinError(14,0.4487175);
   jeta_1->SetBinError(15,0.5105991);
   jeta_1->SetBinError(16,0.4407963);
   jeta_1->SetBinError(17,0.2273509);
   jeta_1->SetBinError(18,0.09030052);
   jeta_1->SetBinError(19,0.01812843);
   jeta_1->SetEntries(27040);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(3);
   jeta_1->SetLineColor(3);
   jeta_1->SetLineWidth(2);
   jeta_1->SetMarkerColor(3);
   jeta_1->SetMarkerStyle(21);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_1,"");
   stack->Draw("hist");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,3);
   jeta_1->SetBinContent(4,9);
   jeta_1->SetBinContent(5,39);
   jeta_1->SetBinContent(6,46);
   jeta_1->SetBinContent(7,32);
   jeta_1->SetBinContent(8,28);
   jeta_1->SetBinContent(9,10);
   jeta_1->SetBinContent(10,3);
   jeta_1->SetBinContent(11,1);
   jeta_1->SetBinContent(12,10);
   jeta_1->SetBinContent(13,26);
   jeta_1->SetBinContent(14,52);
   jeta_1->SetBinContent(15,42);
   jeta_1->SetBinContent(16,42);
   jeta_1->SetBinContent(17,7);
   jeta_1->SetBinError(3,1.732051);
   jeta_1->SetBinError(4,3);
   jeta_1->SetBinError(5,6.244998);
   jeta_1->SetBinError(6,6.78233);
   jeta_1->SetBinError(7,5.656854);
   jeta_1->SetBinError(8,5.291503);
   jeta_1->SetBinError(9,3.162278);
   jeta_1->SetBinError(10,1.732051);
   jeta_1->SetBinError(11,1);
   jeta_1->SetBinError(12,3.162278);
   jeta_1->SetBinError(13,5.09902);
   jeta_1->SetBinError(14,7.211103);
   jeta_1->SetBinError(15,6.480741);
   jeta_1->SetBinError(16,6.480741);
   jeta_1->SetBinError(17,2.645751);
   jeta_1->SetEntries(350);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(1.3);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEPE1");
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetStats(0);
   jeta_1->SetFillColor(1);
   jeta_1->SetFillStyle(0);
   jeta_1->SetLineStyle(2);
   jeta_1->SetLineWidth(3);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.035);
   jeta_1->GetXaxis()->SetTitleSize(0.045);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.035);
   jeta_1->GetYaxis()->SetTitleSize(0.045);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(1.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   TLegendEntry *entry=leg->AddEntry("jeta_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jeta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jeta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_1","Dibosons","f");
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
   lower->Range(-7.025316,-0.653951,5.632911,2.070845);
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
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(3,0.8879575);
   jeta_1->SetBinContent(4,0.6766986);
   jeta_1->SetBinContent(5,0.7519987);
   jeta_1->SetBinContent(6,0.6696677);
   jeta_1->SetBinContent(7,0.5554642);
   jeta_1->SetBinContent(8,0.8457187);
   jeta_1->SetBinContent(9,0.7134967);
   jeta_1->SetBinContent(10,1.409994);
   jeta_1->SetBinContent(11,0.4385152);
   jeta_1->SetBinContent(12,0.8724087);
   jeta_1->SetBinContent(13,0.8613635);
   jeta_1->SetBinContent(14,0.9082271);
   jeta_1->SetBinContent(15,0.6581358);
   jeta_1->SetBinContent(16,0.7726699);
   jeta_1->SetBinContent(17,0.4618063);
   jeta_1->SetBinError(3,0.5505477);
   jeta_1->SetBinError(4,0.2366591);
   jeta_1->SetBinError(5,0.1244471);
   jeta_1->SetBinError(6,0.1020962);
   jeta_1->SetBinError(7,0.101175);
   jeta_1->SetBinError(8,0.1686106);
   jeta_1->SetBinError(9,0.233515);
   jeta_1->SetBinError(10,0.870524);
   jeta_1->SetBinError(11,0.4715851);
   jeta_1->SetBinError(12,0.2869572);
   jeta_1->SetBinError(13,0.1747598);
   jeta_1->SetBinError(14,0.1318035);
   jeta_1->SetBinError(15,0.1046063);
   jeta_1->SetBinError(16,0.1231959);
   jeta_1->SetBinError(17,0.1783399);
   jeta_1->SetMinimum(0);
   jeta_1->SetMaximum(2);
   jeta_1->SetEntries(80.09523);
   jeta_1->SetStats(0);
   jeta_1->SetFillStyle(0);
   jeta_1->SetMarkerStyle(20);
   jeta_1->SetMarkerSize(0.8);
   jeta_1->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1->GetXaxis()->SetLabelFont(42);
   jeta_1->GetXaxis()->SetLabelOffset(0.007);
   jeta_1->GetXaxis()->SetLabelSize(0.1);
   jeta_1->GetXaxis()->SetTitleSize(0.12);
   jeta_1->GetXaxis()->SetTickLength(0.02);
   jeta_1->GetXaxis()->SetTitleOffset(0.9);
   jeta_1->GetXaxis()->SetTitleFont(42);
   jeta_1->GetYaxis()->SetTitle("Data/MC");
   jeta_1->GetYaxis()->SetNdivisions(505);
   jeta_1->GetYaxis()->SetLabelFont(42);
   jeta_1->GetYaxis()->SetLabelOffset(0.007);
   jeta_1->GetYaxis()->SetLabelSize(0.1);
   jeta_1->GetYaxis()->SetTitleSize(0.12);
   jeta_1->GetYaxis()->SetTickLength(0.02);
   jeta_1->GetYaxis()->SetTitleOffset(0.55);
   jeta_1->GetYaxis()->SetTitleFont(42);
   jeta_1->GetZaxis()->SetLabelFont(42);
   jeta_1->GetZaxis()->SetLabelOffset(0.007);
   jeta_1->GetZaxis()->SetLabelSize(0.035);
   jeta_1->GetZaxis()->SetTitleSize(0.045);
   jeta_1->GetZaxis()->SetTickLength(0.02);
   jeta_1->GetZaxis()->SetTitleFont(42);
   jeta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
