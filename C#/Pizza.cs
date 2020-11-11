using System;

namespace Codeforce
{
    public class Pizza
    {
        static void Count()
        {
            var input = Console.ReadLine();
            var inAry = input.Split(' ');

            var m = inAry[0];
            var n = inAry[1];

            var totalSqr = Convert.ToInt32(m) * Convert.ToInt32(n);
            var pice = totalSqr / 2;
            Console.WriteLine(pice);
        }

    }
}