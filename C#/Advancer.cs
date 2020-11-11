using System;

namespace Codeforce
{
    public class Advancer
    {
        static void Detect()
        {
            var n_And_k = Console.ReadLine();
            var charAry = n_And_k.Split(" ");

            int n = Convert.ToInt32(charAry[0]);
            int k = Convert.ToInt32(charAry[1]);

            var mark = Console.ReadLine();
            var markAry = mark.Split(" ");

            var pass = 0;
            for (int i = 0; i < n; i++)
            {
                if (Convert.ToInt32(markAry[i]) > 0)
                {
                    if (i < k)
                        pass++;

                    if (i >= k)
                    {
                        if (Convert.ToInt32(markAry[i]) == Convert.ToInt32(markAry[i - 1]))
                        {
                            pass++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }

            Console.WriteLine(pass);
        }
    }
}