{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:17 2013) by ROOT version5.32/00
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
   upper->Range(-8.101265,-2.912825,42.53165,7.200164);
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
   stack->SetMaximum(1864636);
   
   TH1F *n_vtx_stack_2 = new TH1F("n_vtx_stack_2","stack",40,0,40);
   n_vtx_stack_2->SetBinContent(4,0.05158251);
   n_vtx_stack_2->SetBinContent(5,0.07715909);
   n_vtx_stack_2->SetBinContent(6,0.1946167);
   n_vtx_stack_2->SetBinContent(7,0.380165);
   n_vtx_stack_2->SetBinContent(8,0.4403492);
   n_vtx_stack_2->SetBinContent(9,0.4073699);
   n_vtx_stack_2->SetBinContent(10,1.016661);
   n_vtx_stack_2->SetBinContent(11,1.261598);
   n_vtx_stack_2->SetBinContent(12,0.9668454);
   n_vtx_stack_2->SetBinContent(13,1.308066);
   n_vtx_stack_2->SetBinContent(14,1.967119);
   n_vtx_stack_2->SetBinContent(15,1.259494);
   n_vtx_stack_2->SetBinContent(16,1.807379);
   n_vtx_stack_2->SetBinContent(17,1.601472);
   n_vtx_stack_2->SetBinContent(18,1.543527);
   n_vtx_stack_2->SetBinContent(19,1.584233);
   n_vtx_stack_2->SetBinContent(20,1.371491);
   n_vtx_stack_2->SetBinContent(21,1.097834);
   n_vtx_stack_2->SetBinContent(22,1.12903);
   n_vtx_stack_2->SetBinContent(23,1.209146);
   n_vtx_stack_2->SetBinContent(24,0.7395546);
   n_vtx_stack_2->SetBinContent(25,0.8984511);
   n_vtx_stack_2->SetBinContent(26,0.6939113);
   n_vtx_stack_2->SetBinContent(27,0.7541292);
   n_vtx_stack_2->SetBinContent(28,0.3637177);
   n_vtx_stack_2->SetBinContent(29,0.3785703);
   n_vtx_stack_2->SetBinContent(30,0.4829459);
   n_vtx_stack_2->SetBinContent(31,0.2116969);
   n_vtx_stack_2->SetBinContent(32,0.1654665);
   n_vtx_stack_2->SetBinContent(33,0.1092939);
   n_vtx_stack_2->SetBinContent(34,0.2043862);
   n_vtx_stack_2->SetBinContent(35,0.05627903);
   n_vtx_stack_2->SetBinContent(36,0.05956731);
   n_vtx_stack_2->SetBinContent(37,0.05390622);
   n_vtx_stack_2->SetBinContent(38,0.04169551);
   n_vtx_stack_2->SetBinContent(39,0.02558938);
   n_vtx_stack_2->SetBinContent(40,0.0006314318);
   n_vtx_stack_2->SetBinContent(41,0.01364599);
   n_vtx_stack_2->SetBinError(4,0.04749676);
   n_vtx_stack_2->SetBinError(5,0.04354681);
   n_vtx_stack_2->SetBinError(6,0.07776391);
   n_vtx_stack_2->SetBinError(7,0.1609535);
   n_vtx_stack_2->SetBinError(8,0.1532497);
   n_vtx_stack_2->SetBinError(9,0.1115383);
   n_vtx_stack_2->SetBinError(10,0.2108563);
   n_vtx_stack_2->SetBinError(11,0.2691947);
   n_vtx_stack_2->SetBinError(12,0.1862617);
   n_vtx_stack_2->SetBinError(13,0.2216867);
   n_vtx_stack_2->SetBinError(14,0.3049101);
   n_vtx_stack_2->SetBinError(15,0.2582341);
   n_vtx_stack_2->SetBinError(16,0.2538189);
   n_vtx_stack_2->SetBinError(17,0.2544297);
   n_vtx_stack_2->SetBinError(18,0.2338872);
   n_vtx_stack_2->SetBinError(19,0.2397666);
   n_vtx_stack_2->SetBinError(20,0.2015554);
   n_vtx_stack_2->SetBinError(21,0.1872259);
   n_vtx_stack_2->SetBinError(22,0.1711828);
   n_vtx_stack_2->SetBinError(23,0.1811279);
   n_vtx_stack_2->SetBinError(24,0.1303179);
   n_vtx_stack_2->SetBinError(25,0.1393784);
   n_vtx_stack_2->SetBinError(26,0.1207771);
   n_vtx_stack_2->SetBinError(27,0.123703);
   n_vtx_stack_2->SetBinError(28,0.08173829);
   n_vtx_stack_2->SetBinError(29,0.09010837);
   n_vtx_stack_2->SetBinError(30,0.1170918);
   n_vtx_stack_2->SetBinError(31,0.05388143);
   n_vtx_stack_2->SetBinError(32,0.03790115);
   n_vtx_stack_2->SetBinError(33,0.0371053);
   n_vtx_stack_2->SetBinError(34,0.06940212);
   n_vtx_stack_2->SetBinError(35,0.01962128);
   n_vtx_stack_2->SetBinError(36,0.02315081);
   n_vtx_stack_2->SetBinError(37,0.03221046);
   n_vtx_stack_2->SetBinError(38,0.01824463);
   n_vtx_stack_2->SetBinError(39,0.0171334);
   n_vtx_stack_2->SetBinError(40,0.0004264066);
   n_vtx_stack_2->SetBinError(41,0.006573833);
   n_vtx_stack_2->SetMinimum(0.001947307);
   n_vtx_stack_2->SetMaximum(4948966);
   n_vtx_stack_2->SetEntries(1886);
   n_vtx_stack_2->SetStats(0);
   n_vtx_stack_2->SetFillColor(4);
   n_vtx_stack_2->SetLineColor(4);
   n_vtx_stack_2->SetLineWidth(2);
   n_vtx_stack_2->SetMarkerColor(4);
   n_vtx_stack_2->SetMarkerStyle(21);
   n_vtx_stack_2->SetMarkerSize(0.8);
   n_vtx_stack_2->GetXaxis()->SetTitle("Number of vertices");
   n_vtx_stack_2->GetXaxis()->SetLabelFont(42);
   n_vtx_stack_2->GetXaxis()->SetLabelOffset(0.007);
   n_vtx_stack_2->GetXaxis()->SetLabelSize(0);
   n_vtx_stack_2->GetXaxis()->SetTitleSize(0);
   n_vtx_stack_2->GetXaxis()->SetTickLength(0.02);
   n_vtx_stack_2->GetXaxis()->SetTitleOffset(0.9);
   n_vtx_stack_2->GetXaxis()->SetTitleFont(42);
   n_vtx_stack_2->GetYaxis()->SetTitle("Events");
   n_vtx_stack_2->GetYaxis()->SetLabelFont(42);
   n_vtx_stack_2->GetYaxis()->SetLabelOffset(0.007);
   n_vtx_stack_2->GetYaxis()->SetLabelSize(0.035);
   n_vtx_stack_2->GetYaxis()->SetTitleSize(0.045);
   n_vtx_stack_2->GetYaxis()->SetTickLength(0.02);
   n_vtx_stack_2->GetYaxis()->SetTitleOffset(1.55);
   n_vtx_stack_2->GetYaxis()->SetTitleFont(42);
   n_vtx_stack_2->GetZaxis()->SetLabelFont(42);
   n_vtx_stack_2->GetZaxis()->SetLabelOffset(0.007);
   n_vtx_stack_2->GetZaxis()->SetLabelSize(0.035);
   n_vtx_stack_2->GetZaxis()->SetTitleSize(0.045);
   n_vtx_stack_2->GetZaxis()->SetTickLength(0.02);
   n_vtx_stack_2->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(n_vtx_stack_2);
   
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(4,0.05158251);
   n_vtx->SetBinContent(5,0.07715909);
   n_vtx->SetBinContent(6,0.1946167);
   n_vtx->SetBinContent(7,0.380165);
   n_vtx->SetBinContent(8,0.4403492);
   n_vtx->SetBinContent(9,0.4073699);
   n_vtx->SetBinContent(10,1.016661);
   n_vtx->SetBinContent(11,1.261598);
   n_vtx->SetBinContent(12,0.9668454);
   n_vtx->SetBinContent(13,1.308066);
   n_vtx->SetBinContent(14,1.967119);
   n_vtx->SetBinContent(15,1.259494);
   n_vtx->SetBinContent(16,1.807379);
   n_vtx->SetBinContent(17,1.601472);
   n_vtx->SetBinContent(18,1.543527);
   n_vtx->SetBinContent(19,1.584233);
   n_vtx->SetBinContent(20,1.371491);
   n_vtx->SetBinContent(21,1.097834);
   n_vtx->SetBinContent(22,1.12903);
   n_vtx->SetBinContent(23,1.209146);
   n_vtx->SetBinContent(24,0.7395546);
   n_vtx->SetBinContent(25,0.8984511);
   n_vtx->SetBinContent(26,0.6939113);
   n_vtx->SetBinContent(27,0.7541292);
   n_vtx->SetBinContent(28,0.3637177);
   n_vtx->SetBinContent(29,0.3785703);
   n_vtx->SetBinContent(30,0.4829459);
   n_vtx->SetBinContent(31,0.2116969);
   n_vtx->SetBinContent(32,0.1654665);
   n_vtx->SetBinContent(33,0.1092939);
   n_vtx->SetBinContent(34,0.2043862);
   n_vtx->SetBinContent(35,0.05627903);
   n_vtx->SetBinContent(36,0.05956731);
   n_vtx->SetBinContent(37,0.05390622);
   n_vtx->SetBinContent(38,0.04169551);
   n_vtx->SetBinContent(39,0.02558938);
   n_vtx->SetBinContent(40,0.0006314318);
   n_vtx->SetBinContent(41,0.01364599);
   n_vtx->SetBinError(4,0.04749676);
   n_vtx->SetBinError(5,0.04354681);
   n_vtx->SetBinError(6,0.07776391);
   n_vtx->SetBinError(7,0.1609535);
   n_vtx->SetBinError(8,0.1532497);
   n_vtx->SetBinError(9,0.1115383);
   n_vtx->SetBinError(10,0.2108563);
   n_vtx->SetBinError(11,0.2691947);
   n_vtx->SetBinError(12,0.1862617);
   n_vtx->SetBinError(13,0.2216867);
   n_vtx->SetBinError(14,0.3049101);
   n_vtx->SetBinError(15,0.2582341);
   n_vtx->SetBinError(16,0.2538189);
   n_vtx->SetBinError(17,0.2544297);
   n_vtx->SetBinError(18,0.2338872);
   n_vtx->SetBinError(19,0.2397666);
   n_vtx->SetBinError(20,0.2015554);
   n_vtx->SetBinError(21,0.1872259);
   n_vtx->SetBinError(22,0.1711828);
   n_vtx->SetBinError(23,0.1811279);
   n_vtx->SetBinError(24,0.1303179);
   n_vtx->SetBinError(25,0.1393784);
   n_vtx->SetBinError(26,0.1207771);
   n_vtx->SetBinError(27,0.123703);
   n_vtx->SetBinError(28,0.08173829);
   n_vtx->SetBinError(29,0.09010837);
   n_vtx->SetBinError(30,0.1170918);
   n_vtx->SetBinError(31,0.05388143);
   n_vtx->SetBinError(32,0.03790115);
   n_vtx->SetBinError(33,0.0371053);
   n_vtx->SetBinError(34,0.06940212);
   n_vtx->SetBinError(35,0.01962128);
   n_vtx->SetBinError(36,0.02315081);
   n_vtx->SetBinError(37,0.03221046);
   n_vtx->SetBinError(38,0.01824463);
   n_vtx->SetBinError(39,0.0171334);
   n_vtx->SetBinError(40,0.0004264066);
   n_vtx->SetBinError(41,0.006573833);
   n_vtx->SetMinimum(0.01);
   n_vtx->SetMaximum(1950000);
   n_vtx->SetEntries(1886);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(4);
   n_vtx->SetLineColor(4);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(4);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetTitle("Number of vertices");
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0);
   n_vtx->GetXaxis()->SetTitleSize(0);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetTitle("Events");
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"HIST");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(3,0.09434289);
   n_vtx->SetBinContent(4,1.079591);
   n_vtx->SetBinContent(5,1.368908);
   n_vtx->SetBinContent(6,1.007114);
   n_vtx->SetBinContent(7,1.524317);
   n_vtx->SetBinContent(8,2.61937);
   n_vtx->SetBinContent(9,5.684324);
   n_vtx->SetBinContent(10,8.91291);
   n_vtx->SetBinContent(11,12.55276);
   n_vtx->SetBinContent(12,10.43409);
   n_vtx->SetBinContent(13,11.28865);
   n_vtx->SetBinContent(14,12.33857);
   n_vtx->SetBinContent(15,15.95572);
   n_vtx->SetBinContent(16,9.2558);
   n_vtx->SetBinContent(17,10.29907);
   n_vtx->SetBinContent(18,14.4565);
   n_vtx->SetBinContent(19,13.58902);
   n_vtx->SetBinContent(20,11.44435);
   n_vtx->SetBinContent(21,10.25077);
   n_vtx->SetBinContent(22,8.098695);
   n_vtx->SetBinContent(23,6.589249);
   n_vtx->SetBinContent(24,6.024534);
   n_vtx->SetBinContent(25,5.545425);
   n_vtx->SetBinContent(26,3.928265);
   n_vtx->SetBinContent(27,3.71264);
   n_vtx->SetBinContent(28,2.954553);
   n_vtx->SetBinContent(29,1.599091);
   n_vtx->SetBinContent(30,0.9768294);
   n_vtx->SetBinContent(31,0.6824476);
   n_vtx->SetBinContent(32,1.042395);
   n_vtx->SetBinContent(33,0.7944179);
   n_vtx->SetBinContent(34,0.5172431);
   n_vtx->SetBinContent(35,0.3090403);
   n_vtx->SetBinContent(36,0.569423);
   n_vtx->SetBinContent(37,0.06357217);
   n_vtx->SetBinContent(38,0.06097282);
   n_vtx->SetBinContent(39,0.002635351);
   n_vtx->SetBinContent(40,0.02459218);
   n_vtx->SetBinContent(41,0.000992481);
   n_vtx->SetBinError(3,0.09434289);
   n_vtx->SetBinError(4,0.6817949);
   n_vtx->SetBinError(5,0.8876466);
   n_vtx->SetBinError(6,0.7124994);
   n_vtx->SetBinError(7,0.6631484);
   n_vtx->SetBinError(8,1.004432);
   n_vtx->SetBinError(9,1.599111);
   n_vtx->SetBinError(10,2.101462);
   n_vtx->SetBinError(11,2.525013);
   n_vtx->SetBinError(12,2.237427);
   n_vtx->SetBinError(13,2.576553);
   n_vtx->SetBinError(14,2.352499);
   n_vtx->SetBinError(15,2.919784);
   n_vtx->SetBinError(16,2.028593);
   n_vtx->SetBinError(17,2.06896);
   n_vtx->SetBinError(18,2.497042);
   n_vtx->SetBinError(19,2.388855);
   n_vtx->SetBinError(20,1.965329);
   n_vtx->SetBinError(21,2.076911);
   n_vtx->SetBinError(22,1.663077);
   n_vtx->SetBinError(23,1.400957);
   n_vtx->SetBinError(24,1.411917);
   n_vtx->SetBinError(25,1.218754);
   n_vtx->SetBinError(26,0.9138521);
   n_vtx->SetBinError(27,0.9001326);
   n_vtx->SetBinError(28,0.772166);
   n_vtx->SetBinError(29,0.5898968);
   n_vtx->SetBinError(30,0.5044095);
   n_vtx->SetBinError(31,0.3243134);
   n_vtx->SetBinError(32,0.3653988);
   n_vtx->SetBinError(33,0.3652447);
   n_vtx->SetBinError(34,0.2374518);
   n_vtx->SetBinError(35,0.1574426);
   n_vtx->SetBinError(36,0.3782065);
   n_vtx->SetBinError(37,0.03104211);
   n_vtx->SetBinError(38,0.05246291);
   n_vtx->SetBinError(39,0.002600141);
   n_vtx->SetBinError(40,0.02438421);
   n_vtx->SetBinError(41,0.00077034);
   n_vtx->SetEntries(920);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(5);
   n_vtx->SetLineColor(5);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(5);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(6);
   n_vtx->SetLineColor(6);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(6);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(19,0.009222879);
   n_vtx->SetBinContent(26,0.001143451);
   n_vtx->SetBinError(19,0.009222879);
   n_vtx->SetBinError(26,0.001143451);
   n_vtx->SetEntries(2);
   n_vtx->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#660099");
   n_vtx->SetFillColor(ci);

   ci = TColor::GetColor("#660099");
   n_vtx->SetLineColor(ci);
   n_vtx->SetLineWidth(2);

   ci = TColor::GetColor("#660099");
   n_vtx->SetMarkerColor(ci);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(3);
   n_vtx->SetLineColor(3);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(3);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(2,0.01669763);
   n_vtx->SetBinContent(3,0.5365607);
   n_vtx->SetBinContent(4,2.548624);
   n_vtx->SetBinContent(5,4.394316);
   n_vtx->SetBinContent(6,12.37953);
   n_vtx->SetBinContent(7,19.63148);
   n_vtx->SetBinContent(8,28.82164);
   n_vtx->SetBinContent(9,37.16805);
   n_vtx->SetBinContent(10,52.47125);
   n_vtx->SetBinContent(11,59.00441);
   n_vtx->SetBinContent(12,70.30256);
   n_vtx->SetBinContent(13,78.02962);
   n_vtx->SetBinContent(14,82.26244);
   n_vtx->SetBinContent(15,82.08717);
   n_vtx->SetBinContent(16,76.85096);
   n_vtx->SetBinContent(17,83.04745);
   n_vtx->SetBinContent(18,76.30101);
   n_vtx->SetBinContent(19,77.87566);
   n_vtx->SetBinContent(20,72.32049);
   n_vtx->SetBinContent(21,65.62036);
   n_vtx->SetBinContent(22,61.31769);
   n_vtx->SetBinContent(23,58.32827);
   n_vtx->SetBinContent(24,52.73425);
   n_vtx->SetBinContent(25,42.66306);
   n_vtx->SetBinContent(26,36.80849);
   n_vtx->SetBinContent(27,30.32547);
   n_vtx->SetBinContent(28,26.4933);
   n_vtx->SetBinContent(29,21.98045);
   n_vtx->SetBinContent(30,19.33023);
   n_vtx->SetBinContent(31,13.49084);
   n_vtx->SetBinContent(32,10.18999);
   n_vtx->SetBinContent(33,6.070822);
   n_vtx->SetBinContent(34,6.637331);
   n_vtx->SetBinContent(35,3.886343);
   n_vtx->SetBinContent(36,2.711147);
   n_vtx->SetBinContent(37,1.994746);
   n_vtx->SetBinContent(38,1.012214);
   n_vtx->SetBinContent(39,0.752544);
   n_vtx->SetBinContent(40,0.1641972);
   n_vtx->SetBinContent(41,0.6225863);
   n_vtx->SetBinError(2,0.01236287);
   n_vtx->SetBinError(3,0.2066828);
   n_vtx->SetBinError(4,0.4909981);
   n_vtx->SetBinError(5,0.6031274);
   n_vtx->SetBinError(6,1.177454);
   n_vtx->SetBinError(7,1.319965);
   n_vtx->SetBinError(8,1.632343);
   n_vtx->SetBinError(9,1.888829);
   n_vtx->SetBinError(10,2.171629);
   n_vtx->SetBinError(11,2.233842);
   n_vtx->SetBinError(12,2.433715);
   n_vtx->SetBinError(13,2.549496);
   n_vtx->SetBinError(14,2.669379);
   n_vtx->SetBinError(15,2.582036);
   n_vtx->SetBinError(16,2.346709);
   n_vtx->SetBinError(17,2.608607);
   n_vtx->SetBinError(18,2.55011);
   n_vtx->SetBinError(19,2.580204);
   n_vtx->SetBinError(20,2.55015);
   n_vtx->SetBinError(21,2.235235);
   n_vtx->SetBinError(22,2.262433);
   n_vtx->SetBinError(23,2.30238);
   n_vtx->SetBinError(24,2.317212);
   n_vtx->SetBinError(25,1.77244);
   n_vtx->SetBinError(26,1.783462);
   n_vtx->SetBinError(27,1.646252);
   n_vtx->SetBinError(28,1.447423);
   n_vtx->SetBinError(29,1.40022);
   n_vtx->SetBinError(30,1.258969);
   n_vtx->SetBinError(31,0.9353239);
   n_vtx->SetBinError(32,0.8783329);
   n_vtx->SetBinError(33,0.5157463);
   n_vtx->SetBinError(34,0.9010576);
   n_vtx->SetBinError(35,0.7268241);
   n_vtx->SetBinError(36,0.4523313);
   n_vtx->SetBinError(37,0.5369523);
   n_vtx->SetBinError(38,0.2763191);
   n_vtx->SetBinError(39,0.2551084);
   n_vtx->SetBinError(40,0.03531891);
   n_vtx->SetBinError(41,0.1396249);
   n_vtx->SetEntries(39381);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(3);
   n_vtx->SetLineColor(3);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(3);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(2,0.01852303);
   n_vtx->SetBinContent(3,0.1489342);
   n_vtx->SetBinContent(4,0.7780774);
   n_vtx->SetBinContent(5,2.301335);
   n_vtx->SetBinContent(6,4.587503);
   n_vtx->SetBinContent(7,6.846882);
   n_vtx->SetBinContent(8,11.44862);
   n_vtx->SetBinContent(9,14.741);
   n_vtx->SetBinContent(10,18.46207);
   n_vtx->SetBinContent(11,20.83819);
   n_vtx->SetBinContent(12,22.87138);
   n_vtx->SetBinContent(13,24.28577);
   n_vtx->SetBinContent(14,25.12818);
   n_vtx->SetBinContent(15,25.00669);
   n_vtx->SetBinContent(16,24.07542);
   n_vtx->SetBinContent(17,22.67222);
   n_vtx->SetBinContent(18,20.42333);
   n_vtx->SetBinContent(19,18.28307);
   n_vtx->SetBinContent(20,15.56161);
   n_vtx->SetBinContent(21,13.11717);
   n_vtx->SetBinContent(22,11.31139);
   n_vtx->SetBinContent(23,9.395015);
   n_vtx->SetBinContent(24,7.142459);
   n_vtx->SetBinContent(25,5.659528);
   n_vtx->SetBinContent(26,3.917166);
   n_vtx->SetBinContent(27,3.131598);
   n_vtx->SetBinContent(28,2.240999);
   n_vtx->SetBinContent(29,1.515181);
   n_vtx->SetBinContent(30,1.141922);
   n_vtx->SetBinContent(31,0.8393011);
   n_vtx->SetBinContent(32,0.5208145);
   n_vtx->SetBinContent(33,0.3235227);
   n_vtx->SetBinContent(34,0.183648);
   n_vtx->SetBinContent(35,0.1597126);
   n_vtx->SetBinContent(36,0.1458589);
   n_vtx->SetBinContent(37,0.08219747);
   n_vtx->SetBinContent(38,0.03202998);
   n_vtx->SetBinContent(39,0.02117746);
   n_vtx->SetBinContent(40,0.03135108);
   n_vtx->SetBinContent(41,0.01261483);
   n_vtx->SetBinError(2,0.00719598);
   n_vtx->SetBinError(3,0.02702058);
   n_vtx->SetBinError(4,0.08621663);
   n_vtx->SetBinError(5,0.1508816);
   n_vtx->SetBinError(6,0.2181825);
   n_vtx->SetBinError(7,0.2692104);
   n_vtx->SetBinError(8,0.3528375);
   n_vtx->SetBinError(9,0.3882601);
   n_vtx->SetBinError(10,0.4323837);
   n_vtx->SetBinError(11,0.4509886);
   n_vtx->SetBinError(12,0.4701123);
   n_vtx->SetBinError(13,0.4746971);
   n_vtx->SetBinError(14,0.477095);
   n_vtx->SetBinError(15,0.468831);
   n_vtx->SetBinError(16,0.4568748);
   n_vtx->SetBinError(17,0.4365624);
   n_vtx->SetBinError(18,0.410631);
   n_vtx->SetBinError(19,0.3812667);
   n_vtx->SetBinError(20,0.3488189);
   n_vtx->SetBinError(21,0.3165428);
   n_vtx->SetBinError(22,0.2840353);
   n_vtx->SetBinError(23,0.253345);
   n_vtx->SetBinError(24,0.2182952);
   n_vtx->SetBinError(25,0.1847663);
   n_vtx->SetBinError(26,0.147209);
   n_vtx->SetBinError(27,0.1300747);
   n_vtx->SetBinError(28,0.1047851);
   n_vtx->SetBinError(29,0.08366034);
   n_vtx->SetBinError(30,0.07081005);
   n_vtx->SetBinError(31,0.0596564);
   n_vtx->SetBinError(32,0.04159033);
   n_vtx->SetBinError(33,0.03490948);
   n_vtx->SetBinError(34,0.02186597);
   n_vtx->SetBinError(35,0.02159475);
   n_vtx->SetBinError(36,0.02653633);
   n_vtx->SetBinError(37,0.01439984);
   n_vtx->SetBinError(38,0.008763982);
   n_vtx->SetBinError(39,0.007918073);
   n_vtx->SetBinError(40,0.00997625);
   n_vtx->SetBinError(41,0.002857683);
   n_vtx->SetEntries(63976);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(3);
   n_vtx->SetLineColor(3);
   n_vtx->SetLineWidth(2);
   n_vtx->SetMarkerColor(3);
   n_vtx->SetMarkerStyle(21);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   stack->Add(n_vtx,"");
   stack->Draw("hist");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(4,2);
   n_vtx->SetBinContent(5,11);
   n_vtx->SetBinContent(6,17);
   n_vtx->SetBinContent(7,25);
   n_vtx->SetBinContent(8,38);
   n_vtx->SetBinContent(9,74);
   n_vtx->SetBinContent(10,67);
   n_vtx->SetBinContent(11,76);
   n_vtx->SetBinContent(12,100);
   n_vtx->SetBinContent(13,126);
   n_vtx->SetBinContent(14,102);
   n_vtx->SetBinContent(15,130);
   n_vtx->SetBinContent(16,116);
   n_vtx->SetBinContent(17,102);
   n_vtx->SetBinContent(18,106);
   n_vtx->SetBinContent(19,81);
   n_vtx->SetBinContent(20,74);
   n_vtx->SetBinContent(21,65);
   n_vtx->SetBinContent(22,53);
   n_vtx->SetBinContent(23,44);
   n_vtx->SetBinContent(24,35);
   n_vtx->SetBinContent(25,29);
   n_vtx->SetBinContent(26,20);
   n_vtx->SetBinContent(27,14);
   n_vtx->SetBinContent(28,6);
   n_vtx->SetBinContent(29,5);
   n_vtx->SetBinContent(30,6);
   n_vtx->SetBinContent(31,4);
   n_vtx->SetBinContent(32,3);
   n_vtx->SetBinContent(33,2);
   n_vtx->SetBinContent(34,1);
   n_vtx->SetBinContent(37,1);
   n_vtx->SetBinError(4,1.414214);
   n_vtx->SetBinError(5,3.316625);
   n_vtx->SetBinError(6,4.123106);
   n_vtx->SetBinError(7,5);
   n_vtx->SetBinError(8,6.164414);
   n_vtx->SetBinError(9,8.602325);
   n_vtx->SetBinError(10,8.185353);
   n_vtx->SetBinError(11,8.717798);
   n_vtx->SetBinError(12,10);
   n_vtx->SetBinError(13,11.22497);
   n_vtx->SetBinError(14,10.0995);
   n_vtx->SetBinError(15,11.40175);
   n_vtx->SetBinError(16,10.77033);
   n_vtx->SetBinError(17,10.0995);
   n_vtx->SetBinError(18,10.29563);
   n_vtx->SetBinError(19,9);
   n_vtx->SetBinError(20,8.602325);
   n_vtx->SetBinError(21,8.062258);
   n_vtx->SetBinError(22,7.28011);
   n_vtx->SetBinError(23,6.63325);
   n_vtx->SetBinError(24,5.91608);
   n_vtx->SetBinError(25,5.385165);
   n_vtx->SetBinError(26,4.472136);
   n_vtx->SetBinError(27,3.741657);
   n_vtx->SetBinError(28,2.44949);
   n_vtx->SetBinError(29,2.236068);
   n_vtx->SetBinError(30,2.44949);
   n_vtx->SetBinError(31,2);
   n_vtx->SetBinError(32,1.732051);
   n_vtx->SetBinError(33,1.414214);
   n_vtx->SetBinError(34,1);
   n_vtx->SetBinError(37,1);
   n_vtx->SetEntries(1535);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(1);
   n_vtx->SetFillStyle(0);
   n_vtx->SetLineWidth(3);
   n_vtx->SetMarkerStyle(20);
   n_vtx->SetMarkerSize(1.3);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   n_vtx->Draw("SAMEPE1");
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetStats(0);
   n_vtx->SetFillColor(1);
   n_vtx->SetFillStyle(0);
   n_vtx->SetLineStyle(2);
   n_vtx->SetLineWidth(3);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.035);
   n_vtx->GetXaxis()->SetTitleSize(0.045);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.035);
   n_vtx->GetYaxis()->SetTitleSize(0.045);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(1.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   n_vtx->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.95,0.965,"WSelection");
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
   TLegendEntry *entry=leg->AddEntry("n_vtx","VBF m_{H}=120 GeV","fl");
   entry->SetFillColor(1);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.3);
   entry=leg->AddEntry("n_vtx","Z+jets,EWK Z","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","EWK W+jets","f");

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
   entry=leg->AddEntry("n_vtx","QCD W+jets","f");
   entry->SetFillColor(6);
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","t#bar{t},t,tW","f");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("n_vtx","Dibosons","f");
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
   lower->Range(-8.101265,-0.653951,42.53165,2.070845);
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
   
   TH1F *n_vtx = new TH1F("n_vtx","n_vtx",40,0,40);
   n_vtx->SetBinContent(4,0.4538963);
   n_vtx->SetBinContent(5,1.363993);
   n_vtx->SetBinContent(6,0.945803);
   n_vtx->SetBinContent(7,0.8927716);
   n_vtx->SetBinContent(8,0.885995);
   n_vtx->SetBinContent(9,1.28487);
   n_vtx->SetBinContent(10,0.8391129);
   n_vtx->SetBinContent(11,0.8225521);
   n_vtx->SetBinContent(12,0.9651761);
   n_vtx->SetBinContent(13,1.109115);
   n_vtx->SetBinContent(14,0.8519226);
   n_vtx->SetBinContent(15,1.056485);
   n_vtx->SetBinContent(16,1.052802);
   n_vtx->SetBinContent(17,0.8791683);
   n_vtx->SetBinContent(18,0.9534016);
   n_vtx->SetBinContent(19,0.7379942);
   n_vtx->SetBinContent(20,0.7450181);
   n_vtx->SetBinContent(21,0.730433);
   n_vtx->SetBinContent(22,0.6565275);
   n_vtx->SetBinContent(23,0.5920939);
   n_vtx->SetBinContent(24,0.5310978);
   n_vtx->SetBinContent(25,0.5383528);
   n_vtx->SetBinContent(26,0.4478776);
   n_vtx->SetBinContent(27,0.3766508);
   n_vtx->SetBinContent(28,0.189341);
   n_vtx->SetBinContent(29,0.1992451);
   n_vtx->SetBinContent(30,0.2797335);
   n_vtx->SetBinContent(31,0.266443);
   n_vtx->SetBinContent(32,0.2552496);
   n_vtx->SetBinContent(33,0.278212);
   n_vtx->SetBinContent(34,0.1362728);
   n_vtx->SetBinContent(37,0.4671772);
   n_vtx->SetBinError(4,0.3325365);
   n_vtx->SetBinError(5,0.4502564);
   n_vtx->SetBinError(6,0.2408245);
   n_vtx->SetBinError(7,0.1848601);
   n_vtx->SetBinError(8,0.149259);
   n_vtx->SetBinError(9,0.1594765);
   n_vtx->SetBinError(10,0.1074166);
   n_vtx->SetBinError(11,0.09909308);
   n_vtx->SetBinError(12,0.1014064);
   n_vtx->SetBinError(13,0.1050561);
   n_vtx->SetBinError(14,0.08813566);
   n_vtx->SetBinError(15,0.09859998);
   n_vtx->SetBinError(16,0.1022383);
   n_vtx->SetBinError(17,0.09069354);
   n_vtx->SetBinError(18,0.09759271);
   n_vtx->SetBinError(19,0.08537833);
   n_vtx->SetBinError(20,0.08994849);
   n_vtx->SetBinError(21,0.09403291);
   n_vtx->SetBinError(22,0.09305598);
   n_vtx->SetBinError(23,0.09183034);
   n_vtx->SetBinError(24,0.09241373);
   n_vtx->SetBinError(25,0.1022715);
   n_vtx->SetBinError(26,0.1021561);
   n_vtx->SetBinError(27,0.1024524);
   n_vtx->SetBinError(28,0.07791968);
   n_vtx->SetBinError(29,0.08992049);
   n_vtx->SetBinError(30,0.1155661);
   n_vtx->SetBinError(31,0.1343793);
   n_vtx->SetBinError(32,0.1488123);
   n_vtx->SetBinError(33,0.1982448);
   n_vtx->SetBinError(34,0.1373677);
   n_vtx->SetBinError(37,0.4817098);
   n_vtx->SetMinimum(0);
   n_vtx->SetMaximum(2);
   n_vtx->SetEntries(483.8969);
   n_vtx->SetStats(0);
   n_vtx->SetFillStyle(0);
   n_vtx->SetMarkerStyle(20);
   n_vtx->SetMarkerSize(0.8);
   n_vtx->GetXaxis()->SetTitle("Number of vertices");
   n_vtx->GetXaxis()->SetLabelFont(42);
   n_vtx->GetXaxis()->SetLabelOffset(0.007);
   n_vtx->GetXaxis()->SetLabelSize(0.1);
   n_vtx->GetXaxis()->SetTitleSize(0.12);
   n_vtx->GetXaxis()->SetTickLength(0.02);
   n_vtx->GetXaxis()->SetTitleOffset(0.9);
   n_vtx->GetXaxis()->SetTitleFont(42);
   n_vtx->GetYaxis()->SetTitle("Data/MC");
   n_vtx->GetYaxis()->SetNdivisions(505);
   n_vtx->GetYaxis()->SetLabelFont(42);
   n_vtx->GetYaxis()->SetLabelOffset(0.007);
   n_vtx->GetYaxis()->SetLabelSize(0.1);
   n_vtx->GetYaxis()->SetTitleSize(0.12);
   n_vtx->GetYaxis()->SetTickLength(0.02);
   n_vtx->GetYaxis()->SetTitleOffset(0.55);
   n_vtx->GetYaxis()->SetTitleFont(42);
   n_vtx->GetZaxis()->SetLabelFont(42);
   n_vtx->GetZaxis()->SetLabelOffset(0.007);
   n_vtx->GetZaxis()->SetLabelSize(0.035);
   n_vtx->GetZaxis()->SetTitleSize(0.045);
   n_vtx->GetZaxis()->SetTickLength(0.02);
   n_vtx->GetZaxis()->SetTitleFont(42);
   n_vtx->Draw("PE1");
   lower->Modified();
   canv->cd();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
