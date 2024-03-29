{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:53:23 2013) by ROOT version5.32/00
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
   upper->Range(-4.316456,-2.895948,3.911392,6.921026);
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
   stack->SetMaximum(1034458);
   
   TH1F *mueta_1_stack_15 = new TH1F("mueta_1_stack_15","stack",20,-5,5);
   mueta_1_stack_15->SetBinContent(6,2.900076);
   mueta_1_stack_15->SetBinContent(7,0.233637);
   mueta_1_stack_15->SetBinContent(8,3.6377);
   mueta_1_stack_15->SetBinContent(9,0.1737722);
   mueta_1_stack_15->SetBinContent(10,2.059169);
   mueta_1_stack_15->SetBinContent(11,2.923896);
   mueta_1_stack_15->SetBinContent(12,0.08741169);
   mueta_1_stack_15->SetBinContent(13,3.736086);
   mueta_1_stack_15->SetBinContent(14,0.1131666);
   mueta_1_stack_15->SetBinError(6,2.900076);
   mueta_1_stack_15->SetBinError(7,0.1652925);
   mueta_1_stack_15->SetBinError(8,2.581814);
   mueta_1_stack_15->SetBinError(9,0.1260201);
   mueta_1_stack_15->SetBinError(10,1.919272);
   mueta_1_stack_15->SetBinError(11,2.682779);
   mueta_1_stack_15->SetBinError(12,0.07333811);
   mueta_1_stack_15->SetBinError(13,2.608241);
   mueta_1_stack_15->SetBinError(14,0.1131666);
   mueta_1_stack_15->SetMinimum(0.001997062);
   mueta_1_stack_15->SetMaximum(2692635);
   mueta_1_stack_15->SetEntries(25);
   mueta_1_stack_15->SetStats(0);
   mueta_1_stack_15->SetFillColor(4);
   mueta_1_stack_15->SetLineColor(4);
   mueta_1_stack_15->SetLineWidth(2);
   mueta_1_stack_15->SetMarkerColor(4);
   mueta_1_stack_15->SetMarkerStyle(21);
   mueta_1_stack_15->SetMarkerSize(0.8);
   mueta_1_stack_15->GetXaxis()->SetTitle("Leading muon #eta");
   mueta_1_stack_15->GetXaxis()->SetRange(5,17);
   mueta_1_stack_15->GetXaxis()->SetLabelFont(42);
   mueta_1_stack_15->GetXaxis()->SetLabelOffset(0.007);
   mueta_1_stack_15->GetXaxis()->SetLabelSize(0);
   mueta_1_stack_15->GetXaxis()->SetTitleSize(0);
   mueta_1_stack_15->GetXaxis()->SetTickLength(0.02);
   mueta_1_stack_15->GetXaxis()->SetTitleOffset(0.9);
   mueta_1_stack_15->GetXaxis()->SetTitleFont(42);
   mueta_1_stack_15->GetYaxis()->SetTitle("Events");
   mueta_1_stack_15->GetYaxis()->SetLabelFont(42);
   mueta_1_stack_15->GetYaxis()->SetLabelOffset(0.007);
   mueta_1_stack_15->GetYaxis()->SetLabelSize(0.035);
   mueta_1_stack_15->GetYaxis()->SetTitleSize(0.045);
   mueta_1_stack_15->GetYaxis()->SetTickLength(0.02);
   mueta_1_stack_15->GetYaxis()->SetTitleOffset(1.55);
   mueta_1_stack_15->GetYaxis()->SetTitleFont(42);
   mueta_1_stack_15->GetZaxis()->SetLabelFont(42);
   mueta_1_stack_15->GetZaxis()->SetLabelOffset(0.007);
   mueta_1_stack_15->GetZaxis()->SetLabelSize(0.035);
   mueta_1_stack_15->GetZaxis()->SetTitleSize(0.045);
   mueta_1_stack_15->GetZaxis()->SetTickLength(0.02);
   mueta_1_stack_15->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mueta_1_stack_15);
   
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,2.900076);
   mueta_1->SetBinContent(7,0.233637);
   mueta_1->SetBinContent(8,3.6377);
   mueta_1->SetBinContent(9,0.1737722);
   mueta_1->SetBinContent(10,2.059169);
   mueta_1->SetBinContent(11,2.923896);
   mueta_1->SetBinContent(12,0.08741169);
   mueta_1->SetBinContent(13,3.736086);
   mueta_1->SetBinContent(14,0.1131666);
   mueta_1->SetBinError(6,2.900076);
   mueta_1->SetBinError(7,0.1652925);
   mueta_1->SetBinError(8,2.581814);
   mueta_1->SetBinError(9,0.1260201);
   mueta_1->SetBinError(10,1.919272);
   mueta_1->SetBinError(11,2.682779);
   mueta_1->SetBinError(12,0.07333811);
   mueta_1->SetBinError(13,2.608241);
   mueta_1->SetBinError(14,0.1131666);
   mueta_1->SetMinimum(0.01);
   mueta_1->SetMaximum(825145.5);
   mueta_1->SetEntries(25);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(4);
   mueta_1->SetLineColor(4);
   mueta_1->SetLineWidth(2);
   mueta_1->SetMarkerColor(4);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetTitle("Leading muon #eta");
   mueta_1->GetXaxis()->SetRange(5,17);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0);
   mueta_1->GetXaxis()->SetTitleSize(0);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetTitle("Events");
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"HIST");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(7,3.089593);
   mueta_1->SetBinContent(8,5.273107);
   mueta_1->SetBinContent(9,7.087425);
   mueta_1->SetBinContent(10,8.633097);
   mueta_1->SetBinContent(11,9.546441);
   mueta_1->SetBinContent(12,6.822154);
   mueta_1->SetBinContent(13,7.383192);
   mueta_1->SetBinContent(14,3.062155);
   mueta_1->SetBinContent(15,0.3140422);
   mueta_1->SetBinError(7,1.63592);
   mueta_1->SetBinError(8,1.852201);
   mueta_1->SetBinError(9,2.205918);
   mueta_1->SetBinError(10,2.50854);
   mueta_1->SetBinError(11,2.712461);
   mueta_1->SetBinError(12,2.046729);
   mueta_1->SetBinError(13,2.298999);
   mueta_1->SetBinError(14,1.354247);
   mueta_1->SetBinError(15,0.3140422);
   mueta_1->SetEntries(93);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(5);
   mueta_1->SetLineColor(5);
   mueta_1->SetLineWidth(2);
   mueta_1->SetMarkerColor(5);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,7.279518);
   mueta_1->SetBinContent(7,55.0097);
   mueta_1->SetBinContent(8,43.37059);
   mueta_1->SetBinContent(9,38.33847);
   mueta_1->SetBinContent(10,19.44091);
   mueta_1->SetBinContent(11,23.58577);
   mueta_1->SetBinContent(12,34.96274);
   mueta_1->SetBinContent(13,35.93094);
   mueta_1->SetBinContent(14,33.65378);
   mueta_1->SetBinContent(15,7.705528);
   mueta_1->SetBinError(6,2.034535);
   mueta_1->SetBinError(7,6.90419);
   mueta_1->SetBinError(8,5.482469);
   mueta_1->SetBinError(9,6.727722);
   mueta_1->SetBinError(10,3.422568);
   mueta_1->SetBinError(11,4.047116);
   mueta_1->SetBinError(12,4.813223);
   mueta_1->SetBinError(13,5.032763);
   mueta_1->SetBinError(14,4.494632);
   mueta_1->SetBinError(15,2.215706);
   mueta_1->SetEntries(586);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(6);
   mueta_1->SetLineColor(6);
   mueta_1->SetLineWidth(2);
   mueta_1->SetMarkerColor(6);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,0.8430941);
   mueta_1->SetBinContent(7,6.191629);
   mueta_1->SetBinContent(8,11.75441);
   mueta_1->SetBinContent(9,15.67535);
   mueta_1->SetBinContent(10,19.03469);
   mueta_1->SetBinContent(11,18.06599);
   mueta_1->SetBinContent(12,16.39094);
   mueta_1->SetBinContent(13,12.08543);
   mueta_1->SetBinContent(14,6.309164);
   mueta_1->SetBinContent(15,0.4228641);
   mueta_1->SetBinError(6,0.1342783);
   mueta_1->SetBinError(7,0.3568889);
   mueta_1->SetBinError(8,0.4835384);
   mueta_1->SetBinError(9,0.5582439);
   mueta_1->SetBinError(10,0.618748);
   mueta_1->SetBinError(11,0.6016804);
   mueta_1->SetBinError(12,0.5747833);
   mueta_1->SetBinError(13,0.4908005);
   mueta_1->SetBinError(14,0.3550718);
   mueta_1->SetBinError(15,0.08939184);
   mueta_1->SetEntries(6175);
   mueta_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mueta_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mueta_1->SetLineColor(ci);
   mueta_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mueta_1->SetMarkerColor(ci);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(3);
   mueta_1->SetLineColor(3);
   mueta_1->SetLineWidth(2);
   mueta_1->SetMarkerColor(3);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,0.4358602);
   mueta_1->SetBinContent(7,3.715464);
   mueta_1->SetBinContent(8,1.365353);
   mueta_1->SetBinContent(9,0.8669066);
   mueta_1->SetBinContent(10,0.4192259);
   mueta_1->SetBinContent(11,1.125809);
   mueta_1->SetBinContent(12,1.469195);
   mueta_1->SetBinContent(13,1.431059);
   mueta_1->SetBinContent(14,2.878528);
   mueta_1->SetBinContent(15,0.5963215);
   mueta_1->SetBinError(6,0.1904182);
   mueta_1->SetBinError(7,0.7723908);
   mueta_1->SetBinError(8,0.4067467);
   mueta_1->SetBinError(9,0.334566);
   mueta_1->SetBinError(10,0.1921211);
   mueta_1->SetBinError(11,0.3799383);
   mueta_1->SetBinError(12,0.4467888);
   mueta_1->SetBinError(13,0.395307);
   mueta_1->SetBinError(14,0.593647);
   mueta_1->SetBinError(15,0.2457517);
   mueta_1->SetEntries(159);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(3);
   mueta_1->SetLineColor(3);
   mueta_1->SetLineWidth(2);
   mueta_1->SetMarkerColor(3);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,0.04223929);
   mueta_1->SetBinContent(7,0.72385);
   mueta_1->SetBinContent(8,0.5517929);
   mueta_1->SetBinContent(9,0.7472589);
   mueta_1->SetBinContent(10,0.6074743);
   mueta_1->SetBinContent(11,0.7221198);
   mueta_1->SetBinContent(12,0.811303);
   mueta_1->SetBinContent(13,0.7003542);
   mueta_1->SetBinContent(14,0.6808081);
   mueta_1->SetBinContent(15,0.06605326);
   mueta_1->SetBinError(6,0.01753302);
   mueta_1->SetBinError(7,0.08438231);
   mueta_1->SetBinError(8,0.07258632);
   mueta_1->SetBinError(9,0.08409199);
   mueta_1->SetBinError(10,0.07504182);
   mueta_1->SetBinError(11,0.08650992);
   mueta_1->SetBinError(12,0.09067615);
   mueta_1->SetBinError(13,0.08695395);
   mueta_1->SetBinError(14,0.08142978);
   mueta_1->SetBinError(15,0.02876476);
   mueta_1->SetEntries(756);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(3);
   mueta_1->SetLineColor(3);
   mueta_1->SetLineWidth(2);
   mueta_1->SetMarkerColor(3);
   mueta_1->SetMarkerStyle(21);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   stack->Add(mueta_1,"");
   stack->Draw("hist");
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,5);
   mueta_1->SetBinContent(7,40);
   mueta_1->SetBinContent(8,41);
   mueta_1->SetBinContent(9,52);
   mueta_1->SetBinContent(10,38);
   mueta_1->SetBinContent(11,48);
   mueta_1->SetBinContent(12,42);
   mueta_1->SetBinContent(13,49);
   mueta_1->SetBinContent(14,38);
   mueta_1->SetBinContent(15,2);
   mueta_1->SetBinError(6,2.236068);
   mueta_1->SetBinError(7,6.324555);
   mueta_1->SetBinError(8,6.403124);
   mueta_1->SetBinError(9,7.211103);
   mueta_1->SetBinError(10,6.164414);
   mueta_1->SetBinError(11,6.928203);
   mueta_1->SetBinError(12,6.480741);
   mueta_1->SetBinError(13,7);
   mueta_1->SetBinError(14,6.164414);
   mueta_1->SetBinError(15,1.414214);
   mueta_1->SetEntries(355);
   mueta_1->SetStats(0);
   mueta_1->SetFillColor(1);
   mueta_1->SetFillStyle(0);
   mueta_1->SetLineWidth(3);
   mueta_1->SetMarkerStyle(20);
   mueta_1->SetMarkerSize(1.3);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.035);
   mueta_1->GetXaxis()->SetTitleSize(0.045);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.035);
   mueta_1->GetYaxis()->SetTitleSize(0.045);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(1.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   mueta_1->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiQCD_CJVpass");
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
   TLegendEntry *entry=leg->AddEntry("mueta_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mueta_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mueta_1","EWK W+jets","f");

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
   entry=leg->AddEntry("mueta_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mueta_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mueta_1","Dibosons","f");
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
   lower->Range(-4.316456,-0.653951,3.911392,2.070845);
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
   
   TH1F *mueta_1 = new TH1F("mueta_1","mueta_1",20,-5,5);
   mueta_1->SetBinContent(6,0.5813473);
   mueta_1->SetBinContent(7,0.5819855);
   mueta_1->SetBinContent(8,0.6579449);
   mueta_1->SetBinContent(9,0.8291424);
   mueta_1->SetBinContent(10,0.7894397);
   mueta_1->SetBinContent(11,0.9048728);
   mueta_1->SetBinContent(12,0.6947163);
   mueta_1->SetBinContent(13,0.8517151);
   mueta_1->SetBinContent(14,0.8157231);
   mueta_1->SetBinContent(15,0.2196641);
   mueta_1->SetBinError(6,0.2945406);
   mueta_1->SetBinError(7,0.1101356);
   mueta_1->SetBinError(8,0.1197356);
   mueta_1->SetBinError(9,0.1485186);
   mueta_1->SetBinError(10,0.1461443);
   mueta_1->SetBinError(11,0.1552891);
   mueta_1->SetBinError(12,0.1231853);
   mueta_1->SetBinError(13,0.1469793);
   mueta_1->SetBinError(14,0.1562563);
   mueta_1->SetBinError(15,0.1645644);
   mueta_1->SetMinimum(0);
   mueta_1->SetMaximum(2);
   mueta_1->SetEntries(178.3362);
   mueta_1->SetStats(0);
   mueta_1->SetFillStyle(0);
   mueta_1->SetMarkerStyle(20);
   mueta_1->SetMarkerSize(0.8);
   mueta_1->GetXaxis()->SetTitle("Leading muon #eta");
   mueta_1->GetXaxis()->SetRange(5,17);
   mueta_1->GetXaxis()->SetLabelFont(42);
   mueta_1->GetXaxis()->SetLabelOffset(0.007);
   mueta_1->GetXaxis()->SetLabelSize(0.1);
   mueta_1->GetXaxis()->SetTitleSize(0.12);
   mueta_1->GetXaxis()->SetTickLength(0.02);
   mueta_1->GetXaxis()->SetTitleOffset(0.9);
   mueta_1->GetXaxis()->SetTitleFont(42);
   mueta_1->GetYaxis()->SetTitle("Data/MC");
   mueta_1->GetYaxis()->SetNdivisions(505);
   mueta_1->GetYaxis()->SetLabelFont(42);
   mueta_1->GetYaxis()->SetLabelOffset(0.007);
   mueta_1->GetYaxis()->SetLabelSize(0.1);
   mueta_1->GetYaxis()->SetTitleSize(0.12);
   mueta_1->GetYaxis()->SetTickLength(0.02);
   mueta_1->GetYaxis()->SetTitleOffset(0.55);
   mueta_1->GetYaxis()->SetTitleFont(42);
   mueta_1->GetZaxis()->SetLabelFont(42);
   mueta_1->GetZaxis()->SetLabelOffset(0.007);
   mueta_1->GetZaxis()->SetLabelSize(0.035);
   mueta_1->GetZaxis()->SetTitleSize(0.045);
   mueta_1->GetZaxis()->SetTickLength(0.02);
   mueta_1->GetZaxis()->SetTitleFont(42);
   mueta_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
