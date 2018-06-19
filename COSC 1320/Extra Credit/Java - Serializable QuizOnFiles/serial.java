package serializableFile;
import java.io.Serializable;

public class serial implements Serializable
{
	double[] numberList;
	double sum = 0;
	double avg = 0;
	double std = 0;
	public serial(double[] a, int length)
	{
		numberList = a;
		for (int i = 0; i < length; i++)
		{
			sum += numberList[i];
		}
		avg = sum/length;
		for (int i = 0; i < length; i++)
		{
			std += Math.pow(numberList[i]- avg, 2);
		}
		std = Math.sqrt(std/length);
	}
	public String toString()
	{
		return "Average: " + avg + "\nStandard Deviation: " + std; 
	}
}
