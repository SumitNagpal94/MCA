import java.io.*;
import java.util.*;
class CSVSumit
{
		public static void main(String[] args) throws Exception
		{
		ArrayList<String> myList=new ArrayList<String>(Arrays.asList("Hey","Sumit","Nagpal"));
		FileWriter fw=new FileWriter("Sumit.csv");
		File fl=new File("Sumit.csv");
		if(fl.isFile())
			{
			System.out.println("File is Created");
			fw.append(String.join("|",myList));
			fw.append("\n");
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

