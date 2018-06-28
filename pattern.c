#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
              printf("*");
        }
        for(k=i;k<(2*i)-2;k++){
            printf("%d",k+1);
        }
        for(j=2*i-1;j>=i+1;j--){
            printf("%d",j);    
        }
        printf("\n");
    }
}