using System;
using System.Threading;

namespace TP3
{
    internal class Program{
        /*/1 - Ce programme affiche de manière itérative dans la boucle FOR tous les nombbres négatifs par pas de 1 de 0 à -30 non inclus.
        static void Main(string[] args){
            int cpt = 0;
            for (cpt = 0; cpt > -30; cpt--){
                if (cpt != 0 && cpt % 10 == 0){Console.WriteLine("CHANGEMENT DE DIZAINE");}
                Console.WriteLine("le compteur est passé à " + cpt);}}*/
        //2 - Afficher les nombres impairs jusqu’à 100 puis les afficher 10 par 10.
        /*static void Main(string[] args){
            int cpt = 0; int compteur=0;
            for (cpt = 0; cpt <= 100; cpt++){
                if (cpt%2!=0){
                    Console.WriteLine("le compteur est passé à " + cpt);compteur++;
                    if(compteur%10==0){ Console.Write("\n");}}}}*/
        /*/3 et 4
        static void Main(string[] args){
            for (int cpt = 0; cpt < 10; cpt++){
                for (int i = 1; i <=30; i++){
                    if(i < 11){Console.ForegroundColor = ConsoleColor.Blue;Console.Write("*");}
                    if (i > 10 && i < 21){Console.ForegroundColor = ConsoleColor.White;Console.Write("*");}
                    if (i > 20){Console.ForegroundColor = ConsoleColor.Red;Console.Write("*");}}
                Console.WriteLine("");}
            Console.ReadKey();}*/
        //5
        static void Main(string[] args){
            int temps=0;
            Console.Write("Saisir un temps en seconde : ");string inputTemps= Console.ReadLine();
            if(string.IsNullOrEmpty(inputTemps) || !int.TryParse(inputTemps, out temps)){Console.WriteLine("Erreur de saisie.");}
            else{
                for (int i = temps; i >0; i--){Console.WriteLine("T - " + i + " s");Thread.Sleep(1000);}}}
                }}