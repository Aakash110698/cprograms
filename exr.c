#include<stdio.h>
#include<math.h>
#include<string.h>
int isPrime(int n){
if(n==2 || n==3)
return 1;
int i;
for(i=2;i<sqrt(n);i++){
if(n%i==0)
return 0;
}
return 1;
}
int primeProgram(){
    printf("\nPrime Program :\n");
int n;
scanf("%d",&n);
if(isPrime(n)){
    printf("\nYes");
}
else{
    printf("\nNo");
}
return 0;
}
int palindrome(){
    printf("\nPalindrome Program :\n");
    char arr[100];
    scanf("%s",arr);
    int i,j=0;
    char cpy[strlen(arr)];
    for(i=strlen(arr)-1;i>=0;i--,j++){
        cpy[j]=arr[i];
    }
    char rev[100];
    for(i=0;i<strlen(arr);i++)
    rev[i]=cpy[i];
    //printf("%s",rev);
    if(strcmp(arr,rev)!=0){
        printf("\nNot a palindrome");
    }
    else{
        printf("\nPalindrome");
    }
    return 0;
}
int factorial(int n){
if(n==1)
return 1;
else
return n*factorial(n-1);
}
int factorialProgram(){
    printf("\nFactorial Program :\n");
int n;
scanf("%d",&n);
printf("\n%d",factorial(n));
return 0;
}
int floydTriangle(){
    printf("\nFloyd Program :\n");
    int n,i,j;
    scanf("%d",&n);
    int value=1;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",value);
            value++;
        }
        printf("\n");
    }
    return 0;
}
int pattternProgram(){
    printf("\nPattern Program :\n");
    int n,i,j;
    scanf("%d",&n);
    char c='A';
    for(i=0;i<n;i++){
         char c = 65+i;
        for(j=0;j<n-i-1;j++){
               printf("  "); 
        }
        
        for(j=0;j<=i;j++){
           printf("%c ",c);
           c--;
        }
        c=65+1;
        for(j=0;j<i;j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
int main(){
primeProgram();
palindrome();
factorialProgram();
floydTriangle();
pattternProgram();
}