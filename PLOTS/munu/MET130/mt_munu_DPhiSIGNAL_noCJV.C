{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:52:46 2013) by ROOT version5.32/00
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
   upper->Range(-85.06329,-6.974947,446.5823,341.7724);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
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
   stack->SetMaximum(308.8905);
   
   TH1F *mt_munu_stack_8 = new TH1F("mt_munu_stack_8","stack",25,0,500);
   mt_munu_stack_8->SetBinContent(1,2.567365);
   mt_munu_stack_8->SetBinContent(2,2.296211);
   mt_munu_stack_8->SetBinContent(3,4.115188);
   mt_munu_stack_8->SetBinContent(4,6.135144);
   mt_munu_stack_8->SetBinContent(5,2.484224);
   mt_munu_stack_8->SetBinContent(6,0.1227986);
   mt_munu_stack_8->SetBinContent(7,0.07745969);
   mt_munu_stack_8->SetBinError(1,2.226169);
   mt_munu_stack_8->SetBinError(2,1.07091);
   mt_munu_stack_8->SetBinError(3,2.350341);
   mt_munu_stack_8->SetBinError(4,3.250885);
   mt_munu_stack_8->SetBinError(5,2.024635);
   mt_munu_stack_8->SetBinError(6,0.08728389);
   mt_munu_stack_8->SetBinError(7,0.07745969);
   mt_munu_stack_8->SetMinimum(0);
   mt_munu_stack_8->SetMaximum(324.3351);
   mt_munu_stack_8->SetEntries(49);
   mt_munu_stack_8->SetStats(0);
   mt_munu_stack_8->SetFillColor(4);
   mt_munu_stack_8->SetLineColor(4);
   mt_munu_stack_8->SetLineWidth(2);
   mt_munu_stack_8->SetMarkerColor(4);
   mt_munu_stack_8->SetMarkerStyle(21);
   mt_munu_stack_8->SetMarkerSize(0.8);
   mt_munu_stack_8->GetXaxis()->SetTitle("m_{T}(#mu#nu) (GeV)");
   mt_munu_stack_8->GetXaxis()->SetRange(1,21);
   mt_munu_stack_8->GetXaxis()->SetLabelFont(42);
   mt_munu_stack_8->GetXaxis()->SetLabelOffset(0.007);
   mt_munu_stack_8->GetXaxis()->SetLabelSize(0);
   mt_munu_stack_8->GetXaxis()->SetTitleSize(0);
   mt_munu_stack_8->GetXaxis()->SetTickLength(0.02);
   mt_munu_stack_8->GetXaxis()->SetTitleOffset(0.9);
   mt_munu_stack_8->GetXaxis()->SetTitleFont(42);
   mt_munu_stack_8->GetYaxis()->SetTitle("Events");
   mt_munu_stack_8->GetYaxis()->SetLabelFont(42);
   mt_munu_stack_8->GetYaxis()->SetLabelOffset(0.007);
   mt_munu_stack_8->GetYaxis()->SetLabelSize(0.035);
   mt_munu_stack_8->GetYaxis()->SetTitleSize(0.045);
   mt_munu_stack_8->GetYaxis()->SetTickLength(0.02);
   mt_munu_stack_8->GetYaxis()->SetTitleOffset(1.55);
   mt_munu_stack_8->GetYaxis()->SetTitleFont(42);
   mt_munu_stack_8->GetZaxis()->SetLabelFont(42);
   mt_munu_stack_8->GetZaxis()->SetLabelOffset(0.007);
   mt_munu_stack_8->GetZaxis()->SetLabelSize(0.035);
   mt_munu_stack_8->GetZaxis()->SetTitleSize(0.045);
   mt_munu_stack_8->GetZaxis()->SetTickLength(0.02);
   mt_munu_stack_8->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mt_munu_stack_8);
   
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,2.567365);
   mt_munu->SetBinContent(2,2.296211);
   mt_munu->SetBinContent(3,4.115188);
   mt_munu->SetBinContent(4,6.135144);
   mt_munu->SetBinContent(5,2.484224);
   mt_munu->SetBinContent(6,0.1227986);
   mt_munu->SetBinContent(7,0.07745969);
   mt_munu->SetBinError(1,2.226169);
   mt_munu->SetBinError(2,1.07091);
   mt_munu->SetBinError(3,2.350341);
   mt_munu->SetBinError(4,3.250885);
   mt_munu->SetBinError(5,2.024635);
   mt_munu->SetBinError(6,0.08728389);
   mt_munu->SetBinError(7,0.07745969);
   mt_munu->SetMaximum(215.6);
   mt_munu->SetEntries(49);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(4);
   mt_munu->SetLineColor(4);
   mt_munu->SetLineWidth(2);
   mt_munu->SetMarkerColor(4);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetTitle("m_{T}(#mu#nu) (GeV)");
   mt_munu->GetXaxis()->SetRange(1,21);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0);
   mt_munu->GetXaxis()->SetTitleSize(0);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetTitle("Events");
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"HIST");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,16.65743);
   mt_munu->SetBinContent(2,19.68345);
   mt_munu->SetBinContent(3,20.71361);
   mt_munu->SetBinContent(4,12.57386);
   mt_munu->SetBinContent(5,13.56618);
   mt_munu->SetBinContent(6,5.013041);
   mt_munu->SetBinContent(7,1.190834);
   mt_munu->SetBinContent(8,0.1223661);
   mt_munu->SetBinContent(10,0.7029828);
   mt_munu->SetBinContent(16,0.7404525);
   mt_munu->SetBinError(1,3.370115);
   mt_munu->SetBinError(2,3.772924);
   mt_munu->SetBinError(3,3.942542);
   mt_munu->SetBinError(4,2.836651);
   mt_munu->SetBinError(5,3.032597);
   mt_munu->SetBinError(6,1.843329);
   mt_munu->SetBinError(7,0.9486135);
   mt_munu->SetBinError(8,0.1223661);
   mt_munu->SetBinError(10,0.7029828);
   mt_munu->SetBinError(16,0.7404525);
   mt_munu->SetEntries(165);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(5);
   mt_munu->SetLineColor(5);
   mt_munu->SetLineWidth(2);
   mt_munu->SetMarkerColor(5);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,58.05766);
   mt_munu->SetBinContent(2,68.55351);
   mt_munu->SetBinContent(3,83.00852);
   mt_munu->SetBinContent(4,92.57429);
   mt_munu->SetBinContent(5,62.06803);
   mt_munu->SetBinContent(6,22.60543);
   mt_munu->SetBinContent(7,2.03032);
   mt_munu->SetBinContent(8,2.999649);
   mt_munu->SetBinContent(9,3.308358);
   mt_munu->SetBinContent(10,1.144773);
   mt_munu->SetBinContent(12,0.4315851);
   mt_munu->SetBinContent(19,0.8355153);
   mt_munu->SetBinError(1,6.542658);
   mt_munu->SetBinError(2,8.656711);
   mt_munu->SetBinError(3,9.167008);
   mt_munu->SetBinError(4,8.20204);
   mt_munu->SetBinError(5,6.656175);
   mt_munu->SetBinError(6,3.785743);
   mt_munu->SetBinError(7,0.8439649);
   mt_munu->SetBinError(8,1.334541);
   mt_munu->SetBinError(9,1.780011);
   mt_munu->SetBinError(10,0.9245685);
   mt_munu->SetBinError(12,0.4315851);
   mt_munu->SetBinError(19,0.8355153);
   mt_munu->SetEntries(732);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(6);
   mt_munu->SetLineColor(6);
   mt_munu->SetLineWidth(2);
   mt_munu->SetMarkerColor(6);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,18.54813);
   mt_munu->SetBinContent(2,18.89074);
   mt_munu->SetBinContent(3,20.37516);
   mt_munu->SetBinContent(4,26.94947);
   mt_munu->SetBinContent(5,14.74062);
   mt_munu->SetBinContent(6,3.852793);
   mt_munu->SetBinContent(7,1.58394);
   mt_munu->SetBinContent(8,0.844274);
   mt_munu->SetBinContent(9,0.4214846);
   mt_munu->SetBinContent(10,0.2451217);
   mt_munu->SetBinContent(11,0.178255);
   mt_munu->SetBinContent(12,0.054903);
   mt_munu->SetBinContent(13,0.08711056);
   mt_munu->SetBinContent(14,0.02513778);
   mt_munu->SetBinContent(15,0.02078217);
   mt_munu->SetBinContent(16,0.05826616);
   mt_munu->SetBinContent(17,0.01268263);
   mt_munu->SetBinContent(20,0.0308195);
   mt_munu->SetBinContent(22,0.01621699);
   mt_munu->SetBinContent(26,0.02148833);
   mt_munu->SetBinError(1,0.6166687);
   mt_munu->SetBinError(2,0.6241609);
   mt_munu->SetBinError(3,0.6464825);
   mt_munu->SetBinError(4,0.7500083);
   mt_munu->SetBinError(5,0.5528384);
   mt_munu->SetBinError(6,0.2799792);
   mt_munu->SetBinError(7,0.176357);
   mt_munu->SetBinError(8,0.1302362);
   mt_munu->SetBinError(9,0.09406212);
   mt_munu->SetBinError(10,0.06819127);
   mt_munu->SetBinError(11,0.05978422);
   mt_munu->SetBinError(12,0.03184995);
   mt_munu->SetBinError(13,0.03997195);
   mt_munu->SetBinError(14,0.01829994);
   mt_munu->SetBinError(15,0.02078217);
   mt_munu->SetBinError(16,0.03511118);
   mt_munu->SetBinError(17,0.01268263);
   mt_munu->SetBinError(20,0.0308195);
   mt_munu->SetBinError(22,0.01621699);
   mt_munu->SetBinError(26,0.02148833);
   mt_munu->SetEntries(5990);
   mt_munu->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mt_munu->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mt_munu->SetLineColor(ci);
   mt_munu->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mt_munu->SetMarkerColor(ci);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(3);
   mt_munu->SetLineColor(3);
   mt_munu->SetLineWidth(2);
   mt_munu->SetMarkerColor(3);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,7.859348);
   mt_munu->SetBinContent(2,2.585185);
   mt_munu->SetBinContent(3,2.526745);
   mt_munu->SetBinContent(4,1.964183);
   mt_munu->SetBinContent(5,0.7535284);
   mt_munu->SetBinContent(6,0.1818217);
   mt_munu->SetBinContent(7,0.4959661);
   mt_munu->SetBinContent(8,0.1233332);
   mt_munu->SetBinContent(9,0.1485345);
   mt_munu->SetBinContent(10,0.008969828);
   mt_munu->SetBinContent(13,0.08905105);
   mt_munu->SetBinContent(14,0.03092254);
   mt_munu->SetBinError(1,1.097175);
   mt_munu->SetBinError(2,0.6422596);
   mt_munu->SetBinError(3,0.544563);
   mt_munu->SetBinError(4,0.4780478);
   mt_munu->SetBinError(5,0.2834059);
   mt_munu->SetBinError(6,0.1818217);
   mt_munu->SetBinError(7,0.2594965);
   mt_munu->SetBinError(8,0.110905);
   mt_munu->SetBinError(9,0.1062748);
   mt_munu->SetBinError(10,0.008969828);
   mt_munu->SetBinError(13,0.08905104);
   mt_munu->SetBinError(14,0.02887227);
   mt_munu->SetEntries(174);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(3);
   mt_munu->SetLineColor(3);
   mt_munu->SetLineWidth(2);
   mt_munu->SetMarkerColor(3);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,2.640434);
   mt_munu->SetBinContent(2,0.8956264);
   mt_munu->SetBinContent(3,0.2883712);
   mt_munu->SetBinContent(4,0.2078411);
   mt_munu->SetBinContent(5,0.1261434);
   mt_munu->SetBinContent(6,0.07722841);
   mt_munu->SetBinContent(7,0.08609956);
   mt_munu->SetBinContent(8,0.04160444);
   mt_munu->SetBinContent(9,0.03259202);
   mt_munu->SetBinContent(10,0.01975436);
   mt_munu->SetBinContent(12,0.01448864);
   mt_munu->SetBinContent(13,0.006486461);
   mt_munu->SetBinContent(14,0.006793298);
   mt_munu->SetBinError(1,0.1693729);
   mt_munu->SetBinError(2,0.094327);
   mt_munu->SetBinError(3,0.04395711);
   mt_munu->SetBinError(4,0.03623672);
   mt_munu->SetBinError(5,0.02914705);
   mt_munu->SetBinError(6,0.02234853);
   mt_munu->SetBinError(7,0.02372669);
   mt_munu->SetBinError(8,0.01635723);
   mt_munu->SetBinError(9,0.0143811);
   mt_munu->SetBinError(10,0.01229913);
   mt_munu->SetBinError(12,0.009528993);
   mt_munu->SetBinError(13,0.006486461);
   mt_munu->SetBinError(14,0.006793298);
   mt_munu->SetEntries(592);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(3);
   mt_munu->SetLineColor(3);
   mt_munu->SetLineWidth(2);
   mt_munu->SetMarkerColor(3);
   mt_munu->SetMarkerStyle(21);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   stack->Add(mt_munu,"");
   stack->Draw("hist");
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,81);
   mt_munu->SetBinContent(2,69);
   mt_munu->SetBinContent(3,93);
   mt_munu->SetBinContent(4,98);
   mt_munu->SetBinContent(5,57);
   mt_munu->SetBinContent(6,15);
   mt_munu->SetBinContent(7,5);
   mt_munu->SetBinContent(8,4);
   mt_munu->SetBinContent(9,1);
   mt_munu->SetBinContent(10,1);
   mt_munu->SetBinContent(11,2);
   mt_munu->SetBinContent(13,2);
   mt_munu->SetBinContent(14,1);
   mt_munu->SetBinContent(15,3);
   mt_munu->SetBinError(1,9);
   mt_munu->SetBinError(2,8.306624);
   mt_munu->SetBinError(3,9.643651);
   mt_munu->SetBinError(4,9.899495);
   mt_munu->SetBinError(5,7.549834);
   mt_munu->SetBinError(6,3.872983);
   mt_munu->SetBinError(7,2.236068);
   mt_munu->SetBinError(8,2);
   mt_munu->SetBinError(9,1);
   mt_munu->SetBinError(10,1);
   mt_munu->SetBinError(11,1.414214);
   mt_munu->SetBinError(13,1.414214);
   mt_munu->SetBinError(14,1);
   mt_munu->SetBinError(15,1.732051);
   mt_munu->SetEntries(432);
   mt_munu->SetStats(0);
   mt_munu->SetFillColor(1);
   mt_munu->SetFillStyle(0);
   mt_munu->SetLineWidth(3);
   mt_munu->SetMarkerStyle(20);
   mt_munu->SetMarkerSize(1.3);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.035);
   mt_munu->GetXaxis()->SetTitleSize(0.045);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.035);
   mt_munu->GetYaxis()->SetTitleSize(0.045);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(1.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   mt_munu->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_noCJV");
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
   TLegendEntry *entry=leg->AddEntry("mt_munu","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mt_munu","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_munu","EWK W+jets","f");

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
   entry=leg->AddEntry("mt_munu","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_munu","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mt_munu","Dibosons","f");
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
   lower->Range(-85.06329,-0.653951,446.5823,2.070845);
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
   
   TH1F *mt_munu = new TH1F("mt_munu","mt_munu",25,0,500);
   mt_munu->SetBinContent(1,0.7806251);
   mt_munu->SetBinContent(2,0.6238218);
   mt_munu->SetBinContent(3,0.7327889);
   mt_munu->SetBinContent(4,0.7298746);
   mt_munu->SetBinContent(5,0.6246267);
   mt_munu->SetBinContent(6,0.4727341);
   mt_munu->SetBinContent(7,0.928133);
   mt_munu->SetBinContent(8,0.9682356);
   mt_munu->SetBinContent(9,0.2556911);
   mt_munu->SetBinContent(10,0.4713421);
   mt_munu->SetBinContent(11,11.21988);
   mt_munu->SetBinContent(13,10.95002);
   mt_munu->SetBinContent(14,15.90998);
   mt_munu->SetBinContent(15,144.3545);
   mt_munu->SetBinError(1,0.1033441);
   mt_munu->SetBinError(2,0.0922073);
   mt_munu->SetBinError(3,0.09548641);
   mt_munu->SetBinError(4,0.08766368);
   mt_munu->SetBinError(5,0.0967971);
   mt_munu->SetBinError(6,0.1373271);
   mt_munu->SetBinError(7,0.4723107);
   mt_munu->SetBinError(8,0.5784839);
   mt_munu->SetBinError(9,0.2810831);
   mt_munu->SetBinError(10,0.537575);
   mt_munu->SetBinError(11,8.78083);
   mt_munu->SetBinError(13,9.713263);
   mt_munu->SetBinError(14,18.19215);
   mt_munu->SetBinError(15,166.6863);
   mt_munu->SetMinimum(0);
   mt_munu->SetMaximum(2);
   mt_munu->SetEntries(1.263073);
   mt_munu->SetStats(0);
   mt_munu->SetFillStyle(0);
   mt_munu->SetMarkerStyle(20);
   mt_munu->SetMarkerSize(0.8);
   mt_munu->GetXaxis()->SetTitle("m_{T}(#mu#nu) (GeV)");
   mt_munu->GetXaxis()->SetRange(1,21);
   mt_munu->GetXaxis()->SetLabelFont(42);
   mt_munu->GetXaxis()->SetLabelOffset(0.007);
   mt_munu->GetXaxis()->SetLabelSize(0.1);
   mt_munu->GetXaxis()->SetTitleSize(0.12);
   mt_munu->GetXaxis()->SetTickLength(0.02);
   mt_munu->GetXaxis()->SetTitleOffset(0.9);
   mt_munu->GetXaxis()->SetTitleFont(42);
   mt_munu->GetYaxis()->SetTitle("Data/MC");
   mt_munu->GetYaxis()->SetNdivisions(505);
   mt_munu->GetYaxis()->SetLabelFont(42);
   mt_munu->GetYaxis()->SetLabelOffset(0.007);
   mt_munu->GetYaxis()->SetLabelSize(0.1);
   mt_munu->GetYaxis()->SetTitleSize(0.12);
   mt_munu->GetYaxis()->SetTickLength(0.02);
   mt_munu->GetYaxis()->SetTitleOffset(0.55);
   mt_munu->GetYaxis()->SetTitleFont(42);
   mt_munu->GetZaxis()->SetLabelFont(42);
   mt_munu->GetZaxis()->SetLabelOffset(0.007);
   mt_munu->GetZaxis()->SetLabelSize(0.035);
   mt_munu->GetZaxis()->SetTitleSize(0.045);
   mt_munu->GetZaxis()->SetTickLength(0.02);
   mt_munu->GetZaxis()->SetTitleFont(42);
   mt_munu->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
