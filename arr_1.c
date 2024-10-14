#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i<5; i++){
        printf("Enter the marks of student %d\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<5; i++){
        printf("The marks scored by the student is %d is %d\n", i, arr[i]);
    }
    return 0;
}