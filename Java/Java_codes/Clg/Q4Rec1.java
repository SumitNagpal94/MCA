import java.util.*;
import java.io.*;


public class Q4Rec1
{

	static ArrayList<String> sub=new ArrayList<String>();
	static int k;
	static String S;
	static int arr[];

	Q4Rec1(int k,String S)
	{
		this.k=k;
		this.S=S;
	}
	static ArrayList Substring(String app)
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
			return sub;
	}
	
	

	public static void main(String []args) throws Exception
	{
		String app="";
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the DNA Sequence ");
		String s=sc.next();
		System.out.println("Enter value of k for k-mers");
		int k=sc.nextInt();
		Q4Rec1 r=new Q4Rec1(k,s);
		ArrayList<String> sub=new ArrayList<String>(r.Substring(app));
		ArrayList<String> a=new ArrayList<String>();
		for(int i=0;i<s.length()-k+1;i++)
				a.add(s.substring(i,i+k));

		arr=new int[sub.size()];
		for(int i=0;i<sub.size();i++)
			arr[i]=0;

		for(int i=0;i<sub.size();i++)
			for(int j=0;j<a.size();j++)
				if(sub.get(i).toString().equals(a.get(j).toString()))
					arr[i]++;

		System.out.print("\nK-mers are:\n");
		for(int i=0;i<sub.size();i++)
			System.out.print(sub.get(i)+" ");
		System.out.println();
		for(int i=0;i<sub.size();i++)
			{
			System.out.print(arr[i]);
			for(int j=0;j<k;j++)
				System.out.print(" ");
			}

	
		FileWriter fw=new FileWriter("Sumit.csv");
		File fl=new File("Sumit.csv");
		if(fl.isFile())
			{
			System.out.println("\n\nFile Created Successfully");
			fw.append(String.join("|",sub));
			fw.append("\n");
			for(int i=0;i<sub.size();i++)
				fw.append((Integer.toString(arr[i])+"|"));
			System.out.println("File Appended Successfully");
			fw.flush();
			fw.close();
			System.out.println("\nReading Data from File");
			BufferedReader bf=new BufferedReader(new FileReader("Sumit.csv"));
			ArrayList<String> readFile=new ArrayList<String>();
			String row="";
			while((row=bf.readLine())!=null)
				{
				String data[]=row.split("[|]");
				for(String start:data)
					if(start.equals((sub.get(sub.size()-1))))
						System.out.print(start+"\n");
					else
						if(start.length()==k)
							System.out.print(start+" ");
						else
						{
							System.out.print(start);
							for(int i=0;i<k;i++)
								System.out.print(" ");
						}
				}
			
			}
			else
			System.out.println("File Not Found");
		

	}
}
	