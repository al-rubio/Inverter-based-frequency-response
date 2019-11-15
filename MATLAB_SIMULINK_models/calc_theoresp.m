%Code used to set the variables for the block representation of the IEEE 9
%bus model. Change the column of the file Gov_data according to the
%generator which is desired to be simulated. For critical time estimation
%the variable n_wt has to be set to one.
clear
data1=xlsread('Gov_data_hy.xlsx','B:B'); %Generator selection
un=0.25; %load unbalance
R=0.05; %Gen droop
Sb=data1(1); %Nominal capacity in MW
T_1=data1(2);
T_2=data1(3);
T_3=data1(4);
T_4=data1(5);
T_5=data1(6);
F=data1(7);
Wk=data1(8); %Kinetic energy in MWs
H=data1(9); %Inertia constant in s
Pmax=data1(10);
Tsys=data1(11); %Acceleration time constant in s
share_wt=0.8; %Wind energy share, out of the RE share
P_re=3; %RE share
Share_RE=100;
n_wt=P_re*share_wt/1.5;

H_wt=4.37; %Inertia constant of wind turbines at nominal speed
Ki=10;
P_wt=P_re*share_wt; %total wind energy power

count=0;
E_load=0;
T_wt=1;
J=3.56; %turbine inertia
c=0;
ci=1;
d=0.001;
