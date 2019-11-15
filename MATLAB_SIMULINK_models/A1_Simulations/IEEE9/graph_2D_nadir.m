h=figure('visible','on');
for n=1:1:4
        
        curv_name=strcat('Ta=',num2str(ta(n)),' s');
        plot(un(n,:),nadir0(n,:),'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on;
end
    xlabel('Unbalance')
    ylabel('Frequency (Hz)')
    title('Nadir Frequency, no delay');
    legend('show')