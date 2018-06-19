package petfarm;

public class Pig extends Pet implements Teachable
{
	private String name;
	public Pig(String a, int b, int c, int d)
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
