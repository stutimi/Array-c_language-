#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        if(((n==1 || y>= 1) && (n*3 <= x+2*y)) && ((y>=1)||((x-y)%2==0))){
            printf("YEs");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}