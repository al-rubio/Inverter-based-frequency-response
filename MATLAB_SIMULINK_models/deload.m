%deload
clear;
li=0;
for syn_s=0.9:-0.1:0.1
    load=315e6;
    li=li+1;
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
    St=S1+S2+S3;
    Sre=St*re_s;
    EKt=H1*S1+H2*S2+H3*S3;
    loadre=load-St*.9*.8*syn_s
    %R1=(0.05*72.26e6)/S1;
    %R2=(0.05*163e6)/S2;
    %R3=(0.05*85e6)/S3;
    R1=0.05;
    R2=0.05;
    R3=0.05;
    count=0;
    un=0.02;
    dload=0;
    %%%%%%%%%%%%%%%%%%%%
    tnadir=0.1977*Tsys+0.5652;
    for un=0.01:0.01:0.4
        count=count+1;
        r=abs(un*50/Tsys);
        if abs(r)>0.6143
            tcrit=0.8991/(r-0.2524);
            Pramp=315e6*un*(1-tcrit/tnadir)/(tcrit*3);
            Pc=tcrit*Pramp;
            dload=(loadre+Pc)/Sre;
        else
            Pramp=0;
            Pc=0;
            tcrit=1;
            dload=0;
        end
        r_deload(li,count)=dload;
    end
end