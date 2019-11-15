data1=xlsread('Gov_data.xlsx','P:P');
un=0.05;
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
n_wt=P_re*share_wt/1.5;
H_wt=4.37;
Ki=10;
P_wt=P_re*share_wt;
count=0;
E_load=0;
T_wt=1;
J=3.56;
ci=0;
un=0.25;
%for un=0.05:0.025:0.4
    c=0;
    hold off;
    %%%%% Plotting of frequency With no support of IBFPR
    h=figure('visible','off');
    sim('A1MODEL_Synthetic_Inv_Resp_insta','ReturnWorkspaceOutputs','on');
    plot_name=strcat('Frequency Response:',' ','unbalance=',num2str(un),' and Ts=',num2str(Tsys));
    plot(ans.Freq,'DisplayName', 'No IBFPR','LineWidth',1.5);
    hold on;
	c=1;
    %%%%%% Plotting with support of IBFPR
    sim('A1MODEL_Synthetic_Inv_Resp_insta','ReturnWorkspaceOutputs','on');
    plot(ans.Freq,'DisplayName', 'IBFPR','LineWidth',1.5);
    hold on;
    grid on;
    xlabel('time (s)')
    ylabel('Frequency (Hz)')
    title(strcat(plot_name));
    legend('show')
    saveas(h,sprintf('freq_IBFPR%d.png',un));
    %%%%% Plotting of power for different values of unbalance
    hold off;
    h=figure('visible','on');
    plot_name=strcat('Power Response:',' ','unbalance=',num2str(un),' and Ts=',num2str(Tsys));
    plot(ans.P_mech,'DisplayName', 'Mechanical Power','LineWidth',1.5);
    hold on;
    plot(ans.P_accel,'DisplayName', 'Acceleration Power','LineWidth',1.5);
    hold on;
    plot(ans.Pinv,'DisplayName', 'IBFPR','LineWidth',1.5);
    hold on;
    plot(ans.P_un,'DisplayName', 'Unbalance','LineWidth',1.5);
    hold on;
    grid on;
    xlabel('time (s)')
    ylabel('Power (MW)')
    title(strcat(plot_name));
    legend('show')
    %saveas(h,sprintf('power_IBFPR%d.png',un));

%end