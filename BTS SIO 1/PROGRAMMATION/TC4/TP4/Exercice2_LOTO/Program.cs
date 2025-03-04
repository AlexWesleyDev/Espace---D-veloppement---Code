﻿using System;
using System.Collections.Generic;
namespace TP4{
    internal class Program{
        static string inputNum;
        static int numero,numComp,Jackpot = 2000000;
        static List<int> TabNumJoueur= new List<int>(); // Tableau de grille du joueur.
        static List<int> TabAlea= new List<int>(); // Tableau en guise de grille qui contiendra les numéros gagnants. 
        // A) - Gestion de la saisie des numéros du joueur.
        static void SaisieNumerosJoueur(){
            Console.WriteLine("CHOISIR 5 numéros entre 1-49 :");
            for (int i = 1; i <= 5; i++){
                Console.Write("N° "+i+" : ");
                inputNum=Console.ReadLine();
                while(string.IsNullOrEmpty(inputNum)||!int.TryParse(inputNum, out numero)|| numero<1 || // Se Répète si la saisie est vide
                numero>49 || TabNumJoueur.Contains(numero)){ // Ou si le tableau en contient déjà ou numero<1 ou 49<numero avant d'ajouter au tableau.
                    Console.WriteLine("Erreur de saisie, CHOISIR 5 numéros non nulls entre 1-49 tous différents !");
                    Console.Write("N° "+i+" : "); inputNum=Console.ReadLine();
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

        // B) Affichage de la grille des 6 numéros cochés et des numéros gagnants.
        static void Affichage()
        {
            Console.Write("Votre grille est enregistrée avec la liste des numéros choisis: ");
            for (int i = 0; i < TabNumJoueur.Count-1; i++){
                Console.Write(TabNumJoueur[i]+" ");}
            Console.Write("et "+TabNumJoueur[5]);
            Console.WriteLine("");
            Console.Write("La Grille Gagnante : ");
            for(int i = 0; i < TabAlea.Count; i++){
                Console.Write(TabAlea[i]+" ");}
            Console.Write("et "+numComp);
            Console.WriteLine("");
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
                                     // différents des 5 numéros.
        }
        // FIN C)

        // D)
        static bool TestGagnant(){
            int cpt=0;
            for (int i = 0; i < TabNumJoueur.Count-1; i++){ // Parcourt les 5 premiers numéros jusqu'à n-1 exclu qui représente le numéro complémentaire.
                if(TabAlea.Contains(TabNumJoueur[i])){cpt++;} // Incrémente le compteur cpt de +1 si un numéro est présent dans TabAlea = Grille gagnant du jeu.
            }
            if(TabNumJoueur[5]==numComp && cpt==5){
                Console.WriteLine("Vos numéros sont identiques à ceux du LOTO. VOUS AVEZ GAGNE LE JACKPOT !");
                return true; // Renvoie vraie si les 6 numéros gagnants ont été cochés (le numéro complémentaire est situé en dernière de position dans TabNumJoueur).
            }
            else{             // Et Faux sinon.
                Console.WriteLine("Vos numéros ne sont pas identiques à ceux du LOTO !");
                return false;
            }
        }
        // FIN D)

        // E)
        static int Gain(int Somme,int NbNumGagnant)
        {
            // NbNumGagnant : Nombre de numéros gagnants trouvés dans la grille TabNumJoueur
            // selon ou non l'ordre du tirage des numéros avec ceux du LOTO.
            // Somme : Montant du jackpot défini au LOTO.

            if(NbNumGagnant==4)
            {
                if(TabNumJoueur[5]==numComp){
                    return Somme*80/100;}
                return Somme*70/100;
            }
            if(NbNumGagnant==3)
            {
                if(TabNumJoueur[5]==numComp){
                    return Somme*50/100;}
                return Somme*40/100;
            }
            if(NbNumGagnant==2)
            {
                if(TabNumJoueur[5]==numComp){
                    return Somme*10/100;}
                return Somme*5/100;
            }
            return 0;
        }
        static void MessageGain(int gain,int Somme){
            Console.WriteLine("Second Tirage du Jeu :");

            if(gain==Somme*0.80){
                Console.WriteLine("4 numéros gagnants et le complémentaire "+numComp+", vous avez gagné "+gain+" € (80% du JACKPOT de "+Jackpot+" €)");
            }
            if(gain==Somme*0.70){
                Console.WriteLine("4 numéros gagnants sans le complémentaire, vous avez gagné "+gain+" € (70% du JACKPOT de "+Jackpot+" €)");
            }
            if(gain==(Somme*50)/100){
                Console.WriteLine("3 numéros gagnants et le complémentaire "+numComp+", vous avez gagné "+gain+" € (50% du JACKPOT de "+Jackpot+" €)");
            }
            if(gain==(Somme*40)/100){
                Console.WriteLine("3 numéros gagnants sans le complémentaire, vous avez gagné "+gain+" € (40% du JACKPOT de "+Jackpot+" €)");
            }
            if(gain==(Somme*10)/100){
                Console.WriteLine("2 numéros gagnants et le complémentaire "+numComp+", vous avez gagné "+gain+" € (10% du JACKPOT de "+Jackpot+" €)");
            }
            if(gain==(Somme*5)/100){
                Console.WriteLine("2 numéros gagnants sans le complémentaire, vous avez gagné "+gain+" € (5% du JACKPOT de "+Jackpot+" €)");
            }
            if(gain==0){Console.WriteLine("Pas de numéros gagnants, Aucun gain possible !");}
        }
        // FIN E)

        // BONUS 1
        static void TestGagnantOrdre
        TirageOrdonné();
        TirageSansOrdre();
        


        static void Main(string[] args){
            Console.WriteLine("BIENVENU AU LOTO, Tentez votre chance pour gagner le JACKPOT de "+Jackpot+" € !");
            SaisieNumerosJoueur();
            TirageAléa();
            Affichage();
            bool b = TestGagnant();
            if(!b){
                // Test de gain en respectant l'ordre.
                MessageGain(Gain(Jackpot),Jackpot);// Test de gain avec Grille NON ORDONNEE.

            }
        }
    }
}