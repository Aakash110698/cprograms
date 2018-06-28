#include<stdio.h>
#include<string.h>
#include<ctype.h>
int max=100;
char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}
int problemSolver(){
    int n,i,j;
    scanf("%d",&n);
    char arr[n][max];
    int num[n];
    
    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
        strlwr(arr[i]);
        scanf("%d",&num[i]);
    }
    char temp[100];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[i])<0){
                 strcpy(temp,arr[i]);
                 strcpy(arr[i],arr[j]);
                 strcpy(arr[j],temp);  
            }
        }
    }
    int tempn;
     for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           if(num[j]<num[i]){
                tempn = num[i];
                num[i] = num[j];
                num[j] = tempn;
           }       }}
    for(i=0;i<n;i++){
        printf("%s %d ",arr[i],num[i]);
    }
    return 0;
}
int main(){
    int testcase,i;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    problemSolver();
}