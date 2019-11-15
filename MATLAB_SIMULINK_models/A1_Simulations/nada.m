    plot(t10(:,1),t10(:,2),'DisplayName', 'ENTSOE','LineWidth',2);
    hold on;
    plot(Freq,'DisplayName', 'Adjusted Model','LineWidth',2);
    hold on;
        xlabel('time (s)')
    ylabel('Frequency (Hz)')