{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:51:28 2013) by ROOT version5.32/00
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
   upper->Range(-0.9316455,-2.747849,4.891139,4.665709);
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
   stack->SetMaximum(9003.505);
   
   TH1F *dRmin_taujet_stack_2 = new TH1F("dRmin_taujet_stack_2","stack",50,0,10);
   dRmin_taujet_stack_2->SetBinContent(1,0.8696375);
   dRmin_taujet_stack_2->SetBinContent(3,0.080092);
   dRmin_taujet_stack_2->SetBinContent(5,0.5436684);
   dRmin_taujet_stack_2->SetBinContent(6,0.01926361);
   dRmin_taujet_stack_2->SetBinContent(7,0.180571);
   dRmin_taujet_stack_2->SetBinContent(8,0.07792138);
   dRmin_taujet_stack_2->SetBinContent(9,0.1032665);
   dRmin_taujet_stack_2->SetBinContent(10,0.3501994);
   dRmin_taujet_stack_2->SetBinContent(11,4.817388);
   dRmin_taujet_stack_2->SetBinContent(12,0.3934067);
   dRmin_taujet_stack_2->SetBinContent(13,0.2698461);
   dRmin_taujet_stack_2->SetBinContent(14,0.07199773);
   dRmin_taujet_stack_2->SetBinContent(15,0.5823256);
   dRmin_taujet_stack_2->SetBinContent(16,0.2593867);
   dRmin_taujet_stack_2->SetBinContent(17,0.1192902);
   dRmin_taujet_stack_2->SetBinContent(20,0.07066008);
   dRmin_taujet_stack_2->SetBinContent(23,0.1527645);
   dRmin_taujet_stack_2->SetBinContent(51,356.8594);
   dRmin_taujet_stack_2->SetBinError(1,0.18121);
   dRmin_taujet_stack_2->SetBinError(3,0.080092);
   dRmin_taujet_stack_2->SetBinError(5,0.3309263);
   dRmin_taujet_stack_2->SetBinError(6,0.01387933);
   dRmin_taujet_stack_2->SetBinError(7,0.08209763);
   dRmin_taujet_stack_2->SetBinError(8,0.04806608);
   dRmin_taujet_stack_2->SetBinError(9,0.05126126);
   dRmin_taujet_stack_2->SetBinError(10,0.1235363);
   dRmin_taujet_stack_2->SetBinError(11,2.508261);
   dRmin_taujet_stack_2->SetBinError(12,0.1795337);
   dRmin_taujet_stack_2->SetBinError(13,0.1390632);
   dRmin_taujet_stack_2->SetBinError(14,0.05644147);
   dRmin_taujet_stack_2->SetBinError(15,0.4512066);
   dRmin_taujet_stack_2->SetBinError(16,0.1193494);
   dRmin_taujet_stack_2->SetBinError(17,0.06519171);
   dRmin_taujet_stack_2->SetBinError(20,0.04788817);
   dRmin_taujet_stack_2->SetBinError(23,0.08915888);
   dRmin_taujet_stack_2->SetBinError(51,16.5036);
   dRmin_taujet_stack_2->SetMinimum(0.002514328);
   dRmin_taujet_stack_2->SetMaximum(19725.62);
   dRmin_taujet_stack_2->SetEntries(6575);
   dRmin_taujet_stack_2->SetStats(0);
   dRmin_taujet_stack_2->SetFillColor(4);
   dRmin_taujet_stack_2->SetLineColor(4);
   dRmin_taujet_stack_2->SetLineWidth(2);
   dRmin_taujet_stack_2->SetMarkerColor(4);
   dRmin_taujet_stack_2->SetMarkerStyle(21);
   dRmin_taujet_stack_2->SetMarkerSize(0.8);
   dRmin_taujet_stack_2->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet_stack_2->GetXaxis()->SetRange(1,23);
   dRmin_taujet_stack_2->GetXaxis()->SetLabelFont(42);
   dRmin_taujet_stack_2->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_2->GetXaxis()->SetLabelSize(0);
   dRmin_taujet_stack_2->GetXaxis()->SetTitleSize(0);
   dRmin_taujet_stack_2->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_2->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet_stack_2->GetXaxis()->SetTitleFont(42);
   dRmin_taujet_stack_2->GetYaxis()->SetTitle("Events");
   dRmin_taujet_stack_2->GetYaxis()->SetLabelFont(42);
   dRmin_taujet_stack_2->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_2->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_2->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_2->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_2->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet_stack_2->GetYaxis()->SetTitleFont(42);
   dRmin_taujet_stack_2->GetZaxis()->SetLabelFont(42);
   dRmin_taujet_stack_2->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet_stack_2->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet_stack_2->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet_stack_2->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet_stack_2->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(dRmin_taujet_stack_2);
   
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.8696375);
   dRmin_taujet->SetBinContent(3,0.080092);
   dRmin_taujet->SetBinContent(5,0.5436684);
   dRmin_taujet->SetBinContent(6,0.01926361);
   dRmin_taujet->SetBinContent(7,0.180571);
   dRmin_taujet->SetBinContent(8,0.07792138);
   dRmin_taujet->SetBinContent(9,0.1032665);
   dRmin_taujet->SetBinContent(10,0.3501994);
   dRmin_taujet->SetBinContent(11,4.817388);
   dRmin_taujet->SetBinContent(12,0.3934067);
   dRmin_taujet->SetBinContent(13,0.2698461);
   dRmin_taujet->SetBinContent(14,0.07199773);
   dRmin_taujet->SetBinContent(15,0.5823256);
   dRmin_taujet->SetBinContent(16,0.2593867);
   dRmin_taujet->SetBinContent(17,0.1192902);
   dRmin_taujet->SetBinContent(20,0.07066008);
   dRmin_taujet->SetBinContent(23,0.1527645);
   dRmin_taujet->SetBinContent(51,356.8594);
   dRmin_taujet->SetBinError(1,0.18121);
   dRmin_taujet->SetBinError(3,0.080092);
   dRmin_taujet->SetBinError(5,0.3309263);
   dRmin_taujet->SetBinError(6,0.01387933);
   dRmin_taujet->SetBinError(7,0.08209763);
   dRmin_taujet->SetBinError(8,0.04806608);
   dRmin_taujet->SetBinError(9,0.05126126);
   dRmin_taujet->SetBinError(10,0.1235363);
   dRmin_taujet->SetBinError(11,2.508261);
   dRmin_taujet->SetBinError(12,0.1795337);
   dRmin_taujet->SetBinError(13,0.1390632);
   dRmin_taujet->SetBinError(14,0.05644147);
   dRmin_taujet->SetBinError(15,0.4512066);
   dRmin_taujet->SetBinError(16,0.1193494);
   dRmin_taujet->SetBinError(17,0.06519171);
   dRmin_taujet->SetBinError(20,0.04788817);
   dRmin_taujet->SetBinError(23,0.08915888);
   dRmin_taujet->SetBinError(51,16.5036);
   dRmin_taujet->SetMinimum(0.01);
   dRmin_taujet->SetMaximum(6433.197);
   dRmin_taujet->SetEntries(6575);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(4);
   dRmin_taujet->SetLineColor(4);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(4);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0);
   dRmin_taujet->GetXaxis()->SetTitleSize(0);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Events");
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"HIST");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,9.066754);
   dRmin_taujet->SetBinContent(4,1.31368);
   dRmin_taujet->SetBinContent(5,3.490642);
   dRmin_taujet->SetBinContent(6,4.174696);
   dRmin_taujet->SetBinContent(7,4.311289);
   dRmin_taujet->SetBinContent(8,4.498309);
   dRmin_taujet->SetBinContent(9,4.627924);
   dRmin_taujet->SetBinContent(10,3.261941);
   dRmin_taujet->SetBinContent(11,4.230178);
   dRmin_taujet->SetBinContent(12,3.751972);
   dRmin_taujet->SetBinContent(13,4.583545);
   dRmin_taujet->SetBinContent(14,5.143599);
   dRmin_taujet->SetBinContent(15,4.12008);
   dRmin_taujet->SetBinContent(16,1.804204);
   dRmin_taujet->SetBinContent(17,1.851552);
   dRmin_taujet->SetBinContent(18,0.5088478);
   dRmin_taujet->SetBinContent(19,0.1662749);
   dRmin_taujet->SetBinContent(20,0.6173198);
   dRmin_taujet->SetBinContent(51,2302.073);
   dRmin_taujet->SetBinError(1,1.455902);
   dRmin_taujet->SetBinError(4,0.5744304);
   dRmin_taujet->SetBinError(5,0.908972);
   dRmin_taujet->SetBinError(6,1.018206);
   dRmin_taujet->SetBinError(7,1.014666);
   dRmin_taujet->SetBinError(8,1.183592);
   dRmin_taujet->SetBinError(9,1.277504);
   dRmin_taujet->SetBinError(10,0.840548);
   dRmin_taujet->SetBinError(11,1.190936);
   dRmin_taujet->SetBinError(12,1.054786);
   dRmin_taujet->SetBinError(13,1.339194);
   dRmin_taujet->SetBinError(14,1.414089);
   dRmin_taujet->SetBinError(15,1.548886);
   dRmin_taujet->SetBinError(16,0.753241);
   dRmin_taujet->SetBinError(17,0.8396496);
   dRmin_taujet->SetBinError(18,0.3670944);
   dRmin_taujet->SetBinError(19,0.1662749);
   dRmin_taujet->SetBinError(20,0.437968);
   dRmin_taujet->SetBinError(51,27.89075);
   dRmin_taujet->SetEntries(15029);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(5);
   dRmin_taujet->SetLineColor(5);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(5);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,42.88798);
   dRmin_taujet->SetBinContent(3,1.181553);
   dRmin_taujet->SetBinContent(4,4.773625);
   dRmin_taujet->SetBinContent(5,4.44169);
   dRmin_taujet->SetBinContent(6,8.059518);
   dRmin_taujet->SetBinContent(7,12.97753);
   dRmin_taujet->SetBinContent(8,13.46846);
   dRmin_taujet->SetBinContent(9,7.124424);
   dRmin_taujet->SetBinContent(10,7.648036);
   dRmin_taujet->SetBinContent(11,10.11362);
   dRmin_taujet->SetBinContent(12,8.461123);
   dRmin_taujet->SetBinContent(13,17.84877);
   dRmin_taujet->SetBinContent(14,15.71707);
   dRmin_taujet->SetBinContent(15,8.620156);
   dRmin_taujet->SetBinContent(16,10.80452);
   dRmin_taujet->SetBinContent(17,1.980905);
   dRmin_taujet->SetBinContent(18,2.32426);
   dRmin_taujet->SetBinContent(19,1.601855);
   dRmin_taujet->SetBinContent(20,1.978588);
   dRmin_taujet->SetBinContent(21,0.5226719);
   dRmin_taujet->SetBinContent(22,0.77758);
   dRmin_taujet->SetBinContent(24,0.2744946);
   dRmin_taujet->SetBinContent(25,0.03863181);
   dRmin_taujet->SetBinContent(26,1.156418);
   dRmin_taujet->SetBinContent(27,0.007148486);
   dRmin_taujet->SetBinContent(31,0.2455618);
   dRmin_taujet->SetBinContent(51,10804);
   dRmin_taujet->SetBinError(1,7.615215);
   dRmin_taujet->SetBinError(3,0.4782252);
   dRmin_taujet->SetBinError(4,1.182257);
   dRmin_taujet->SetBinError(5,0.9978505);
   dRmin_taujet->SetBinError(6,2.486647);
   dRmin_taujet->SetBinError(7,4.820886);
   dRmin_taujet->SetBinError(8,3.381381);
   dRmin_taujet->SetBinError(9,1.738352);
   dRmin_taujet->SetBinError(10,1.857009);
   dRmin_taujet->SetBinError(11,1.936746);
   dRmin_taujet->SetBinError(12,1.695162);
   dRmin_taujet->SetBinError(13,4.256971);
   dRmin_taujet->SetBinError(14,4.903127);
   dRmin_taujet->SetBinError(15,2.039095);
   dRmin_taujet->SetBinError(16,2.603641);
   dRmin_taujet->SetBinError(17,0.5321587);
   dRmin_taujet->SetBinError(18,0.6355644);
   dRmin_taujet->SetBinError(19,0.6910487);
   dRmin_taujet->SetBinError(20,0.8134328);
   dRmin_taujet->SetBinError(21,0.2648179);
   dRmin_taujet->SetBinError(22,0.4082157);
   dRmin_taujet->SetBinError(24,0.2022777);
   dRmin_taujet->SetBinError(25,0.03863181);
   dRmin_taujet->SetBinError(26,1.139042);
   dRmin_taujet->SetBinError(27,0.007148486);
   dRmin_taujet->SetBinError(31,0.2455618);
   dRmin_taujet->SetBinError(51,119.2689);
   dRmin_taujet->SetEntries(53439);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(6);
   dRmin_taujet->SetLineColor(6);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(6);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,1.767136);
   dRmin_taujet->SetBinContent(3,0.02711418);
   dRmin_taujet->SetBinContent(4,0.06572324);
   dRmin_taujet->SetBinContent(5,0.1877929);
   dRmin_taujet->SetBinContent(6,0.3455333);
   dRmin_taujet->SetBinContent(7,0.3019844);
   dRmin_taujet->SetBinContent(8,0.2750167);
   dRmin_taujet->SetBinContent(9,0.2137134);
   dRmin_taujet->SetBinContent(10,0.3804418);
   dRmin_taujet->SetBinContent(11,0.4880207);
   dRmin_taujet->SetBinContent(12,0.4171364);
   dRmin_taujet->SetBinContent(13,0.4593796);
   dRmin_taujet->SetBinContent(14,0.4661319);
   dRmin_taujet->SetBinContent(15,0.5986806);
   dRmin_taujet->SetBinContent(16,0.5574774);
   dRmin_taujet->SetBinContent(17,0.3367317);
   dRmin_taujet->SetBinContent(18,0.1335582);
   dRmin_taujet->SetBinContent(19,0.04811275);
   dRmin_taujet->SetBinContent(20,0.01885236);
   dRmin_taujet->SetBinContent(21,0.004303376);
   dRmin_taujet->SetBinContent(22,0.002035876);
   dRmin_taujet->SetBinContent(24,0.00101297);
   dRmin_taujet->SetBinContent(51,800.3356);
   dRmin_taujet->SetBinError(1,0.1531342);
   dRmin_taujet->SetBinError(3,0.01867147);
   dRmin_taujet->SetBinError(4,0.0251218);
   dRmin_taujet->SetBinError(5,0.04531896);
   dRmin_taujet->SetBinError(6,0.06404366);
   dRmin_taujet->SetBinError(7,0.05748091);
   dRmin_taujet->SetBinError(8,0.06044755);
   dRmin_taujet->SetBinError(9,0.04894747);
   dRmin_taujet->SetBinError(10,0.07048563);
   dRmin_taujet->SetBinError(11,0.08085723);
   dRmin_taujet->SetBinError(12,0.07279982);
   dRmin_taujet->SetBinError(13,0.07402694);
   dRmin_taujet->SetBinError(14,0.07407713);
   dRmin_taujet->SetBinError(15,0.09109283);
   dRmin_taujet->SetBinError(16,0.08614144);
   dRmin_taujet->SetBinError(17,0.07379879);
   dRmin_taujet->SetBinError(18,0.0411437);
   dRmin_taujet->SetBinError(19,0.02022136);
   dRmin_taujet->SetBinError(20,0.01234996);
   dRmin_taujet->SetBinError(21,0.004178087);
   dRmin_taujet->SetBinError(22,0.002035875);
   dRmin_taujet->SetBinError(24,0.00101297);
   dRmin_taujet->SetBinError(51,3.433194);
   dRmin_taujet->SetEntries(85854);
   dRmin_taujet->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetLineColor(ci);
   dRmin_taujet->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   dRmin_taujet->SetMarkerColor(ci);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.363401);
   dRmin_taujet->SetBinContent(17,0.04427262);
   dRmin_taujet->SetBinContent(51,1.511071);
   dRmin_taujet->SetBinError(1,0.3173968);
   dRmin_taujet->SetBinError(17,0.04417161);
   dRmin_taujet->SetBinError(51,0.3611696);
   dRmin_taujet->SetEntries(35);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,4.839268);
   dRmin_taujet->SetBinContent(3,0.1032643);
   dRmin_taujet->SetBinContent(4,0.1284253);
   dRmin_taujet->SetBinContent(5,0.4468114);
   dRmin_taujet->SetBinContent(6,0.7153929);
   dRmin_taujet->SetBinContent(7,0.217521);
   dRmin_taujet->SetBinContent(8,0.4804562);
   dRmin_taujet->SetBinContent(9,0.531824);
   dRmin_taujet->SetBinContent(10,1.147553);
   dRmin_taujet->SetBinContent(11,0.5417467);
   dRmin_taujet->SetBinContent(12,0.7932095);
   dRmin_taujet->SetBinContent(13,1.043755);
   dRmin_taujet->SetBinContent(14,0.9481862);
   dRmin_taujet->SetBinContent(15,1.145896);
   dRmin_taujet->SetBinContent(16,2.329469);
   dRmin_taujet->SetBinContent(17,0.3342251);
   dRmin_taujet->SetBinContent(18,0.1941954);
   dRmin_taujet->SetBinContent(19,0.0264375);
   dRmin_taujet->SetBinContent(20,0.03507);
   dRmin_taujet->SetBinContent(21,0.01898337);
   dRmin_taujet->SetBinContent(23,0.0219618);
   dRmin_taujet->SetBinContent(51,163.8037);
   dRmin_taujet->SetBinError(1,0.7942164);
   dRmin_taujet->SetBinError(3,0.07401411);
   dRmin_taujet->SetBinError(4,0.06894341);
   dRmin_taujet->SetBinError(5,0.177093);
   dRmin_taujet->SetBinError(6,0.1966536);
   dRmin_taujet->SetBinError(7,0.09113046);
   dRmin_taujet->SetBinError(8,0.1584271);
   dRmin_taujet->SetBinError(9,0.1738278);
   dRmin_taujet->SetBinError(10,0.3359087);
   dRmin_taujet->SetBinError(11,0.1660264);
   dRmin_taujet->SetBinError(12,0.4273607);
   dRmin_taujet->SetBinError(13,0.3051057);
   dRmin_taujet->SetBinError(14,0.2542527);
   dRmin_taujet->SetBinError(15,0.2819604);
   dRmin_taujet->SetBinError(16,0.9219025);
   dRmin_taujet->SetBinError(17,0.1561356);
   dRmin_taujet->SetBinError(18,0.08946462);
   dRmin_taujet->SetBinError(19,0.0264375);
   dRmin_taujet->SetBinError(20,0.0334175);
   dRmin_taujet->SetBinError(21,0.01898337);
   dRmin_taujet->SetBinError(23,0.02171412);
   dRmin_taujet->SetBinError(51,4.898471);
   dRmin_taujet->SetEntries(6404);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.2291931);
   dRmin_taujet->SetBinContent(4,0.0228755);
   dRmin_taujet->SetBinContent(5,0.003110787);
   dRmin_taujet->SetBinContent(6,0.009834542);
   dRmin_taujet->SetBinContent(7,0.01517303);
   dRmin_taujet->SetBinContent(8,0.03557635);
   dRmin_taujet->SetBinContent(9,0.05963982);
   dRmin_taujet->SetBinContent(10,0.05379364);
   dRmin_taujet->SetBinContent(11,0.09888684);
   dRmin_taujet->SetBinContent(12,0.07677469);
   dRmin_taujet->SetBinContent(13,0.06647378);
   dRmin_taujet->SetBinContent(14,0.1292323);
   dRmin_taujet->SetBinContent(15,0.1434474);
   dRmin_taujet->SetBinContent(16,0.1049571);
   dRmin_taujet->SetBinContent(17,0.1021935);
   dRmin_taujet->SetBinContent(18,0.06960963);
   dRmin_taujet->SetBinContent(19,0.008283976);
   dRmin_taujet->SetBinContent(20,0.003353324);
   dRmin_taujet->SetBinContent(22,0.002044181);
   dRmin_taujet->SetBinContent(51,9.290195);
   dRmin_taujet->SetBinError(1,0.0259625);
   dRmin_taujet->SetBinError(4,0.01035127);
   dRmin_taujet->SetBinError(5,0.003026242);
   dRmin_taujet->SetBinError(6,0.004292606);
   dRmin_taujet->SetBinError(7,0.007801618);
   dRmin_taujet->SetBinError(8,0.01197092);
   dRmin_taujet->SetBinError(9,0.01623866);
   dRmin_taujet->SetBinError(10,0.01583739);
   dRmin_taujet->SetBinError(11,0.0206648);
   dRmin_taujet->SetBinError(12,0.02079653);
   dRmin_taujet->SetBinError(13,0.01684447);
   dRmin_taujet->SetBinError(14,0.02384557);
   dRmin_taujet->SetBinError(15,0.02655077);
   dRmin_taujet->SetBinError(16,0.02281683);
   dRmin_taujet->SetBinError(17,0.02403234);
   dRmin_taujet->SetBinError(18,0.01929767);
   dRmin_taujet->SetBinError(19,0.006480514);
   dRmin_taujet->SetBinError(20,0.003353324);
   dRmin_taujet->SetBinError(22,0.002044181);
   dRmin_taujet->SetBinError(51,0.2083606);
   dRmin_taujet->SetEntries(3584);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(3);
   dRmin_taujet->SetLineColor(3);
   dRmin_taujet->SetLineWidth(2);
   dRmin_taujet->SetMarkerColor(3);
   dRmin_taujet->SetMarkerStyle(21);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   stack->Add(dRmin_taujet,"");
   stack->Draw("hist");
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,31);
   dRmin_taujet->SetBinContent(4,11);
   dRmin_taujet->SetBinContent(5,10);
   dRmin_taujet->SetBinContent(6,16);
   dRmin_taujet->SetBinContent(7,5);
   dRmin_taujet->SetBinContent(8,11);
   dRmin_taujet->SetBinContent(9,10);
   dRmin_taujet->SetBinContent(10,15);
   dRmin_taujet->SetBinContent(11,11);
   dRmin_taujet->SetBinContent(12,6);
   dRmin_taujet->SetBinContent(13,13);
   dRmin_taujet->SetBinContent(14,11);
   dRmin_taujet->SetBinContent(15,20);
   dRmin_taujet->SetBinContent(16,6);
   dRmin_taujet->SetBinContent(17,6);
   dRmin_taujet->SetBinContent(18,4);
   dRmin_taujet->SetBinContent(19,3);
   dRmin_taujet->SetBinContent(20,1);
   dRmin_taujet->SetBinContent(21,1);
   dRmin_taujet->SetBinContent(22,1);
   dRmin_taujet->SetBinContent(23,1);
   dRmin_taujet->SetBinContent(24,2);
   dRmin_taujet->SetBinContent(25,1);
   dRmin_taujet->SetBinContent(51,8950);
   dRmin_taujet->SetBinError(1,5.567764);
   dRmin_taujet->SetBinError(4,3.316625);
   dRmin_taujet->SetBinError(5,3.162278);
   dRmin_taujet->SetBinError(6,4);
   dRmin_taujet->SetBinError(7,2.236068);
   dRmin_taujet->SetBinError(8,3.316625);
   dRmin_taujet->SetBinError(9,3.162278);
   dRmin_taujet->SetBinError(10,3.872983);
   dRmin_taujet->SetBinError(11,3.316625);
   dRmin_taujet->SetBinError(12,2.44949);
   dRmin_taujet->SetBinError(13,3.605551);
   dRmin_taujet->SetBinError(14,3.316625);
   dRmin_taujet->SetBinError(15,4.472136);
   dRmin_taujet->SetBinError(16,2.44949);
   dRmin_taujet->SetBinError(17,2.44949);
   dRmin_taujet->SetBinError(18,2);
   dRmin_taujet->SetBinError(19,1.732051);
   dRmin_taujet->SetBinError(20,1);
   dRmin_taujet->SetBinError(21,1);
   dRmin_taujet->SetBinError(22,1);
   dRmin_taujet->SetBinError(23,1);
   dRmin_taujet->SetBinError(24,1.414214);
   dRmin_taujet->SetBinError(25,1);
   dRmin_taujet->SetBinError(51,94.60444);
   dRmin_taujet->SetEntries(9146);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillColor(1);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetLineWidth(3);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(1.3);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(1.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("SAMEPE1");
   TLatex *   tex = new TLatex(0.95,0.965,"WSelection");
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
   TLegendEntry *entry=leg->AddEntry("dRmin_taujet","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("dRmin_taujet","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","EWK W+jets","f");

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
   entry=leg->AddEntry("dRmin_taujet","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("dRmin_taujet","Dibosons","f");
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
   lower->Range(-0.9316455,-0.653951,4.891139,2.070845);
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
   
   TH1F *dRmin_taujet = new TH1F("dRmin_taujet","dRmin_taujet",50,0,10);
   dRmin_taujet->SetBinContent(1,0.5240582);
   dRmin_taujet->SetBinContent(4,1.744833);
   dRmin_taujet->SetBinContent(5,1.166855);
   dRmin_taujet->SetBinContent(6,1.202558);
   dRmin_taujet->SetBinContent(7,0.2805285);
   dRmin_taujet->SetBinContent(8,0.5864221);
   dRmin_taujet->SetBinContent(9,0.7963352);
   dRmin_taujet->SetBinContent(10,1.200791);
   dRmin_taujet->SetBinContent(11,0.710941);
   dRmin_taujet->SetBinContent(12,0.4444374);
   dRmin_taujet->SetBinContent(13,0.5416233);
   dRmin_taujet->SetBinContent(14,0.4909789);
   dRmin_taujet->SetBinContent(15,1.367217);
   dRmin_taujet->SetBinContent(16,0.3845999);
   dRmin_taujet->SetBinContent(17,1.290356);
   dRmin_taujet->SetBinContent(18,1.23821);
   dRmin_taujet->SetBinContent(19,1.620777);
   dRmin_taujet->SetBinContent(20,0.3769058);
   dRmin_taujet->SetBinContent(21,1.83164);
   dRmin_taujet->SetBinContent(22,1.279328);
   dRmin_taujet->SetBinContent(23,45.53362);
   dRmin_taujet->SetBinContent(24,7.259327);
   dRmin_taujet->SetBinContent(25,25.8854);
   dRmin_taujet->SetBinContent(51,0.6356077);
   dRmin_taujet->SetBinError(1,0.1167753);
   dRmin_taujet->SetBinError(4,0.6399457);
   dRmin_taujet->SetBinError(5,0.412977);
   dRmin_taujet->SetBinError(6,0.386933);
   dRmin_taujet->SetBinError(7,0.1474941);
   dRmin_taujet->SetBinError(8,0.2093684);
   dRmin_taujet->SetBinError(9,0.2868146);
   dRmin_taujet->SetBinError(10,0.368254);
   dRmin_taujet->SetBinError(11,0.238612);
   dRmin_taujet->SetBinError(12,0.1935071);
   dRmin_taujet->SetBinError(13,0.1809899);
   dRmin_taujet->SetBinError(14,0.1856188);
   dRmin_taujet->SetBinError(15,0.3892502);
   dRmin_taujet->SetBinError(16,0.1721599);
   dRmin_taujet->SetBinError(17,0.5967363);
   dRmin_taujet->SetBinError(18,0.6811105);
   dRmin_taujet->SetBinError(19,1.124223);
   dRmin_taujet->SetBinError(20,0.3991336);
   dRmin_taujet->SetBinError(21,2.036783);
   dRmin_taujet->SetBinError(22,1.44329);
   dRmin_taujet->SetBinError(23,64.03218);
   dRmin_taujet->SetBinError(24,7.399755);
   dRmin_taujet->SetBinError(25,36.60749);
   dRmin_taujet->SetBinError(51,0.00870529);
   dRmin_taujet->SetMinimum(0);
   dRmin_taujet->SetMaximum(2);
   dRmin_taujet->SetEntries(1.015785);
   dRmin_taujet->SetStats(0);
   dRmin_taujet->SetFillStyle(0);
   dRmin_taujet->SetMarkerStyle(20);
   dRmin_taujet->SetMarkerSize(0.8);
   dRmin_taujet->GetXaxis()->SetTitle("#Delta R_{min}(#tau,tag)");
   dRmin_taujet->GetXaxis()->SetRange(1,23);
   dRmin_taujet->GetXaxis()->SetLabelFont(42);
   dRmin_taujet->GetXaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetXaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetXaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetXaxis()->SetTickLength(0.02);
   dRmin_taujet->GetXaxis()->SetTitleOffset(0.9);
   dRmin_taujet->GetXaxis()->SetTitleFont(42);
   dRmin_taujet->GetYaxis()->SetTitle("Data/MC");
   dRmin_taujet->GetYaxis()->SetNdivisions(505);
   dRmin_taujet->GetYaxis()->SetLabelFont(42);
   dRmin_taujet->GetYaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetYaxis()->SetLabelSize(0.1);
   dRmin_taujet->GetYaxis()->SetTitleSize(0.12);
   dRmin_taujet->GetYaxis()->SetTickLength(0.02);
   dRmin_taujet->GetYaxis()->SetTitleOffset(0.55);
   dRmin_taujet->GetYaxis()->SetTitleFont(42);
   dRmin_taujet->GetZaxis()->SetLabelFont(42);
   dRmin_taujet->GetZaxis()->SetLabelOffset(0.007);
   dRmin_taujet->GetZaxis()->SetLabelSize(0.035);
   dRmin_taujet->GetZaxis()->SetTitleSize(0.045);
   dRmin_taujet->GetZaxis()->SetTickLength(0.02);
   dRmin_taujet->GetZaxis()->SetTitleFont(42);
   dRmin_taujet->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
