using System;

namespace TP3{
    internal class Program{
        static void afficherLosange(){
            Console.Write("Largeur Max du losange : ");string inputlargeur=Console.ReadLine();Console.WriteLine("");
            if(string.IsNullOrEmpty(inputlargeur) || !int.TryParse(inputlargeur,out int larg) || larg%2==0){
                Console.Write("");}
            else{
                int gauche=larg/2;int droite=(larg/2);
                for(int i=1;i<=larg+1;i++){
                    for (int j = 1; j <= larg; j++){
                        if(gauche<j && j<droite){Console.Write("*");}
                        else{Console.Write(" ");}}
                    Console.WriteLine("");
                    if(i<=(larg/2)+1 && i<larg+1){gauche--;droite++;}
                    else{
                        if(i>(larg/2)+1){gauche++;droite--;}}}
           }}
        static void Main (string[] args){afficherLosange();Console.ReadKey();}}
}