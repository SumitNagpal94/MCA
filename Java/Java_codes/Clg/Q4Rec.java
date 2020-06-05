import java.util.*;
import java.io.*;


public class Q4Rec
{

	static ArrayList<String> sub=new ArrayList<String>();
	static int k;
	static String S;
	static int arr[];

	Q4Rec(int k,String S)
	{
		this.k=k;
		this.S=S;
	}
	static void Substring(String app)
	{
		
				if(app.length()==k)
					{
						if(!sub.contains(app))
							sub.add(app);
					}
				else
				{
					for(int i=0;i<S.length();i++)
					{
			
						String snew=app;
						app+=Character.toString(S.charAt(i));
						Substring(app);
						app=snew;
					}
				}
	}
	
	static void Count()
	{
		ArrayList<String> a=new ArrayList<String>();
		for(int i=0;i<S.length()-1;i++)
				a.add(String.join("",Character.toString(S.charAt(i)),Character.toString(S.charAt(i+1))));

		arr=new int[sub.size()];
		for(int i=0;i<sub.size();i++)
			arr[i]=0;

		for(int i=0;i<sub.size();i++)
			for(int j=0;j<a.size();j++)
				if(sub.get(i).toString().equals(a.get(j).toString()))
					arr[i]++;

		for(int i=0;i<sub.size();i++)
			System.out.print(sub.get(i)+" ");
		System.out.println();
		for(int i=0;i<sub.size();i++)
			System.out.print(arr[i]+"  ");
	
		
	}

	public static void main(String []args) throws Exception
	{
		String app="";
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the String");
		String s=sc.next();
		String s1[]=new String[(int)Math.pow(s.length(),2)];
		System.out.println("Enter value of k for k-mers");
		int k=sc.nextInt();
		Recur r=new Recur(k,s);
		r.Substring(app);
		r.Count();
		FileWriter fw=new FileWriter("Sumit.csv");
		File fl=new File("Sumit.csv");
		if(fl.isFile())
			{
			System.out.println("File is Created");
			fw.append(String.join("|",sub));
			fw.append("\n");
			for(int i=0;i<sub.size();i++)
				fw.append(String.join("|",Character.toString(arr[i])));
			fw.flush();
			fw.close();
			BufferedReader bf=new BufferedReader(new FileReader("Sumit.csv"));
			ArrayList<String> readFile=new ArrayList<String>();
			String row="";
			while((row=bf.readLine())!=null)
			{
				String data[]=row.split("|");
				for(String start:data)
					System.out.print(start);
			}
			
			}
			else
			System.out.println("File Not Found");
		

	}
}
