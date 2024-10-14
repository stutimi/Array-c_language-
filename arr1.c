#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,5,7};
    arr[3] = 100; // arr[5] =  {1,2,3,100,5}
    printf("%d",arr[3]);
    return 0;
}