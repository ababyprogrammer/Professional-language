using System;
 
namespace Operator
{
	class ArithmeticOperator
	{
		public static void Main(string[] args)
		{
			double firstNumber = 14.40, secondNumber = 4.60, result;
			int num1 = 26, num2 = 4, rem;

			// Addition operator
			result = firstNumber + secondNumber;
			Console.WriteLine("{0} + {1} = {2}", firstNumber, secondNumber, result);

			// Subtraction operator
			result = firstNumber - secondNumber;
			Console.WriteLine("{0} - {1} = {2}", firstNumber, secondNumber, result);

			// Multiplication operator
			result = firstNumber * secondNumber;
			Console.WriteLine("{0} * {1} = {2}", firstNumber, secondNumber, result);

			// Division operator
			result = firstNumber / secondNumber;
			Console.WriteLine("{0} / {1} = {2}", firstNumber, secondNumber, result);

			// Modulo operator
			rem = num1 % num2;
			Console.WriteLine("{0} % {1} = {2}", num1, num2, rem);
		}
	}
}