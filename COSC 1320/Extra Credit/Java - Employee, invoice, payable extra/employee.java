package employee;

public class employee implements payable
{
	private String fn;
	private String ln;
	private double salary;
	public employee()
	{
		setAll("", "", 0);
	}
	public employee(String a, String b, double c)
	{
		setAll(a, b, c);
	}
	public void setFn(String a) { fn = a; }
	public void setLn(String a) { ln = a; }
	public void setSalary(double a) { salary = a; }
	public void setAll(String a, String b, double c)
	{
		fn = a;
		ln = b;
		salary = c;
	}
	public String getName() { return fn + " " + ln; }
	public double getSalary() { return salary; }
	public double getAmount() { return salary; }
	public String toString()
	{
		return "Name: " + getName() + "\nSalary: " + getSalary();
	}
}
