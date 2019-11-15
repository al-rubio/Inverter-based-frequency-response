h=figure('visible','on');
for n=1:1:6
        
        curv_name=strcat('Accel. constant=  ',num2str(ta(n,1)),' s');
        plot(un(n,:),tcr(n,:),'DisplayName', curv_name,'LineWidth',2);
        hold on;
        grid on;
end
    xlabel('Unbalance (%)')
    ylabel('Time (s)')
    title('Critical Time');
    legend('show')