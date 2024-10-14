using System;
using System.Threading;

namespace TP3
{
    internal class Program{
        static int CA,maxCA=0,minCA=0,mCAgrd=1,mCApt=1,cumul=0,erreur=0;static string inputCA="";
        static void Main(string [] args){
            Console.WriteLine("Saisir les chiffres d'affaires de l'année (en €uros) : ");
            for(int i=1;i<=12;i++){
                Console.Write("CA du mois "+i+" : ") ; inputCA = Console.ReadLine();
                if(string.IsNullOrEmpty(inputCA) || !int.TryParse(inputCA, out CA)){erreur++;}
                else{
                    cumul=cumul+CA;
                    if(i==1){minCA=CA;maxCA=CA;} // Min et MAX prennent le chiffre d'affaire de i=1 (Janvier) par défaut. 
                    else{
                        if(CA>maxCA){maxCA=CA;mCAgrd=i;}
                        if(CA<minCA){minCA=CA;mCApt=i;}}}
            }
            // Affichage du cumul des CA, de la moyenne, du mois - CA et celui + CA.
            Console.WriteLine("Cumul des CA mensuels : "+cumul+" €");Console.WriteLine("Moyenne des CA mensuels : "+cumul/12+" €");
            Console.WriteLine("Mois du + CA : "+mCAgrd+" eme mois");Console.WriteLine("Mois du - CA : "+mCApt+" eme mois");
            Console.WriteLine("Nombre d’erreurs de saisie effectuées : "+erreur);Console.ReadKey();}
}}