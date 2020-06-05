import java.util.Scanner;
import java.util.Random;

class Ragged
{
	public static void main(String[] args)
	{
		int x,y;
		System.out.println("Enter number of rows");
		Scanner sc=new Scanner(System.in);
		x=sc.nextInt();
		int [][]a=new int [x][]; 
		
		for(int i=0;i<x;i++)
		{
		System.out.println("Enter the Number of Column of Row "+i);
		y=sc.nextInt();
		a[i]=new int[y];
		}
		Random ran= new Random();
		for(int i=0;i<x;i++)
			for(int j=0;j<a[i].length;j++)
			a[i][j]=ran.nextInt();
		
		for(int i=0;i<x;i++)
			{
				for(int j=0;j<a[i].length;j++)
				System.out.print(a[i][j]+"	");
				System.out.print("\n");
			}
			
			
	}
}
