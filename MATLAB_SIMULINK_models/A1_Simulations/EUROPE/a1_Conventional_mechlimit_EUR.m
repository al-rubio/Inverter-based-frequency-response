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
Ta=1;
Ek=Ta*E_load/2;
H=Ek/Sb;



count=0;
for un=0.01:0.01:0.2
    count=count+1;
    c=0;
    %%%%% Plotting of frequency for different values of unbalance with no
    %%%%% Inertia from wind
    sim('a1_Conventional_EUROPE_1s_C','ReturnWorkspaceOutputs','on');
    rf=ans.Rocof.data(:);
    time=ans.Freq.time(:);
    frqy=ans.Freq.data(:);
    for n=1:1:size(rf)
        c=c+1;

        if (rf(n)>0);
       
            x1=rf(n-1);
            x2=rf(n);
            y1=time(n-1);
            y2=time(n);
            
            tlm=y1+(0-x1)*(y2-y1)/(x2-x1);
            break
        else
            tlm=1/0;
            
        end
     
    end
    res(1,count)=tlm; 
end




