package serializableFile;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.util.Scanner;

public class main {
	public static void main(String[] args)
	{
		double[] numbers = new double[20];
		int i = 0;
		try 
		{
			Scanner inputStream = new Scanner(new FileInputStream("data.txt"));
			while (inputStream.hasNextDouble())
			{
				numbers[i] = inputStream.nextDouble();
				i++;
			}
			inputStream.close();
			System.out.println("Numbers obtained.");	
		}
		catch (IOException e)
		{
			System.out.println("Error reading file.");
		}
		try
		{
			ObjectOutputStream output = new ObjectOutputStream(new FileOutputStream("output.ser"));
			serial anObject = new serial(numbers, i);
			output.writeObject(anObject);
			output.close();
			System.out.println("Data sent to file.");
		}
		catch (IOException e)
		{
			System.out.println("Error with file output.");
		}
		System.out.println("Retreiving data from file.");
		try
		{
			ObjectInputStream input = new ObjectInputStream(new FileInputStream("output.ser"));
			serial readData = (serial)input.readObject();
			System.out.println("Data from file: ");
			System.out.println(readData);
			input.close();
		}
		catch(FileNotFoundException e)
		{
			System.out.println("Error. Cannot find output.ser.");
		}
		catch(ClassNotFoundException e)
		{
			System.out.println("Problems with file input.");
		}
		catch(IOException e)
		{
			System.out.println("Problems with file input.");
		}
	}
}
