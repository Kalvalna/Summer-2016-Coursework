package bubble;

public class BubbleSort {
	public static void sort(Comparable[] a, int numberUsed)	
	{
		int j = 0;
		while(j < numberUsed)
		{
			j++;
			for (int i = 0; i < numberUsed - j; i++)
			{
				if (a[i].compareTo(a[i+1]) > 0)
				{
					interchange(i, i+1, a);
				}
			}
		}
	}
	private static void interchange(int i, int j, Comparable[] a)
	{
		Comparable temp;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
