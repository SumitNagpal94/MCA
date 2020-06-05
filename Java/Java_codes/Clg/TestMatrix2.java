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
		System.out.println("Enter number of rows of Matrix "+i);
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
			System.out.print("\n\n\n");
			for(int i=0;i<r;i++)
			{
			for(int j=0;j<c;j++)
			System.out.print(a[i][j]+"	");
			System.out.print("\n");
			}
		}
		Matrix MatrixAdd(Matrix b)
		{
		Matrix d=new Matrix(r,c);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				d.a[i][j]=a[i][j]+b.a[i][j];
		return d;
		}
		
		Matrix MatrixMul(Matrix b)	
		{
		Matrix d=new Matrix(r,b.c);
		System.out.println("Multiplication of Array");
		
		long startTime=System.nanoTime();
		
		for(int i=0;i<r;i++)
			for(int j=0;j<b.c;j++)
				{
				d.a[i][j]=0;
				for(int k=0;k<b.r;k++)
					d.a[i][j]+=a[i][k]*b.a[k][j];
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
		
		return d;
		}
}



class TestMatrix2
{
	
	public static void main(String[] args)
	{
		Matrix m1=new Matrix();
		m1.MatrixInput();
		m1.MatrixGenerate();
		Matrix m2=new Matrix();
		m2.MatrixInput();
		m2.MatrixGenerate();
		Matrix m3=new Matrix();
		char ch;
		do
		{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the operation which you want to perform\n1: Addition\n2: Multiplication");
		ch=sc.next().charAt(0);
		
		switch(ch)
		{
		case '1':
		if(m1.r==m2.r && m1.c==m2.c)
		{
		System.out.print("\nAddition of Array");
		m3=m1.MatrixAdd(m2);
		m3.MatrixDisplay();
		}
		else
		System.out.println("Addition of Two Matrix is not Possible");
		break;
		case '2':
		if(m1.c==m2.r)
		{
		System.out.print("\nMultiplication of Array");
		m3=m1.MatrixMul(m2);
		m3.MatrixDisplay();
		}
		else
		System.out.println("Multiplication of Two Matrix is not Possible");
		break;
		default:
		System.out.println("Invalid Input");
		}

		System.out.println("Do you want to continue (Y/N)");
		ch=sc.next().charAt(0);
		}while(ch=='Y'|| ch=='y');
	}
}


