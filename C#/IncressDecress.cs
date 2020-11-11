using System;

namespace Codeforce
{
    public class IncressDecress
    {
        static void Func()
        {
            int X = 0;
            var line = Convert.ToInt32(Console.ReadLine());
            var expressionAry = new string[line];

            for (var i = 0; i < line; i++)
            {
                expressionAry[i] = Console.ReadLine();
            }

            foreach (var exp in expressionAry)
            {
                if (exp == "X++")
                    X++;
                if (exp == "X--")
                    X--;
                if (exp == "++X")
                    ++X;
                if (exp == "--X")
                    --X;
            }

            Console.WriteLine(X);
        }
    }
}