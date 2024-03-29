{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:29:08 2013) by ROOT version5.32/00
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
   upper->Range(-7.025316,-2.888485,5.632911,6.799047);
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
   stack->SetMaximum(799745.1);
   
   TH1F *jeta_1_stack_13 = new TH1F("jeta_1_stack_13","stack",20,-5,5);
   jeta_1_stack_13->SetBinContent(5,0.05330591);
   jeta_1_stack_13->SetBinContent(6,0.2578497);
   jeta_1_stack_13->SetBinContent(7,2.702136);
   jeta_1_stack_13->SetBinContent(8,0.1676299);
   jeta_1_stack_13->SetBinContent(12,0.2869671);
   jeta_1_stack_13->SetBinContent(13,0.1848987);
   jeta_1_stack_13->SetBinContent(14,0.3124896);
   jeta_1_stack_13->SetBinContent(15,1.921727);
   jeta_1_stack_13->SetBinContent(16,2.385485);
   jeta_1_stack_13->SetBinError(5,0.05330591);
   jeta_1_stack_13->SetBinError(6,0.153046);
   jeta_1_stack_13->SetBinError(7,2.496732);
   jeta_1_stack_13->SetBinError(8,0.1231675);
   jeta_1_stack_13->SetBinError(12,0.1686214);
   jeta_1_stack_13->SetBinError(13,0.137789);
   jeta_1_stack_13->SetBinError(14,0.1618725);
   jeta_1_stack_13->SetBinError(15,1.921727);
   jeta_1_stack_13->SetBinError(16,2.088394);
   jeta_1_stack_13->SetMinimum(0.0020196);
   jeta_1_stack_13->SetMaximum(2063814);
   jeta_1_stack_13->SetEntries(24);
   jeta_1_stack_13->SetStats(0);
   jeta_1_stack_13->SetFillColor(4);
   jeta_1_stack_13->SetLineColor(4);
   jeta_1_stack_13->SetLineWidth(2);
   jeta_1_stack_13->SetMarkerColor(4);
   jeta_1_stack_13->SetMarkerStyle(21);
   jeta_1_stack_13->SetMarkerSize(0.8);
   jeta_1_stack_13->GetXaxis()->SetTitle("Leading Jet #eta");
   jeta_1_stack_13->GetXaxis()->SetLabelFont(42);
   jeta_1_stack_13->GetXaxis()->SetLabelOffset(0.007);
   jeta_1_stack_13->GetXaxis()->SetLabelSize(0);
   jeta_1_stack_13->GetXaxis()->SetTitleSize(0);
   jeta_1_stack_13->GetXaxis()->SetTickLength(0.02);
   jeta_1_stack_13->GetXaxis()->SetTitleOffset(0.9);
   jeta_1_stack_13->GetXaxis()->SetTitleFont(42);
   jeta_1_stack_13->GetYaxis()->SetTitle("Events");
   jeta_1_stack_13->GetYaxis()->SetLabelFont(42);
   jeta_1_stack_13->GetYaxis()->SetLabelOffset(0.007);
   jeta_1_stack_13->GetYaxis()->SetLabelSize(0.035);
   jeta_1_stack_13->GetYaxis()->SetTitleSize(0.045);
   jeta_1_stack_13->GetYaxis()->SetTickLength(0.02);
   jeta_1_stack_13->GetYaxis()->SetTitleOffset(1.55);
   jeta_1_stack_13->GetYaxis()->SetTitleFont(42);
   jeta_1_stack_13->GetZaxis()->SetLabelFont(42);
   jeta_1_stack_13->GetZaxis()->SetLabelOffset(0.007);
   jeta_1_stack_13->GetZaxis()->SetLabelSize(0.035);
   jeta_1_stack_13->GetZaxis()->SetTitleSize(0.045);
   jeta_1_stack_13->GetZaxis()->SetTickLength(0.02);
   jeta_1_stack_13->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jeta_1_stack_13);
   
   
   TH1F *jeta_1 = new TH1F("jeta_1","jeta_1",20,-5,5);
   jeta_1->SetBinContent(5,0.05330591);
   jeta_1->SetBinContent(6,0.2578497);
   jeta_1->SetBinContent(7,2.702136);
   jeta_1->SetBinContent(8,0.1676299);
   jeta_1->SetBinContent(12,0.2869671);
   jeta_1->SetBinContent(13,0.1848987);
   jeta_1->SetBinContent(14,0.3124896);
   jeta_1->SetBinContent(15,1.921727);
   jeta_1->SetBinContent(16,2.385485);
   jeta_1->SetBinError(5,0.05330591);
   jeta_1->SetBinError(6,0.153046);
   jeta_1->SetBinError(7,2.496732);
   jeta_1->SetBinError(8,0.1231675);
   jeta_1->SetBinError(12,0.1686214);
   jeta_1->SetBinError(13,0.137789);
   jeta_1->SetBinError(14,0.1618725);
   jeta_1->SetBinError(15,1.921727);
   jeta_1->SetBinError(16,2.088394);
   jeta_1->SetMinimum(0.01);
   jeta_1->SetMaximum(585000);
   jeta_1->SetEntries(24);
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
   jeta_1->SetBinContent(3,0.2907919);
   jeta_1->SetBinContent(4,0.3669678);
   jeta_1->SetBinContent(5,0.292655);
   jeta_1->SetBinContent(6,1.897982);
   jeta_1->SetBinContent(7,1.268953);
   jeta_1->SetBinContent(8,1.803897);
   jeta_1->SetBinContent(9,0.3358284);
   jeta_1->SetBinContent(12,0.1934455);
   jeta_1->SetBinContent(13,0.3340005);
   jeta_1->SetBinContent(15,1.059663);
   jeta_1->SetBinContent(16,0.2965849);
   jeta_1->SetBinContent(17,0.3001557);
   jeta_1->SetBinContent(18,0.2920732);
   jeta_1->SetBinError(3,0.2907919);
   jeta_1->SetBinError(4,0.3669678);
   jeta_1->SetBinError(5,0.292655);
   jeta_1->SetBinError(6,1.123533);
   jeta_1->SetBinError(7,0.7410154);
   jeta_1->SetBinError(8,1.281408);
   jeta_1->SetBinError(9,0.3358284);
   jeta_1->SetBinError(12,0.1934455);
   jeta_1->SetBinError(13,0.3340005);
   jeta_1->SetBinError(15,0.6208699);
   jeta_1->SetBinError(16,0.2231751);
   jeta_1->SetBinError(17,0.3001557);
   jeta_1->SetBinError(18,0.2920732);
   jeta_1->SetEntries(22);
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
   jeta_1->SetBinContent(4,2.731897);
   jeta_1->SetBinContent(5,14.13841);
   jeta_1->SetBinContent(6,22.87526);
   jeta_1->SetBinContent(7,28.21042);
   jeta_1->SetBinContent(8,19.66167);
   jeta_1->SetBinContent(9,5.4187);
   jeta_1->SetBinContent(11,2.181644);
   jeta_1->SetBinContent(12,9.40361);
   jeta_1->SetBinContent(13,16.11456);
   jeta_1->SetBinContent(14,19.54147);
   jeta_1->SetBinContent(15,31.17074);
   jeta_1->SetBinContent(16,20.17153);
   jeta_1->SetBinContent(17,6.502666);
   jeta_1->SetBinContent(18,1.116697);
   jeta_1->SetBinError(4,1.598692);
   jeta_1->SetBinError(5,3.327447);
   jeta_1->SetBinError(6,4.567987);
   jeta_1->SetBinError(7,4.894192);
   jeta_1->SetBinError(8,4.072633);
   jeta_1->SetBinError(9,2.028347);
   jeta_1->SetBinError(11,1.295149);
   jeta_1->SetBinError(12,3.013206);
   jeta_1->SetBinError(13,3.548582);
   jeta_1->SetBinError(14,4.037459);
   jeta_1->SetBinError(15,4.90151);
   jeta_1->SetBinError(16,4.298449);
   jeta_1->SetBinError(17,2.319946);
   jeta_1->SetBinError(18,0.6459078);
   jeta_1->SetEntries(324);
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
   jeta_1->SetBinContent(3,0.273572);
   jeta_1->SetBinContent(4,2.386115);
   jeta_1->SetBinContent(5,12.06342);
   jeta_1->SetBinContent(6,18.84535);
   jeta_1->SetBinContent(7,15.8107);
   jeta_1->SetBinContent(8,10.25381);
   jeta_1->SetBinContent(9,3.562398);
   jeta_1->SetBinContent(10,0.5383471);
   jeta_1->SetBinContent(11,0.4438149);
   jeta_1->SetBinContent(12,3.421608);
   jeta_1->SetBinContent(13,8.920158);
   jeta_1->SetBinContent(14,15.51997);
   jeta_1->SetBinContent(15,18.60139);
   jeta_1->SetBinContent(16,12.32643);
   jeta_1->SetBinContent(17,2.928278);
   jeta_1->SetBinContent(18,0.2719301);
   jeta_1->SetBinContent(19,0.02466276);
   jeta_1->SetBinError(3,0.07014824);
   jeta_1->SetBinError(4,0.2151266);
   jeta_1->SetBinError(5,0.4856188);
   jeta_1->SetBinError(6,0.6101776);
   jeta_1->SetBinError(7,0.5605769);
   jeta_1->SetBinError(8,0.4554119);
   jeta_1->SetBinError(9,0.2642004);
   jeta_1->SetBinError(10,0.1048463);
   jeta_1->SetBinError(11,0.09089609);
   jeta_1->SetBinError(12,0.2631006);
   jeta_1->SetBinError(13,0.4228303);
   jeta_1->SetBinError(14,0.5574118);
   jeta_1->SetBinError(15,0.606197);
   jeta_1->SetBinError(16,0.4882214);
   jeta_1->SetBinError(17,0.2409963);
   jeta_1->SetBinError(18,0.07060646);
   jeta_1->SetBinError(19,0.02466276);
   jeta_1->SetEntries(7415);
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
   jeta_1->SetBinContent(5,0.1172916);
   jeta_1->SetBinContent(6,0.5298724);
   jeta_1->SetBinContent(7,0.6261805);
   jeta_1->SetBinContent(8,0.2320248);
   jeta_1->SetBinContent(9,0.2197336);
   jeta_1->SetBinContent(12,0.1064002);
   jeta_1->SetBinContent(13,0.1839173);
   jeta_1->SetBinContent(14,0.3737701);
   jeta_1->SetBinContent(15,0.3724);
   jeta_1->SetBinContent(16,0.2644146);
   jeta_1->SetBinError(5,0.1172916);
   jeta_1->SetBinError(6,0.24316);
   jeta_1->SetBinError(7,0.3217159);
   jeta_1->SetBinError(8,0.1684431);
   jeta_1->SetBinError(9,0.19678);
   jeta_1->SetBinError(12,0.1064002);
   jeta_1->SetBinError(13,0.1300938);
   jeta_1->SetBinError(14,0.2662472);
   jeta_1->SetBinError(15,0.1868351);
   jeta_1->SetBinError(16,0.2644146);
   jeta_1->SetEntries(25);
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
   jeta_1->SetBinContent(4,0.02133028);
   jeta_1->SetBinContent(5,0.1067874);
   jeta_1->SetBinContent(6,0.1635028);
   jeta_1->SetBinContent(7,0.08941666);
   jeta_1->SetBinContent(8,0.08254752);
   jeta_1->SetBinContent(9,0.01934119);
   jeta_1->SetBinContent(12,0.02496927);
   jeta_1->SetBinContent(13,0.08864104);
   jeta_1->SetBinContent(14,0.1488386);
   jeta_1->SetBinContent(15,0.1904139);
   jeta_1->SetBinContent(16,0.07288098);
   jeta_1->SetBinContent(17,0.02283178);
   jeta_1->SetBinContent(18,0.01586505);
   jeta_1->SetBinError(4,0.01284862);
   jeta_1->SetBinError(5,0.02655184);
   jeta_1->SetBinError(6,0.03293393);
   jeta_1->SetBinError(7,0.02333436);
   jeta_1->SetBinError(8,0.02303601);
   jeta_1->SetBinError(9,0.01117258);
   jeta_1->SetBinError(12,0.01249715);
   jeta_1->SetBinError(13,0.02300026);
   jeta_1->SetBinError(14,0.03124841);
   jeta_1->SetBinError(15,0.0351706);
   jeta_1->SetBinError(16,0.02077121);
   jeta_1->SetBinError(17,0.01346581);
   jeta_1->SetBinError(18,0.01149671);
   jeta_1->SetEntries(189);
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
   jeta_1->SetBinContent(4,3);
   jeta_1->SetBinContent(5,22);
   jeta_1->SetBinContent(6,38);
   jeta_1->SetBinContent(7,31);
   jeta_1->SetBinContent(8,31);
   jeta_1->SetBinContent(9,12);
   jeta_1->SetBinContent(11,1);
   jeta_1->SetBinContent(12,5);
   jeta_1->SetBinContent(13,31);
   jeta_1->SetBinContent(14,32);
   jeta_1->SetBinContent(15,39);
   jeta_1->SetBinContent(16,22);
   jeta_1->SetBinContent(17,4);
   jeta_1->SetBinError(4,1.732051);
   jeta_1->SetBinError(5,4.690416);
   jeta_1->SetBinError(6,6.164414);
   jeta_1->SetBinError(7,5.567764);
   jeta_1->SetBinError(8,5.567764);
   jeta_1->SetBinError(9,3.464102);
   jeta_1->SetBinError(11,1);
   jeta_1->SetBinError(12,2.236068);
   jeta_1->SetBinError(13,5.567764);
   jeta_1->SetBinError(14,5.656854);
   jeta_1->SetBinError(15,6.244998);
   jeta_1->SetBinError(16,4.690416);
   jeta_1->SetBinError(17,2);
   jeta_1->SetEntries(271);
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
   jeta_1->SetBinContent(4,0.5448295);
   jeta_1->SetBinContent(5,0.8233975);
   jeta_1->SetBinContent(6,0.8575562);
   jeta_1->SetBinContent(7,0.67383);
   jeta_1->SetBinContent(8,0.9677232);
   jeta_1->SetBinContent(9,1.255755);
   jeta_1->SetBinContent(11,0.3808858);
   jeta_1->SetBinContent(12,0.3802272);
   jeta_1->SetBinContent(13,1.208988);
   jeta_1->SetBinContent(14,0.8992794);
   jeta_1->SetBinContent(15,0.7588345);
   jeta_1->SetBinContent(16,0.6640137);
   jeta_1->SetBinContent(17,0.4100911);
   jeta_1->SetBinError(4,0.3546012);
   jeta_1->SetBinError(5,0.2040873);
   jeta_1->SetBinError(6,0.1667409);
   jeta_1->SetBinError(7,0.1413957);
   jeta_1->SetBinError(8,0.2169335);
   jeta_1->SetBinError(9,0.454181);
   jeta_1->SetBinError(11,0.4249134);
   jeta_1->SetBinError(12,0.1913221);
   jeta_1->SetBinError(13,0.2753706);
   jeta_1->SetBinError(14,0.1895452);
   jeta_1->SetBinError(15,0.1420364);
   jeta_1->SetBinError(16,0.1661535);
   jeta_1->SetBinError(17,0.2276396);
   jeta_1->SetMinimum(0);
   jeta_1->SetMaximum(2);
   jeta_1->SetEntries(107.6189);
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
