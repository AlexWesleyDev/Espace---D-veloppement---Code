using System;
using System.Threading;

namespace TP3
{
    internal class Program{
        static int CA,maxCA=0,minCA=0,mCAgrd=1,mCApt=1,cumul=0,erreur=0;static string inputCA;
        static void Main(string [] args){
            Console.WriteLine("Saisir les chiffres d'affaires de l'année (en €uros) : ");
            for(int i=1;i<=12;i++){
                if(i==1){Console.Write("CA de janvier : ");inputCA=Console.ReadLine();}
                if(i==2){Console.Write("CA de février : ");inputCA=Console.ReadLine();}
                if(i==3){Console.Write("CA de mars : ");inputCA=Console.ReadLine();}
                if(i==4){Console.Write("CA de avril : ");inputCA=Console.ReadLine();}
                if(i==5){Console.Write("CA de mai : ");inputCA=Console.ReadLine();}
                if(i==6){Console.Write("CA de juin : ");inputCA=Console.ReadLine();}
                if(i==7){Console.Write("CA de juillet : ");inputCA=Console.ReadLine();}
                if(i==8){Console.Write("CA de août : ");inputCA=Console.ReadLine();}
                if(i==9){Console.Write("CA de septembre : ");inputCA=Console.ReadLine();}
                if(i==10){Console.Write("CA de octobre : ");inputCA=Console.ReadLine();}
                if(i==11){Console.Write("CA de novembre : ");inputCA=Console.ReadLine();}
                if(i==12){Console.Write("CA de décembre : ");inputCA=Console.ReadLine();}
                if(string.IsNullOrEmpty(inputCA) || !int.TryParse(inputCA, out CA)){erreur++;}
                else{
                    cumul=cumul+CA;
                    if(CA<minCA){minCA=CA;mCApt=i;}
                    if(CA > maxCA){maxCA=CA;mCAgrd=i;}}}
            Console.WriteLine("Cumul des CA mensuels : "+cumul+" €");Console.WriteLine("Moyenne des CA mensuels : "+cumul/12+" €");
            Console.WriteLine("Mois du + CA : "+mCAgrd+" eme mois");Console.WriteLine("Mois du - CA : "+mCApt+" eme mois");
            Console.WriteLine("Nombre d’erreurs de saisie effectuées : "+erreur);Console.ReadKey();}
}}