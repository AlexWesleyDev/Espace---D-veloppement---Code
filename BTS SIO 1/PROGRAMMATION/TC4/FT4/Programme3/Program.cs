using System.Collections.Generic;

namespace FT4{
    internal class Program{
        static void Main(string[] args) {
            List<int> TabTemps = new List<int>();
            int total=0;int temps;string saisie;
            Console.WriteLine("Temps de stationnement des véhicules du parking (en min)");
            Console.WriteLine("Saisr 0 pour arrêter la saisie.");
            do{
                do{
                    Console.Write("Saisir le temps d'un véhicule: ");
                    saisie = Console.ReadLine();
                    if(!int.TryParse(saisie,out temps)||temps<0){Console.WriteLine("Erreur de saisie !");}//Commentaire facultatif : message d'erreur
                }while(!int.TryParse(saisie,out temps)||temps<0);//Recommencer la saisie en cas d'erreur. 
                
                if(temps>0){
                    TabTemps.Add(temps);
                    total+=temps;}
            }while(temps>0);
            if(TabTemps.Count>0){
                double MoyenneTps = total/TabTemps.Count();
                Console.WriteLine("Nombre de voitures : "+TabTemps.Count());
                Console.WriteLine("Temps total en min: "+total);
                Console.WriteLine("Temps moyen en min: "+MoyenneTps);}
            else{Console.WriteLine("Aucun temps n'a été saisie.");}
            Console.ReadKey();
        }
    }
}