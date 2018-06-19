package petfarm;

public abstract class Pet 
{
	private Attribute hunger;
	private Attribute thirst;
	private Attribute bored;
	private String[] phrases;
	protected Pet(int hungerRate, int thirstRate, int boredRate)
	{
		hunger = new Attribute(hungerRate);
		thirst = new Attribute(thirstRate);
		bored = new Attribute(boredRate);
	}
	public Attribute getHunger() { return hunger; }
	public Attribute getThirst() { return thirst; }
	public Attribute getBored() { return bored; }
	public String[] getPhrases() { return phrases; }
	public abstract String getName();
	protected void setPhrases(String[] a) { phrases = a; }
}
