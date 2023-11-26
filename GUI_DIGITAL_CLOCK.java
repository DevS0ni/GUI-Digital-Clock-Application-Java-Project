import javax.swing.*;
import java.awt.*;
import java.util.Date;

public class DigClk extends JFrame
{
	int hh,mm,ss;
	JLabel lbl;
	DigClk()
	{
		Container c = getContentPane();
		c.setLayout(null);
		lbl = new JLabel();
		lbl.setBounds(50,50,200,75);
		lbl.setFont(new Font("Arial",Font.BOLD,35));
		lbl.setForeground(Color.RED);
		c.setBackground(Color.GREEN);
		c.add(lbl);
		setBounds(10,10,250,200);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		show();
	}
	void getTime()
	{
		Date d = new Date();
		hh=d.getHours();
		mm=d.getMinutes();
		ss=d.getSeconds();
	}
		
	void dispTime()
	{
		//System.out.println(hh+":"+mm+":"+ss);
		while(true)
		{
			getTime();
			lbl.setText(hh+":"+mm+":"+ss);
			try
			{
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
				System.out.println(e);
			}
		}
	}
	public static void main(String args[])
	{
		DigClk dc = new DigClk();
		dc.dispTime();
	}
}