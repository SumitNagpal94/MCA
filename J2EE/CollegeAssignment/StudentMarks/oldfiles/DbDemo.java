

import java.sql.*;

public class DbDemo
{
	public static void main(String[] args)
	{

				// 		try{  
					
				// 	//step1 load the driver class 
				// 	//int reg_no=Integer.parseInt(request.getParameter("reg_no"));
				// 	Class.forName("oracle.jdbc.driver.OracleDriver");  
					  
				// 	//step2 create  the connection object  
				// 	Connection con=DriverManager.getConnection(  
				// 	"jdbc:oracle:thin:@localhost:1521:xe","system","12345");  
					  
				// 	//step3 create the statement object  
				// 	Statement stmt= con.createStatement();  
					  
				// 	//step4 execute query  
				// 	ResultSet rs=stmt.executeQuery("select * from emp");// student_marks where registration_no=" +reg_no);  
				// 	while(rs.next())  
				// 		System.out.println("Chal gya ree");
				// 		//out.println(rs.getInt(2));  
					  
				// 	//step5 close the connection object  
				// 	con.close();  
				// }catch(Exception e){ System.out.println(e);}  




		// String sql="select * from voter";
		// String url="jdbc:mysql://www.db4free.net:3306/spmdata";
		// String username="sumit_nagpal";
		// String password="Sumit@123";
		// try
		// {
		// 	Class.forName("com.mysql.jdbc.Driver");
		// 	Connection con= DriverManager.getConnection(url,username,password);
		// 	PreparedStatement st=con.prepareStatement(sql);
		// 	ResultSet rs=st.executeQuery();
		// 	if(rs.next())
		// 	{
		// 		System.out.println("Record Inserted");
		// 		//response.sendRedirect("StudentEntry.html");
		// 	}
		// 	else
		// 	{
		// 		System.out.println("Not Inserted");
		// 		//response.sendRedirect("admin.html");
		// 	}
		// }
		// catch(Exception e)
		// {
		// 	e.printStackTrace();
		// }
	                    String url="jdbc:mysql://www.db4free.net:3306/spmdata";
                    String username="sumit_nagpal";
                    String password="Sumit@123";
                    int sid=20186254;//Integer.parseInt(request.getParameter("sid"));
                    String sname="",eno="";
                    int id=0,marks1=0,marks2=0,marks3=0,marks4=0,marks5=0,total=0;
                    double per=0.00;
                    try
                    {
                      Class.forName("com.mysql.cj.jdbc.Driver");
                      Connection con= DriverManager.getConnection(url,username,password);
                      Statement st=con.createStatement();
                      boolean b=st.execute("select * from student where sid="+sid);
                      ResultSet rs=st.getResultSet();
                      rs.next();
                      sname=rs.getString("sname");
                      eno=rs.getString("eno");
                      sid=rs.getInt("sid");
                      marks1=rs.getInt("marks1");
                      marks2=rs.getInt("marks2");
                      marks3=rs.getInt("marks3");
                      marks4=rs.getInt("marks4");
                      marks5=rs.getInt("marks5");
                      total=marks1+marks2+marks3+marks4+marks5;
                      per=total/5;
                    	System.out.println(sname+" "+eno+" "+sid+" "+marks1);
                    }
                    catch(Exception e)
                    {
                      e.printStackTrace();
                      e.getMessage();
                    }

	}
}