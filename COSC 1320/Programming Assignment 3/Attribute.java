package petfarm;

public class Attribute 
{
	private int rate;
	private int status;
	public Attribute(int a)
	{
		setRate(a);
		status = 5;
	}
	private void setRate(int a)	{ rate = a;	}
	public int getRate() { return rate; }
	public int getStatus() { return status; }
	public boolean incStatus()
	{
		if (status < 5)
		{
			status = status + 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	public boolean decStatus()
	{
		if (status > 0)
		{
			status = status - 1;
			return true;
		}
		else
		{
			return false;
		}
	}
}
