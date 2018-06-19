package employee;

public class invoice implements payable
{
	private int prod;
	private double price;
	public invoice()
	{ 
		prod = 0;
		price = 0;
	}
	public invoice(int numOfProd, double priceOfProd)
	{
		setAll(numOfProd, priceOfProd);
	}
	public void setProd(int a) { prod = a; }
	public void setPrice(double a) { price = a; }
	public void setAll(int a, double b)
	{
		prod = a;
		price = b;
	}
	public int getProd() { return prod; }
	public double getPrice() { return price; }
	public double getAmount() { return prod*price; }
	public String toString()
	{
		return "Number of Products: " + prod + "\nPrice per product: " + price + "\nInvoice: " + getAmount();
	}
}
