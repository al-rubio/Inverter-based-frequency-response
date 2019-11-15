function t50=calc
    global t50
    simOut=sim('RE_Control_prop','ReturnWorkspaceOutputs','on');
    c=0;
    fq=simOut.freq;
    tf=simOut.tout;
    for n=1:1:size(fq)
        c=c+1;
        if (fq(n)<49);
       
            x1=fq(n-1);
            x2=fq(n);
            y1=tf(n-1);
            y2=tf(n);
            
            t50=y1+(49-x1)*(y2-y1)/(x2-x1);
            break
        else
            t50=1/0;
            
        end
            
    end
end

