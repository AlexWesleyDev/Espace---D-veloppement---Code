using System;
namespace TP3{
    static int piece; static string inputPiece;
    internal class Program{
        static int piece;static string inputPiece;static double const café=0.50;
        static void Main(string args[]){
            Console.WriteLine("Quelle pièce insérez-vous ?");
            Console.WriteLine("- 1 pour 1 euro");
            Console.WriteLine("- 2 pour 2 euros");
            Console.WriteLine("- 10 pour 0,10 euro");
            Console.WriteLine("- 20 pour 0,20 euro");
            Console.WriteLine("- 50 pour 0,50 euro");
            inputPiece=Console.ReadLine();

            while(string.IsNullOrEmpty(inputPiece) || !int.TryParse(inputPiece,out piece) || (piece!=1 && piece!=2 && piece!=10
            && piece!=20 && piece!=50))
            {
                  inputPiece=Console.ReadLine();
            }
            




    }
}}