

<%@ page import="java.sql.*" %>

<%

String sname=request.getParameter("sname");
int sid=Integer.parseInt(request.getParameter("sid"));
String eno=request.getParameter("eno");
int marks1=Integer.parseInt(request.getParameter("marks1"));
int marks2=Integer.parseInt(request.getParameter("marks2"));
int marks3=Integer.parseInt(request.getParameter("marks3"));
int marks4=Integer.parseInt(request.getParameter("marks4"));
int marks5=Integer.parseInt(request.getParameter("marks5"));



String sql="insert into student values (?,?,?,?,?,?,?,?);";
String url="jdbc:mysql://www.db4free.net:3306/spmdata";
String username="sumit_nagpal";
String password="Sumit@123";
try
{
	Class.forName("com.mysql.cj.jdbc.Driver");
	Connection con= DriverManager.getConnection(url,username,password);

	PreparedStatement st=con.prepareStatement(sql);
	st.setString(1,sname);
	st.setInt(2,sid);
	st.setString(3,eno);
	st.setInt(4,marks1);
	st.setInt(5,marks2);
	st.setInt(6,marks3);
	st.setInt(7,marks4);
	st.setInt(8,marks5);
	st.executeUpdate();

}
catch(Exception e)
{
	e.printStackTrace();
}
%>
<html>
<body>
alert("Record Inserted");
</body>
</html>
<%
response.sendRedirect("StudentEntry.html");
%>