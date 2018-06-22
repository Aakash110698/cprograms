#include<stdio.h>
struct complex
{
    int r;
    int i;
};
int rotateArray()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int rotatedarray[n];
    rotatedarray[n-1] = arr[0];
    for(i=0; i<n-1; i++)
        rotatedarray[i]=arr[i+1];
    for(i=0; i<n; i++)
        printf("%d ",rotatedarray[i]);

    return 0;
}
int reversetriAngularProgram()
{
    int n;
    scanf("%d",&n);
    int r=n;
    int c=(2*n)-1,i,j;
    char arr[r][c];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            if(i==(n-1) || j==(n-1) || (((i+j)>=n-1)))
            {
                arr[i][j]='*';

            }
            else
            {
                arr[i][j]=' ';
            }
            if(j-i>n-1)
            {
                arr[i][j]=' ';
            }
        }
    for(i=r-1; i>=0; i--)
    {
        for(j=c-1; j>=0; j--)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
int triAngularProgram()
{
    int n;
    scanf("%d",&n);
    int r=n;
    int c=(2*n)-1,i,j;
    char arr[r][c];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            if(i==(n-1) || j==(n-1) || (((i+j)>=n-1)))
            {
                arr[i][j]='*';

            }
            else
            {
                arr[i][j]=' ';
            }
            if(j-i>=n)
            {
                arr[i][j]=' ';
            }
        }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
int complexAddition()
{
    struct complex c1,c2;
    printf("Enter the complex numper\n");
    scanf("%d+%di",&c1.i,&c1.r);
    scanf("%d+%di",&c2.i,&c2.r);
    printf("\n%d+%di",c1.i+c2.i,c2.r+c2.r);
    return 0;
}
int checkGP()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int r = arr[1]/arr[0];
    int i=0;
    for(i=n-1; i>0; i--)
    {
        if(r!=arr[i]/arr[i-1])
        {
            printf("Not gb");
            return 0;
        }
    }
    printf("GB");
    return 0;
}
int preciseFloat(){
float n;
int count=0;
scanf("%f",&n);
if(n>1){
while(n>10)
{
	n = n/10;
	count++;
}
printf("%f*10^%d",n,count);
}
else{
while(n<1.0)
{
	n = n*10;
	count++;
}

printf("%f*10^-%d",n,count);
}

return 0;
}
int main()
{
    preciseFloat();
    return 0;
}

