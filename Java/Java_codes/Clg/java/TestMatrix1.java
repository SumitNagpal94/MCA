import java.util.*;

class Matrix
{
	int r,c;
	static int i=1;
	int a[][];
	
		Matrix()
		{}
		
		Matrix(int r,int c)
		{
		this.r=r;
		this.c=c;
		a=new int[r][c];
		}
		
		void MatrixInput()
		{	
		System.out.println("\n\nEnter number of rows of Matrix "+i);
		Scanner sc=new Scanner(System.in);
		r=sc.nextInt();
		System.out.println("Enter number of Columns of Matrix "+i);
		c=sc.nextInt();
		a=new int [r][c];
		i++;
		}
		
		void MatrixGenerate()
		{
			Random ran=new Random(10);
				
			for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			a[i][j]=ran.nextInt();
	
		}
		void MatrixDisplay()
		{
			System.out.print("\n\n");
			for(int i=0;i<r;i++)
			{
			for(int j=0;j<c;j++)
			System.out.print(a[i][j]+"\t");
			System.out.println("");
			}
		}
		Matrix MatrixAdd(Matrix b)
		{
		System.out.print("\nAddition of Array");
		Matrix d=new Matrix(r,c);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				d.a[i][j]=a[i][j]+b.a[i][j];
		return d;
		}
		
		Matrix MatrixMul(Matrix b)	
		{
		Matrix d=new Matrix(r,b.c);		
		long startTime=System.nanoTime();
		
		for(int i=0;i<r;i++)
			for(int j=0;j<b.c;j++)
				{
				d.a[i][j]=0;
				for(int k=0;k<b.r;k++)
					d.a[i][j]+=a[i][k]*b.a[k][j];
				}
		
		long endTime=System.nanoTime();
		
		System.out.println("\nActual Time of Multiplication in NanoSeconds: "+(endTime-startTime));
		System.out.println("Actual Time of Multiplication in MilliSeconds: "+((endTime-startTime)/1000000));
		
		return d;
		}
}



class TestMatrix1
{
	
	public static void main(String[] args) throws InterruptedException
	{
		char ch;
		do
		{
		Matrix m1=new Matrix();
		m1.MatrixInput();
		m1.MatrixGenerate();
		Matrix m2=new Matrix();
		m2.MatrixInput();
		m2.MatrixGenerate();
		Matrix m3=new Matrix();
		Scanner sc=new Scanner(System.in);
		do
		{
		System.out.println("\nEnter the operation which you want to perform\n1: Addition\n2: Multiplication");
		ch=sc.next().charAt(0);
		
		switch(ch)
		{
		case '1':
		if(m1.r==m2.r && m1.c==m2.c)
		{
		m3=m1.MatrixAdd(m2);
		m3.MatrixDisplay();
		}
		else
		System.out.println("Addition of Two Matrix is not Possible");
		break;
		case '2':
		if(m1.c==m2.r)
		{
		long startTime=System.nanoTime();
		m3=m1.MatrixMul(m2);
		long endTime=System.nanoTime();
		char c='Y';
		if(m1.r>10)
		{
		System.out.println("\nDo you want to print array (Y/N)");
		c=sc.next(".").charAt(0);
		}
		if(c=='N'||c=='n')
		System.out.print("");
		else
		{
		System.out.println("\nMultiplication of Matrix "); 
		m3.MatrixDisplay();
		}
		System.out.println("\nExecution Time of Multiplication with Function Call in NanoSeconds: "+(endTime-startTime));
		System.out.println("Execution Time of Multiplication with Function Call in MilliSeconds: "+((endTime-startTime)/1000000));
		}
		else
		System.out.println("Multiplication of Two Matrix is not Possible");
		break;
		default:
		System.out.println("Invalid Input");
		}

		System.out.println("\nDo you want to continue with these Matrices (Y/N)");
		ch=sc.next().charAt(0);
		}while(ch=='Y'|| ch=='y');
		
		System.out.println("\nDo you want to continue with another Matrices (Y/N)");
		ch=sc.next().charAt(0);
		}while(ch=='Y'|| ch=='y');
	}
}



