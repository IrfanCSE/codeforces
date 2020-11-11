using System;

namespace Codeforce
{
    public class PrizeString
    {
        static void get(string[] args)
        {
            var a = Console.ReadLine().ToLower();
            var b = Console.ReadLine().ToLower();

            var value = 0;

            for (int i = 0; i < a.Length; i++)
            {
                if (a[i] > b[i])
                {
                    value = 1;
                    break;
                }

                if (a[i] < b[i])
                {
                    value = -1;
                    break;
                }

                if (a[i] == b[i])
                    value = 0;
            }

            Console.WriteLine(value);
        }
    }
}