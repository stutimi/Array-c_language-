#include<stdio.h>
#include<limits.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        int max = INT_MIN;
        int smax = INT_MIN;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i<n; i++){
             scanf("%d", &a[i]);
        }
        for(int i = 0; i<n; i++ ){
            if(max<a[i]){
                smax = max;
                max = a[i];
            }
else if (smax <a[i] && max!=a[i]){
    smax = a[i];
}
        }
        printf("%d\n",max+smax);
    }
return 0;
        }
    
