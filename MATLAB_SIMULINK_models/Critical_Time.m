%no sirve de nada


figure
s=surf(delta_p,t_a,t_c)
axis([-0.1 0.6 0 18 0 5])
xlabel('Load unbalance', 'fontsize', 16, 'fontweight', 'bold', 'color', [0 0 0])
ylabel('System acceleration constant[s]', 'fontsize', 16, 'fontweight', 'bold', 'color', [0 0 0])
zlabel('Critical Time [s]', 'fontsize', 16, 'fontweight', 'bold', 'color', [0 0 0])
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
