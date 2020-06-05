import java.util.*;
class DigitAdd{
	public static void main(String[] args){
		int sum=0;
		System.out.println("\nEnter String");
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		char a[]=s.toCharArray();
		for(int i=0;i<a.length;i++)
			if(Character.isDigit(a[i]))
				sum+=Integer.parseInt(Character.toString(a[i]));
		System.out.println("\nSum of Digits is "+sum);
		sum=0;
		String s1=s;
		for(int i=0;s1.length()>0;i++)
		{
			String e=new Scanner(s).useDelimiter("[^\\d]+").next();
			int d=new Scanner(s).useDelimiter("[^\\d]+").nextInt();
			sum+=d;	
			i=s.indexOf(e);
			i+=e.length();
			s=s.substring(i,s.length());
			s1=s.replaceAll("[^0-9]","");
		}
		System.out.println("\nSum of Numbers is "+sum);
	}
}