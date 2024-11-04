using System;

namespace TP3{
    internal class Program{
        static void GrilleVide(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){Console.Write("Hello World !");}
            }
        }
        static void Main(string args[]){
            Console.Write("Hello Word !");
            GrilleVide();
        }
        
    }}