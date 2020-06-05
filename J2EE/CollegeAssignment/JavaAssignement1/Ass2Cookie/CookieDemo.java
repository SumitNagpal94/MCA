import java.net.*;
import java.time.*;
import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

class CookieDemo extends HttpServlet
{
	public void service(HttpServletRequest request,HttpServletResponse response) throws IOException,ServletException
	{
		int count=0;
		String dateTime1="",ipAddress1="",macAddress1="";

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
      	
      	PrintWriter out = response.getWriter();
      	response.setContentType("text/html");
      	out.println("<html><body><label>No of User Visit: "+count+"</label><label>Previous Login: "+dateTime1+"</label><label>Previous IPAddress: "+ipAddress1+"</label><label>Previous MAC: "+macAddress1+"</label></br>");
      
       }
      	StringBuilder sb = new StringBuilder();
      	InetAddress ip=InetAddress.getLocalHost();;
		try {
			NetworkInterface network = NetworkInterface.getByInetAddress(ip);
			byte[] mac = network.getHardwareAddress();
			

			for (int i = 0; i < mac.length; i++) {
				sb.append(String.format("%02X%s", mac[i], (i < mac.length - 1) ? "-" : ""));
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
		Cookie usercounter = new Cookie("usercounter",count+"");
      	Cookie dateTime = new Cookie("dateTime",java.time.LocalDateTime.now()+"");
      	Cookie ipAddress = new Cookie("ipAddress",ip.getHostAddress() );
		Cookie macAddress = new Cookie("macAddress",sb.toString());

	      usercounter.setMaxAge(365*60*60*24);
	      dateTime.setMaxAge(365*60*60*24);
	      ipAddress.setMaxAge(365*60*60*24);
	      macAddress.setMaxAge(365*60*60*24);

	      response.addCookie(usercounter);
	      response.addCookie(dateTime);
		  response.addCookie(ipAddress);
	      response.addCookie(macAddress);
      
      	PrintWriter out = response.getWriter();
      	response.setContentType("text/html");
      	out.println("<html><body><label>UserName: "+request.getParameter("usercounter")+"</label><label>Last Login: "+request.getParameter("dateTime")+"</label><label>Previous IPAddress: "+request.getParameter("ipAddress")+"</label><label>Previous MAC: "+request.getParameter("MAC")+"</label></br></body></html>");
      	    
	}
}