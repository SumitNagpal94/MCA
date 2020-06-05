import java.util.Scanner;

class Factorial
{
public static void main(String [] args)
{
Scanner sc= new Scanner(System.in);
System.out.println("Enter the number for which factorial is needed");
unsigned long factorial=sc.nextLong();
for(double i=factorial-1;i>1;i--)
factorial*=i;
System.out.println("\nFactorial is "+factorial);
 String a="9223372036854775807";
System.out.println(a.length());
}
}