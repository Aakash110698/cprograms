#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void decToBinary(int n,int digit)
{
    // array to store binary number
    int binaryNum[1000];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = digit - 1; j >= 0; j--)
       {
           if(binaryNum[j]==1)
               printf("4");
               else
               printf("3");
           }
       
}

int printNum(int n){
    
    int numofdigit = log2(n);
    
    int howfarwefrom = (n)-pow(2,numofdigit);
    printf("%d\n",howfarwefrom);
    int arr[numofdigit];
    int i=0;
    int ansd=howfarwefrom;
    decToBinary(howfarwefrom,numofdigit);
    // while(howfarwefrom>0){
    //     arr[i]=howfarwefrom%2;

    //     howfarwefrom=howfarwefrom/2;
    //             i++;
    // }
    // for(i=3;i>=0;i--){
    //     printf("%d",arr[i]);
    // }

    return 0;
}
int main(){

    int n=20;
    
    printNum(n+2);

    return 0;
}