import java.util.*;

class Matrix
{
	int r,c;
	static int i=1;
	int a[][];
	
		Matrix()
		{
		System.out.println("");
		System.out.println("Enter number of rows of Matrix "+i);
		Scanner sc=new Scanner(System.in);
		r=sc.nextInt();
		System.out.println("Enter number of columns of Matrix "+i);
		c=sc.nextInt();
		a=new int [this.r][this.c];
		i++;
		}
	
		void MatrixInput()
		{
			Random ran=new Random(1000);
				
			for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			a[i][j]=ran.nextInt();
	
		}
		void MatrixDisplay()
		{
			System.out.print("\n\n\n");
			for(int i=0;i<r;i++)
			{
			for(int j=0;j<c;j++)
			System.out.print(a[i][j]+"\t");
			System.out.print("\n");
			}
		}
		void MatrixAdd(Matrix b)
		{
		System.out.print("\nAddition of Array");
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			a[i][j]+=b.a[i][j];
			
			MatrixDisplay();
		}
		
		void MatrixMul(Matrix b)
		{
		System.out.println("Multiplication of Array");
		int [][]d=new int [r][b.c];
		
		long startTime=System.nanoTime();
		
		for(int i=0;i<r;i++)
			for(int j=0;j<b.c;j++)
				{
				d[i][j]=0;
				for(int k=0;k<b.r;k++)
					d[i][j]+=a[i][k]*b.a[k][j];
				}
		
		long endTime=System.nanoTime();
		char ch='Y';
		if(r>50)
		{
		System.out.println("\nDo you want to print array (Y/N)");
		Scanner sc=new Scanner(System.in);
		ch=sc.next(".").charAt(0);
		}
		if(ch=='N')
		System.out.println("");
		else
		MatrixDisplay();
		
		System.out.println("\nExecution Time of Multiplication in NanoSeconds: "+(endTime-startTime));
		System.out.println("Execution Time of Multiplication in MilliSeconds: "+((endTime-startTime)/1000000));
		}
}



class TestMatrix
{
	
	public static void main(String args[]) throws InterruptedException
	{
		Matrix m1=new Matrix();
		Matrix m2=new Matrix();
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the operation which you want to perform\n1: Addition\n2: Multiplication");
		int a=sc.nextInt();
		m1.MatrixInput();
		m2.MatrixInput();
		
		switch(a)
		{
		case 1:		
		if(m1.r==m2.r && m1.c==m2.c)
		m1.MatrixAdd(m2);
		else
		System.out.println("Addition of Two Matrix is not Possible");
		break;
		case 2:
		if(m1.c==m2.r)
		m1.MatrixMul(m2);
		else
		System.out.println("Multiplication of Two Matrix is not Possible");
		break;
		default:
		System.out.println("Invalid Input");
		}
	}
}


