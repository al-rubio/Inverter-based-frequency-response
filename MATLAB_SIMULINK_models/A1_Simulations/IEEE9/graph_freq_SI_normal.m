%%%Graphs for different WEC shares with inertia, no IFPR. Plot normal
%%%response against response with an especific case
clear
data1=xlsread('Gov_data.xlsx','P:P');
R=0.05;
Sb=data1(1);
T_1=data1(2);
T_2=data1(3);
T_3=data1(4);
T_4=data1(5);
T_5=data1(6);
F=data1(7);
Wk=data1(8);
H=data1(9);
Pmax=data1(10);
Tsys=data1(11);
share_wt=1;
P_re=data1(12);
Share_RE=data1(13)*100;
H_wt=4.37;
n_wt=1; %just for inicialization
P_wt=1; %just for inicialization
Ki=10;
count=0;
E_load=0;
T_wt=1;
J=3.56;
c=0;
ci=0;
un=0.15;
hold off;
h=figure('visible','on');
sim('A1MODEL_Synthetic_Inv_Resp_insta','ReturnWorkspaceOutputs','on');
plot_name=strcat('Frequency Response:',' ','unbalance=',num2str(un),' and Ts=',num2str(Tsys),'s');
curv_name=strcat('Only synchronous response');
plot(ans.Freq,'DisplayName', curv_name,'LineWidth',1.5);
c=0;
ci=1;

%for un=0.1:0.1:0.4
   
    
    for share_wt=0.4:0.4:0.8
        P_wt=P_re*share_wt;
        n_wt=P_wt/1.5;
        hold on;
        sim('A1MODEL_Synthetic_Inv_Resp_insta','ReturnWorkspaceOutputs','on');
       
        curv_name=strcat('Wind share from RE=',num2str(share_wt*100),'%');
        plot(ans.Freq,'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on;

        
        
    end
    xlabel('Time (s)')
    ylabel('Frequency (Hz)')
    title(strcat(plot_name));
    legend('show')
    %saveas(h,sprintf('freq_SI_%d_sh%d.fig',un, share_wt));
%end

