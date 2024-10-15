using System;

namespace TP3{
    internal class Program{
        static void afficherLosange(){
            Console.WriteLine("Largeur Max du losange : ");string inputlargeur=Console.ReadLine();
            if(string.IsNullOrEmpty(inputlargeur) || !int.TryParse(inputlargeur,out int larg) || larg%2==0){
                Console.Write("");}
            else{
                for(int j=1;j<=larg;j++){
                    for(int i=1;i<=larg;i++){
                        Console.Write("*");}
                        

                }
            }
        static void Main(string[] args){afficherLosange();Console.ReadKey();}}}}