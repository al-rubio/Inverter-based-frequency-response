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
tnadir=0; %just to avoid initial error
xxx=1;
count=0;
for un=0.01:0.01:0.4
    count=count+1;
    c=0;
    %%%%% Plotting of frequency for different values of unbalance with no
    %%%%% Inertia from wind
    sim('a1_Conventional_EUROPE_10s_C','ReturnWorkspaceOutputs','on');
    powerreserve=ans.P_mech.data(:);
    time=ans.Freq.time(:);
    frqy=ans.Freq.data(:);
    nadir=min(frqy);
    load_resp=ans.P_loadresp.data(:);
    pa=ans.P_accel.data(:);
    for n=1:1:size(frqy)
        c=c+1;

        if (frqy(n)<49);
       
            x1=frqy(n-1);
            x2=frqy(n);
            y1=powerreserve(n-1);
            y2=powerreserve(n);
            yb1=load_resp(n-1);
            yb2=load_resp(n);
            yc1=pa(n-1);
            yc2=pa(n);
            yd1=time(n-1);
            yd2=time(n);
            pmech_reserve=y1+(49-x1)*(y2-y1)/(x2-x1);
            pload_resp=yb1+(49-x1)*(yb2-yb1)/(x2-x1);
            p_unbalance=yc1+(49-x1)*(yc2-yc1)/(x2-x1);
            tcritico=yd1+(49-x1)*(yd2-yd1)/(x2-x1);
            break
        else
            pmech_reserve=0;
            pload_resp=0;
            p_unbalance=0;
            tcritico=inf;
        end
        if (n>1)&&(xxx>0)
            if (frqy(n)>frqy(n-1))
                tnadir=(time(n)+time(n-1))/2;
                xxx=0;
            end
         
        end
        
    end
    preserve_calc=un*E_load*(1-tcritico/tnadir);
    r_mechreserve(1,count)=pmech_reserve; 
    r_loadresp(1,count)=pload_resp;
    r_punbalance(1,count)=p_unbalance;
    r_reservecalc(1,count)=preserve_calc;
    r_nadir(1,count)=nadir
    xxx=1;
end




