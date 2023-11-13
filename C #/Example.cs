using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StringInterpolation
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 10;
            int y = 20;

            //Using String Interpolation
            Console.WriteLine($"The sum of {x} and {y} is {x + y}.");

            //Without Using String Interpolation
            Console.WriteLine("The sum of " + x + " and " + y + " is " + (x + y) + ".");

            Console.ReadKey();
        }
    }
}