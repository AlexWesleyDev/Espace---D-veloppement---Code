using System;

namespace FT3{
    internal class Program{
            const int N=30;
            static int cpt=0,nb;
            static string inputNb="";
        static void Main(string[] args){

            do{
                Console.Write("Saisir pour trouver le nombre ente 1 et 50 : ");
                inputNb= Console.ReadLine();
                if(string.IsNullOrEmpty(inputNb) || !int.TryParse(inputNb, out nb)){
                    Console.WriteLine("");}
                else{
                    cpt++;
                    if(nb>50){Console.WriteLine("Erreur.");}
                    else{
                        if(nb>N){Console.WriteLine("Trop grand");}
                        else{if(nb<N){Console.WriteLine("Trop petit");}}
                    }
                }
            }
            while(nb!=N);
            Console.WriteLine("Bravo. Nombre de tentatives : "+ cpt);}}}