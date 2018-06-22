#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct complex
{
    int r;
    int i;
};
struct point
{
	double x;
	double y;
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
int mostClosestPoint(){
	struct point p1,p2;
printf("Enter the point A\n");
scanf("%lf%lf",&p1.x,&p1.y);
printf("Enter the point B\n");
scanf("%lf%lf",&p2.x,&p2.y);

double d2 = sqrt(pow((p2.x-0),2) + pow((p2.y-0),2));

double d1 = sqrt(pow((p1.x-0),2) + pow((p1.y-0),2));

if(d1<d2){
printf("First point is near to origin\n");
}
else
printf("Second point is near to origin\n");

return 0;
}
int main()
{
    mostClosestPoint();
    return 0;
}

