#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n<=1399){
            printf("Division 4\n");
        }
        
        else if(1400<=n && 1599>=n){
            printf("Division 3\n");
        }
          else if(1600<=n && 1899>=n){
            printf("Division 2\n");
        }
          else if(1900<=n){
            printf("Division 1\n");
        }
    }
}