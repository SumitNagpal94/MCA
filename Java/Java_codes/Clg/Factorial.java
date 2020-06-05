import javax.swing.*;
import java.awt.event.*;
import java.math.*;


class Factorial extends JFrame
{
JLabel l1,l2,l3;
JButton b1;
JTextField t1;

public void setComponents()
{

l2=new JLabel("Factorial of Number");
l1=new JLabel("Enter Number");
l3=new JLabel();
t1=new JTextField();
b1=new JButton("Calculate");
setLayout(null);
l2.setBounds(70,50,400,20);
l1.setBounds(50,80,100,20);
t1.setBounds(150,80,100,20);
b1.setBounds(80,120,100,20);
l3.setBounds(70,150,1500,20);
b1.addActionListener(new Handler());

add(l1);
add(t1); 
add(l2);
add(b1);
add(l3);
}


Factorial()
{}
Factorial(String s)
{
super(s);
}
public static void main(String[] args)
{
Factorial jf=new Factorial("Factorial");
jf.setComponents();
jf.setSize(300,300);
jf.setVisible(true);
jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
}

class Handler implements ActionListener
{
	public void actionPerformed(ActionEvent e)
	{
	int x=Integer.parseInt(t1.getText());
	BigInteger fact=BigInteger.valueOf(1);
		for(int i=1;i<=x;i++)
		{
		fact=fact.multiply(BigInteger.valueOf(i));
		}
	l3.setText("Factorial is "+fact);

	}
}

}