using System;
using System.Text;

namespace Codeforce
{
    public static class LongTextParsing
    {
        public static void TextParsing()
        {
            var n = Convert.ToInt32(Console.ReadLine());
            var input = new string[n];
            for (int i = 0; i < n; i++)
            {
                input[i] = Console.ReadLine();
            }

            foreach (var text in input)
            {
                if (text.Length > 10)
                {
                    TextParse(text);
                }
                else
                {
                    Console.WriteLine(text);
                }
            }
        }

        static void TextParse(string text)
        {
            var word = new StringBuilder();

            var textAry = text.ToCharArray();
            var length = textAry.Length - 2;
            word.Append(textAry[0]);
            word.Append(length);
            word.Append(textAry[textAry.Length - 1]);
            Console.WriteLine(word);
        }
    }
}