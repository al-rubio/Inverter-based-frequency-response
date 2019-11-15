h=figure('visible','on');
curv_name=strcat('Load Unbalance of 10%');
plot(re,ta10,'DisplayName', curv_name,'LineWidth',2);
hold on;
curv_name=strcat('Load Unbalance of 20%');
plot(re,ta20,'DisplayName', curv_name,'LineWidth',2);
hold on;       
curv_name=strcat('Load Unbalance of 30%');
plot(re,ta30,'DisplayName', curv_name,'LineWidth',2);
        hold on;
        curv_name=strcat('Load Unbalance of 40%');
        plot(re,ta40,'DisplayName', curv_name,'LineWidth',2);
        hold on;
        plot(re,lim,'LineWidth',1);
        hold on; 
        
        
        
        
        
        grid on;

    xlabel('Share of Inverter based Generation (%)')
    ylabel('Time (s)')
    title('Critical Time');
    legend('show')