%%
delta_p=linspace(0.05,0.4,15);
ac_constant=[14.38 8.68 6.39 4.025 2.7368 1.6507]
figure
surf(delta_p,ac_constant,res)
axis([0 0.4 0 15 0 2])
xlabel('Load unbalance', 'fontsize', 16, 'fontweight', 'bold', 'color', [0 0 0])
ylabel('System acceleration constant[s]', 'fontsize', 16, 'fontweight', 'bold', 'color', [0 0 0])
zlabel('Critical time [s]', 'fontsize', 16, 'fontweight', 'bold', 'color', [0 0 0])
%axis tight
view(30,40)
grid on


xh = get(gca,'XLabel'); % Handle of the x label
set(xh, 'Units', 'Normalized')
pos = get(xh, 'Position');
set(xh, 'Position',pos.*[1,-0.5,1],'Rotation',-5)
yh = get(gca,'YLabel'); % Handle of the y label
set(yh, 'Units', 'Normalized')
pos = get(yh, 'Position');
set(yh, 'Position',pos.*[1,-0.7,1],'Rotation',30)
