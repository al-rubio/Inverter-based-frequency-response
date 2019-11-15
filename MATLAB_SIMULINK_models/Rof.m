c=0;
for rof=0.2:0.2:8
   c=c+1;
   tcritico=1/rof;
   
   xrof(1,c)=rof;
   ytime(1,c)=tcritico; 
end
hold on;
plot(xrof,ytime,'b*')