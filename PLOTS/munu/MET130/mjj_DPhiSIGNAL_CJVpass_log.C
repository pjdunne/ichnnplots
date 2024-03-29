{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 17:32:41 2013) by ROOT version5.32/00
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
   upper->Range(-627.8481,-1.830289,3296.203,6.878238);
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
   stack->SetMinimum(0.1);
   stack->SetMaximum(1149263);
   
   TH1F *mjj_stack_14 = new TH1F("mjj_stack_14","stack",50,0,5000);
   mjj_stack_14->SetBinContent(12,1.172359);
   mjj_stack_14->SetBinContent(13,0.07790536);
   mjj_stack_14->SetBinContent(14,0.3253163);
   mjj_stack_14->SetBinContent(15,4.335281);
   mjj_stack_14->SetBinContent(17,2.268695);
   mjj_stack_14->SetBinContent(19,0.03001618);
   mjj_stack_14->SetBinContent(20,0.1259161);
   mjj_stack_14->SetBinContent(23,0.05423772);
   mjj_stack_14->SetBinError(12,0.378499);
   mjj_stack_14->SetBinError(13,0.07790536);
   mjj_stack_14->SetBinError(14,0.1755838);
   mjj_stack_14->SetBinError(15,2.822619);
   mjj_stack_14->SetBinError(17,2.219419);
   mjj_stack_14->SetBinError(19,0.03001618);
   mjj_stack_14->SetBinError(20,0.1259161);
   mjj_stack_14->SetBinError(23,0.05423772);
   mjj_stack_14->SetMinimum(0.02207403);
   mjj_stack_14->SetMaximum(2772118);
   mjj_stack_14->SetEntries(27);
   mjj_stack_14->SetStats(0);
   mjj_stack_14->SetFillColor(4);
   mjj_stack_14->SetLineColor(4);
   mjj_stack_14->SetLineWidth(2);
   mjj_stack_14->SetMarkerColor(4);
   mjj_stack_14->SetMarkerStyle(21);
   mjj_stack_14->SetMarkerSize(0.8);
   mjj_stack_14->GetXaxis()->SetTitle("M_{jj} [GeV]");
   mjj_stack_14->GetXaxis()->SetRange(1,31);
   mjj_stack_14->GetXaxis()->SetLabelFont(42);
   mjj_stack_14->GetXaxis()->SetLabelOffset(0.007);
   mjj_stack_14->GetXaxis()->SetLabelSize(0);
   mjj_stack_14->GetXaxis()->SetTitleSize(0);
   mjj_stack_14->GetXaxis()->SetTickLength(0.02);
   mjj_stack_14->GetXaxis()->SetTitleOffset(0.9);
   mjj_stack_14->GetXaxis()->SetTitleFont(42);
   mjj_stack_14->GetYaxis()->SetTitle("Events");
   mjj_stack_14->GetYaxis()->SetLabelFont(42);
   mjj_stack_14->GetYaxis()->SetLabelOffset(0.007);
   mjj_stack_14->GetYaxis()->SetLabelSize(0.035);
   mjj_stack_14->GetYaxis()->SetTitleSize(0.045);
   mjj_stack_14->GetYaxis()->SetTickLength(0.02);
   mjj_stack_14->GetYaxis()->SetTitleOffset(1.55);
   mjj_stack_14->GetYaxis()->SetTitleFont(42);
   mjj_stack_14->GetZaxis()->SetLabelFont(42);
   mjj_stack_14->GetZaxis()->SetLabelOffset(0.007);
   mjj_stack_14->GetZaxis()->SetLabelSize(0.035);
   mjj_stack_14->GetZaxis()->SetTitleSize(0.045);
   mjj_stack_14->GetZaxis()->SetTickLength(0.02);
   mjj_stack_14->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(mjj_stack_14);
   
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,1.172359);
   mjj->SetBinContent(13,0.07790536);
   mjj->SetBinContent(14,0.3253163);
   mjj->SetBinContent(15,4.335281);
   mjj->SetBinContent(17,2.268695);
   mjj->SetBinContent(19,0.03001618);
   mjj->SetBinContent(20,0.1259161);
   mjj->SetBinContent(23,0.05423772);
   mjj->SetBinError(12,0.378499);
   mjj->SetBinError(13,0.07790536);
   mjj->SetBinError(14,0.1755838);
   mjj->SetBinError(15,2.822619);
   mjj->SetBinError(17,2.219419);
   mjj->SetBinError(19,0.03001618);
   mjj->SetBinError(20,0.1259161);
   mjj->SetBinError(23,0.05423772);
   mjj->SetMinimum(0.1);
   mjj->SetMaximum(822364.4);
   mjj->SetEntries(27);
   mjj->SetStats(0);
   mjj->SetFillColor(4);
   mjj->SetLineColor(4);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(4);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetTitle("M_{jj} [GeV]");
   mjj->GetXaxis()->SetRange(1,31);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0);
   mjj->GetXaxis()->SetTitleSize(0);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetTitle("Events");
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"HIST");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,3.140713);
   mjj->SetBinContent(13,3.026846);
   mjj->SetBinContent(14,0.2920707);
   mjj->SetBinContent(15,1.520828);
   mjj->SetBinContent(16,0.2159301);
   mjj->SetBinContent(17,0.7676617);
   mjj->SetBinContent(18,0.3352715);
   mjj->SetBinContent(19,0.3234855);
   mjj->SetBinContent(20,0.2517877);
   mjj->SetBinError(12,1.531076);
   mjj->SetBinError(13,1.403749);
   mjj->SetBinError(14,0.2920708);
   mjj->SetBinError(15,0.8112803);
   mjj->SetBinError(16,0.2159302);
   mjj->SetBinError(17,0.5431024);
   mjj->SetBinError(18,0.3352715);
   mjj->SetBinError(19,0.3234855);
   mjj->SetBinError(20,0.2517877);
   mjj->SetEntries(22);
   mjj->SetStats(0);
   mjj->SetFillColor(5);
   mjj->SetLineColor(5);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(5);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,54.8243);
   mjj->SetBinContent(13,33.7614);
   mjj->SetBinContent(14,31.52403);
   mjj->SetBinContent(15,17.61148);
   mjj->SetBinContent(16,31.00996);
   mjj->SetBinContent(17,15.55547);
   mjj->SetBinContent(18,8.853075);
   mjj->SetBinContent(19,6.260309);
   mjj->SetBinContent(20,6.764891);
   mjj->SetBinContent(21,2.851169);
   mjj->SetBinContent(22,0.4291212);
   mjj->SetBinContent(23,0.8100034);
   mjj->SetBinContent(24,1.698559);
   mjj->SetBinContent(25,0.09139927);
   mjj->SetBinContent(26,1.721133);
   mjj->SetBinContent(27,1.101683);
   mjj->SetBinContent(30,1.229599);
   mjj->SetBinContent(32,1.852861);
   mjj->SetBinError(12,7.158586);
   mjj->SetBinError(13,5.201212);
   mjj->SetBinError(14,6.00068);
   mjj->SetBinError(15,3.754114);
   mjj->SetBinError(16,6.909416);
   mjj->SetBinError(17,5.195556);
   mjj->SetBinError(18,2.832324);
   mjj->SetBinError(19,2.338398);
   mjj->SetBinError(20,2.393067);
   mjj->SetBinError(21,1.560063);
   mjj->SetBinError(22,0.4291212);
   mjj->SetBinError(23,0.5685852);
   mjj->SetBinError(24,0.9941496);
   mjj->SetBinError(25,0.09139928);
   mjj->SetBinError(26,1.385379);
   mjj->SetBinError(27,1.101683);
   mjj->SetBinError(30,1.229599);
   mjj->SetBinError(32,1.852861);
   mjj->SetEntries(321);
   mjj->SetStats(0);
   mjj->SetFillColor(6);
   mjj->SetLineColor(6);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(6);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,14.04949);
   mjj->SetBinContent(13,11.68026);
   mjj->SetBinContent(14,11.09799);
   mjj->SetBinContent(15,9.521431);
   mjj->SetBinContent(16,7.921051);
   mjj->SetBinContent(17,6.870799);
   mjj->SetBinContent(18,5.288471);
   mjj->SetBinContent(19,4.509314);
   mjj->SetBinContent(20,3.608586);
   mjj->SetBinContent(21,3.399329);
   mjj->SetBinContent(22,2.098009);
   mjj->SetBinContent(23,2.071693);
   mjj->SetBinContent(24,1.522496);
   mjj->SetBinContent(25,1.375758);
   mjj->SetBinContent(26,0.7523125);
   mjj->SetBinContent(27,0.469014);
   mjj->SetBinContent(28,0.4781002);
   mjj->SetBinContent(29,0.3179526);
   mjj->SetBinContent(30,0.2488481);
   mjj->SetBinContent(31,0.1644717);
   mjj->SetBinContent(32,0.202731);
   mjj->SetBinContent(33,0.1544345);
   mjj->SetBinContent(34,0.1112912);
   mjj->SetBinContent(35,0.02150323);
   mjj->SetBinContent(36,0.03418108);
   mjj->SetBinContent(37,0.03468668);
   mjj->SetBinContent(38,0.02344812);
   mjj->SetBinContent(39,0.01672482);
   mjj->SetBinContent(40,0.04130276);
   mjj->SetBinContent(41,0.04726104);
   mjj->SetBinContent(43,0.0006392202);
   mjj->SetBinContent(44,0.03398645);
   mjj->SetBinContent(45,0.02023997);
   mjj->SetBinContent(46,0.004532534);
   mjj->SetBinError(12,0.5375897);
   mjj->SetBinError(13,0.4896243);
   mjj->SetBinError(14,0.4798291);
   mjj->SetBinError(15,0.441802);
   mjj->SetBinError(16,0.4068519);
   mjj->SetBinError(17,0.373386);
   mjj->SetBinError(18,0.3242074);
   mjj->SetBinError(19,0.3040136);
   mjj->SetBinError(20,0.2689485);
   mjj->SetBinError(21,0.2666252);
   mjj->SetBinError(22,0.2094409);
   mjj->SetBinError(23,0.2065402);
   mjj->SetBinError(24,0.1791601);
   mjj->SetBinError(25,0.1747861);
   mjj->SetBinError(26,0.1265304);
   mjj->SetBinError(27,0.0966919);
   mjj->SetBinError(28,0.09900989);
   mjj->SetBinError(29,0.07967987);
   mjj->SetBinError(30,0.07025802);
   mjj->SetBinError(31,0.05732016);
   mjj->SetBinError(32,0.06886914);
   mjj->SetBinError(33,0.05486109);
   mjj->SetBinError(34,0.04775237);
   mjj->SetBinError(35,0.020654);
   mjj->SetBinError(36,0.02418241);
   mjj->SetBinError(37,0.02547518);
   mjj->SetBinError(38,0.02344812);
   mjj->SetBinError(39,0.01672482);
   mjj->SetBinError(40,0.02921018);
   mjj->SetBinError(41,0.03343156);
   mjj->SetBinError(43,0.0006392202);
   mjj->SetBinError(44,0.03398645);
   mjj->SetBinError(45,0.02023997);
   mjj->SetBinError(46,0.004532534);
   mjj->SetEntries(4944);
   mjj->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   mjj->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   mjj->SetLineColor(ci);
   mjj->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   mjj->SetMarkerColor(ci);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetStats(0);
   mjj->SetFillColor(3);
   mjj->SetLineColor(3);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(3);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,3.033033);
   mjj->SetBinContent(13,1.353605);
   mjj->SetBinContent(14,1.277007);
   mjj->SetBinContent(15,1.42681);
   mjj->SetBinContent(16,0.4144146);
   mjj->SetBinContent(17,0.4672029);
   mjj->SetBinContent(18,0.2708295);
   mjj->SetBinContent(20,0.05156546);
   mjj->SetBinContent(21,0.3689831);
   mjj->SetBinContent(22,0.09595401);
   mjj->SetBinContent(23,0.0962652);
   mjj->SetBinError(12,0.7226607);
   mjj->SetBinError(13,0.3954522);
   mjj->SetBinError(14,0.4644927);
   mjj->SetBinError(15,0.4931166);
   mjj->SetBinError(16,0.1930779);
   mjj->SetBinError(17,0.2680657);
   mjj->SetBinError(18,0.1594038);
   mjj->SetBinError(20,0.05156546);
   mjj->SetBinError(21,0.229569);
   mjj->SetBinError(22,0.09595401);
   mjj->SetBinError(23,0.0962652);
   mjj->SetEntries(80);
   mjj->SetStats(0);
   mjj->SetFillColor(3);
   mjj->SetLineColor(3);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(3);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,0.39764);
   mjj->SetBinContent(13,0.3969676);
   mjj->SetBinContent(14,0.3037781);
   mjj->SetBinContent(15,0.3123554);
   mjj->SetBinContent(16,0.4366463);
   mjj->SetBinContent(17,0.3274739);
   mjj->SetBinContent(18,0.1774126);
   mjj->SetBinContent(19,0.08049032);
   mjj->SetBinContent(20,0.08903337);
   mjj->SetBinContent(21,0.09612919);
   mjj->SetBinContent(22,0.1258299);
   mjj->SetBinContent(23,0.05614284);
   mjj->SetBinContent(24,0.02608003);
   mjj->SetBinContent(26,0.06282807);
   mjj->SetBinContent(27,0.0002909656);
   mjj->SetBinContent(29,0.02036311);
   mjj->SetBinContent(30,0.01747824);
   mjj->SetBinContent(31,0.03019373);
   mjj->SetBinContent(36,0.01257582);
   mjj->SetBinError(12,0.05830081);
   mjj->SetBinError(13,0.06430556);
   mjj->SetBinError(14,0.05290585);
   mjj->SetBinError(15,0.05673047);
   mjj->SetBinError(16,0.06798075);
   mjj->SetBinError(17,0.05666925);
   mjj->SetBinError(18,0.04603608);
   mjj->SetBinError(19,0.02749467);
   mjj->SetBinError(20,0.02784015);
   mjj->SetBinError(21,0.03627978);
   mjj->SetBinError(22,0.03379518);
   mjj->SetBinError(23,0.02244557);
   mjj->SetBinError(24,0.01588289);
   mjj->SetBinError(26,0.02402698);
   mjj->SetBinError(27,0.0002160763);
   mjj->SetBinError(29,0.01514515);
   mjj->SetBinError(30,0.008972335);
   mjj->SetBinError(31,0.01801424);
   mjj->SetBinError(36,0.009339027);
   mjj->SetEntries(394);
   mjj->SetStats(0);
   mjj->SetFillColor(3);
   mjj->SetLineColor(3);
   mjj->SetLineWidth(2);
   mjj->SetMarkerColor(3);
   mjj->SetMarkerStyle(21);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   stack->Add(mjj,"");
   stack->Draw("hist");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,51);
   mjj->SetBinContent(13,40);
   mjj->SetBinContent(14,31);
   mjj->SetBinContent(15,28);
   mjj->SetBinContent(16,19);
   mjj->SetBinContent(17,12);
   mjj->SetBinContent(18,8);
   mjj->SetBinContent(19,5);
   mjj->SetBinContent(20,3);
   mjj->SetBinContent(21,3);
   mjj->SetBinContent(22,7);
   mjj->SetBinContent(24,3);
   mjj->SetBinContent(25,2);
   mjj->SetBinContent(27,2);
   mjj->SetBinContent(28,1);
   mjj->SetBinContent(31,1);
   mjj->SetBinError(12,7.141428);
   mjj->SetBinError(13,6.324555);
   mjj->SetBinError(14,5.567764);
   mjj->SetBinError(15,5.291503);
   mjj->SetBinError(16,4.358899);
   mjj->SetBinError(17,3.464102);
   mjj->SetBinError(18,2.828427);
   mjj->SetBinError(19,2.236068);
   mjj->SetBinError(20,1.732051);
   mjj->SetBinError(21,1.732051);
   mjj->SetBinError(22,2.645751);
   mjj->SetBinError(24,1.732051);
   mjj->SetBinError(25,1.414214);
   mjj->SetBinError(27,1.414214);
   mjj->SetBinError(28,1);
   mjj->SetBinError(31,1);
   mjj->SetEntries(216);
   mjj->SetStats(0);
   mjj->SetFillColor(1);
   mjj->SetFillStyle(0);
   mjj->SetLineWidth(3);
   mjj->SetMarkerStyle(20);
   mjj->SetMarkerSize(1.3);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   mjj->Draw("SAMEPE1");
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetStats(0);
   mjj->SetFillColor(1);
   mjj->SetFillStyle(0);
   mjj->SetLineStyle(2);
   mjj->SetLineWidth(3);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.035);
   mjj->GetXaxis()->SetTitleSize(0.045);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.035);
   mjj->GetYaxis()->SetTitleSize(0.045);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(1.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   mjj->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"DPhiSIGNAL_CJVpass");
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
   TLegendEntry *entry=leg->AddEntry("mjj","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("mjj","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","EWK W+jets","f");

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
   entry=leg->AddEntry("mjj","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mjj","Dibosons","f");
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
   lower->Range(-627.8481,-0.653951,3296.203,2.070845);
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
   
   TH1F *mjj = new TH1F("mjj","mjj",50,0,5000);
   mjj->SetBinContent(12,0.6759876);
   mjj->SetBinContent(13,0.79651);
   mjj->SetBinContent(14,0.6967094);
   mjj->SetBinContent(15,0.9212677);
   mjj->SetBinContent(16,0.4750237);
   mjj->SetBinContent(17,0.5002374);
   mjj->SetBinContent(18,0.5360112);
   mjj->SetBinContent(19,0.4474835);
   mjj->SetBinContent(20,0.2786586);
   mjj->SetBinContent(21,0.4467204);
   mjj->SetBinContent(22,2.54646);
   mjj->SetBinContent(24,0.9238912);
   mjj->SetBinContent(25,1.36318);
   mjj->SetBinContent(27,1.273084);
   mjj->SetBinContent(28,2.091612);
   mjj->SetBinContent(31,5.137018);
   mjj->SetBinError(12,0.1154453);
   mjj->SetBinError(13,0.1525205);
   mjj->SetBinError(14,0.1568999);
   mjj->SetBinError(15,0.2104081);
   mjj->SetBinError(16,0.1365483);
   mjj->SetBinError(17,0.1811435);
   mjj->SetBinError(18,0.2158153);
   mjj->SetBinError(19,0.2216657);
   mjj->SetBinError(20,0.1726657);
   mjj->SetBinError(21,0.2790027);
   mjj->SetBinError(22,1.063435);
   mjj->SetBinError(24,0.6059323);
   mjj->SetBinError(25,0.9811805);
   mjj->SetBinError(27,1.270258);
   mjj->SetBinError(28,2.135992);
   mjj->SetBinError(31,5.376146);
   mjj->SetMinimum(0);
   mjj->SetMaximum(2);
   mjj->SetEntries(9.63552);
   mjj->SetStats(0);
   mjj->SetFillStyle(0);
   mjj->SetMarkerStyle(20);
   mjj->SetMarkerSize(0.8);
   mjj->GetXaxis()->SetTitle("M_{jj} [GeV]");
   mjj->GetXaxis()->SetRange(1,31);
   mjj->GetXaxis()->SetLabelFont(42);
   mjj->GetXaxis()->SetLabelOffset(0.007);
   mjj->GetXaxis()->SetLabelSize(0.1);
   mjj->GetXaxis()->SetTitleSize(0.12);
   mjj->GetXaxis()->SetTickLength(0.02);
   mjj->GetXaxis()->SetTitleOffset(0.9);
   mjj->GetXaxis()->SetTitleFont(42);
   mjj->GetYaxis()->SetTitle("Data/MC");
   mjj->GetYaxis()->SetNdivisions(505);
   mjj->GetYaxis()->SetLabelFont(42);
   mjj->GetYaxis()->SetLabelOffset(0.007);
   mjj->GetYaxis()->SetLabelSize(0.1);
   mjj->GetYaxis()->SetTitleSize(0.12);
   mjj->GetYaxis()->SetTickLength(0.02);
   mjj->GetYaxis()->SetTitleOffset(0.55);
   mjj->GetYaxis()->SetTitleFont(42);
   mjj->GetZaxis()->SetLabelFont(42);
   mjj->GetZaxis()->SetLabelOffset(0.007);
   mjj->GetZaxis()->SetLabelSize(0.035);
   mjj->GetZaxis()->SetTitleSize(0.045);
   mjj->GetZaxis()->SetTickLength(0.02);
   mjj->GetZaxis()->SetTitleFont(42);
   mjj->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
