import java.net.*;
import java.time.*;

class Test
{
	public static void main(String[] args)
	{
		try {
		StringBuilder sb = new StringBuilder();
      	
			InetAddress ip=InetAddress.getLocalHost();;
		
			NetworkInterface network = NetworkInterface.getByInetAddress(ip);
			byte[] mac = network.getHardwareAddress();
			

			for (int i = 0; i < mac.length; i++) {
				sb.append(String.format("%02X%s", mac[i], (i < mac.length - 1) ? "-" : ""));
			}
			System.out.println(java.time.LocalDateTime.now()+"");
		System.out.println(ip.getHostAddress());
		System.out.println(sb.toString());
		} catch (Exception e) {
			e.printStackTrace();
		}
		
	}
}