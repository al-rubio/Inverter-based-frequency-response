h=figure('visible','on');
t1=1.056./(rocof(1,:)-0.2528);
t2=0.8991./(rocof(1,:)-0.2824);
err=abs(t1-t2);
        
        curv_name=strcat('Ta=',num2str(ta(1,1)),' s');
        plot(rocof(1,:),err,'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on;
t1=1.056./(rocof(38,:)-0.2528);
t2=0.8991./(rocof(38,:)-0.2824);
err=abs(t1-t2);
        
        curv_name=strcat('Ta=',num2str(ta(38,1)),' s');
        plot(rocof(38,:),err,'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on;        

t1=1.056./(rocof(55,:)-0.2528);
t2=0.8991./(rocof(55,:)-0.2824);
err=abs(t1-t2);
        
        curv_name=strcat('Ta=',num2str(ta(55,1)),' s');
        plot(rocof(55,:),err,'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on;   

        
        t1=1.056./(rocof(72,:)-0.2528);
t2=0.8991./(rocof(72,:)-0.2824);
err=abs(t1-t2);
        
        curv_name=strcat('Ta=',num2str(ta(72,1)),' s');
        plot(rocof(72,:),err,'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on; 
        
        
        
                t1=1.056./(rocof(81,:)-0.2528);
t2=0.8991./(rocof(81,:)-0.2824);
err=abs(t1-t2);
        
        curv_name=strcat('Ta=',num2str(ta(81,1)),' s');
        plot(rocof(81,:),err,'DisplayName', curv_name,'LineWidth',1.5);
        hold on;
        grid on; 
    xlabel('RoCoF (Hz/s)')
    ylabel('Absolute error (%)')
    title('Critical Time');
    legend('show')