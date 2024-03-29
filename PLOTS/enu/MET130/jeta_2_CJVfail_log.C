{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:17 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.886312,5.632911,6.763698);
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
   stack->SetMaximum(742282.8);
   
   TH1F *jeta_2_stack_10 = new TH1F("jeta_2_stack_10","stack",20,-5,5);
   jeta_2_stack_10->SetBinContent(3,0.1307818);
   jeta_2_stack_10->SetBinContent(4,2.38068);
   jeta_2_stack_10->SetBinContent(5,0.8025336);
   jeta_2_stack_10->SetBinContent(6,1.990501);
   jeta_2_stack_10->SetBinContent(7,0.05750282);
   jeta_2_stack_10->SetBinContent(15,2.124332);
   jeta_2_stack_10->SetBinContent(16,2.191426);
   jeta_2_stack_10->SetBinContent(18,1.936148);
   jeta_2_stack_10->SetBinError(3,0.0931125);
   jeta_2_stack_10->SetBinError(4,2.175111);
   jeta_2_stack_10->SetBinError(5,0.6254394);
   jeta_2_stack_10->SetBinError(6,1.926795);
   jeta_2_stack_10->SetBinError(7,0.05750282);
   jeta_2_stack_10->SetBinError(15,2.121883);
   jeta_2_stack_10->SetBinError(16,2.022589);
   jeta_2_stack_10->SetBinError(18,1.936148);
   jeta_2_stack_10->SetMinimum(0.002026226);
   jeta_2_stack_10->SetMaximum(1910720);
   jeta_2_stack_10->SetEntries(19);
   jeta_2_stack_10->SetStats(0);
   jeta_2_stack_10->SetFillColor(4);
   jeta_2_stack_10->SetLineColor(4);
   jeta_2_stack_10->SetLineWidth(2);
   jeta_2_stack_10->SetMarkerColor(4);
   jeta_2_stack_10->SetMarkerStyle(21);
   jeta_2_stack_10->SetMarkerSize(0.8);
   jeta_2_stack_10->GetXaxis()->SetTitle("Next-to-Leading Jet #eta");
   jeta_2_stack_10->GetXaxis()->SetLabelFont(42);
   jeta_2_stack_10->GetXaxis()->SetLabelOffset(0.007);
   jeta_2_stack_10->GetXaxis()->SetLabelSize(0);
   jeta_2_stack_10->GetXaxis()->SetTitleSize(0);
   jeta_2_stack_10->GetXaxis()->SetTickLength(0.02);
   jeta_2_stack_10->GetXaxis()->SetTitleOffset(0.9);
   jeta_2_stack_10->GetXaxis()->SetTitleFont(42);
   jeta_2_stack_10->GetYaxis()->SetTitle("Events");
   jeta_2_stack_10->GetYaxis()->SetLabelFont(42);
   jeta_2_stack_10->GetYaxis()->SetLabelOffset(0.007);
   jeta_2_stack_10->GetYaxis()->SetLabelSize(0.035);
   jeta_2_stack_10->GetYaxis()->SetTitleSize(0.045);
   jeta_2_stack_10->GetYaxis()->SetTickLength(0.02);
   jeta_2_stack_10->GetYaxis()->SetTitleOffset(1.55);
   jeta_2_stack_10->GetYaxis()->SetTitleFont(42);
   jeta_2_stack_10->GetZaxis()->SetLabelFont(42);
   jeta_2_stack_10->GetZaxis()->SetLabelOffset(0.007);
   jeta_2_stack_10->GetZaxis()->SetLabelSize(0.035);
   jeta_2_stack_10->GetZaxis()->SetTitleSize(0.045);
   jeta_2_stack_10->GetZaxis()->SetTickLength(0.02);
   jeta_2_stack_10->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_2_stack_10);
   
   
   TH1F *jeta_2 = new TH1F("jeta_2","jeta_2",20,-5,5);
   jeta_2->SetBinContent(3,0.1307818);
   jeta_2->SetBinContent(4,2.38068);
   jeta_2->SetBinContent(5,0.8025336);
   jeta_2->SetBinContent(6,1.990501);
   jeta_2->SetBinContent(7,0.05750282);
   jeta_2->SetBinContent(15,2.124332);
   jeta_2->SetBinContent(16,2.191426);
   jeta_2->SetBinContent(18,1.936148);
   jeta_2->SetBinError(3,0.0931125);
   jeta_2->SetBinError(4,2.175111);
   jeta_2->SetBinError(5,0.6254394);
   jeta_2->SetBinError(6,1.926795);
   jeta_2->SetBinError(7,0.05750282);
   jeta_2->SetBinError(15,2.121883);
   jeta_2->SetBinError(16,2.022589);
   jeta_2->SetBinError(18,1.936148);
   jeta_2->SetMinimum(0.01);
   jeta_2->SetMaximum(513110.2);
   jeta_2->SetEntries(19);
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
   jeta_2->SetBinContent(2,1.994743);
   jeta_2->SetBinContent(3,1.811238);
   jeta_2->SetBinContent(4,7.981868);
   jeta_2->SetBinContent(5,9.528391);
   jeta_2->SetBinContent(6,15.27106);
   jeta_2->SetBinContent(7,7.54559);
   jeta_2->SetBinContent(8,1.472424);
   jeta_2->SetBinContent(13,0.2224018);
   jeta_2->SetBinContent(14,6.575078);
   jeta_2->SetBinContent(15,10.10333);
   jeta_2->SetBinContent(16,17.17469);
   jeta_2->SetBinContent(17,10.12864);
   jeta_2->SetBinContent(18,1.649001);
   jeta_2->SetBinError(2,1.191449);
   jeta_2->SetBinError(3,0.930509);
   jeta_2->SetBinError(4,2.346645);
   jeta_2->SetBinError(5,2.616576);
   jeta_2->SetBinError(6,3.363249);
   jeta_2->SetBinError(7,2.313952);
   jeta_2->SetBinError(8,0.8984079);
   jeta_2->SetBinError(13,0.2224018);
   jeta_2->SetBinError(14,2.136619);
   jeta_2->SetBinError(15,2.656968);
   jeta_2->SetBinError(16,3.227406);
   jeta_2->SetBinError(17,2.865297);
   jeta_2->SetBinError(18,0.879123);
   jeta_2->SetEntries(165);
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
   jeta_2->SetBinContent(2,2.300018);
   jeta_2->SetBinContent(3,10.68063);
   jeta_2->SetBinContent(4,18.68223);
   jeta_2->SetBinContent(5,32.99604);
   jeta_2->SetBinContent(6,15.18216);
   jeta_2->SetBinContent(7,6.658149);
   jeta_2->SetBinContent(8,1.159382);
   jeta_2->SetBinContent(12,0.5146867);
   jeta_2->SetBinContent(13,0.7955229);
   jeta_2->SetBinContent(14,6.705339);
   jeta_2->SetBinContent(15,17.53815);
   jeta_2->SetBinContent(16,23.42465);
   jeta_2->SetBinContent(17,34.20734);
   jeta_2->SetBinContent(18,12.7903);
   jeta_2->SetBinContent(19,1.586449);
   jeta_2->SetBinError(2,1.185913);
   jeta_2->SetBinError(3,2.299509);
   jeta_2->SetBinError(4,3.047742);
   jeta_2->SetBinError(5,4.266973);
   jeta_2->SetBinError(6,2.504249);
   jeta_2->SetBinError(7,1.591259);
   jeta_2->SetBinError(8,0.8663961);
   jeta_2->SetBinError(12,0.5146867);
   jeta_2->SetBinError(13,0.5457239);
   jeta_2->SetBinError(14,1.781909);
   jeta_2->SetBinError(15,2.838652);
   jeta_2->SetBinError(16,3.380317);
   jeta_2->SetBinError(17,4.32226);
   jeta_2->SetBinError(18,2.756704);
   jeta_2->SetBinError(19,0.9932069);
   jeta_2->SetEntries(460);
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
   jeta_2->SetBinContent(1,0.01736155);
   jeta_2->SetBinContent(2,0.1753805);
   jeta_2->SetBinContent(3,1.480592);
   jeta_2->SetBinContent(4,3.38867);
   jeta_2->SetBinContent(5,5.561499);
   jeta_2->SetBinContent(6,3.845123);
   jeta_2->SetBinContent(7,1.074826);
   jeta_2->SetBinContent(8,0.1098057);
   jeta_2->SetBinContent(12,0.01854437);
   jeta_2->SetBinContent(13,0.2329389);
   jeta_2->SetBinContent(14,1.398744);
   jeta_2->SetBinContent(15,3.448043);
   jeta_2->SetBinContent(16,5.203626);
   jeta_2->SetBinContent(17,3.840183);
   jeta_2->SetBinContent(18,1.879573);
   jeta_2->SetBinContent(19,0.1285589);
   jeta_2->SetBinError(1,0.01736155);
   jeta_2->SetBinError(2,0.06106648);
   jeta_2->SetBinError(3,0.176355);
   jeta_2->SetBinError(4,0.2582535);
   jeta_2->SetBinError(5,0.3359591);
   jeta_2->SetBinError(6,0.2760846);
   jeta_2->SetBinError(7,0.1471328);
   jeta_2->SetBinError(8,0.04619938);
   jeta_2->SetBinError(12,0.01854437);
   jeta_2->SetBinError(13,0.0716787);
   jeta_2->SetBinError(14,0.1714649);
   jeta_2->SetBinError(15,0.265251);
   jeta_2->SetBinError(16,0.32445);
   jeta_2->SetBinError(17,0.2782514);
   jeta_2->SetBinError(18,0.1931156);
   jeta_2->SetBinError(19,0.04950971);
   jeta_2->SetEntries(1830);
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
   jeta_2->SetBinContent(2,0.2478672);
   jeta_2->SetBinContent(3,0.1083081);
   jeta_2->SetBinContent(4,0.3991137);
   jeta_2->SetBinContent(5,0.4332627);
   jeta_2->SetBinContent(7,0.2456425);
   jeta_2->SetBinContent(8,0.2780183);
   jeta_2->SetBinContent(14,0.2184991);
   jeta_2->SetBinContent(15,0.1283927);
   jeta_2->SetBinContent(16,0.5752334);
   jeta_2->SetBinContent(17,0.2027618);
   jeta_2->SetBinContent(18,0.3624988);
   jeta_2->SetBinError(2,0.1740969);
   jeta_2->SetBinError(3,0.08792137);
   jeta_2->SetBinError(4,0.1847192);
   jeta_2->SetBinError(5,0.1761316);
   jeta_2->SetBinError(7,0.150768);
   jeta_2->SetBinError(8,0.2161841);
   jeta_2->SetBinError(14,0.1307719);
   jeta_2->SetBinError(15,0.09172967);
   jeta_2->SetBinError(16,0.2208333);
   jeta_2->SetBinError(17,0.145152);
   jeta_2->SetBinError(18,0.1789997);
   jeta_2->SetEntries(46);
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
   jeta_2->SetBinContent(2,0.01010864);
   jeta_2->SetBinContent(3,0.03214583);
   jeta_2->SetBinContent(4,0.1186707);
   jeta_2->SetBinContent(5,0.1637934);
   jeta_2->SetBinContent(6,0.08910105);
   jeta_2->SetBinContent(7,0.04009657);
   jeta_2->SetBinContent(13,0.005776239);
   jeta_2->SetBinContent(14,0.08676183);
   jeta_2->SetBinContent(15,0.05924113);
   jeta_2->SetBinContent(16,0.1159314);
   jeta_2->SetBinContent(17,0.1383831);
   jeta_2->SetBinContent(18,0.01831589);
   jeta_2->SetBinContent(19,0.01197824);
   jeta_2->SetBinError(2,0.00732997);
   jeta_2->SetBinError(3,0.01465171);
   jeta_2->SetBinError(4,0.02710237);
   jeta_2->SetBinError(5,0.03221349);
   jeta_2->SetBinError(6,0.02413338);
   jeta_2->SetBinError(7,0.01653568);
   jeta_2->SetBinError(13,0.005776239);
   jeta_2->SetBinError(14,0.02394525);
   jeta_2->SetBinError(15,0.02006214);
   jeta_2->SetBinError(16,0.02646482);
   jeta_2->SetBinError(17,0.02955903);
   jeta_2->SetBinError(18,0.01061526);
   jeta_2->SetBinError(19,0.007962445);
   jeta_2->SetEntries(163);
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
   jeta_2->SetBinContent(3,12);
   jeta_2->SetBinContent(4,21);
   jeta_2->SetBinContent(5,33);
   jeta_2->SetBinContent(6,30);
   jeta_2->SetBinContent(7,8);
   jeta_2->SetBinContent(8,2);
   jeta_2->SetBinContent(14,7);
   jeta_2->SetBinContent(15,19);
   jeta_2->SetBinContent(16,29);
   jeta_2->SetBinContent(17,34);
   jeta_2->SetBinContent(18,17);
   jeta_2->SetBinContent(19,2);
   jeta_2->SetBinError(2,1);
   jeta_2->SetBinError(3,3.464102);
   jeta_2->SetBinError(4,4.582576);
   jeta_2->SetBinError(5,5.744563);
   jeta_2->SetBinError(6,5.477226);
   jeta_2->SetBinError(7,2.828427);
   jeta_2->SetBinError(8,1.414214);
   jeta_2->SetBinError(14,2.645751);
   jeta_2->SetBinError(15,4.358899);
   jeta_2->SetBinError(16,5.385165);
   jeta_2->SetBinError(17,5.830952);
   jeta_2->SetBinError(18,4.123106);
   jeta_2->SetBinError(19,1.414214);
   jeta_2->SetEntries(215);
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
   TLatex *   tex = new TLatex(0.95,0.965,"CJVfail");
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
   jeta_2->SetBinContent(2,0.2115007);
   jeta_2->SetBinContent(3,0.8502852);
   jeta_2->SetBinContent(4,0.6869356);
   jeta_2->SetBinContent(5,0.6778548);
   jeta_2->SetBinContent(6,0.8724115);
   jeta_2->SetBinContent(7,0.5139967);
   jeta_2->SetBinContent(8,0.6623328);
   jeta_2->SetBinContent(14,0.4671518);
   jeta_2->SetBinContent(15,0.6074721);
   jeta_2->SetBinContent(16,0.6237345);
   jeta_2->SetBinContent(17,0.7007808);
   jeta_2->SetBinContent(18,1.017983);
   jeta_2->SetBinContent(19,1.158087);
   jeta_2->SetBinError(2,0.2246229);
   jeta_2->SetBinError(3,0.2876238);
   jeta_2->SetBinError(4,0.173183);
   jeta_2->SetBinError(5,0.1371465);
   jeta_2->SetBinError(6,0.1916675);
   jeta_2->SetBinError(7,0.2041413);
   jeta_2->SetBinError(8,0.5446467);
   jeta_2->SetBinError(14,0.1968367);
   jeta_2->SetBinError(15,0.1586025);
   jeta_2->SetBinError(16,0.1318114);
   jeta_2->SetBinError(17,0.1416864);
   jeta_2->SetBinError(18,0.3038533);
   jeta_2->SetBinError(19,1.05608);
   jeta_2->SetMinimum(0);
   jeta_2->SetMaximum(2);
   jeta_2->SetEntries(43.89677);
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
