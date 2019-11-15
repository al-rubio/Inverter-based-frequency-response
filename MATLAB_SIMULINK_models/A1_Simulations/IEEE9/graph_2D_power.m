h=figure('visible','on');
for n=1:1:5
        
        curv_name=strcat('Ta=',num2str(ta(n)),' s');
        plot(un,p(n,:),'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on;
end
    xlabel('Unbalance')
    ylabel('Power ramp (MW/s)')
    title('Critical Time');
    legend('show')