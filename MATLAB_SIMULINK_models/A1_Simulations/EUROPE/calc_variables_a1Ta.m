clear
data1=xlsread('Gov_data.xlsx','D:D');
R=0.05;

T_1=data1(2);
T_2=data1(3);
T_3=data1(4);
T_4=data1(5);
T_5=data1(6);
F=data1(7);
% For differen loads, Fcn4 blck hast to be adjusted in order to make the
% syncronous machine to deliver power in the same 30s
% An 100% of syncronous machines opeerating at 0.8 of their nominal, in a n
% machines systems with acceration time constant of 10s each. Correspond to
% a system acceleration constan of 12.5s (Tsys=%sync*Tn/deloadfactor). Note
% that the bigger the deload (keeping same Tn) the greater the Tsys.

Tsys=5;  % System time acceleration constant in seconds
Tn=10;  %machine acceleration constant
dlo=0.8;  %de-loading factor for dispatch of sync machines, no units
pf=0.9; %power factor, no units
E_load=150;  %total active power load in GW
Ek=Tsys*E_load/2;  %total kinetic energy stored in rotating masses GWs
Sb=E_load/pf;  %Load apparent power in GVA
H=Ek/Sb;   % System Inertia constant in seconds
Share_sync=Tsys*dlo/Tn;  %share of syncronous machines (power dispatcht)
Share_re=1-Share_sync;  %share of RE (power dispatch)
un=0.02; %power unbalance (increment in load) no units
%rof=un*50/Tsys;
%rof2=un*E_load*50/(2*H*Sb);
Ki=10;   %Gain of synthetic inertia control/// biger values increases momentaneous power output
count=0;
T_wt=1; %Filter parameter
J=3.56; %blades+rotor+... momentum of inertia Kg*m^2
c=0;
ci=1;
d=0.001; %intentional delay
share_wt=0.8; %share of wind out in relation to the overall RE share
P_re=Share_re*E_load; %RE share in GW
n_wt=P_re*share_wt/(1.5e-3); %number of wind turbines in GW, assuming each to be 1.5MW
H_wt=4.19; %Inertia constant of wind turbine in seconds
P_wt=P_re*share_wt; %Wind power output in GW

dlyr=0.001; %delay in rocof measurement in seconds
