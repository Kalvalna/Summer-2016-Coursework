package petfarm;
import java.util.Scanner;
import java.io.FileInputStream;
import java.io.FileNotFoundException;

public class Petfiles 
{
	private Pet[] pets;
	public Petfiles(String filename)
	{
		Scanner file = null;
		try
		{
			file = new Scanner(new FileInputStream(filename));
		}
		catch (FileNotFoundException e)
		{
			System.out.println("File not found or cannot be opened.");
			System.exit(0);
		}
		int size = file.nextInt();
		pets = new Pet[size];
		file.nextLine();
		System.out.println(size);
		String animal, name = null;
		int hunger, thirst, bored = 0;
		for (int i = 0; i < size; i++)
		{
			animal = file.nextLine();
			System.out.println(animal);
			name = file.nextLine();
			System.out.println(name);
			hunger = file.nextInt();
			System.out.println(hunger);
			thirst = file.nextInt();
			System.out.println(thirst);
			bored = file.nextInt();
			System.out.println(bored);
			if(file.hasNextLine())
			{
				file.nextLine();
			}
			System.out.println(animal.equals("Duck"));
			if (animal.equals("Duck"))
			{
				pets[i] = new Duck(name, hunger, thirst, bored);
			}
			else if (animal.equals("Hamster"))
			{
				pets[i] = new Hamster(name, hunger, thirst, bored);
			}
			else if (animal.equals("Pig"))
			{
				pets[i] = new Pig(name, hunger, thirst, bored);
			}
			else
			{
				System.out.println("Error. Invalid Pet type.");
				System.exit(0);
			}
		}
	}
	public Pet[] getPets()
	{
		return pets;
	}
}
