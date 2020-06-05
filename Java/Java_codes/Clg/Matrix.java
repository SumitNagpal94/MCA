import java.util.*;

class Matrix
{
	int m,n;
	Integer arr[][][];
	static int i=0,j=0;

	Matrix(int m,int n)
	{
	this.m=m;
	this.n=n;
	arr=new Integer[20][m][n];
	this.generateRandomNumber();
	}
	
	public String toString()
	{
		for(int a=0;a<m;a++)
		{
			for(int b=0;b<n;b++)
				System.out.print(arr[i][a][b]+"\t");
			System.out.println("");
		}

		j++;
		return "\n";
	}
	void generateRandomNumber()
	{
		Random rand = new Random(10);
		System.out.println("hello"+i);
		 for(int a=0;a<m;a++)
	   	   for(int b=0;b<n;b++)
	      	     this.arr[i][a][b]=new Integer(rand.nextInt(100)+1);
		if(i<=18)
			i++;
	}

	public static void main(String[] args)
	{	
	
		ArrayList<Matrix> m=new ArrayList<Matrix>();
		
		for(int i=0;i<20;i++)
		{
		Random r=new Random(100);
		m.add(new Matrix(3,4));//Math.abs(r.nextInt(10)+2),Math.abs(r.nextInt(10))+2));
		}

		for(int i=0;i<m.size();i++)
			System.out.println(m.get(i));
	
	}
}