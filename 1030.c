#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    int a[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",&a[i]);

    }for(int i=0 ;i<n;i++){
    if(a[i]== 1){
        flag=1;break;
    }
    }
    if(flag){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
    return 0;
}