void aryan(){
    int i=10;
    int j=2; 

    goto end;
    
    for(int i=10;i>7;i--){
        j=j+100;
        if(i==8){
            continue;
        }
        j=j+100;
    }
    end:
    i=i+1000;
    
    return;
}