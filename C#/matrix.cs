using System;
using System.Linq;

namespace Codeforce
{
    public class matrix
    {
        static void beutify(string[] args)
        {
            var count = 0;
            var row = 0;
            for (int i = 0; i < 5; i++)
            {
                var input = Console.ReadLine().Split(" ").Select(int.Parse).ToArray();
                for (int j = 0; j < 5; j++)
                {
                    if (input[j] == 1)
                    {
                        if (j >= 2)
                        {
                            count += j - 2;
                            row = i;
                        }
                        if (j < 2)
                        {
                            count += 2 - j;
                            row = i;
                        }
                    }
                }
            }

            if (row != 2)
            {
                if (row > 2)
                    count += row - 2;
                if (row < 2)
                    count += 2 - row;
            }

            Console.WriteLine(count);
        }
    }
}