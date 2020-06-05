import java.util.*;

class learn
{

	public static void main(String args[])
	{
			Scanner sc=new Scanner(System.in);
			String s=sc.next();
			char[] a=s.toCharArray();
			int p[]=new int[s.length()];
			int b=0,d=0,z=0;

			for(int i=0;i<s.length();i++)
				for(int j=i+1;j<s.length();j++)
					if(a[i]==a[j])
						p[i]=p[i]+1;

			char c[]=new char[s.length()];

			for(int i=0;i<s.length();i++)
				if(p[i]==0)
				{
					c[d]=a[i];
					d++;
				}


			for(int i=0;i<s.length();i++)
				System.out.print(c[i]);
			System.out.println(d);
	}

}
/*
	StringBuffer s=new StringBuffer("mam");
	StringBuffer a=new StringBuffer("mam");
	String x=s.toString();
	String y=a.toString();
	if(x.equals(y))
		System.out.println("Hello");
}
}
	//System.out.println(s.substring(0,s.length()));
	//char[] a=s.toCharArray();

		
//System.out.println(a[0]);
//if(indexOf(i).equals(lastIndexOf(i)))
		
}

}
/*for(char c:a)
{
System.out.println(c);
}
}

}
/*
import java.util.*;

class A
{
String s="sumit";
char[] a=s.toCharArray();
System.out.println(a[0]);
}


/*
import java.util.*;

class A
{
String s="sumit";
String[] alphabets = s.split("");
System.out.println(a[0]);
}
*/