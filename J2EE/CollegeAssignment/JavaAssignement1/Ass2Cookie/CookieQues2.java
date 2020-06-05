import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

class CookieQues2 extends HttpServlet
{
	public void service(HttpServletRequest request,HttpServletResponse response) throws IOException
	{
		int count=0;

		Cookie c[]=request.getCookies();
		if( c != null )
		{
                    
                     for (int i = 0; i < c.length; i++)
                     {
                        if(c[i].getName().equals("usercounter"))
                        {
                        	count=Integer.parseInt(c[i].getValue());
                        	count=count+1;
                        }
                     }
                  	
                  	PrintWriter out = response.getWriter();
                  	response.setContentType("text/html");
                  	out.println("<html><body><label>No of User Visit: "+count+"</label></br>");
                  
            }
      	
		Cookie usercounter = new Cookie("usercounter",count+"");
      	
	      usercounter.setMaxAge(365*60*60*24);
	      response.addCookie(usercounter);
	      
      	PrintWriter out = response.getWriter();
      	response.setContentType("text/html");
      	out.println("<html><body><label>UserName: "+request.getParameter("id")+"</label></body></html>");
      	    
	}
}