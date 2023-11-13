using System;

namespace Operator
{
	class AssignmentOperator
	{
		public static void Main(string[] args)
		{
			int firstNumber, secondNumber;
			// Assigning a constant to variable
			firstNumber = 10;
			Console.WriteLine("First Number = {0}", firstNumber);

			// Assigning a variable to another variable
			secondNumber = firstNumber;
			Console.WriteLine("Second Number = {0}", secondNumber);
		}
	}
}