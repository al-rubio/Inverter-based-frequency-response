%to set variables only :)
clear;
load=315e6;
syn_s=0.2;
re_s=1-syn_s;
%Ek=(1968.75e6)*syn_s; %Variation of kinetic energy according to share 1968.75MWs for a 100% Synch grid with 12.5s to Tsys
Ek=(2205e6)*syn_s; %Variation of kinetic energy according to share 1968.75MWs for a 100% Synch grid with 14s to Tsys
Tsys=2*Ek/load;
%For Ek=1968.75MWs
%H1=4.694*syn_s;
%H2=3.2*syn_s;
%H3=1.505*syn_s;

%for Ek=2205MWs
H1=2.444444*syn_s;
H2=5*syn_s;
H3=5*syn_s;
S1=247.5e6;
S2=192e6;
S3=128e6;
EKt=H1*S1+H2*S2+H3*S3;

%R1=(0.05*72.26e6)/S1;
%R2=(0.05*163e6)/S2;
%R3=(0.05*85e6)/S3;
R1=0.05;
R2=0.05;
R3=0.05;
count=0;
un=0.4;
%%%%%%%%%%%%%%%%%%%%

r=abs(un*50/Tsys);
if abs(r)>0.675
tcrit=1.056/(r-0.2528);
Pramp=315e6*un*(1-tcrit/14)/(tcrit*3);
Pc=tcrit*Pramp;
else
Pramp=0;
Pc=0;
tcrit=1;
end