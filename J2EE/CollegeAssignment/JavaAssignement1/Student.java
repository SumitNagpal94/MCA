import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class Student extends HttpServlet
{
	public void doGet(HttpServletRequest req,HttpServletResponse res) throws IOException,ServletException
	{
		doPost(req,res);
	}
	public void doPost(HttpServletRequest req,HttpServletResponse res) throws IOException,ServletException
	{
		PrintWriter out=res.getWriter();
		res.setContentType("text/html");

		String name=req.getParameter("name").toString(); 
		String gender=req.getParameter("gender");
		String dob=req.getParameter("dob");
		String address=req.getParameter("address");
		String email=req.getParameter("email");

		String year10=req.getParameter("year10");
		String sname10=req.getParameter("sname10");
		String board10=req.getParameter("board10");
		String per10=req.getParameter("per10");
		
		String year12=req.getParameter("year12");
		String sname=req.getParameter("sname");
		String board=req.getParameter("board");
		String per12=req.getParameter("per12");

		String clgyear =req.getParameter("clgyear");
		String course =req.getParameter("course");
		String cname=req.getParameter("cname");
		String university=req.getParameter("university");
		String perclg=req.getParameter("perclg");

		String pgclgyear =req.getParameter("pgclgyear");
		String pgcourse =req.getParameter("pgcourse");
		String pgcname=req.getParameter("pgcname");
		String pguniversity=req.getParameter("pguniversity");
		String pgperclg=req.getParameter("pgperclg");

		String cmpname=req.getParameter("cmpname");
		String cmpduration =req.getParameter("cmpduration");
		String cmpdesignation=req.getParameter("cmpdesignation");
		String cmpjd=req.getParameter("cmpjd");

		out.println("<h2>Student Details</h2>");
		
		String htmlCode="<html><body><table width='400px' border='2px'cellpadding='0px'><tr><td><h3>Name: </h3></td><td>"+name+"</td></tr><tr><td><h3>Gender: </h3></td><td>"+gender+"</td></tr><tr><td><h3>Date of Birth: </h3></td><td>"+dob+"</td></tr><tr><td><h3>Address: </h3></td><td>"+address+"</td></tr><tr><td><h3>Email: </h3></td><td>"+email+"</td></tr></table>";
		htmlCode+="</br><h2>Educational Details</h2></br><table width='400px' border='2px' cellpadding='0px'><tr><th>Year</th><th>Course</th><th>School/Institute</th><th>University/Board</th><th>Percentage</th></tr>";
		htmlCode+="<tr><td>"+pgclgyear+"</td><td>"+pgcourse+"</td><td>"+pgcname+"</td><td>"+pguniversity+"</td><td>"+pgperclg+"</td></tr>";
		htmlCode+="<tr><td>"+clgyear+"</td><td>"+course+"</td><td>"+cname+"</td><td>"+university+"</td><td>"+perclg+"</td></tr>";
		htmlCode+="<tr><td>"+year12+"</td><td>"+"Intermediate"+"</td><td>"+sname+"</td><td>"+board+"</td><td>"+per12+"</td></tr>";
		htmlCode+="<tr><td>"+year10+"</td><td>"+"Matriculate"+"</td><td>"+sname10+"</td><td>"+board10+"</td><td>"+per10+"</td></tr></table></body></html>";		
		htmlCode+="</br><h2>Job Experience</h2></br><table width='400px' border='2px' cellpadding='0px'><tr><td><h3>Company Name: </h3></td><td>"+cmpname+"</td></tr><tr><td><h3>Duration: </h3></td><td>"+cmpduration+"</td></tr><tr><td><h3>Designation: </h3></td><td>"+cmpdesignation+"</td></tr><tr><td><h3>Description: </h3></td><td>"+cmpjd+"</td></tr><tr></table></html></body>";

		out.println(htmlCode);
		out.close();
	}
}