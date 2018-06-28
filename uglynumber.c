#include<stdio.h>
int min(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
   // printf("%d",min(2,1,12));
    int n;
    scanf("%d",&n);
    int ugly[n];
    int i=0;
    ugly[i]=1;

    int i2=0,i3=0,i5=0;

    int next_multiple_of_2 = ugly[i]*2;
    int next_multiple_of_3 = ugly[i]*3;
    int next_multiple_of_5 = ugly[i]*5;

    int uglynumber;
    int next_ugly;
    for( i=1;i<n;i++){
        //printf("%d ",ugly[i-1]);
        next_ugly = min(next_multiple_of_2,next_multiple_of_3,next_multiple_of_5);

        ugly[i]=next_ugly;

    if(next_ugly == next_multiple_of_2){
        i2++;
        next_multiple_of_2 = ugly[i2]*2;
    }
    if(next_multiple_of_3 == next_ugly){
        i3++;
        next_multiple_of_3 = ugly[i3]*3;
    }
    if(next_ugly == next_multiple_of_5){
        i5++;
        next_multiple_of_5 = ugly[i5]*5;
    }


    }
    printf("%d",next_ugly);
    

    return 0;
}