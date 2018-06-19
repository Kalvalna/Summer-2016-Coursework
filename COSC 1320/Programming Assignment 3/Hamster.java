package petfarm;

public class Hamster extends Pet implements Teachable
{
	private String name;
	public Hamster(String a, int b, int c, int d)
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
