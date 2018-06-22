import java.util.Scanner;
public class Solution{
public static int getMax(int arr[][],int r,int c,int row){
	int max = 0,index=0;
	for(int i=0;i<c;i++){
	if(max<arr[row][i])
	{
		max = arr[row][i];
		index = i;
	}
	}
return index;
}
public static int getMin(int arr[][],int r,int c,int col){
	int min = Integer.MAX_VALUE,index=0;
	for(int i=0;i<r;i++){
	if(min>arr[i][col])
	{
		min = arr[i][col];
		index = i;
	}
	}
return index;
}
public static void main(String[] args){
		Scanner bucky = new Scanner(System.in);
		int r = bucky.nextInt();
		int c = bucky.nextInt();
		int arr[][] = new int[r][c];
		for(int i=0;i<r;i++){
	
		for(int j=0;j<c;j++)
		{
			arr[i][j] = bucky.nextInt();
		}
		
		
}

int max,min;
for(int i=0;i<r;i++){
max = getMax(arr,r,c,i);
min = getMin(arr,r,c,max);
if(arr[i][max] == arr[min][max]){
	System.out.println(i +","+max);
	}
}

}






}
