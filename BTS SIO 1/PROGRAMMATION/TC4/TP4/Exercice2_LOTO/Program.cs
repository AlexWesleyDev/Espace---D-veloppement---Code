using System;
using System.Collections.Generic;
namespace TP4{
    internal class Program{
        static string inputNum;
        static int numero,numComp;
        static List<int> TabNumJoueur= new List<int>();
        static List<int> TabAlea= new List<int>();
        // A) - Gestion de la saisie des numéros du joueur
        static void SaisieNumerosJoueur(){
            Console.WriteLine("CHOISIR 5 numéros entre 1-49 :");
            for (int i = 1; i <= 5; i++){
                Console.Write("Case "+i+" : ");
                inputNum=Console.ReadLine();
                while(string.IsNullOrEmpty(inputNum)||!int.TryParse(inputNum, out numero)|| numero<1 ||
                numero>49 || TabNumJoueur.Contains(numero)){
                    Console.Write("Erreur de saisie, CHOISIR 5 numéros non nulls entre 1-49 tous différents ! Case "+i+" : ");
                    inputNum=Console.ReadLine();
                }
                TabNumJoueur.Add(numero);              
            }
            Console.Write("Numéro complémentaire entre 1-10 : "); inputNum=Console.ReadLine();
            while(string.IsNullOrEmpty(inputNum)||!int.TryParse(inputNum, out numComp)|| numComp<1 || numComp>10){
                    Console.Write("Erreur de saisie, CHOISIR 1 numéro non null entre 1-10 ! : ");
                    inputNum=Console.ReadLine();
            }TabNumJoueur.Add(numComp);
        }
        // FIN A)

        // B)
        static void Affichage(){
            Console.Write("Votre grille est enregistrée avec la liste des numéros choisis: ");
            for (int i = 0; i < TabNumJoueur.Count-1; i++){
                Console.Write(TabNumJoueur[i]+" ");}
            Console.Write("et "+TabNumJoueur[5]); Console.WriteLine("");
        }
        // FIN B)
        
        // C)
        static void TirageAléa(){
            Random rand = new Random();
            for(int i = 0; i < 5; i++){
                do{
                    numero=rand.Next(1,50);
                }while(TabAlea.Contains(numero));
                TabAlea.Add(numero);            
            }
            numComp=rand.Next(1,11);
            TabAlea.Add(numComp);
        }
        // FIN C)

        // D)
        static bool TestGagnant(){
            int cpt=0;
            for (int i = 0; i < TabNumJoueur.Count-1; i++){
                if(TabAlea.Contains(TabNumJoueur[i])){cpt++;}
            }
            if(TabNumJoueur[5]==numComp && cpt==5){
                Console.WriteLine("Vos numéros sont identiques à ceux du LOTO. VOUS AVEZ GAGNE LE JACKPOT !");
                return true;}
            else{
                Console.WriteLine("Vos numéros ne sont pas identiques à ceux du LOTO !");
                return false; }          
        }
        // FIN D)

        static void Main(string[] args){
            Console.WriteLine("BIENVENU AU LOTO, Tentez votre chance pour gagner le JACKPOT !");
            SaisieNumerosJoueur();
            Affichage();
            TirageAléa();
            Console.Write("La grille enregistrée : ");
            for(int i = 0; i < TabAlea.Count-1; i++){
                Console.Write(TabAlea[i]+" ");}
            Console.Write("et "+TabAlea[5]);
            Console.WriteLine("");
            TestGagnant();
        }
    }
}