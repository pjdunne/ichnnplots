{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:37 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.896695,5.632911,6.93329);
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
   stack->SetMaximum(1061577);
   
   TH1F *jeta_2_stack_5 = new TH1F("jeta_2_stack_5","stack",20,-5,5);
   jeta_2_stack_5->SetBinContent(2,0.01972752);
   jeta_2_stack_5->SetBinContent(3,0.2040889);
   jeta_2_stack_5->SetBinContent(4,0.6065012);
   jeta_2_stack_5->SetBinContent(5,0.6759403);
   jeta_2_stack_5->SetBinContent(6,0.5519115);
   jeta_2_stack_5->SetBinContent(7,0.1590243);
   jeta_2_stack_5->SetBinContent(8,0.02767217);
   jeta_2_stack_5->SetBinContent(9,0.0006403788);
   jeta_2_stack_5->SetBinContent(12,0.01715352);
   jeta_2_stack_5->SetBinContent(13,0.06302889);
   jeta_2_stack_5->SetBinContent(14,0.2371541);
   jeta_2_stack_5->SetBinContent(15,0.4479467);
   jeta_2_stack_5->SetBinContent(16,0.9415888);
   jeta_2_stack_5->SetBinContent(17,0.4222328);
   jeta_2_stack_5->SetBinContent(18,0.103975);
   jeta_2_stack_5->SetBinError(2,0.01972752);
   jeta_2_stack_5->SetBinError(3,0.08164146);
   jeta_2_stack_5->SetBinError(4,0.1786337);
   jeta_2_stack_5->SetBinError(5,0.2007035);
   jeta_2_stack_5->SetBinError(6,0.174429);
   jeta_2_stack_5->SetBinError(7,0.09757271);
   jeta_2_stack_5->SetBinError(8,0.02767217);
   jeta_2_stack_5->SetBinError(9,0.0006403788);
   jeta_2_stack_5->SetBinError(12,0.01715352);
   jeta_2_stack_5->SetBinError(13,0.04954855);
   jeta_2_stack_5->SetBinError(14,0.1039523);
   jeta_2_stack_5->SetBinError(15,0.154481);
   jeta_2_stack_5->SetBinError(16,0.2358129);
   jeta_2_stack_5->SetBinError(17,0.137023);
   jeta_2_stack_5->SetBinError(18,0.103975);
   jeta_2_stack_5->SetMinimum(0.001994823);
   jeta_2_stack_5->SetMaximum(2765610);
   jeta_2_stack_5->SetEntries(125);
   jeta_2_stack_5->SetStats(0);
   jeta_2_stack_5->SetFillColor(4);
   jeta_2_stack_5->SetLineColor(4);
   jeta_2_stack_5->SetLineWidth(2);
   jeta_2_stack_5->SetMarkerColor(4);
   jeta_2_stack_5->SetMarkerStyle(21);
   jeta_2_stack_5->SetMarkerSize(0.8);
   jeta_2_stack_5->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2_stack_5->GetXaxis()->SetLabelFont(42);
   jeta_2_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jeta_2_stack_5->GetXaxis()->SetLabelSize(0);
   jeta_2_stack_5->GetXaxis()->SetTitleSize(0);
   jeta_2_stack_5->GetXaxis()->SetTickLength(0.02);
   jeta_2_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jeta_2_stack_5->GetXaxis()->SetTitleFont(42);
   jeta_2_stack_5->GetYaxis()->SetTitle("Events");
   jeta_2_stack_5->GetYaxis()->SetLabelFont(42);
   jeta_2_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jeta_2_stack_5->GetYaxis()->SetLabelSize(0.035);
   jeta_2_stack_5->GetYaxis()->SetTitleSize(0.045);
   jeta_2_stack_5->GetYaxis()->SetTickLength(0.02);
   jeta_2_stack_5->GetYaxis()->SetTitleOffset(1.55);
   jeta_2_stack_5->GetYaxis()->SetTitleFont(42);
   jeta_2_stack_5->GetZaxis()->SetLabelFont(42);
   jeta_2_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jeta_2_stack_5->GetZaxis()->SetLabelSize(0.035);
   jeta_2_stack_5->GetZaxis()->SetTitleSize(0.045);
   jeta_2_stack_5->GetZaxis()->SetTickLength(0.02);
   jeta_2_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_2_stack_5);
   
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,0.01972752);
   jeta_2->SetBinContent(3,0.2040889);
   jeta_2->SetBinContent(4,0.6065012);
   jeta_2->SetBinContent(5,0.6759403);
   jeta_2->SetBinContent(6,0.5519115);
   jeta_2->SetBinContent(7,0.1590243);
   jeta_2->SetBinContent(8,0.02767217);
   jeta_2->SetBinContent(9,0.0006403788);
   jeta_2->SetBinContent(12,0.01715352);
   jeta_2->SetBinContent(13,0.06302889);
   jeta_2->SetBinContent(14,0.2371541);
   jeta_2->SetBinContent(15,0.4479467);
   jeta_2->SetBinContent(16,0.9415888);
   jeta_2->SetBinContent(17,0.4222328);
   jeta_2->SetBinContent(18,0.103975);
   jeta_2->SetBinError(2,0.01972752);
   jeta_2->SetBinError(3,0.08164146);
   jeta_2->SetBinError(4,0.1786337);
   jeta_2->SetBinError(5,0.2007035);
   jeta_2->SetBinError(6,0.174429);
   jeta_2->SetBinError(7,0.09757271);
   jeta_2->SetBinError(8,0.02767217);
   jeta_2->SetBinError(9,0.0006403788);
   jeta_2->SetBinError(12,0.01715352);
   jeta_2->SetBinError(13,0.04954855);
   jeta_2->SetBinError(14,0.1039523);
   jeta_2->SetBinError(15,0.154481);
   jeta_2->SetBinError(16,0.2358129);
   jeta_2->SetBinError(17,0.137023);
   jeta_2->SetBinError(18,0.103975);
   jeta_2->SetMinimum(0.01);
   jeta_2->SetMaximum(825000);
   jeta_2->SetEntries(125);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(4);
   jeta_2->SetLineColor(4);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(4);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0);
   jeta_2->GetXaxis()->SetTitleSize(0);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetTitle("Events");
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"HIST");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,0.265186);
   jeta_2->SetBinContent(3,2.043285);
   jeta_2->SetBinContent(4,1.853905);
   jeta_2->SetBinContent(5,3.12039);
   jeta_2->SetBinContent(6,2.436591);
   jeta_2->SetBinContent(7,2.65954);
   jeta_2->SetBinContent(8,0.02860695);
   jeta_2->SetBinContent(13,2.175496);
   jeta_2->SetBinContent(14,2.18792);
   jeta_2->SetBinContent(15,3.008276);
   jeta_2->SetBinContent(16,7.130921);
   jeta_2->SetBinContent(17,3.936862);
   jeta_2->SetBinContent(18,1.673135);
   jeta_2->SetBinContent(19,0.6532889);
   jeta_2->SetBinError(2,0.265186);
   jeta_2->SetBinError(3,1.071328);
   jeta_2->SetBinError(4,1.084749);
   jeta_2->SetBinError(5,1.169661);
   jeta_2->SetBinError(6,1.506658);
   jeta_2->SetBinError(7,1.331566);
   jeta_2->SetBinError(8,0.02860696);
   jeta_2->SetBinError(13,1.094515);
   jeta_2->SetBinError(14,1.209993);
   jeta_2->SetBinError(15,1.345292);
   jeta_2->SetBinError(16,1.906653);
   jeta_2->SetBinError(17,1.610822);
   jeta_2->SetBinError(18,0.9956643);
   jeta_2->SetBinError(19,0.6532889);
   jeta_2->SetEntries(78);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(5);
   jeta_2->SetLineColor(5);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(5);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(6);
   jeta_2->SetLineColor(6);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(6);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jeta_2->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jeta_2->SetLineColor(ci);
   jeta_2->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jeta_2->SetMarkerColor(ci);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(3);
   jeta_2->SetLineColor(3);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(3);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,3.802273);
   jeta_2->SetBinContent(3,17.3154);
   jeta_2->SetBinContent(4,32.62706);
   jeta_2->SetBinContent(5,34.84462);
   jeta_2->SetBinContent(6,27.24675);
   jeta_2->SetBinContent(7,14.36324);
   jeta_2->SetBinContent(8,4.23737);
   jeta_2->SetBinContent(9,0.921852);
   jeta_2->SetBinContent(10,0.02790521);
   jeta_2->SetBinContent(11,0.112799);
   jeta_2->SetBinContent(12,1.12889);
   jeta_2->SetBinContent(13,2.763014);
   jeta_2->SetBinContent(14,12.5264);
   jeta_2->SetBinContent(15,26.67192);
   jeta_2->SetBinContent(16,35.41351);
   jeta_2->SetBinContent(17,32.63283);
   jeta_2->SetBinContent(18,18.7446);
   jeta_2->SetBinContent(19,4.891342);
   jeta_2->SetBinContent(20,0.1050586);
   jeta_2->SetBinError(2,0.5922956);
   jeta_2->SetBinError(3,1.407807);
   jeta_2->SetBinError(4,1.953809);
   jeta_2->SetBinError(5,1.829532);
   jeta_2->SetBinError(6,1.637945);
   jeta_2->SetBinError(7,1.178067);
   jeta_2->SetBinError(8,0.6254518);
   jeta_2->SetBinError(9,0.2586151);
   jeta_2->SetBinError(10,0.02790521);
   jeta_2->SetBinError(11,0.09095676);
   jeta_2->SetBinError(12,0.2743745);
   jeta_2->SetBinError(13,0.4770183);
   jeta_2->SetBinError(14,1.094852);
   jeta_2->SetBinError(15,1.612766);
   jeta_2->SetBinError(16,1.906636);
   jeta_2->SetBinError(17,1.890466);
   jeta_2->SetBinError(18,1.426685);
   jeta_2->SetBinError(19,0.7157962);
   jeta_2->SetBinError(20,0.1050586);
   jeta_2->SetEntries(3913);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(3);
   jeta_2->SetLineColor(3);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(3);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(1,0.01937685);
   jeta_2->SetBinContent(2,1.496704);
   jeta_2->SetBinContent(3,9.736156);
   jeta_2->SetBinContent(4,20.58958);
   jeta_2->SetBinContent(5,26.96043);
   jeta_2->SetBinContent(6,20.29882);
   jeta_2->SetBinContent(7,8.445383);
   jeta_2->SetBinContent(8,2.057367);
   jeta_2->SetBinContent(9,0.1932549);
   jeta_2->SetBinContent(10,0.01681862);
   jeta_2->SetBinContent(11,0.01330678);
   jeta_2->SetBinContent(12,0.2940159);
   jeta_2->SetBinContent(13,2.143722);
   jeta_2->SetBinContent(14,8.364401);
   jeta_2->SetBinContent(15,19.47665);
   jeta_2->SetBinContent(16,27.28579);
   jeta_2->SetBinContent(17,20.06973);
   jeta_2->SetBinContent(18,9.626666);
   jeta_2->SetBinContent(19,1.353927);
   jeta_2->SetBinContent(20,0.01236445);
   jeta_2->SetBinError(1,0.01255529);
   jeta_2->SetBinError(2,0.1179719);
   jeta_2->SetBinError(3,0.3048461);
   jeta_2->SetBinError(4,0.4452981);
   jeta_2->SetBinError(5,0.5024305);
   jeta_2->SetBinError(6,0.4321576);
   jeta_2->SetBinError(7,0.2724514);
   jeta_2->SetBinError(8,0.1331915);
   jeta_2->SetBinError(9,0.03485215);
   jeta_2->SetBinError(10,0.008895098);
   jeta_2->SetBinError(11,0.007237237);
   jeta_2->SetBinError(12,0.04847517);
   jeta_2->SetBinError(13,0.1353258);
   jeta_2->SetBinError(14,0.2732224);
   jeta_2->SetBinError(15,0.4265205);
   jeta_2->SetBinError(16,0.5052616);
   jeta_2->SetBinError(17,0.4377411);
   jeta_2->SetBinError(18,0.2983802);
   jeta_2->SetBinError(19,0.1130389);
   jeta_2->SetBinError(20,0.009229562);
   jeta_2->SetEntries(27040);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(3);
   jeta_2->SetLineColor(3);
   jeta_2->SetLineWidth(2);
   jeta_2->SetMarkerColor(3);
   jeta_2->SetMarkerStyle(21);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jeta_2,"");
   stack->Draw("hist");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,1);
   jeta_2->SetBinContent(3,24);
   jeta_2->SetBinContent(4,55);
   jeta_2->SetBinContent(5,42);
   jeta_2->SetBinContent(6,36);
   jeta_2->SetBinContent(7,21);
   jeta_2->SetBinContent(9,1);
   jeta_2->SetBinContent(12,3);
   jeta_2->SetBinContent(13,3);
   jeta_2->SetBinContent(14,12);
   jeta_2->SetBinContent(15,37);
   jeta_2->SetBinContent(16,39);
   jeta_2->SetBinContent(17,40);
   jeta_2->SetBinContent(18,32);
   jeta_2->SetBinContent(19,4);
   jeta_2->SetBinError(2,1);
   jeta_2->SetBinError(3,4.898979);
   jeta_2->SetBinError(4,7.416198);
   jeta_2->SetBinError(5,6.480741);
   jeta_2->SetBinError(6,6);
   jeta_2->SetBinError(7,4.582576);
   jeta_2->SetBinError(9,1);
   jeta_2->SetBinError(12,1.732051);
   jeta_2->SetBinError(13,1.732051);
   jeta_2->SetBinError(14,3.464102);
   jeta_2->SetBinError(15,6.082763);
   jeta_2->SetBinError(16,6.244998);
   jeta_2->SetBinError(17,6.324555);
   jeta_2->SetBinError(18,5.656854);
   jeta_2->SetBinError(19,2);
   jeta_2->SetEntries(350);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(1);
   jeta_2->SetFillStyle(0);
   jeta_2->SetLineWidth(3);
   jeta_2->SetMarkerStyle(20);
   jeta_2->SetMarkerSize(1.3);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   jeta_2->Draw("SAMEPE1");
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetStats(0);
   jeta_2->SetFillColor(1);
   jeta_2->SetFillStyle(0);
   jeta_2->SetLineStyle(2);
   jeta_2->SetLineWidth(3);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.035);
   jeta_2->GetXaxis()->SetTitleSize(0.045);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.035);
   jeta_2->GetYaxis()->SetTitleSize(0.045);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(1.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   jeta_2->Draw("SAMEHIST");
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
   TLegendEntry *entry=leg->AddEntry("jeta_2","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jeta_2","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","EWK W+jets","f");

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
   entry=leg->AddEntry("jeta_2","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jeta_2","Dibosons","f");
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
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(2,0.1797216);
   jeta_2->SetBinContent(3,0.8248885);
   jeta_2->SetBinContent(4,0.9987191);
   jeta_2->SetBinContent(5,0.646896);
   jeta_2->SetBinContent(6,0.720257);
   jeta_2->SetBinContent(7,0.824559);
   jeta_2->SetBinContent(9,0.8967751);
   jeta_2->SetBinContent(12,2.108361);
   jeta_2->SetBinContent(13,0.4235952);
   jeta_2->SetBinContent(14,0.5199595);
   jeta_2->SetBinContent(15,0.7526926);
   jeta_2->SetBinContent(16,0.5584975);
   jeta_2->SetBinContent(17,0.706222);
   jeta_2->SetBinContent(18,1.06509);
   jeta_2->SetBinContent(19,0.5798313);
   jeta_2->SetBinError(2,0.1809799);
   jeta_2->SetBinError(3,0.1759037);
   jeta_2->SetBinError(4,0.1408651);
   jeta_2->SetBinError(5,0.1022587);
   jeta_2->SetBinError(6,0.1244089);
   jeta_2->SetBinError(7,0.1891221);
   jeta_2->SetBinError(9,0.9210031);
   jeta_2->SetBinError(12,1.285368);
   jeta_2->SetBinError(13,0.254904);
   jeta_2->SetBinError(14,0.1546587);
   jeta_2->SetBinError(15,0.128019);
   jeta_2->SetBinError(16,0.09208334);
   jeta_2->SetBinError(17,0.1160067);
   jeta_2->SetBinError(18,0.1984095);
   jeta_2->SetBinError(19,0.3012907);
   jeta_2->SetMinimum(0);
   jeta_2->SetMaximum(2);
   jeta_2->SetEntries(48.01316);
   jeta_2->SetStats(0);
   jeta_2->SetFillStyle(0);
   jeta_2->SetMarkerStyle(20);
   jeta_2->SetMarkerSize(0.8);
   jeta_2->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2->GetXaxis()->SetLabelFont(42);
   jeta_2->GetXaxis()->SetLabelOffset(0.007);
   jeta_2->GetXaxis()->SetLabelSize(0.1);
   jeta_2->GetXaxis()->SetTitleSize(0.12);
   jeta_2->GetXaxis()->SetTickLength(0.02);
   jeta_2->GetXaxis()->SetTitleOffset(0.9);
   jeta_2->GetXaxis()->SetTitleFont(42);
   jeta_2->GetYaxis()->SetTitle("Data/MC");
   jeta_2->GetYaxis()->SetNdivisions(505);
   jeta_2->GetYaxis()->SetLabelFont(42);
   jeta_2->GetYaxis()->SetLabelOffset(0.007);
   jeta_2->GetYaxis()->SetLabelSize(0.1);
   jeta_2->GetYaxis()->SetTitleSize(0.12);
   jeta_2->GetYaxis()->SetTickLength(0.02);
   jeta_2->GetYaxis()->SetTitleOffset(0.55);
   jeta_2->GetYaxis()->SetTitleFont(42);
   jeta_2->GetZaxis()->SetLabelFont(42);
   jeta_2->GetZaxis()->SetLabelOffset(0.007);
   jeta_2->GetZaxis()->SetLabelSize(0.035);
   jeta_2->GetZaxis()->SetTitleSize(0.045);
   jeta_2->GetZaxis()->SetTickLength(0.02);
   jeta_2->GetZaxis()->SetTitleFont(42);
   jeta_2->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
