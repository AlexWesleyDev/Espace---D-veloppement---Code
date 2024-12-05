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
                while(string.IsNullOrEmpty(inputNum)||!int.TryParse(inputNum, out numero)|| numero<1 || // Se Répète si un 1>numero ou 49<numero
                numero>49 || TabNumJoueur.Contains(numero)){ // Ou si un numéro existe déjà ou si la saisie est vide.
                    Console.Write("Erreur de saisie, CHOISIR 5 numéros non nulls entre 1-49 tous différents ! Case "+i+" : ");
                    inputNum=Console.ReadLine();
                }
                TabNumJoueur.Add(numero);              
            }
            Console.Write("Numéro complémentaire entre 1-10 : "); inputNum=Console.ReadLine();
            while(string.IsNullOrEmpty(inputNum)||!int.TryParse(inputNum, out numComp)|| numComp<1 || numComp>10){// Se Répète si un 1>numComp ou 10<numero
                    Console.Write("Erreur de saisie, CHOISIR 1 numéro non null entre 1-10 ! : ");// Ou si aucun numéro à été saisi.
                    inputNum=Console.ReadLine();
            }TabNumJoueur.Add(numComp); // On ajoute le numéro complémentaire en dernière position dans le tableau TabNumJoueur => Grille Joueur après les 5 numéros.
        }
        // FIN A)

        // B) Affichage de la grille des 6 numéros cochés.
        static void Affichage(){
            Console.Write("Votre grille est enregistrée avec la liste des numéros choisis: ");
            for (int i = 0; i < TabNumJoueur.Count-1; i++){
                Console.Write(TabNumJoueur[i]+" ");}
            Console.Write("et "+TabNumJoueur[5]); Console.WriteLine("");
        }
        // FIN B)
        
        // C) Tirage aléatoire des 6 numéros géré par l'ordinateur et ajoutés dans le tableau TabAlea. 
        static void TirageAléa(){
            Random rand = new Random();
            for(int i = 0; i < 5; i++){ // 5 numéros tirés de 1-50 exclus et différents entre eux.
                do{
                    numero=rand.Next(1,50);
                }while(TabAlea.Contains(numero));
                TabAlea.Add(numero); // ajout successif après chaque saisie.       
            }
            numComp=rand.Next(1,11); // Génère au hasard le numéro complémentaire 1-11 exclu, pas nécessairement
            TabAlea.Add(numComp); // différents des 5 numéros.
        }
        // FIN C)

        // D)
        static bool TestGagnant(){
            int cpt=0;
            for (int i = 0; i < TabNumJoueur.Count-1; i++){ // Parcourt les 5 premiers numéros jusqu'à n-1 exclu qui représente le numéro complémentaire.
                if(TabAlea.Contains(TabNumJoueur[i])){cpt++;} // Incrémente le compteur cpt de +1 si un numéro est présent dans TabAlea = Grille aléatoire du jeu.
            }
            if(TabNumJoueur[5]==numComp && cpt==5){ // Renvoie 5 numéros gagnant ont été cochés 
                Console.WriteLine("Vos numéros sont identiques à ceux du LOTO. VOUS AVEZ GAGNE LE JACKPOT !");
                return true;} // Renvoie vraie si les 6 numéros gagnants ont été cochés (le numéro complémentaire situé en dernière de position dans TabNumJoueur).
            else{
                Console.WriteLine("Vos numéros ne sont pas identiques à ceux du LOTO !");
                return false; } // Renvoie Faux sinon. 
        }
        // FIN D)

        // E)


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