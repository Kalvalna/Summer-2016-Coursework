package employee;

public class main {
	public static void main(String[] args)
	{
		employee e1 = new employee(); 
		employee e2 = new employee("John", "Smith", 20000);
		invoice i1 = new invoice();
		invoice i2 = new invoice(5, 2.75);
		System.out.println(e1);
		System.out.println(e2);
		System.out.println(i1);
		System.out.println(i2);
		System.out.println(payable.x);
	}
}
