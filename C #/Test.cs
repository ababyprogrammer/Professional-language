using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        // User Input
        Console.WriteLine("Enter a sentence:");
        string sentence = Console.ReadLine();

        // Get all unique words
        HashSet<string> uniqueWords = new HashSet<string>(sentence.Split(' '));

        // Remove duplicate words from the sentence
        StringBuilder result = new StringBuilder();
        foreach (string word in uniqueWords)
        {
            result.Append(word + " ");
        }

        // Display the sentence with duplicate words removed
        Console.WriteLine("\nSentence with duplicate words removed:");
        Console.WriteLine(result.ToString().Trim());
    }
}