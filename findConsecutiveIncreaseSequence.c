#include<stdio.h>
int getIndex(int arr[],int start,int n)
{
    int i=0;
    int index=start;
    for(i=start+1; i<n; i++)
    {
        if(arr[i]-arr[i-1] >=0)
        {
            index++;
        }
        else
        {
            return index;
        }
    }
    return index;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int start;
    int anss=0,ansl=0;
    int last=0;
    int max=0;
    int startindex=0;
    while(last<n-1)
    {
        start=startindex;
        last=getIndex(arr,start,n);
        if((last - start + 1) >max)
        {
            max = last-start+1;
            anss=start;
            ansl=last;
        }
        startindex = last+1;

    }


    for (i = anss; i <=ansl; i++)
    {
        printf("%d ",arr[i] );
    }


    return 0;
}
