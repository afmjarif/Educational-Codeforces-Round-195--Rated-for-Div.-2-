#include<stdio.h>
int main(){
    int x,c,s,S;
    scanf("%d", &x);
    
    while(x--){
        scanf("%d" "%d",&c,&s);
        
        if(c<=s){
            printf("-1\n");
        }
        else{
            if(s<c-s){
                S=s;
            }
            else{
                S=c-s;
            }
            printf("%d\n", S);
        }
    }
    return 0;
}