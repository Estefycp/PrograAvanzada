bool judgeCircle(char* moves) {
    int x,y,i,m;
    x=y=i=0;
    m=strlen(moves);
   
    for (i = 0; i < m; i++){
         if(moves[i] == 'U'){
             x++;
         }
        if(moves[i] == 'D'){
             x--;
         }
        if(moves[i] == 'L'){
             y++;
         }
        if(moves[i] == 'R'){
             y--;
         }
    }
    
    if(x == 0 && y==0){
        return true;
    }
    return false;
    
}
