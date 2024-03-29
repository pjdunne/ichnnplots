{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:28:07 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-3.056216,1063.291,9.754454);
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
   stack->SetMaximum(4.161321e+08);
   
   TH1F *jpt_2_stack_2 = new TH1F("jpt_2_stack_2","stack",25,0,1000);
   jpt_2_stack_2->SetBinContent(0,379.0329);
   jpt_2_stack_2->SetBinContent(1,90.32064);
   jpt_2_stack_2->SetBinContent(2,719.1705);
   jpt_2_stack_2->SetBinContent(3,458.7304);
   jpt_2_stack_2->SetBinContent(4,196.2934);
   jpt_2_stack_2->SetBinContent(5,91.64877);
   jpt_2_stack_2->SetBinContent(6,29.89215);
   jpt_2_stack_2->SetBinContent(7,19.05986);
   jpt_2_stack_2->SetBinContent(8,11.69912);
   jpt_2_stack_2->SetBinContent(9,3.359451);
   jpt_2_stack_2->SetBinContent(10,2.693272);
   jpt_2_stack_2->SetBinContent(11,3.308185);
   jpt_2_stack_2->SetBinContent(12,0.9528317);
   jpt_2_stack_2->SetBinContent(13,5.248453);
   jpt_2_stack_2->SetBinContent(14,0.3365851);
   jpt_2_stack_2->SetBinContent(15,0.1513585);
   jpt_2_stack_2->SetBinContent(16,0.1432809);
   jpt_2_stack_2->SetBinContent(17,1.200328);
   jpt_2_stack_2->SetBinContent(18,0.05215413);
   jpt_2_stack_2->SetBinContent(19,0.04065729);
   jpt_2_stack_2->SetBinContent(20,3.040756);
   jpt_2_stack_2->SetBinContent(21,0.02863375);
   jpt_2_stack_2->SetBinContent(24,0.1077636);
   jpt_2_stack_2->SetBinContent(26,0.4130627);
   jpt_2_stack_2->SetBinError(0,17.38913);
   jpt_2_stack_2->SetBinError(1,6.4103);
   jpt_2_stack_2->SetBinError(2,21.82697);
   jpt_2_stack_2->SetBinError(3,20.38716);
   jpt_2_stack_2->SetBinError(4,14.20519);
   jpt_2_stack_2->SetBinError(5,9.738026);
   jpt_2_stack_2->SetBinError(6,5.518907);
   jpt_2_stack_2->SetBinError(7,4.471948);
   jpt_2_stack_2->SetBinError(8,3.258749);
   jpt_2_stack_2->SetBinError(9,1.030661);
   jpt_2_stack_2->SetBinError(10,1.040312);
   jpt_2_stack_2->SetBinError(11,2.033201);
   jpt_2_stack_2->SetBinError(12,0.2270774);
   jpt_2_stack_2->SetBinError(13,3.106662);
   jpt_2_stack_2->SetBinError(14,0.1362725);
   jpt_2_stack_2->SetBinError(15,0.0748232);
   jpt_2_stack_2->SetBinError(16,0.08561952);
   jpt_2_stack_2->SetBinError(17,0.9849041);
   jpt_2_stack_2->SetBinError(18,0.03999988);
   jpt_2_stack_2->SetBinError(19,0.03938712);
   jpt_2_stack_2->SetBinError(20,2.322882);
   jpt_2_stack_2->SetBinError(21,0.02863375);
   jpt_2_stack_2->SetBinError(24,0.1077636);
   jpt_2_stack_2->SetBinError(26,0.4130627);
   jpt_2_stack_2->SetMinimum(0.001584883);
   jpt_2_stack_2->SetMaximum(1.299933e+09);
   jpt_2_stack_2->SetEntries(46264);
   jpt_2_stack_2->SetStats(0);
   jpt_2_stack_2->SetFillColor(4);
   jpt_2_stack_2->SetLineColor(4);
   jpt_2_stack_2->SetLineWidth(2);
   jpt_2_stack_2->SetMarkerColor(4);
   jpt_2_stack_2->SetMarkerStyle(21);
   jpt_2_stack_2->SetMarkerSize(0.8);
   jpt_2_stack_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2_stack_2->GetXaxis()->SetLabelFont(42);
   jpt_2_stack_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2_stack_2->GetXaxis()->SetLabelSize(0);
   jpt_2_stack_2->GetXaxis()->SetTitleSize(0);
   jpt_2_stack_2->GetXaxis()->SetTickLength(0.02);
   jpt_2_stack_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2_stack_2->GetXaxis()->SetTitleFont(42);
   jpt_2_stack_2->GetYaxis()->SetTitle("Events");
   jpt_2_stack_2->GetYaxis()->SetLabelFont(42);
   jpt_2_stack_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2_stack_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2_stack_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2_stack_2->GetYaxis()->SetTickLength(0.02);
   jpt_2_stack_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2_stack_2->GetYaxis()->SetTitleFont(42);
   jpt_2_stack_2->GetZaxis()->SetLabelFont(42);
   jpt_2_stack_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2_stack_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2_stack_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2_stack_2->GetZaxis()->SetTickLength(0.02);
   jpt_2_stack_2->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_2_stack_2);
   
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,379.0329);
   jpt_2->SetBinContent(1,90.32064);
   jpt_2->SetBinContent(2,719.1705);
   jpt_2->SetBinContent(3,458.7304);
   jpt_2->SetBinContent(4,196.2934);
   jpt_2->SetBinContent(5,91.64877);
   jpt_2->SetBinContent(6,29.89215);
   jpt_2->SetBinContent(7,19.05986);
   jpt_2->SetBinContent(8,11.69912);
   jpt_2->SetBinContent(9,3.359451);
   jpt_2->SetBinContent(10,2.693272);
   jpt_2->SetBinContent(11,3.308185);
   jpt_2->SetBinContent(12,0.9528317);
   jpt_2->SetBinContent(13,5.248453);
   jpt_2->SetBinContent(14,0.3365851);
   jpt_2->SetBinContent(15,0.1513585);
   jpt_2->SetBinContent(16,0.1432809);
   jpt_2->SetBinContent(17,1.200328);
   jpt_2->SetBinContent(18,0.05215413);
   jpt_2->SetBinContent(19,0.04065729);
   jpt_2->SetBinContent(20,3.040756);
   jpt_2->SetBinContent(21,0.02863375);
   jpt_2->SetBinContent(24,0.1077636);
   jpt_2->SetBinContent(26,0.4130627);
   jpt_2->SetBinError(0,17.38913);
   jpt_2->SetBinError(1,6.4103);
   jpt_2->SetBinError(2,21.82697);
   jpt_2->SetBinError(3,20.38716);
   jpt_2->SetBinError(4,14.20519);
   jpt_2->SetBinError(5,9.738026);
   jpt_2->SetBinError(6,5.518907);
   jpt_2->SetBinError(7,4.471948);
   jpt_2->SetBinError(8,3.258749);
   jpt_2->SetBinError(9,1.030661);
   jpt_2->SetBinError(10,1.040312);
   jpt_2->SetBinError(11,2.033201);
   jpt_2->SetBinError(12,0.2270774);
   jpt_2->SetBinError(13,3.106662);
   jpt_2->SetBinError(14,0.1362725);
   jpt_2->SetBinError(15,0.0748232);
   jpt_2->SetBinError(16,0.08561952);
   jpt_2->SetBinError(17,0.9849041);
   jpt_2->SetBinError(18,0.03999988);
   jpt_2->SetBinError(19,0.03938712);
   jpt_2->SetBinError(20,2.322882);
   jpt_2->SetBinError(21,0.02863375);
   jpt_2->SetBinError(24,0.1077636);
   jpt_2->SetBinError(26,0.4130627);
   jpt_2->SetMinimum(0.01);
   jpt_2->SetMaximum(1.00247e+10);
   jpt_2->SetEntries(46264);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(4);
   jpt_2->SetLineColor(4);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(4);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0);
   jpt_2->GetXaxis()->SetTitleSize(0);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetTitle("Events");
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"HIST");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,117.089);
   jpt_2->SetBinContent(1,50.74572);
   jpt_2->SetBinContent(2,2018.173);
   jpt_2->SetBinContent(3,2700.944);
   jpt_2->SetBinContent(4,1645.709);
   jpt_2->SetBinContent(5,846.9587);
   jpt_2->SetBinContent(6,419.6689);
   jpt_2->SetBinContent(7,215.8498);
   jpt_2->SetBinContent(8,137.2043);
   jpt_2->SetBinContent(9,89.24387);
   jpt_2->SetBinContent(10,63.45463);
   jpt_2->SetBinContent(11,43.95534);
   jpt_2->SetBinContent(12,32.84526);
   jpt_2->SetBinContent(13,16.66422);
   jpt_2->SetBinContent(14,16.17092);
   jpt_2->SetBinContent(15,2.997355);
   jpt_2->SetBinContent(16,5.594379);
   jpt_2->SetBinContent(17,5.675878);
   jpt_2->SetBinContent(18,1.67809);
   jpt_2->SetBinContent(19,2.868692);
   jpt_2->SetBinContent(20,2.061442);
   jpt_2->SetBinContent(21,1.460827);
   jpt_2->SetBinContent(22,2.420921);
   jpt_2->SetBinContent(23,1.034893);
   jpt_2->SetBinContent(24,0.1917538);
   jpt_2->SetBinContent(26,1.859322);
   jpt_2->SetBinError(0,5.674215);
   jpt_2->SetBinError(1,2.61431);
   jpt_2->SetBinError(2,23.15002);
   jpt_2->SetBinError(3,29.72563);
   jpt_2->SetBinError(4,24.30083);
   jpt_2->SetBinError(5,18.58406);
   jpt_2->SetBinError(6,12.75643);
   jpt_2->SetBinError(7,9.619563);
   jpt_2->SetBinError(8,8.303116);
   jpt_2->SetBinError(9,6.499536);
   jpt_2->SetBinError(10,5.875956);
   jpt_2->SetBinError(11,5.097463);
   jpt_2->SetBinError(12,4.368218);
   jpt_2->SetBinError(13,3.018447);
   jpt_2->SetBinError(14,3.220953);
   jpt_2->SetBinError(15,1.403497);
   jpt_2->SetBinError(16,1.870426);
   jpt_2->SetBinError(17,2.078834);
   jpt_2->SetBinError(18,0.7356293);
   jpt_2->SetBinError(19,1.315954);
   jpt_2->SetBinError(20,1.002505);
   jpt_2->SetBinError(21,1.074198);
   jpt_2->SetBinError(22,1.254149);
   jpt_2->SetBinError(23,0.6914129);
   jpt_2->SetBinError(24,0.1426531);
   jpt_2->SetBinError(26,1.017333);
   jpt_2->SetEntries(54625);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(5);
   jpt_2->SetLineColor(5);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(5);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,13303.63);
   jpt_2->SetBinContent(1,2665.688);
   jpt_2->SetBinContent(2,17241.5);
   jpt_2->SetBinContent(3,10469.37);
   jpt_2->SetBinContent(4,4590.382);
   jpt_2->SetBinContent(5,1891.736);
   jpt_2->SetBinContent(6,856.6527);
   jpt_2->SetBinContent(7,454.6199);
   jpt_2->SetBinContent(8,239.7082);
   jpt_2->SetBinContent(9,140.131);
   jpt_2->SetBinContent(10,92.88348);
   jpt_2->SetBinContent(11,51.05558);
   jpt_2->SetBinContent(12,32.93446);
   jpt_2->SetBinContent(13,28.07438);
   jpt_2->SetBinContent(14,14.3979);
   jpt_2->SetBinContent(15,8.262521);
   jpt_2->SetBinContent(16,7.977159);
   jpt_2->SetBinContent(17,4.717911);
   jpt_2->SetBinContent(18,1.072113);
   jpt_2->SetBinContent(19,1.225567);
   jpt_2->SetBinContent(20,0.892274);
   jpt_2->SetBinContent(21,0.6538404);
   jpt_2->SetBinContent(22,0.0004848882);
   jpt_2->SetBinContent(23,1.004399);
   jpt_2->SetBinContent(26,0.3105474);
   jpt_2->SetBinError(0,174.9597);
   jpt_2->SetBinError(1,45.24015);
   jpt_2->SetBinError(2,90.76261);
   jpt_2->SetBinError(3,66.7038);
   jpt_2->SetBinError(4,43.55857);
   jpt_2->SetBinError(5,27.83357);
   jpt_2->SetBinError(6,18.34532);
   jpt_2->SetBinError(7,13.63842);
   jpt_2->SetBinError(8,9.516752);
   jpt_2->SetBinError(9,7.141312);
   jpt_2->SetBinError(10,6.148971);
   jpt_2->SetBinError(11,4.332577);
   jpt_2->SetBinError(12,3.859204);
   jpt_2->SetBinError(13,3.559716);
   jpt_2->SetBinError(14,2.413039);
   jpt_2->SetBinError(15,1.842016);
   jpt_2->SetBinError(16,1.932042);
   jpt_2->SetBinError(17,1.40045);
   jpt_2->SetBinError(18,0.595044);
   jpt_2->SetBinError(19,0.6019081);
   jpt_2->SetBinError(20,0.6615572);
   jpt_2->SetBinError(21,0.4900087);
   jpt_2->SetBinError(22,0.0004848882);
   jpt_2->SetBinError(23,0.6046852);
   jpt_2->SetBinError(26,0.3105474);
   jpt_2->SetEntries(275229);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(6);
   jpt_2->SetLineColor(6);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(6);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,67.27924);
   jpt_2->SetBinContent(1,27.24051);
   jpt_2->SetBinContent(2,883.9082);
   jpt_2->SetBinContent(3,805.2604);
   jpt_2->SetBinContent(4,415.7044);
   jpt_2->SetBinContent(5,178.1013);
   jpt_2->SetBinContent(6,78.55624);
   jpt_2->SetBinContent(7,36.77884);
   jpt_2->SetBinContent(8,19.1098);
   jpt_2->SetBinContent(9,10.34741);
   jpt_2->SetBinContent(10,6.551184);
   jpt_2->SetBinContent(11,3.593969);
   jpt_2->SetBinContent(12,2.229738);
   jpt_2->SetBinContent(13,1.770098);
   jpt_2->SetBinContent(14,0.6885029);
   jpt_2->SetBinContent(15,0.6557475);
   jpt_2->SetBinContent(16,0.4290859);
   jpt_2->SetBinContent(17,0.2040966);
   jpt_2->SetBinContent(18,0.160208);
   jpt_2->SetBinContent(19,0.1899188);
   jpt_2->SetBinContent(20,0.05215336);
   jpt_2->SetBinContent(21,0.02758756);
   jpt_2->SetBinContent(22,0.05363386);
   jpt_2->SetBinContent(24,0.04255215);
   jpt_2->SetBinContent(25,0.03874224);
   jpt_2->SetBinContent(26,0.04887521);
   jpt_2->SetBinError(0,1.013588);
   jpt_2->SetBinError(1,0.4820224);
   jpt_2->SetBinError(2,3.48101);
   jpt_2->SetBinError(3,3.531798);
   jpt_2->SetBinError(4,2.598024);
   jpt_2->SetBinError(5,1.715188);
   jpt_2->SetBinError(6,1.132081);
   jpt_2->SetBinError(7,0.7724);
   jpt_2->SetBinError(8,0.5599099);
   jpt_2->SetBinError(9,0.4169584);
   jpt_2->SetBinError(10,0.3271121);
   jpt_2->SetBinError(11,0.2431969);
   jpt_2->SetBinError(12,0.1962973);
   jpt_2->SetBinError(13,0.1775905);
   jpt_2->SetBinError(14,0.1049443);
   jpt_2->SetBinError(15,0.1093923);
   jpt_2->SetBinError(16,0.08299814);
   jpt_2->SetBinError(17,0.06814099);
   jpt_2->SetBinError(18,0.04897946);
   jpt_2->SetBinError(19,0.05165658);
   jpt_2->SetBinError(20,0.03112348);
   jpt_2->SetBinError(21,0.01669179);
   jpt_2->SetBinError(22,0.02632677);
   jpt_2->SetBinError(24,0.03009342);
   jpt_2->SetBinError(25,0.02396852);
   jpt_2->SetBinError(26,0.02674539);
   jpt_2->SetEntries(268473);
   jpt_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   jpt_2->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   jpt_2->SetLineColor(ci);
   jpt_2->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   jpt_2->SetMarkerColor(ci);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,2755.727);
   jpt_2->SetBinContent(1,724.4308);
   jpt_2->SetBinContent(2,6211.248);
   jpt_2->SetBinContent(3,3957.003);
   jpt_2->SetBinContent(4,1705.029);
   jpt_2->SetBinContent(5,686.362);
   jpt_2->SetBinContent(6,316.5287);
   jpt_2->SetBinContent(7,162.6176);
   jpt_2->SetBinContent(8,88.3755);
   jpt_2->SetBinContent(9,48.10506);
   jpt_2->SetBinContent(10,33.64205);
   jpt_2->SetBinContent(11,21.88893);
   jpt_2->SetBinContent(12,13.13036);
   jpt_2->SetBinContent(13,9.908537);
   jpt_2->SetBinContent(14,4.870944);
   jpt_2->SetBinContent(15,3.649425);
   jpt_2->SetBinContent(16,2.270744);
   jpt_2->SetBinContent(17,1.357015);
   jpt_2->SetBinContent(18,1.52618);
   jpt_2->SetBinContent(19,0.6789594);
   jpt_2->SetBinContent(20,0.8997498);
   jpt_2->SetBinContent(21,0.04097251);
   jpt_2->SetBinContent(22,0.1071872);
   jpt_2->SetBinContent(23,0.05250052);
   jpt_2->SetBinContent(24,0.2012282);
   jpt_2->SetBinContent(25,0.1591253);
   jpt_2->SetBinContent(26,0.0174735);
   jpt_2->SetBinError(0,38.59416);
   jpt_2->SetBinError(1,13.50622);
   jpt_2->SetBinError(2,33.93057);
   jpt_2->SetBinError(3,21.64031);
   jpt_2->SetBinError(4,13.01684);
   jpt_2->SetBinError(5,7.590659);
   jpt_2->SetBinError(6,5.001806);
   jpt_2->SetBinError(7,3.609112);
   jpt_2->SetBinError(8,2.682609);
   jpt_2->SetBinError(9,1.976936);
   jpt_2->SetBinError(10,1.731188);
   jpt_2->SetBinError(11,1.41937);
   jpt_2->SetBinError(12,1.111663);
   jpt_2->SetBinError(13,0.9649143);
   jpt_2->SetBinError(14,0.6691833);
   jpt_2->SetBinError(15,0.5644212);
   jpt_2->SetBinError(16,0.4516013);
   jpt_2->SetBinError(17,0.3507081);
   jpt_2->SetBinError(18,0.3887539);
   jpt_2->SetBinError(19,0.2367164);
   jpt_2->SetBinError(20,0.3180625);
   jpt_2->SetBinError(21,0.04097251);
   jpt_2->SetBinError(22,0.1071871);
   jpt_2->SetBinError(23,0.05142614);
   jpt_2->SetBinError(24,0.1310792);
   jpt_2->SetBinError(25,0.1125205);
   jpt_2->SetBinError(26,0.01097395);
   jpt_2->SetEntries(258001);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,295.8809);
   jpt_2->SetBinContent(1,66.75138);
   jpt_2->SetBinContent(2,519.6967);
   jpt_2->SetBinContent(3,418.8065);
   jpt_2->SetBinContent(4,217.0681);
   jpt_2->SetBinContent(5,90.46848);
   jpt_2->SetBinContent(6,41.92215);
   jpt_2->SetBinContent(7,22.62144);
   jpt_2->SetBinContent(8,12.76527);
   jpt_2->SetBinContent(9,7.890735);
   jpt_2->SetBinContent(10,5.43066);
   jpt_2->SetBinContent(11,4.992152);
   jpt_2->SetBinContent(12,4.152924);
   jpt_2->SetBinContent(13,2.469633);
   jpt_2->SetBinContent(14,0.8692527);
   jpt_2->SetBinContent(15,1.080691);
   jpt_2->SetBinContent(16,0.894593);
   jpt_2->SetBinContent(17,0.2235305);
   jpt_2->SetBinContent(18,0.2863203);
   jpt_2->SetBinContent(19,0.1487107);
   jpt_2->SetBinContent(20,0.1114163);
   jpt_2->SetBinContent(21,0.06648081);
   jpt_2->SetBinContent(22,0.007018958);
   jpt_2->SetBinContent(24,0.04384539);
   jpt_2->SetBinError(0,11.67326);
   jpt_2->SetBinError(1,3.21009);
   jpt_2->SetBinError(2,6.285551);
   jpt_2->SetBinError(3,5.256402);
   jpt_2->SetBinError(4,3.893012);
   jpt_2->SetBinError(5,2.437221);
   jpt_2->SetBinError(6,1.803011);
   jpt_2->SetBinError(7,1.363538);
   jpt_2->SetBinError(8,0.9980175);
   jpt_2->SetBinError(9,0.7874479);
   jpt_2->SetBinError(10,1.068773);
   jpt_2->SetBinError(11,1.14558);
   jpt_2->SetBinError(12,0.9563763);
   jpt_2->SetBinError(13,0.4764406);
   jpt_2->SetBinError(14,0.2823032);
   jpt_2->SetBinError(15,0.7934667);
   jpt_2->SetBinError(16,0.4542182);
   jpt_2->SetBinError(17,0.1221368);
   jpt_2->SetBinError(18,0.1234525);
   jpt_2->SetBinError(19,0.08864364);
   jpt_2->SetBinError(20,0.08456321);
   jpt_2->SetBinError(21,0.06646047);
   jpt_2->SetBinError(22,0.007018958);
   jpt_2->SetBinError(24,0.04384539);
   jpt_2->SetEntries(54837);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,11.20614);
   jpt_2->SetBinContent(1,4.648103);
   jpt_2->SetBinContent(2,148.4404);
   jpt_2->SetBinContent(3,156.3151);
   jpt_2->SetBinContent(4,82.62376);
   jpt_2->SetBinContent(5,35.73244);
   jpt_2->SetBinContent(6,15.40824);
   jpt_2->SetBinContent(7,7.736579);
   jpt_2->SetBinContent(8,3.966937);
   jpt_2->SetBinContent(9,2.250366);
   jpt_2->SetBinContent(10,1.449839);
   jpt_2->SetBinContent(11,1.001391);
   jpt_2->SetBinContent(12,0.5985161);
   jpt_2->SetBinContent(13,0.4190951);
   jpt_2->SetBinContent(14,0.4384172);
   jpt_2->SetBinContent(15,0.236456);
   jpt_2->SetBinContent(16,0.2133743);
   jpt_2->SetBinContent(17,0.1754108);
   jpt_2->SetBinContent(18,0.09332341);
   jpt_2->SetBinContent(19,0.07264551);
   jpt_2->SetBinContent(20,0.04427591);
   jpt_2->SetBinContent(21,0.02742362);
   jpt_2->SetBinContent(22,0.01254856);
   jpt_2->SetBinContent(23,0.00969026);
   jpt_2->SetBinError(0,0.3371769);
   jpt_2->SetBinError(1,0.1685374);
   jpt_2->SetBinError(2,1.139042);
   jpt_2->SetBinError(3,1.222868);
   jpt_2->SetBinError(4,0.9017385);
   jpt_2->SetBinError(5,0.5929388);
   jpt_2->SetBinError(6,0.3860758);
   jpt_2->SetBinError(7,0.2717396);
   jpt_2->SetBinError(8,0.2027368);
   jpt_2->SetBinError(9,0.1467791);
   jpt_2->SetBinError(10,0.1162643);
   jpt_2->SetBinError(11,0.09570521);
   jpt_2->SetBinError(12,0.07293829);
   jpt_2->SetBinError(13,0.06128652);
   jpt_2->SetBinError(14,0.06563494);
   jpt_2->SetBinError(15,0.04498131);
   jpt_2->SetBinError(16,0.04375198);
   jpt_2->SetBinError(17,0.04384858);
   jpt_2->SetBinError(18,0.02765857);
   jpt_2->SetBinError(19,0.02574502);
   jpt_2->SetBinError(20,0.01996105);
   jpt_2->SetBinError(21,0.01867441);
   jpt_2->SetBinError(22,0.01228975);
   jpt_2->SetBinError(23,0.008995924);
   jpt_2->SetEntries(82779);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(3);
   jpt_2->SetLineColor(3);
   jpt_2->SetLineWidth(2);
   jpt_2->SetMarkerColor(3);
   jpt_2->SetMarkerStyle(21);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   stack->Add(jpt_2,"");
   stack->Draw("hist");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,43881);
   jpt_2->SetBinContent(1,38169);
   jpt_2->SetBinContent(2,558456);
   jpt_2->SetBinContent(3,668313);
   jpt_2->SetBinContent(4,410550);
   jpt_2->SetBinContent(5,195276);
   jpt_2->SetBinContent(6,97875);
   jpt_2->SetBinContent(7,52199);
   jpt_2->SetBinContent(8,29871);
   jpt_2->SetBinContent(9,17472);
   jpt_2->SetBinContent(10,10831);
   jpt_2->SetBinContent(11,6387);
   jpt_2->SetBinContent(12,3932);
   jpt_2->SetBinContent(13,2432);
   jpt_2->SetBinContent(14,1522);
   jpt_2->SetBinContent(15,974);
   jpt_2->SetBinContent(16,654);
   jpt_2->SetBinContent(17,461);
   jpt_2->SetBinContent(18,315);
   jpt_2->SetBinContent(19,242);
   jpt_2->SetBinContent(20,153);
   jpt_2->SetBinContent(21,103);
   jpt_2->SetBinContent(22,66);
   jpt_2->SetBinContent(23,46);
   jpt_2->SetBinContent(24,24);
   jpt_2->SetBinContent(25,28);
   jpt_2->SetBinContent(26,49);
   jpt_2->SetBinError(0,209.4779);
   jpt_2->SetBinError(1,195.3689);
   jpt_2->SetBinError(2,747.2991);
   jpt_2->SetBinError(3,817.5041);
   jpt_2->SetBinError(4,640.7418);
   jpt_2->SetBinError(5,441.9004);
   jpt_2->SetBinError(6,312.8498);
   jpt_2->SetBinError(7,228.471);
   jpt_2->SetBinError(8,172.8323);
   jpt_2->SetBinError(9,132.1817);
   jpt_2->SetBinError(10,104.0721);
   jpt_2->SetBinError(11,79.91871);
   jpt_2->SetBinError(12,62.70566);
   jpt_2->SetBinError(13,49.31531);
   jpt_2->SetBinError(14,39.01282);
   jpt_2->SetBinError(15,31.20897);
   jpt_2->SetBinError(16,25.57342);
   jpt_2->SetBinError(17,21.47091);
   jpt_2->SetBinError(18,17.74824);
   jpt_2->SetBinError(19,15.55635);
   jpt_2->SetBinError(20,12.36932);
   jpt_2->SetBinError(21,10.14889);
   jpt_2->SetBinError(22,8.124038);
   jpt_2->SetBinError(23,6.78233);
   jpt_2->SetBinError(24,4.898979);
   jpt_2->SetBinError(25,5.291503);
   jpt_2->SetBinError(26,7);
   jpt_2->SetEntries(2140281);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(1);
   jpt_2->SetFillStyle(0);
   jpt_2->SetLineWidth(3);
   jpt_2->SetMarkerStyle(20);
   jpt_2->SetMarkerSize(1.3);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("SAMEPE1");
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,98.08861);
   jpt_2->SetBinContent(1,36.52802);
   jpt_2->SetBinContent(2,939.8977);
   jpt_2->SetBinContent(3,517.8061);
   jpt_2->SetBinContent(4,137.0405);
   jpt_2->SetBinContent(5,29.95133);
   jpt_2->SetBinContent(6,5.686051);
   jpt_2->SetBinContent(7,1.338608);
   jpt_2->SetBinContent(8,0.1085717);
   jpt_2->SetBinError(0,5.237107);
   jpt_2->SetBinError(1,2.502136);
   jpt_2->SetBinError(2,15.92627);
   jpt_2->SetBinError(3,12.79247);
   jpt_2->SetBinError(4,6.789256);
   jpt_2->SetBinError(5,3.258694);
   jpt_2->SetBinError(6,1.361188);
   jpt_2->SetBinError(7,0.656098);
   jpt_2->SetBinError(8,0.1085717);
   jpt_2->SetEntries(9289);
   jpt_2->SetStats(0);
   jpt_2->SetFillColor(1);
   jpt_2->SetFillStyle(0);
   jpt_2->SetLineStyle(2);
   jpt_2->SetLineWidth(3);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.035);
   jpt_2->GetXaxis()->SetTitleSize(0.045);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.035);
   jpt_2->GetYaxis()->SetTitleSize(0.045);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(1.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"LeptonVeto");
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
   TLegendEntry *entry=leg->AddEntry("jpt_2","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("jpt_2","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","EWK W+jets","f");

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
   entry=leg->AddEntry("jpt_2","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("jpt_2","Dibosons","f");
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
   
   TH1F *jpt_2 = new TH1F("jpt_2","jpt_2",25,0,1000);
   jpt_2->SetBinContent(0,2.651289);
   jpt_2->SetBinContent(1,10.78371);
   jpt_2->SetBinContent(2,20.66598);
   jpt_2->SetBinContent(3,36.11001);
   jpt_2->SetBinContent(4,47.42669);
   jpt_2->SetBinContent(5,52.36182);
   jpt_2->SetBinContent(6,56.61649);
   jpt_2->SetBinContent(7,57.98445);
   jpt_2->SetBinContent(8,59.6073);
   jpt_2->SetBinContent(9,58.63708);
   jpt_2->SetBinContent(10,53.24665);
   jpt_2->SetBinContent(11,50.49516);
   jpt_2->SetBinContent(12,45.77881);
   jpt_2->SetBinContent(13,41.00768);
   jpt_2->SetBinContent(14,40.65613);
   jpt_2->SetBinContent(15,57.69392);
   jpt_2->SetBinContent(16,37.6309);
   jpt_2->SetBinContent(17,37.31633);
   jpt_2->SetBinContent(18,65.40378);
   jpt_2->SetBinContent(19,46.67765);
   jpt_2->SetBinContent(20,37.67256);
   jpt_2->SetBinContent(21,45.23233);
   jpt_2->SetBinContent(22,25.36711);
   jpt_2->SetBinContent(23,21.88931);
   jpt_2->SetBinContent(24,50.06471);
   jpt_2->SetBinContent(25,141.5088);
   jpt_2->SetBinContent(26,21.912);
   jpt_2->SetBinError(0,0.03143683);
   jpt_2->SetBinError(1,0.1545933);
   jpt_2->SetBinError(2,0.08124281);
   jpt_2->SetBinError(3,0.1555422);
   jpt_2->SetBinError(4,0.2931277);
   jpt_2->SetBinError(5,0.4980198);
   jpt_2->SetBinError(6,0.774673);
   jpt_2->SetBinError(7,1.133385);
   jpt_2->SetBinError(8,1.580075);
   jpt_2->SetBinError(9,1.997658);
   jpt_2->SetBinError(10,2.347411);
   jpt_2->SetBinError(11,2.841294);
   jpt_2->SetBinError(12,3.287503);
   jpt_2->SetBinError(13,3.41711);
   jpt_2->SetBinError(14,4.563982);
   jpt_2->SetBinError(15,8.791262);
   jpt_2->SetBinError(16,6.167087);
   jpt_2->SetBinError(17,7.852665);
   jpt_2->SetBinError(18,14.48914);
   jpt_2->SetBinError(19,13.5718);
   jpt_2->SetBinError(20,11.95182);
   jpt_2->SetBinError(21,23.92797);
   jpt_2->SetBinError(22,12.66669);
   jpt_2->SetBinError(23,10.11183);
   jpt_2->SetBinError(24,23.33749);
   jpt_2->SetBinError(25,86.51366);
   jpt_2->SetBinError(26,10.88624);
   jpt_2->SetMinimum(0);
   jpt_2->SetMaximum(2);
   jpt_2->SetEntries(148.7757);
   jpt_2->SetStats(0);
   jpt_2->SetFillStyle(0);
   jpt_2->SetMarkerStyle(20);
   jpt_2->SetMarkerSize(0.8);
   jpt_2->GetXaxis()->SetTitle("Next-to-Leading Jet p_{T} [GeV]");
   jpt_2->GetXaxis()->SetLabelFont(42);
   jpt_2->GetXaxis()->SetLabelOffset(0.007);
   jpt_2->GetXaxis()->SetLabelSize(0.1);
   jpt_2->GetXaxis()->SetTitleSize(0.12);
   jpt_2->GetXaxis()->SetTickLength(0.02);
   jpt_2->GetXaxis()->SetTitleOffset(0.9);
   jpt_2->GetXaxis()->SetTitleFont(42);
   jpt_2->GetYaxis()->SetTitle("Data/MC");
   jpt_2->GetYaxis()->SetNdivisions(505);
   jpt_2->GetYaxis()->SetLabelFont(42);
   jpt_2->GetYaxis()->SetLabelOffset(0.007);
   jpt_2->GetYaxis()->SetLabelSize(0.1);
   jpt_2->GetYaxis()->SetTitleSize(0.12);
   jpt_2->GetYaxis()->SetTickLength(0.02);
   jpt_2->GetYaxis()->SetTitleOffset(0.55);
   jpt_2->GetYaxis()->SetTitleFont(42);
   jpt_2->GetZaxis()->SetLabelFont(42);
   jpt_2->GetZaxis()->SetLabelOffset(0.007);
   jpt_2->GetZaxis()->SetLabelSize(0.035);
   jpt_2->GetZaxis()->SetTitleSize(0.045);
   jpt_2->GetZaxis()->SetTickLength(0.02);
   jpt_2->GetZaxis()->SetTitleFont(42);
   jpt_2->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
