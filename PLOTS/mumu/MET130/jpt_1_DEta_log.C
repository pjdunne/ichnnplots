{
//=========Macro generated from canvas: canv/canv
//=========  (Mon Nov 18 15:44:22 2013) by ROOT version5.32/00
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
   upper->Range(-202.5316,-2.915631,1063.291,7.247002);
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
   stack->SetMaximum(2058478);
   
   TH1F *jpt_1_stack_5 = new TH1F("jpt_1_stack_5","stack",25,0,1000);
   jpt_1_stack_5->SetBinContent(2,0.5449501);
   jpt_1_stack_5->SetBinContent(3,1.267175);
   jpt_1_stack_5->SetBinContent(4,1.480754);
   jpt_1_stack_5->SetBinContent(5,0.4860268);
   jpt_1_stack_5->SetBinContent(6,0.3954509);
   jpt_1_stack_5->SetBinContent(7,0.2055471);
   jpt_1_stack_5->SetBinContent(8,0.06507768);
   jpt_1_stack_5->SetBinContent(10,0.03360423);
   jpt_1_stack_5->SetBinError(2,0.1342708);
   jpt_1_stack_5->SetBinError(3,0.2707388);
   jpt_1_stack_5->SetBinError(4,0.3065669);
   jpt_1_stack_5->SetBinError(5,0.1558697);
   jpt_1_stack_5->SetBinError(6,0.1456384);
   jpt_1_stack_5->SetBinError(7,0.09197483);
   jpt_1_stack_5->SetBinError(8,0.04654173);
   jpt_1_stack_5->SetBinError(10,0.03360423);
   jpt_1_stack_5->SetMinimum(0.001939197);
   jpt_1_stack_5->SetMaximum(5481127);
   jpt_1_stack_5->SetEntries(125);
   jpt_1_stack_5->SetStats(0);
   jpt_1_stack_5->SetFillColor(4);
   jpt_1_stack_5->SetLineColor(4);
   jpt_1_stack_5->SetLineWidth(2);
   jpt_1_stack_5->SetMarkerColor(4);
   jpt_1_stack_5->SetMarkerStyle(21);
   jpt_1_stack_5->SetMarkerSize(0.8);
   jpt_1_stack_5->GetXaxis()->SetTitle("Leading Jet p_{T} [GeV]");
   jpt_1_stack_5->GetXaxis()->SetLabelFont(42);
   jpt_1_stack_5->GetXaxis()->SetLabelOffset(0.007);
   jpt_1_stack_5->GetXaxis()->SetLabelSize(0);
   jpt_1_stack_5->GetXaxis()->SetTitleSize(0);
   jpt_1_stack_5->GetXaxis()->SetTickLength(0.02);
   jpt_1_stack_5->GetXaxis()->SetTitleOffset(0.9);
   jpt_1_stack_5->GetXaxis()->SetTitleFont(42);
   jpt_1_stack_5->GetYaxis()->SetTitle("Events");
   jpt_1_stack_5->GetYaxis()->SetLabelFont(42);
   jpt_1_stack_5->GetYaxis()->SetLabelOffset(0.007);
   jpt_1_stack_5->GetYaxis()->SetLabelSize(0.035);
   jpt_1_stack_5->GetYaxis()->SetTitleSize(0.045);
   jpt_1_stack_5->GetYaxis()->SetTickLength(0.02);
   jpt_1_stack_5->GetYaxis()->SetTitleOffset(1.55);
   jpt_1_stack_5->GetYaxis()->SetTitleFont(42);
   jpt_1_stack_5->GetZaxis()->SetLabelFont(42);
   jpt_1_stack_5->GetZaxis()->SetLabelOffset(0.007);
   jpt_1_stack_5->GetZaxis()->SetLabelSize(0.035);
   jpt_1_stack_5->GetZaxis()->SetTitleSize(0.045);
   jpt_1_stack_5->GetZaxis()->SetTickLength(0.02);
   jpt_1_stack_5->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(jpt_1_stack_5);
   
   
   TH1F *jpt_1 = new TH1F("jpt_1","jpt_1",25,0,1000);
   jpt_1->SetBinContent(2,0.5449501);
   jpt_1->SetBinContent(3,1.267175);
   jpt_1->SetBinContent(4,1.480754);
   jpt_1->SetBinContent(5,0.4860268);
   jpt_1->SetBinContent(6,0.3954509);
   jpt_1->SetBinContent(7,0.2055471);
   jpt_1->SetBinContent(8,0.06507768);
   jpt_1->SetBinContent(10,0.03360423);
   jpt_1->SetBinError(2,0.1342708);
   jpt_1->SetBinError(3,0.2707388);
   jpt_1->SetBinError(4,0.3065669);
   jpt_1->SetBinError(5,0.1558697);
   jpt_1->SetBinError(6,0.1456384);
   jpt_1->SetBinError(7,0.09197483);
   jpt_1->SetBinError(8,0.04654173);
   jpt_1->SetBinError(10,0.03360423);
   jpt_1->SetMinimum(0.01);
   jpt_1->SetMaximum(1740000);
   jpt_1->SetEntries(125);
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
   jpt_1->SetBinContent(2,2.453464);
   jpt_1->SetBinContent(3,8.506656);
   jpt_1->SetBinContent(4,11.92639);
   jpt_1->SetBinContent(5,3.866885);
   jpt_1->SetBinContent(6,3.464049);
   jpt_1->SetBinContent(7,2.105329);
   jpt_1->SetBinContent(8,0.03783311);
   jpt_1->SetBinContent(9,0.7296048);
   jpt_1->SetBinContent(10,0.08319409);
   jpt_1->SetBinError(2,0.9622319);
   jpt_1->SetBinError(3,2.121799);
   jpt_1->SetBinError(4,2.701652);
   jpt_1->SetBinError(5,1.478016);
   jpt_1->SetBinError(6,1.800299);
   jpt_1->SetBinError(7,1.110717);
   jpt_1->SetBinError(8,0.03783311);
   jpt_1->SetBinError(9,0.7296048);
   jpt_1->SetBinError(10,0.08319409);
   jpt_1->SetEntries(78);
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
   jpt_1->SetBinContent(2,15.83453);
   jpt_1->SetBinContent(3,76.98541);
   jpt_1->SetBinContent(4,76.74844);
   jpt_1->SetBinContent(5,51.61368);
   jpt_1->SetBinContent(6,24.5721);
   jpt_1->SetBinContent(7,12.2836);
   jpt_1->SetBinContent(8,5.856413);
   jpt_1->SetBinContent(9,2.843758);
   jpt_1->SetBinContent(10,1.626547);
   jpt_1->SetBinContent(11,0.9358279);
   jpt_1->SetBinContent(12,0.5965276);
   jpt_1->SetBinContent(13,0.2623201);
   jpt_1->SetBinContent(14,0.2176475);
   jpt_1->SetBinError(2,1.117291);
   jpt_1->SetBinError(3,2.646811);
   jpt_1->SetBinError(4,2.804126);
   jpt_1->SetBinError(5,2.41804);
   jpt_1->SetBinError(6,1.713309);
   jpt_1->SetBinError(7,1.231231);
   jpt_1->SetBinError(8,0.8381965);
   jpt_1->SetBinError(9,0.5797042);
   jpt_1->SetBinError(10,0.4262869);
   jpt_1->SetBinError(11,0.35528);
   jpt_1->SetBinError(12,0.3069984);
   jpt_1->SetBinError(13,0.1585684);
   jpt_1->SetBinError(14,0.1559078);
   jpt_1->SetEntries(3913);
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
   jpt_1->SetBinContent(2,3.022109);
   jpt_1->SetBinContent(3,29.09767);
   jpt_1->SetBinContent(4,47.07626);
   jpt_1->SetBinContent(5,41.50038);
   jpt_1->SetBinContent(6,27.277);
   jpt_1->SetBinContent(7,14.87431);
   jpt_1->SetBinContent(8,7.880014);
   jpt_1->SetBinContent(9,3.614807);
   jpt_1->SetBinContent(10,1.897308);
   jpt_1->SetBinContent(11,1.000206);
   jpt_1->SetBinContent(12,0.637598);
   jpt_1->SetBinContent(13,0.3466922);
   jpt_1->SetBinContent(14,0.08256183);
   jpt_1->SetBinContent(15,0.07719828);
   jpt_1->SetBinContent(16,0.01948478);
   jpt_1->SetBinContent(17,0.02561017);
   jpt_1->SetBinContent(18,0.01456328);
   jpt_1->SetBinContent(20,0.01069416);
   jpt_1->SetBinError(2,0.1451665);
   jpt_1->SetBinError(3,0.4850577);
   jpt_1->SetBinError(4,0.6426321);
   jpt_1->SetBinError(5,0.6261034);
   jpt_1->SetBinError(6,0.5270328);
   jpt_1->SetBinError(7,0.3960518);
   jpt_1->SetBinError(8,0.2918182);
   jpt_1->SetBinError(9,0.1956827);
   jpt_1->SetBinError(10,0.1418881);
   jpt_1->SetBinError(11,0.1053928);
   jpt_1->SetBinError(12,0.08353483);
   jpt_1->SetBinError(13,0.06193782);
   jpt_1->SetBinError(14,0.03056152);
   jpt_1->SetBinError(15,0.02874885);
   jpt_1->SetBinError(16,0.01450572);
   jpt_1->SetBinError(17,0.01517626);
   jpt_1->SetBinError(18,0.01084602);
   jpt_1->SetBinError(20,0.00796142);
   jpt_1->SetEntries(27040);
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
   jpt_1->SetBinContent(2,18);
   jpt_1->SetBinContent(3,101);
   jpt_1->SetBinContent(4,116);
   jpt_1->SetBinContent(5,60);
   jpt_1->SetBinContent(6,30);
   jpt_1->SetBinContent(7,15);
   jpt_1->SetBinContent(8,6);
   jpt_1->SetBinContent(9,2);
   jpt_1->SetBinContent(10,1);
   jpt_1->SetBinContent(12,1);
   jpt_1->SetBinError(2,4.242641);
   jpt_1->SetBinError(3,10.04988);
   jpt_1->SetBinError(4,10.77033);
   jpt_1->SetBinError(5,7.745967);
   jpt_1->SetBinError(6,5.477226);
   jpt_1->SetBinError(7,3.872983);
   jpt_1->SetBinError(8,2.44949);
   jpt_1->SetBinError(9,1.414214);
   jpt_1->SetBinError(10,1);
   jpt_1->SetBinError(12,1);
   jpt_1->SetEntries(350);
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
   TLatex *   tex = new TLatex(0.95,0.965,"DEta");
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
   jpt_1->SetBinContent(2,0.8446698);
   jpt_1->SetBinContent(3,0.8814053);
   jpt_1->SetBinContent(4,0.8545051);
   jpt_1->SetBinContent(5,0.6186783);
   jpt_1->SetBinContent(6,0.5423665);
   jpt_1->SetBinContent(7,0.5125886);
   jpt_1->SetBinContent(8,0.4355951);
   jpt_1->SetBinContent(9,0.278235);
   jpt_1->SetBinContent(10,0.2772349);
   jpt_1->SetBinContent(12,0.8102903);
   jpt_1->SetBinError(2,0.2075719);
   jpt_1->SetBinError(3,0.09157836);
   jpt_1->SetBinError(4,0.08313704);
   jpt_1->SetBinError(5,0.08198893);
   jpt_1->SetBinError(6,0.1021074);
   jpt_1->SetBinError(7,0.135677);
   jpt_1->SetBinError(8,0.1800363);
   jpt_1->SetBinError(9,0.2001644);
   jpt_1->SetBinError(10,0.2794504);
   jpt_1->SetBinError(12,0.8367839);
   jpt_1->SetMinimum(0);
   jpt_1->SetMaximum(2);
   jpt_1->SetEntries(38.81566);
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
