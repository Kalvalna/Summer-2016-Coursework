package petfarm;

public class Duck extends Pet implements Teachable
{
	private String name;
	public Duck(String a, int b, int c, int d)
	{
		super(b, c, d);
		name = a;
	}
	public void teach(String[] phrases)
	{
		setPhrases(phrases);
	}
	public String getName()
	{
		return name;
	}
}
