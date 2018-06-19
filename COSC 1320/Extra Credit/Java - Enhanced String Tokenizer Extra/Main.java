package extra;

public class Main {
	public static void main(String[] args)
	{
		System.out.println("Sentence with extra blanks: ");
		System.out.println("Beware   lest   you   lose   the   substance   by   grasping   at   the   shadow");
		System.out.println("Sentence without extra blanks: ");
		EnhancedStringTokenizer sentence = new EnhancedStringTokenizer("Beware   lest   you   lose   the   substance   by   grasping   at   the   shadow");
		while (sentence.hasMoreTokens())
		{
			System.out.print(sentence.nextToken() + " ");
		}
		System.out.println();
		System.out.println("Each word of the sentence on a separate line: ");
		String[] token = sentence.tokensSoFar();
		for (int i = 0; i < token.length; i++)
		{
			System.out.println(token[i]);
		}
	}
}
