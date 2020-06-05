import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.net.*;

public class CookieQues2 extends HttpServlet
{
	public void doGet(HttpServletRequest req,HttpServletResponse res) throws IOException,ServletException
	{
		doPost(req,res);
	}
	public void doPost(HttpServletRequest req,HttpServletResponse res) throws IOException,ServletException
	{
				int count=0;
            String dateTime1="",ipAddress1="",macAddress1="";

		Cookie c[]=req.getCookies();
		if( c != null )
		{
                    
                     for (int i = 0; i < c.length; i++)
                     {
                        if(c[i].getName().equals("usercounter"))
                        {
                        	count=Integer.parseInt(c[i].getValue());
                        	count=count+1;
                        }
                        if(c[i].getName().equals("dateTime"))
                        {
                              dateTime1=c[i].getValue(); 
                        }
                        if(c[i].getName().equals("ipAddress"))
                        {
                           ipAddress1=c[i].getValue();
                           
                        }
                        if(c[i].getName().equals("macAddress"))
                        {
                           macAddress1=c[i].getValue();
                        }

                     }
                  	
                  	PrintWriter out = res.getWriter();
                  	res.setContentType("text/html");
                     out.println("<h3>Thank you for visiting again</h3>");
                  	out.println("<html><body><table width='600px' border='2px'cellpadding='0px'><tr><td>UserName: </td><td>"+req.getParameter("id")+"</td></tr><tr><td>Total No of Visit: </td><td>"+count+"</td></tr><tr><td>Previous Visit: </td><td>"+dateTime1+"</td></tr><tr><td>Previous IPAddress: </td><td>"+ipAddress1+"</td></tr><tr><td>Previous MAC: </td><td>"+macAddress1+"</td></tr></table></body></html>");
                  
        }
        else
        {
            PrintWriter out = res.getWriter();
            res.setContentType("text/html");
            out.println("<h3>Welcome you are first time visiter</h3>");
            out.println("<html><body><table width='600px' border='2px'cellpadding='0px'><tr><td>UserName: </td><td>"+req.getParameter("id")+"</td></tr><tr><td>Time of Visit: </td><td>"+java.time.LocalDateTime.now()+"</td></tr></table></body></html>");
        }
      try
         {
         StringBuilder sb = new StringBuilder();
         InetAddress ip=InetAddress.getLocalHost();
         NetworkInterface network = NetworkInterface.getByInetAddress(ip);
         byte[] mac = network.getHardwareAddress();
         

         for (int i = 0; i < mac.length; i++)
            sb.append(String.format("%02X%s", mac[i], (i < mac.length - 1) ? "-" : ""));

                        Cookie usercounter = new Cookie("usercounter",count+"");
                        Cookie dateTime = new Cookie("dateTime",java.time.LocalDateTime.now()+"");
                        Cookie ipAddress = new Cookie("ipAddress",ip.getHostAddress() );
                        Cookie macAddress = new Cookie("macAddress",sb.toString());

                        usercounter.setMaxAge(365*60*60*24);
                        dateTime.setMaxAge(365*60*60*24);
                        ipAddress.setMaxAge(365*60*60*24);
                        macAddress.setMaxAge(365*60*60*24);

                        res.addCookie(usercounter);
                        res.addCookie(dateTime);
                        res.addCookie(ipAddress);
                        res.addCookie(macAddress);

         PrintWriter out=res.getWriter();
         out.println("<html><body><table width='600px' border='2px'cellpadding='0px'><tr><td>Current IPAddress: </td><td>"+ip.getHostAddress()+"</td></tr><tr><td>Current MAC: </td><td>"+sb.toString()+"</td></tr></table></body></html>");

         if(macAddress1.equals(sb.toString()))
         {
            out.println("You have login again from the same device");
         }

      }
      catch (Exception e)
            {
         e.printStackTrace();
      }
            	
	
	}
}