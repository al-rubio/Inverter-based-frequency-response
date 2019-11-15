%First set variables with calc_variables_block
count=0;
xxx=1;
for un=0.01:0.01:0.4
    count=count+1;
    

    sim('A1MODEL_Synthetic_Inv_Resp_insta','ReturnWorkspaceOutputs','on');
    time=ans.Freq.time(:);
    frqy=ans.Freq.data(:);
    pmech=ans.P_mech.data(:);
    for n=1:1:size(frqy)
    

        if (frqy(n)<49)
       
            x1=frqy(n-1);
            x2=frqy(n);
            y1=time(n-1);
            y2=time(n);
            
            tcr=y1+(49-x1)*(y2-y1)/(x2-x1);
            break
        else
            tcr=1/0;
            
        end
        if (n>1)&&(xxx>0)
            if (frqy(n)>frqy(n-1))
                tnadir=(time(n)+time(n-1))/2;
                xxx=0;
            end
        end
    end
    r_tcr(1,count)=tcr; 
    r_nadir(1,count)=tnadir;
end




