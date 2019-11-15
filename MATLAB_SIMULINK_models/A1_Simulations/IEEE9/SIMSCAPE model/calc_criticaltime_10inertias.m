clear;
load=315e6;
li=0;
un=0.3;
syn_s=1;
%for syn_s=1:-0.01:0.1;
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
    EKt=H1*S1+H2*S2+H3*S3;

    %R1=(0.05*72.26e6)/S1;
    %R2=(0.05*163e6)/S2;
    %R3=(0.05*85e6)/S3;
    R1=0.05;
    R2=0.05;
    R3=0.05;
    count=0;
    xxx=1;
    %%%%%%%%%%%%%%%%%%%%
    %for un=0.01:0.01:0.4
        count=count+1;
        %xxx=1;
        
        sim('a1_IEEE9_no_support','ReturnWorkspaceOutputs','on');
        time=ans.freqt.time(:);
        frqy=ans.freqt.data(:);
        psync=ans.Pelec.data(:);
        dfrqy=ans.freqt.data(:);
        for n=1:1:size(frqy)
    

            if (frqy(n)<49) && timeoutcr=1
       
                x1=frqy(n-1);
                x2=frqy(n);
                y1=time(n-1);
                y2=time(n);
                yb1=psync(n-1);
                yb2=psync(n);
                tcr=y1+(49-x1)*(y2-y1)/(x2-x1);
                pe=yb1+(49-x1)*(yb2-yb1)/(x2-x1);
                pa=315*(1+un)-pe;
                timeoutcr=0;
            else
                tcr=1/0;
                pa=0;
            end
            if  (n>1)
                if (frqy(n)-frqy(n-1)>0)
                 tnadir=(time(n)+time(n-1))/2;
                 xxx=0;
                end
            end
            
        end
        r_tcr(li,1)=tcr; 
        r_nadir(li,1)=min(frqy);
        %r_tnadir(li,1)=tnadir;
        r_pa(li,1)=pa;
    %end
%end
