%nadir, nadir time and critical time
clear
data1=xlsread('Gov_data.xlsx','D:D');
R=0.05;

T_1=data1(2);
T_2=data1(3);
T_3=data1(4);
T_4=data1(5);
T_5=data1(6);
F=data1(7);
Wk=data1(8);
E_load=150;
Sb=200;
Pn=Sb;
%droop_load=R*E_load/Pn;
%f_nl=50*(1+droop_load);
%dss=(E_load*(1+un)*R)/Pn;
Ta=10;
Ek=Ta*E_load/2;
H=Ek/Sb;


xxx=1;
count=0;
for un=0.01:0.01:0.4
    count=count+1;
    c=0;
    %%%%% Plotting of frequency for different values of unbalance with no
    %%%%% Inertia from wind
    sim('a1_Conventional_IFPR_EUROPE_10s_C','ReturnWorkspaceOutputs','on');
    power_reserve=ans.P_mech.data(:);
    time=ans.Freq.time(:);
    frqy=ans.Freq.data(:);
    
    for n=1:1:size(frqy)
        c=c+1;

        if (frqy(n)<49);
       
            x1=frqy(n-1);
            x2=frqy(n);
            y1=time(n-1);
            y2=time(n);
            
            tcritical=y1+(49-x1)*(y2-y1)/(x2-x1);
            break
        else
            tcritical=1/0;
            
        end
        if (n>1)&&(xxx>0)
            if (frqy(n)>frqy(n-1))
                tnadir=(time(n)+time(n-1))/2;
                xxx=0;
            end
        end
    end
    r_criticaltime(1,count)=tcritical; 
    r_nadtime(1,count)=tnadir;
    r_nadfreq(1,count)=min(frqy);
end




