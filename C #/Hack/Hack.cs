using System;

class HackCode
{
    static void Main()
    {
        Console.WriteLine("Please enter a number: ");
        int num = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("The sum of the even-valued terms in the Fibonacci sequence up to " + num + " is: " + CalculateSum(num));
    }

    static int CalculateSum(int num)
    {
        int a = 0;
        int b = 1;
        int sum = 0;

        while (a <= num)
        {
            if (a % 2 == 0)
            {
                sum += a;
            }
            int temp = a;
            a = b;
            b = temp + b;
        }

        return sum;
    }
}