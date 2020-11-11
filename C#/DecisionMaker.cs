using System;

namespace Codeforce
{
    public class DecisionMaker
    {
        static void Decision()
        {
            var n=Convert.ToInt32(Console.ReadLine());
            var storAry=new string[n];

            for(var i=0; i<n; i++){
                storAry[i]=Console.ReadLine();
            }

            var canDo=0;

            for (int i = 0; i < storAry.Length; i++)
            {
                var lineRearange = storAry[i].Replace(" ","");
                var lineAry=lineRearange.ToCharArray();

                var decision=0;

                for (int j = 0; j < lineAry.Length; j++)
                {
                    if(lineAry[j]=='1')
                        decision++;
                }

                if(decision>=2)
                    canDo++;
            }

            Console.WriteLine(canDo);
        }
    }
}