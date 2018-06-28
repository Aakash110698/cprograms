#include<stdio.h>
int maxDivide(int a,int b){
    while(a%b==0)
    {
        a/=b;
    }
    return a;
}

int main(){
    int  n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);


    
}