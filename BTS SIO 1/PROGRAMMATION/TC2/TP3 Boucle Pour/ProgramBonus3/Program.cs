using System;

namespace TP3{
    internal class Program{
        static void afficherLosange(){
            Console.Write("Largeur Max du losange : ");string inputlargeur=Console.ReadLine();Console.WriteLine("");
            if(string.IsNullOrEmpty(inputlargeur) || !int.TryParse(inputlargeur,out int larg) || larg%2==0){
                Console.Write("");}
            else{
                int gauche=larg/2+1;int droite=(larg/2)+1;
                for(int i=1;i<=larg;i++){
                    for (int j = 1; j <= larg; j++){
                        if(gauche<i && i<droite){Console.Write}
                        Console.Write(" ")
                        
                        
                    }
                    Console.Write("");

                }
            }
        }
        static void Main (string[] args){afficherLosange();Console.ReadKey();}}
}