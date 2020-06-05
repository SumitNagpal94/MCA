import java.util.*;

class Matrix
{
	int r,c;
	static int i=1;
	int a[][];
	
		
		Matrix(int a)
		{
		a[][]=new int [m1.r][m2.c];
		}
		
		Matrix()
		{
		System.out.println("Enter number of rows of Matrix "+i);
		Scanner sc=new Scanner(System.in);
		r=sc.nextInt();
		System.out.println("Enter number of Columns "+i);
		c=sc.nextInt();
		a=new int [this.r][this.c];
		i++;
		}
	
		
		void MatrixInput()
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
		Matrix d=new Matrix(1);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			d.a[i][j]=a[i][j]+b.a[i][j];
			return d;
		}
		
		Matrix MatrixMul(Matrix b)	
		{
		Matrix d=new Matrix(1);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				for(int k=0;k<c;k++)
					d.a[i][j]=a[i][j]+a[i][k]*b.a[k][j];
					
		System.out.print("\n");
		return d;
		}
}



class TestMatrix1
{
	
	public static void main(String [] args)
	{
		Matrix m1=new Matrix();
		m1.MatrixInput();
		Matrix m2=new Matrix();
		m2.MatrixInput();
		Matrix m3=new Matrix(1);
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the operation which you want to perform\n1: Addition\n2: Multiplication");
		int a=sc.nextInt();
		
		switch(a)
		{
		case 1:
		System.out.print("\nAddition of Array");
		m3=m1.MatrixAdd(m2);
		m3.MatrixDisplay();
		break;
		case 2:
		System.out.print("\nMultiplication of Array");
		m3=m1.MatrixMul(m2);
		m3.MatrixDisplay();
		break;
		default:
		System.out.println("Invalid Input");
		}
	}
}


