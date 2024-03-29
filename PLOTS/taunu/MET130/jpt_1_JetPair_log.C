{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:31:12 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.940473,1063.291,7.667244);
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
   stack->SetMaximum(5001904);
   
   TH1F *jpt_1_stack_3 = new TH1F("jpt_1_stack_3","stack",25,0,1000);
   jpt_1_stack_3->SetBinContent(2,0.7702452);
   jpt_1_stack_3->SetBinContent(3,4.391248);
   jpt_1_stack_3->SetBinContent(4,8.308598);
   jpt_1_stack_3->SetBinContent(5,10.29286);
   jpt_1_stack_3->SetBinContent(6,8.015275);
   jpt_1_stack_3->SetBinContent(7,4.113921);
   jpt_1_stack_3->SetBinContent(8,2.598499);
   jpt_1_stack_3->SetBinContent(9,0.3494368);
   jpt_1_stack_3->SetBinContent(10,0.12861);
   jpt_1_stack_3->SetBinContent(11,0.2841677);
   jpt_1_stack_3->SetBinContent(12,1.037443);
   jpt_1_stack_3->SetBinContent(13,0.04630337);
   jpt_1_stack_3->SetBinContent(15,0.07844204);
   jpt_1_stack_3->SetBinContent(23,0.0007509807);
   jpt_1_stack_3->SetBinError(2,0.3765397);
   jpt_1_stack_3->SetBinError(3,1.87657);
   jpt_1_stack_3->SetBinError(4,2.590889);
   jpt_1_stack_3->SetBinError(5,3.446951);
   jpt_1_stack_3->SetBinError(6,3.587036);
   jpt_1_stack_3->SetBinError(7,1.738019);
   jpt_1_stack_3->SetBinError(8,1.668115);
   jpt_1_stack_3->SetBinError(9,0.1552805);
   jpt_1_stack_3->SetBinError(10,0.06883096);
   jpt_1_stack_3->SetBinError(11,0.1202531);
   jpt_1_stack_3->SetBinError(12,0.9101336);
   jpt_1_stack_3->SetBinError(13,0.04630337);
   jpt_1_stack_3->SetBinError(15,0.07844204);
   jpt_1_stack_3->SetBinError(23,0.0007509808);
   jpt_1_stack_3->SetMinimum(0.00186931);
   jpt_1_stack_3->SetMaximum(1.370435e+07);
   jpt_1_stack_3->SetEntries(427);
   jpt_1_stack_3->SetStats(0);
   jpt_1_stack_3->SetFillColor(4);
   jpt_1_stack_3->SetLineColor(4);
   jpt_1_stack_3->SetLineWidth(2);
   jpt_1_stack_3->SetMarkerColor(4);
   jpt_1_stack_3->SetMarkerStyle(21);
   jpt_1_stack_3->SetMarkerSize(0.8);
   jpt_1_stack_3->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_3->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_3->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_3->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_3->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_3->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_3->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_3->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_3->GetYaxis()->SetTitle("Events");
   jpt_1_stack_3->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_3->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_3->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_3->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_3->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_3->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_3->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_3->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_3->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_3->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_3->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_3->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_3->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_3);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.7702452);
   jpt_1->SetBinContent(3,4.391248);
   jpt_1->SetBinContent(4,8.308598);
   jpt_1->SetBinContent(5,10.29286);
   jpt_1->SetBinContent(6,8.015275);
   jpt_1->SetBinContent(7,4.113921);
   jpt_1->SetBinContent(8,2.598499);
   jpt_1->SetBinContent(9,0.3494368);
   jpt_1->SetBinContent(10,0.12861);
   jpt_1->SetBinContent(11,0.2841677);
   jpt_1->SetBinContent(12,1.037443);
   jpt_1->SetBinContent(13,0.04630337);
   jpt_1->SetBinContent(15,0.07844204);
   jpt_1->SetBinContent(23,0.0007509807);
   jpt_1->SetBinError(2,0.3765397);
   jpt_1->SetBinError(3,1.87657);
   jpt_1->SetBinError(4,2.590889);
   jpt_1->SetBinError(5,3.446951);
   jpt_1->SetBinError(6,3.587036);
   jpt_1->SetBinError(7,1.738019);
   jpt_1->SetBinError(8,1.668115);
   jpt_1->SetBinError(9,0.1552805);
   jpt_1->SetBinError(10,0.06883096);
   jpt_1->SetBinError(11,0.1202531);
   jpt_1->SetBinError(12,0.9101336);
   jpt_1->SetBinError(13,0.04630337);
   jpt_1->SetBinError(15,0.07844204);
   jpt_1->SetBinError(23,0.0007509808);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(2.709e+07);
   jpt_1->SetEntries(427);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(4);
   jpt_1->SetLineColor(4);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(4);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0);
   jpt_1->GetXaxis()->SetTitleSize(0);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Events");
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"HIST");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,8.24448);
   jpt_1->SetBinContent(3,46.1789);
   jpt_1->SetBinContent(4,64.84421);
   jpt_1->SetBinContent(5,55.22612);
   jpt_1->SetBinContent(6,34.66975);
   jpt_1->SetBinContent(7,21.25442);
   jpt_1->SetBinContent(8,17.41834);
   jpt_1->SetBinContent(9,12.1103);
   jpt_1->SetBinContent(10,5.122054);
   jpt_1->SetBinContent(11,3.10545);
   jpt_1->SetBinContent(12,3.393813);
   jpt_1->SetBinContent(13,0.8743802);
   jpt_1->SetBinContent(14,3.00944);
   jpt_1->SetBinContent(15,0.7759352);
   jpt_1->SetBinContent(17,0.7044002);
   jpt_1->SetBinError(2,1.410448);
   jpt_1->SetBinError(3,3.820914);
   jpt_1->SetBinError(4,5.051243);
   jpt_1->SetBinError(5,4.741542);
   jpt_1->SetBinError(6,3.724165);
   jpt_1->SetBinError(7,3.15565);
   jpt_1->SetBinError(8,2.940668);
   jpt_1->SetBinError(9,2.433577);
   jpt_1->SetBinError(10,1.396308);
   jpt_1->SetBinError(11,1.089629);
   jpt_1->SetBinError(12,1.492471);
   jpt_1->SetBinError(13,0.5626587);
   jpt_1->SetBinError(14,1.431265);
   jpt_1->SetBinError(15,0.7759352);
   jpt_1->SetBinError(17,0.7044002);
   jpt_1->SetEntries(1295);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(5);
   jpt_1->SetLineColor(5);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(5);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,34.20973);
   jpt_1->SetBinContent(3,122.0023);
   jpt_1->SetBinContent(4,201.4161);
   jpt_1->SetBinContent(5,188.8318);
   jpt_1->SetBinContent(6,138.4778);
   jpt_1->SetBinContent(7,83.19471);
   jpt_1->SetBinContent(8,56.32422);
   jpt_1->SetBinContent(9,38.11792);
   jpt_1->SetBinContent(10,25.6789);
   jpt_1->SetBinContent(11,14.09117);
   jpt_1->SetBinContent(12,6.610516);
   jpt_1->SetBinContent(13,3.839172);
   jpt_1->SetBinContent(14,2.372442);
   jpt_1->SetBinContent(15,2.40528);
   jpt_1->SetBinContent(16,2.38196);
   jpt_1->SetBinContent(17,1.645663);
   jpt_1->SetBinContent(18,1.033499);
   jpt_1->SetBinContent(19,0.798877);
   jpt_1->SetBinError(2,4.021495);
   jpt_1->SetBinError(3,6.779664);
   jpt_1->SetBinError(4,11.02328);
   jpt_1->SetBinError(5,9.505757);
   jpt_1->SetBinError(6,8.295538);
   jpt_1->SetBinError(7,6.602288);
   jpt_1->SetBinError(8,5.378469);
   jpt_1->SetBinError(9,4.449427);
   jpt_1->SetBinError(10,3.428873);
   jpt_1->SetBinError(11,2.742273);
   jpt_1->SetBinError(12,2.043066);
   jpt_1->SetBinError(13,1.088536);
   jpt_1->SetBinError(14,0.8706242);
   jpt_1->SetBinError(15,0.9506099);
   jpt_1->SetBinError(16,0.9007468);
   jpt_1->SetBinError(17,1.017124);
   jpt_1->SetBinError(18,0.5938107);
   jpt_1->SetBinError(19,0.5649416);
   jpt_1->SetEntries(4140);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(6);
   jpt_1->SetLineColor(6);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(6);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,1.474432);
   jpt_1->SetBinContent(3,14.58238);
   jpt_1->SetBinContent(4,31.93492);
   jpt_1->SetBinContent(5,36.42209);
   jpt_1->SetBinContent(6,31.39655);
   jpt_1->SetBinContent(7,22.82575);
   jpt_1->SetBinContent(8,15.31762);
   jpt_1->SetBinContent(9,9.865952);
   jpt_1->SetBinContent(10,5.520978);
   jpt_1->SetBinContent(11,4.200988);
   jpt_1->SetBinContent(12,2.4052);
   jpt_1->SetBinContent(13,1.488541);
   jpt_1->SetBinContent(14,0.9767505);
   jpt_1->SetBinContent(15,0.7423456);
   jpt_1->SetBinContent(16,0.3357151);
   jpt_1->SetBinContent(17,0.2918873);
   jpt_1->SetBinContent(18,0.08653778);
   jpt_1->SetBinContent(19,0.1155378);
   jpt_1->SetBinContent(20,0.07659363);
   jpt_1->SetBinContent(21,0.06664483);
   jpt_1->SetBinContent(22,0.01462788);
   jpt_1->SetBinContent(23,0.01999697);
   jpt_1->SetBinContent(26,0.07639699);
   jpt_1->SetBinError(2,0.1248121);
   jpt_1->SetBinError(3,0.4384185);
   jpt_1->SetBinError(4,0.6729871);
   jpt_1->SetBinError(5,0.7378229);
   jpt_1->SetBinError(6,0.7069508);
   jpt_1->SetBinError(7,0.6090306);
   jpt_1->SetBinError(8,0.5070774);
   jpt_1->SetBinError(9,0.4164765);
   jpt_1->SetBinError(10,0.306399);
   jpt_1->SetBinError(11,0.2734749);
   jpt_1->SetBinError(12,0.2057939);
   jpt_1->SetBinError(13,0.157663);
   jpt_1->SetBinError(14,0.134943);
   jpt_1->SetBinError(15,0.1184226);
   jpt_1->SetBinError(16,0.07325909);
   jpt_1->SetBinError(17,0.0740182);
   jpt_1->SetBinError(18,0.04044872);
   jpt_1->SetBinError(19,0.04413454);
   jpt_1->SetBinError(20,0.03602815);
   jpt_1->SetBinError(21,0.03335085);
   jpt_1->SetBinError(22,0.01386689);
   jpt_1->SetBinError(23,0.01999696);
   jpt_1->SetBinError(26,0.04092166);
   jpt_1->SetEntries(16474);
   jpt_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_1->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_1->SetLineColor(ci);
   jpt_1->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_1->SetMarkerColor(ci);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,3.27452);
   jpt_1->SetBinContent(3,8.533617);
   jpt_1->SetBinContent(4,9.593925);
   jpt_1->SetBinContent(5,6.930605);
   jpt_1->SetBinContent(6,3.886263);
   jpt_1->SetBinContent(7,2.243963);
   jpt_1->SetBinContent(8,0.8845803);
   jpt_1->SetBinContent(9,0.5362548);
   jpt_1->SetBinContent(10,0.3128302);
   jpt_1->SetBinContent(11,0.2247146);
   jpt_1->SetBinContent(12,0.2264701);
   jpt_1->SetBinContent(13,0.1007013);
   jpt_1->SetBinContent(14,0.1879389);
   jpt_1->SetBinContent(17,0.04096726);
   jpt_1->SetBinError(2,1.178039);
   jpt_1->SetBinError(3,1.407953);
   jpt_1->SetBinError(4,1.351205);
   jpt_1->SetBinError(5,0.8588189);
   jpt_1->SetBinError(6,0.6436659);
   jpt_1->SetBinError(7,0.4497518);
   jpt_1->SetBinError(8,0.266864);
   jpt_1->SetBinError(9,0.2360249);
   jpt_1->SetBinError(10,0.1522536);
   jpt_1->SetBinError(11,0.1590048);
   jpt_1->SetBinError(12,0.1633135);
   jpt_1->SetBinError(13,0.1006256);
   jpt_1->SetBinError(14,0.1312857);
   jpt_1->SetBinError(17,0.04096726);
   jpt_1->SetEntries(522);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,1.782351);
   jpt_1->SetBinContent(3,10.66666);
   jpt_1->SetBinContent(4,15.15401);
   jpt_1->SetBinContent(5,15.36206);
   jpt_1->SetBinContent(6,11.1755);
   jpt_1->SetBinContent(7,7.244875);
   jpt_1->SetBinContent(8,4.364295);
   jpt_1->SetBinContent(9,2.576653);
   jpt_1->SetBinContent(10,1.525939);
   jpt_1->SetBinContent(11,1.613281);
   jpt_1->SetBinContent(12,0.682322);
   jpt_1->SetBinContent(13,0.5912662);
   jpt_1->SetBinContent(14,0.1639357);
   jpt_1->SetBinContent(15,0.1439393);
   jpt_1->SetBinContent(16,0.2727315);
   jpt_1->SetBinContent(17,0.05940768);
   jpt_1->SetBinContent(18,0.01359245);
   jpt_1->SetBinContent(19,0.02390038);
   jpt_1->SetBinContent(20,0.116272);
   jpt_1->SetBinContent(24,0.09079733);
   jpt_1->SetBinError(2,0.2736663);
   jpt_1->SetBinError(3,1.416159);
   jpt_1->SetBinError(4,1.030395);
   jpt_1->SetBinError(5,1.119757);
   jpt_1->SetBinError(6,0.9390706);
   jpt_1->SetBinError(7,0.7428211);
   jpt_1->SetBinError(8,0.6177044);
   jpt_1->SetBinError(9,0.4202957);
   jpt_1->SetBinError(10,0.357672);
   jpt_1->SetBinError(11,0.3613707);
   jpt_1->SetBinError(12,0.2368858);
   jpt_1->SetBinError(13,0.2187965);
   jpt_1->SetBinError(14,0.09804177);
   jpt_1->SetBinError(15,0.069602);
   jpt_1->SetBinError(16,0.1482168);
   jpt_1->SetBinError(17,0.05940768);
   jpt_1->SetBinError(18,0.01359245);
   jpt_1->SetBinError(19,0.02390038);
   jpt_1->SetBinError(20,0.116272);
   jpt_1->SetBinError(24,0.09079733);
   jpt_1->SetEntries(1893);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.0954335);
   jpt_1->SetBinContent(3,0.8192254);
   jpt_1->SetBinContent(4,2.208542);
   jpt_1->SetBinContent(5,2.422136);
   jpt_1->SetBinContent(6,1.954461);
   jpt_1->SetBinContent(7,1.524827);
   jpt_1->SetBinContent(8,0.8907547);
   jpt_1->SetBinContent(9,0.5864164);
   jpt_1->SetBinContent(10,0.4034022);
   jpt_1->SetBinContent(11,0.1979202);
   jpt_1->SetBinContent(12,0.1326656);
   jpt_1->SetBinContent(13,0.0593672);
   jpt_1->SetBinContent(14,0.05041173);
   jpt_1->SetBinContent(15,0.03391511);
   jpt_1->SetBinContent(16,0.0107698);
   jpt_1->SetBinContent(17,0.002517242);
   jpt_1->SetBinContent(18,0.02103832);
   jpt_1->SetBinContent(19,0.01427598);
   jpt_1->SetBinContent(25,0.006042105);
   jpt_1->SetBinError(2,0.02094995);
   jpt_1->SetBinError(3,0.0608117);
   jpt_1->SetBinError(4,0.1024025);
   jpt_1->SetBinError(5,0.1086229);
   jpt_1->SetBinError(6,0.09958378);
   jpt_1->SetBinError(7,0.08895026);
   jpt_1->SetBinError(8,0.07041725);
   jpt_1->SetBinError(9,0.05498982);
   jpt_1->SetBinError(10,0.04685688);
   jpt_1->SetBinError(11,0.03277006);
   jpt_1->SetBinError(12,0.02551986);
   jpt_1->SetBinError(13,0.01763745);
   jpt_1->SetBinError(14,0.01809718);
   jpt_1->SetBinError(15,0.01380573);
   jpt_1->SetBinError(16,0.007267372);
   jpt_1->SetBinError(17,0.001905533);
   jpt_1->SetBinError(18,0.01107239);
   jpt_1->SetBinError(19,0.008459722);
   jpt_1->SetBinError(25,0.006042105);
   jpt_1->SetEntries(3456);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(3);
   jpt_1->SetLineColor(3);
   jpt_1->SetLineWidth(2);
   jpt_1->SetMarkerColor(3);
   jpt_1->SetMarkerStyle(21);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_1,"");
   stack->Draw("hist");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,343);
   jpt_1->SetBinContent(3,1216);
   jpt_1->SetBinContent(4,1774);
   jpt_1->SetBinContent(5,1806);
   jpt_1->SetBinContent(6,1121);
   jpt_1->SetBinContent(7,612);
   jpt_1->SetBinContent(8,326);
   jpt_1->SetBinContent(9,228);
   jpt_1->SetBinContent(10,133);
   jpt_1->SetBinContent(11,78);
   jpt_1->SetBinContent(12,40);
   jpt_1->SetBinContent(13,27);
   jpt_1->SetBinContent(14,14);
   jpt_1->SetBinContent(15,14);
   jpt_1->SetBinContent(16,9);
   jpt_1->SetBinContent(17,2);
   jpt_1->SetBinContent(18,5);
   jpt_1->SetBinContent(19,2);
   jpt_1->SetBinContent(20,2);
   jpt_1->SetBinContent(22,1);
   jpt_1->SetBinContent(26,1);
   jpt_1->SetBinError(2,18.52026);
   jpt_1->SetBinError(3,34.87119);
   jpt_1->SetBinError(4,42.11888);
   jpt_1->SetBinError(5,42.49706);
   jpt_1->SetBinError(6,33.48134);
   jpt_1->SetBinError(7,24.73863);
   jpt_1->SetBinError(8,18.05547);
   jpt_1->SetBinError(9,15.09967);
   jpt_1->SetBinError(10,11.53256);
   jpt_1->SetBinError(11,8.831761);
   jpt_1->SetBinError(12,6.324555);
   jpt_1->SetBinError(13,5.196152);
   jpt_1->SetBinError(14,3.741657);
   jpt_1->SetBinError(15,3.741657);
   jpt_1->SetBinError(16,3);
   jpt_1->SetBinError(17,1.414214);
   jpt_1->SetBinError(18,2.236068);
   jpt_1->SetBinError(19,1.414214);
   jpt_1->SetBinError(20,1.414214);
   jpt_1->SetBinError(22,1);
   jpt_1->SetBinError(26,1);
   jpt_1->SetEntries(7754);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(1.3);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEPE1");
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.2040976);
   jpt_1->SetBinContent(3,2.35384);
   jpt_1->SetBinContent(4,0.7294447);
   jpt_1->SetBinContent(5,0.9165773);
   jpt_1->SetBinContent(6,0.3659172);
   jpt_1->SetBinError(2,0.2040976);
   jpt_1->SetBinError(3,0.8599543);
   jpt_1->SetBinError(4,0.3611456);
   jpt_1->SetBinError(5,0.4855186);
   jpt_1->SetBinError(6,0.3659172);
   jpt_1->SetEntries(25);
   jpt_1->SetStats(0);
   jpt_1->SetFillColor(1);
   jpt_1->SetFillStyle(0);
   jpt_1->SetLineStyle(2);
   jpt_1->SetLineWidth(3);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.035);
   jpt_1->GetXaxis()->SetTitleSize(0.045);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.035);
   jpt_1->GetYaxis()->SetTitleSize(0.045);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(1.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"JetPair");
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
   TLegendEntry *entry=leg->AddEntry("jpt_1","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_1","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_1","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_1","Dibosons","f");
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
   lower->Range(-202.5316,-0.653951,1063.291,2.070845);
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
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,6.988455);
   jpt_1->SetBinContent(3,5.996556);
   jpt_1->SetBinContent(4,5.455915);
   jpt_1->SetBinContent(5,5.917531);
   jpt_1->SetBinContent(6,5.059569);
   jpt_1->SetBinContent(7,4.42553);
   jpt_1->SetBinContent(8,3.424376);
   jpt_1->SetBinContent(9,3.574032);
   jpt_1->SetBinContent(10,3.448803);
   jpt_1->SetBinContent(11,3.328565);
   jpt_1->SetBinContent(12,2.97376);
   jpt_1->SetBinContent(13,3.882977);
   jpt_1->SetBinContent(14,2.070724);
   jpt_1->SetBinContent(15,3.413456);
   jpt_1->SetBinContent(16,2.998824);
   jpt_1->SetBinContent(17,0.7286393);
   jpt_1->SetBinContent(18,4.330251);
   jpt_1->SetBinContent(19,2.099537);
   jpt_1->SetBinContent(20,10.36991);
   jpt_1->SetBinContent(22,68.36263);
   jpt_1->SetBinContent(26,13.08952);
   jpt_1->SetBinError(2,0.7352377);
   jpt_1->SetBinError(3,0.2935813);
   jpt_1->SetBinError(4,0.2431449);
   jpt_1->SetBinError(5,0.2505386);
   jpt_1->SetBinError(6,0.2586447);
   jpt_1->SetBinError(7,0.2966534);
   jpt_1->SetBinError(8,0.2924263);
   jpt_1->SetBinError(9,0.3715338);
   jpt_1->SetBinError(10,0.4483658);
   jpt_1->SetBinError(11,0.5678023);
   jpt_1->SetBinError(12,0.7349279);
   jpt_1->SetBinError(13,1.025957);
   jpt_1->SetBinError(14,0.7574989);
   jpt_1->SetBinError(15,1.374201);
   jpt_1->SetBinError(16,1.355225);
   jpt_1->SetBinError(17,0.6116186);
   jpt_1->SetBinError(18,2.955793);
   jpt_1->SetBinError(19,1.940876);
   jpt_1->SetBinError(20,9.828699);
   jpt_1->SetBinError(22,94.19816);
   jpt_1->SetBinError(26,14.84905);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(2.464467);
   jpt_1->SetStats(0);
   jpt_1->SetFillStyle(0);
   jpt_1->SetMarkerStyle(20);
   jpt_1->SetMarkerSize(0.8);
   jpt_1->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1->GetXaxis()->SetLabelFont(42);
   jpt_1->GetXaxis()->SetLabelOffset(0.007);
   jpt_1->GetXaxis()->SetLabelSize(0.1);
   jpt_1->GetXaxis()->SetTitleSize(0.12);
   jpt_1->GetXaxis()->SetTickLength(0.02);
   jpt_1->GetXaxis()->SetTitleOffset(0.9);
   jpt_1->GetXaxis()->SetTitleFont(42);
   jpt_1->GetYaxis()->SetTitle("Data/MC");
   jpt_1->GetYaxis()->SetNdivisions(505);
   jpt_1->GetYaxis()->SetLabelFont(42);
   jpt_1->GetYaxis()->SetLabelOffset(0.007);
   jpt_1->GetYaxis()->SetLabelSize(0.1);
   jpt_1->GetYaxis()->SetTitleSize(0.12);
   jpt_1->GetYaxis()->SetTickLength(0.02);
   jpt_1->GetYaxis()->SetTitleOffset(0.55);
   jpt_1->GetYaxis()->SetTitleFont(42);
   jpt_1->GetZaxis()->SetLabelFont(42);
   jpt_1->GetZaxis()->SetLabelOffset(0.007);
   jpt_1->GetZaxis()->SetLabelSize(0.035);
   jpt_1->GetZaxis()->SetTitleSize(0.045);
   jpt_1->GetZaxis()->SetTickLength(0.02);
   jpt_1->GetZaxis()->SetTitleFont(42);
   jpt_1->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
