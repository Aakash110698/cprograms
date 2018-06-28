import java.util.Scanner;
public class CarParking{
    public static void main(String[] args){
        Scanner bucky = new Scanner(System.in);
        int f = bucky.nextInt();
        int b = bucky.nextInt();
        int t = bucky.nextInt();
        int d = bucky.nextInt();
        if(f>b){
            System.ou      t.println("Cannot park");
        }
        int distanceBetweenWall=d;
        int fc=0;
        int bc=0;
        int count=0;
        while(distanceBetweenWall!=0){
            distanceBetweenWall -=b;
            bc++;
        System.out.println("First "+distanceBetweenWall);
        
            if(distanceBetweenWall==0)
          {
            break;
          }
            distanceBetweenWall +=f;
            fc++;
            System.out.println("Second "+distanceBetweenWall);
            if(distanceBetweenWall==0){
                break;
            }
    }
        System.out.println((fc*f + bc*b)*t );
        }
}