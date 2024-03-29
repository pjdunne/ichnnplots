{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:28:33 2013) by ROOT version5.32/00
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
   upper->Range(-2.025316,-2.962753,10.63291,8.052507);
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
   stack->SetMaximum(1.129658e+07);
   
   TH1F *drjj_stack_11 = new TH1F("drjj_stack_11","stack",50,0,10);
   drjj_stack_11->SetBinContent(22,2.2247);
   drjj_stack_11->SetBinContent(23,0.4775832);
   drjj_stack_11->SetBinContent(24,4.813725);
   drjj_stack_11->SetBinContent(25,0.3450315);
   drjj_stack_11->SetBinContent(26,0.5651106);
   drjj_stack_11->SetBinContent(27,2.671935);
   drjj_stack_11->SetBinContent(28,0.3001684);
   drjj_stack_11->SetBinContent(29,0.3488844);
   drjj_stack_11->SetBinContent(30,0.1148367);
   drjj_stack_11->SetBinContent(31,0.2653772);
   drjj_stack_11->SetBinContent(32,0.1446216);
   drjj_stack_11->SetBinContent(33,0.03170383);
   drjj_stack_11->SetBinContent(37,0.04140638);
   drjj_stack_11->SetBinError(22,2.062979);
   drjj_stack_11->SetBinError(23,0.1880056);
   drjj_stack_11->SetBinError(24,3.114001);
   drjj_stack_11->SetBinError(25,0.1461367);
   drjj_stack_11->SetBinError(26,0.1931395);
   drjj_stack_11->SetBinError(27,2.117463);
   drjj_stack_11->SetBinError(28,0.1604284);
   drjj_stack_11->SetBinError(29,0.1770936);
   drjj_stack_11->SetBinError(30,0.1148367);
   drjj_stack_11->SetBinError(31,0.1709766);
   drjj_stack_11->SetBinError(32,0.08520299);
   drjj_stack_11->SetBinError(33,0.03170382);
   drjj_stack_11->SetBinError(37,0.04140638);
   drjj_stack_11->SetMinimum(0.001809472);
   drjj_stack_11->SetMaximum(3.175003e+07);
   drjj_stack_11->SetEntries(71);
   drjj_stack_11->SetStats(0);
   drjj_stack_11->SetFillColor(4);
   drjj_stack_11->SetLineColor(4);
   drjj_stack_11->SetLineWidth(2);
   drjj_stack_11->SetMarkerColor(4);
   drjj_stack_11->SetMarkerStyle(21);
   drjj_stack_11->SetMarkerSize(0.8);
   drjj_stack_11->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj_stack_11->GetXaxis()->SetLabelFont(42);
   drjj_stack_11->GetXaxis()->SetLabelOffset(0.007);
   drjj_stack_11->GetXaxis()->SetLabelSize(0);
   drjj_stack_11->GetXaxis()->SetTitleSize(0);
   drjj_stack_11->GetXaxis()->SetTickLength(0.02);
   drjj_stack_11->GetXaxis()->SetTitleOffset(0.9);
   drjj_stack_11->GetXaxis()->SetTitleFont(42);
   drjj_stack_11->GetYaxis()->SetTitle("Events");
   drjj_stack_11->GetYaxis()->SetLabelFont(42);
   drjj_stack_11->GetYaxis()->SetLabelOffset(0.007);
   drjj_stack_11->GetYaxis()->SetLabelSize(0.035);
   drjj_stack_11->GetYaxis()->SetTitleSize(0.045);
   drjj_stack_11->GetYaxis()->SetTickLength(0.02);
   drjj_stack_11->GetYaxis()->SetTitleOffset(1.55);
   drjj_stack_11->GetYaxis()->SetTitleFont(42);
   drjj_stack_11->GetZaxis()->SetLabelFont(42);
   drjj_stack_11->GetZaxis()->SetLabelOffset(0.007);
   drjj_stack_11->GetZaxis()->SetLabelSize(0.035);
   drjj_stack_11->GetZaxis()->SetTitleSize(0.045);
   drjj_stack_11->GetZaxis()->SetTickLength(0.02);
   drjj_stack_11->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(drjj_stack_11);
   
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,2.2247);
   drjj->SetBinContent(23,0.4775832);
   drjj->SetBinContent(24,4.813725);
   drjj->SetBinContent(25,0.3450315);
   drjj->SetBinContent(26,0.5651106);
   drjj->SetBinContent(27,2.671935);
   drjj->SetBinContent(28,0.3001684);
   drjj->SetBinContent(29,0.3488844);
   drjj->SetBinContent(30,0.1148367);
   drjj->SetBinContent(31,0.2653772);
   drjj->SetBinContent(32,0.1446216);
   drjj->SetBinContent(33,0.03170383);
   drjj->SetBinContent(37,0.04140638);
   drjj->SetBinError(22,2.062979);
   drjj->SetBinError(23,0.1880056);
   drjj->SetBinError(24,3.114001);
   drjj->SetBinError(25,0.1461367);
   drjj->SetBinError(26,0.1931395);
   drjj->SetBinError(27,2.117463);
   drjj->SetBinError(28,0.1604284);
   drjj->SetBinError(29,0.1770936);
   drjj->SetBinError(30,0.1148367);
   drjj->SetBinError(31,0.1709766);
   drjj->SetBinError(32,0.08520299);
   drjj->SetBinError(33,0.03170382);
   drjj->SetBinError(37,0.04140638);
   drjj->SetMinimum(0.01);
   drjj->SetMaximum(1.8e+07);
   drjj->SetEntries(71);
   drjj->SetStats(0);
   drjj->SetFillColor(4);
   drjj->SetLineColor(4);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(4);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0);
   drjj->GetXaxis()->SetTitleSize(0);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetTitle("Events");
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"HIST");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,5.118193);
   drjj->SetBinContent(23,8.021563);
   drjj->SetBinContent(24,12.94578);
   drjj->SetBinContent(25,12.5647);
   drjj->SetBinContent(26,8.357138);
   drjj->SetBinContent(27,9.351062);
   drjj->SetBinContent(28,7.412542);
   drjj->SetBinContent(29,3.124469);
   drjj->SetBinContent(30,0.7794924);
   drjj->SetBinContent(31,2.335138);
   drjj->SetBinContent(32,1.066076);
   drjj->SetBinContent(33,0.8977352);
   drjj->SetBinContent(34,0.8245606);
   drjj->SetBinError(22,1.73318);
   drjj->SetBinError(23,2.451059);
   drjj->SetBinError(24,3.069122);
   drjj->SetBinError(25,3.182171);
   drjj->SetBinError(26,2.25408);
   drjj->SetBinError(27,2.704448);
   drjj->SetBinError(28,2.334765);
   drjj->SetBinError(29,1.189588);
   drjj->SetBinError(30,0.4608901);
   drjj->SetBinError(31,1.254916);
   drjj->SetBinError(32,0.6364212);
   drjj->SetBinError(33,0.5189977);
   drjj->SetBinError(34,0.8245606);
   drjj->SetEntries(139);
   drjj->SetStats(0);
   drjj->SetFillColor(5);
   drjj->SetLineColor(5);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(5);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,15.2429);
   drjj->SetBinContent(23,21.34713);
   drjj->SetBinContent(24,31.56893);
   drjj->SetBinContent(25,26.97932);
   drjj->SetBinContent(26,38.11816);
   drjj->SetBinContent(27,40.00663);
   drjj->SetBinContent(28,34.07088);
   drjj->SetBinContent(29,26.15651);
   drjj->SetBinContent(30,24.07726);
   drjj->SetBinContent(31,9.48114);
   drjj->SetBinContent(32,6.180869);
   drjj->SetBinContent(33,2.202934);
   drjj->SetBinContent(34,2.304602);
   drjj->SetBinContent(35,0.7439878);
   drjj->SetBinError(22,2.97004);
   drjj->SetBinError(23,3.39325);
   drjj->SetBinError(24,4.410793);
   drjj->SetBinError(25,4.024344);
   drjj->SetBinError(26,5.097943);
   drjj->SetBinError(27,5.006227);
   drjj->SetBinError(28,4.43423);
   drjj->SetBinError(29,4.13117);
   drjj->SetBinError(30,3.856498);
   drjj->SetBinError(31,2.47906);
   drjj->SetBinError(32,2.06669);
   drjj->SetBinError(33,0.8978831);
   drjj->SetBinError(34,1.239959);
   drjj->SetBinError(35,0.5353347);
   drjj->SetEntries(615);
   drjj->SetStats(0);
   drjj->SetFillColor(6);
   drjj->SetLineColor(6);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(6);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,2.723243);
   drjj->SetBinContent(23,4.530448);
   drjj->SetBinContent(24,4.429901);
   drjj->SetBinContent(25,5.317839);
   drjj->SetBinContent(26,4.921515);
   drjj->SetBinContent(27,3.739403);
   drjj->SetBinContent(28,3.474193);
   drjj->SetBinContent(29,2.754814);
   drjj->SetBinContent(30,2.350881);
   drjj->SetBinContent(31,1.620853);
   drjj->SetBinContent(32,0.9271826);
   drjj->SetBinContent(33,0.5556777);
   drjj->SetBinContent(34,0.2488886);
   drjj->SetBinContent(35,0.1365818);
   drjj->SetBinContent(36,0.1289207);
   drjj->SetBinContent(37,0.02175505);
   drjj->SetBinError(22,0.2390914);
   drjj->SetBinError(23,0.3087475);
   drjj->SetBinError(24,0.3088428);
   drjj->SetBinError(25,0.3381938);
   drjj->SetBinError(26,0.3235294);
   drjj->SetBinError(27,0.2767417);
   drjj->SetBinError(28,0.2664303);
   drjj->SetBinError(29,0.2368131);
   drjj->SetBinError(30,0.2226178);
   drjj->SetBinError(31,0.1789624);
   drjj->SetBinError(32,0.1338755);
   drjj->SetBinError(33,0.1073443);
   drjj->SetBinError(34,0.07167765);
   drjj->SetBinError(35,0.05258701);
   drjj->SetBinError(36,0.04953385);
   drjj->SetBinError(37,0.02175505);
   drjj->SetEntries(2098);
   drjj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   drjj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   drjj->SetLineColor(ci);
   drjj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   drjj->SetMarkerColor(ci);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,10.61733);
   drjj->SetBinContent(23,16.18472);
   drjj->SetBinContent(24,16.91632);
   drjj->SetBinContent(25,17.85779);
   drjj->SetBinContent(26,20.9651);
   drjj->SetBinContent(27,18.23028);
   drjj->SetBinContent(28,20.14232);
   drjj->SetBinContent(29,14.74959);
   drjj->SetBinContent(30,10.52841);
   drjj->SetBinContent(31,6.557473);
   drjj->SetBinContent(32,5.179594);
   drjj->SetBinContent(33,0.8875198);
   drjj->SetBinContent(34,1.873431);
   drjj->SetBinError(22,1.240729);
   drjj->SetBinError(23,1.575964);
   drjj->SetBinError(24,1.686204);
   drjj->SetBinError(25,1.774073);
   drjj->SetBinError(26,1.912956);
   drjj->SetBinError(27,1.934522);
   drjj->SetBinError(28,2.33836);
   drjj->SetBinError(29,2.045627);
   drjj->SetBinError(30,1.610915);
   drjj->SetBinError(31,1.523668);
   drjj->SetBinError(32,1.203573);
   drjj->SetBinError(33,0.3765684);
   drjj->SetBinError(34,0.9933361);
   drjj->SetEntries(1046);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,0.05393247);
   drjj->SetBinContent(23,0.2046241);
   drjj->SetBinContent(24,0.7677278);
   drjj->SetBinContent(25,0.4240012);
   drjj->SetBinContent(26,1.638885);
   drjj->SetBinContent(27,0.9574417);
   drjj->SetBinContent(28,0.4902534);
   drjj->SetBinContent(29,0.2473154);
   drjj->SetBinContent(30,0.2078642);
   drjj->SetBinContent(32,0.08156856);
   drjj->SetBinError(22,0.05393247);
   drjj->SetBinError(23,0.1244397);
   drjj->SetBinError(24,0.2678073);
   drjj->SetBinError(25,0.2345842);
   drjj->SetBinError(26,0.4618778);
   drjj->SetBinError(27,0.4740293);
   drjj->SetBinError(28,0.2424348);
   drjj->SetBinError(29,0.1476282);
   drjj->SetBinError(30,0.1278663);
   drjj->SetBinError(32,0.08156856);
   drjj->SetEntries(57);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,0.2908961);
   drjj->SetBinContent(23,0.5371959);
   drjj->SetBinContent(24,0.658465);
   drjj->SetBinContent(25,0.5316781);
   drjj->SetBinContent(26,0.4819011);
   drjj->SetBinContent(27,0.3537408);
   drjj->SetBinContent(28,0.4041575);
   drjj->SetBinContent(29,0.2851378);
   drjj->SetBinContent(30,0.2312613);
   drjj->SetBinContent(31,0.09981517);
   drjj->SetBinContent(32,0.1015317);
   drjj->SetBinContent(33,0.04710447);
   drjj->SetBinContent(34,0.0005290813);
   drjj->SetBinContent(36,0.00640254);
   drjj->SetBinError(22,0.0625794);
   drjj->SetBinError(23,0.08047021);
   drjj->SetBinError(24,0.08856049);
   drjj->SetBinError(25,0.07816946);
   drjj->SetBinError(26,0.07370469);
   drjj->SetBinError(27,0.06316775);
   drjj->SetBinError(28,0.07008881);
   drjj->SetBinError(29,0.05755818);
   drjj->SetBinError(30,0.05302157);
   drjj->SetBinError(31,0.03452384);
   drjj->SetBinError(32,0.03522459);
   drjj->SetBinError(33,0.02431554);
   drjj->SetBinError(34,0.0005290812);
   drjj->SetBinError(36,0.006402541);
   drjj->SetEntries(413);
   drjj->SetStats(0);
   drjj->SetFillColor(3);
   drjj->SetLineColor(3);
   drjj->SetLineWidth(2);
   drjj->SetMarkerColor(3);
   drjj->SetMarkerStyle(21);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   stack->Add(drjj,"");
   stack->Draw("hist");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,67);
   drjj->SetBinContent(23,88);
   drjj->SetBinContent(24,79);
   drjj->SetBinContent(25,102);
   drjj->SetBinContent(26,79);
   drjj->SetBinContent(27,120);
   drjj->SetBinContent(28,73);
   drjj->SetBinContent(29,47);
   drjj->SetBinContent(30,53);
   drjj->SetBinContent(31,23);
   drjj->SetBinContent(32,20);
   drjj->SetBinContent(33,15);
   drjj->SetBinContent(34,14);
   drjj->SetBinContent(35,6);
   drjj->SetBinContent(36,1);
   drjj->SetBinContent(39,1);
   drjj->SetBinError(22,8.185353);
   drjj->SetBinError(23,9.380832);
   drjj->SetBinError(24,8.888194);
   drjj->SetBinError(25,10.0995);
   drjj->SetBinError(26,8.888194);
   drjj->SetBinError(27,10.95445);
   drjj->SetBinError(28,8.544004);
   drjj->SetBinError(29,6.855655);
   drjj->SetBinError(30,7.28011);
   drjj->SetBinError(31,4.795832);
   drjj->SetBinError(32,4.472136);
   drjj->SetBinError(33,3.872983);
   drjj->SetBinError(34,3.741657);
   drjj->SetBinError(35,2.44949);
   drjj->SetBinError(36,1);
   drjj->SetBinError(39,1);
   drjj->SetEntries(793);
   drjj->SetStats(0);
   drjj->SetFillColor(1);
   drjj->SetFillStyle(0);
   drjj->SetLineWidth(3);
   drjj->SetMarkerStyle(20);
   drjj->SetMarkerSize(1.3);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("SAMEPE1");
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,4.494207);
   drjj->SetBinContent(23,1.823475);
   drjj->SetBinContent(24,4.493001);
   drjj->SetBinContent(25,8.205635);
   drjj->SetBinContent(26,10.205);
   drjj->SetBinContent(27,5.586461);
   drjj->SetBinContent(28,8.194479);
   drjj->SetBinContent(29,5.959683);
   drjj->SetBinContent(30,4.804512);
   drjj->SetBinContent(31,3.868555);
   drjj->SetBinContent(32,2.518595);
   drjj->SetBinContent(33,0.9703757);
   drjj->SetBinContent(34,1.127516);
   drjj->SetBinContent(38,0.0001002615);
   drjj->SetBinError(22,1.334342);
   drjj->SetBinError(23,0.8170619);
   drjj->SetBinError(24,1.285133);
   drjj->SetBinError(25,1.725129);
   drjj->SetBinError(26,1.948829);
   drjj->SetBinError(27,1.373532);
   drjj->SetBinError(28,1.746889);
   drjj->SetBinError(29,1.43725);
   drjj->SetBinError(30,1.216866);
   drjj->SetBinError(31,1.236508);
   drjj->SetBinError(32,0.8944489);
   drjj->SetBinError(33,0.5763207);
   drjj->SetBinError(34,0.667481);
   drjj->SetBinError(38,0.0001002615);
   drjj->SetEntries(201);
   drjj->SetStats(0);
   drjj->SetFillColor(1);
   drjj->SetFillStyle(0);
   drjj->SetLineStyle(2);
   drjj->SetLineWidth(3);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.035);
   drjj->GetXaxis()->SetTitleSize(0.045);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.035);
   drjj->GetYaxis()->SetTitleSize(0.045);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(1.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_CJVfail");
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
   TLegendEntry *entry=leg->AddEntry("drjj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("drjj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","EWK W+jets","f");

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
   entry=leg->AddEntry("drjj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("drjj","Dibosons","f");
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
   lower->Range(-2.025316,-0.653951,10.63291,2.070845);
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
   
   TH1F *drjj = new TH1F("drjj","drjj",50,0,10);
   drjj->SetBinContent(22,1.967897);
   drjj->SetBinContent(23,1.731408);
   drjj->SetBinContent(24,1.174073);
   drjj->SetBinContent(25,1.601876);
   drjj->SetBinContent(26,1.060649);
   drjj->SetBinContent(27,1.652015);
   drjj->SetBinContent(28,1.106155);
   drjj->SetBinContent(29,0.993283);
   drjj->SetBinContent(30,1.388337);
   drjj->SetBinContent(31,1.144596);
   drjj->SetBinContent(32,1.477452);
   drjj->SetBinContent(33,3.267283);
   drjj->SetBinContent(34,2.665645);
   drjj->SetBinContent(35,6.813772);
   drjj->SetBinContent(36,7.389716);
   drjj->SetBinError(22,0.3204108);
   drjj->SetBinError(23,0.2396194);
   drjj->SetBinError(24,0.164799);
   drjj->SetBinError(25,0.2095663);
   drjj->SetBinError(26,0.1461106);
   drjj->SetBinError(27,0.203919);
   drjj->SetBinError(28,0.1593451);
   drjj->SetBinError(29,0.176112);
   drjj->SetBinError(30,0.2446262);
   drjj->SetBinError(31,0.2994174);
   drjj->SetBinError(32,0.4270961);
   drjj->SetBinError(33,1.155154);
   drjj->SetBinError(34,1.155104);
   drjj->SetBinError(35,5.006271);
   drjj->SetBinError(36,7.876982);
   drjj->SetMinimum(0);
   drjj->SetMaximum(2);
   drjj->SetEntries(13.87984);
   drjj->SetStats(0);
   drjj->SetFillStyle(0);
   drjj->SetMarkerStyle(20);
   drjj->SetMarkerSize(0.8);
   drjj->GetXaxis()->SetTitle("#Delta R_{jj}");
   drjj->GetXaxis()->SetLabelFont(42);
   drjj->GetXaxis()->SetLabelOffset(0.007);
   drjj->GetXaxis()->SetLabelSize(0.1);
   drjj->GetXaxis()->SetTitleSize(0.12);
   drjj->GetXaxis()->SetTickLength(0.02);
   drjj->GetXaxis()->SetTitleOffset(0.9);
   drjj->GetXaxis()->SetTitleFont(42);
   drjj->GetYaxis()->SetTitle("Data/MC");
   drjj->GetYaxis()->SetNdivisions(505);
   drjj->GetYaxis()->SetLabelFont(42);
   drjj->GetYaxis()->SetLabelOffset(0.007);
   drjj->GetYaxis()->SetLabelSize(0.1);
   drjj->GetYaxis()->SetTitleSize(0.12);
   drjj->GetYaxis()->SetTickLength(0.02);
   drjj->GetYaxis()->SetTitleOffset(0.55);
   drjj->GetYaxis()->SetTitleFont(42);
   drjj->GetZaxis()->SetLabelFont(42);
   drjj->GetZaxis()->SetLabelOffset(0.007);
   drjj->GetZaxis()->SetLabelSize(0.035);
   drjj->GetZaxis()->SetTitleSize(0.045);
   drjj->GetZaxis()->SetTickLength(0.02);
   drjj->GetZaxis()->SetTitleFont(42);
   drjj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
