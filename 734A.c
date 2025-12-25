#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ad[n+1];
    int a=0;
    int d=0;
    scanf("%s",ad);
    for(int i=0;i<n;i++){
        if(ad[i]=='D'){
            d++;
        }
        else if(ad[i]=='A'){
            a++;
        }
    }
    if(a>d){
        printf("Anton");
    }
     else if(d>a){
         printf("Danik");
    }
    else {
        printf("Friendship");
    }
    return 0;
}