using System;

namespace TP3{
    internal class Program{
        static int X,Y,Xord,Yord,pt=0;static string intputX,inputY;
        static void GrilleVide(){
            Console.WriteLine("Grille : ")
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    Console.Write("*");}
                Console.WriteLine("");}}
        static TourOrdi(){
            Random aleatoire = new Random();
            int entier = aleatoire.next(); //Génère un entier aléatoire positif
            int entierUnChiffre = aleatoire.next(); //Génère un entier compris entre 0 et 9
            int mois = aleatoire.Next(1, 13); // Génère un entier compris entre 1 et 12
        }
        static void Main (string[] args){
            do{
                // 1- Affichage de la grille vide
                GrilleVide();
                //2
                Console.Write("Saisir successivement x et y pour placer un pion : ");
                Console.Write("X : ");intputX=Console.ReadLine();
                Console.Write("Y : ");intputY=Console.ReadLine();
                Random random = new Random();
                Xord = random.next(4); //Génère un entier compris entre 0 et 3 pour l'ordi en X
                Yord = random.next(4); //Génère un entier compris entre 0 et 3 pour l'ordi en Y
                if(string.IsNullOrEmpty(inputX) || !int.TryParse(inputX,out X) || string.IsNullOrEmpty(inputY)
                || !int.TryParse(inputY,out Y) || X>3 || X<0 || Y>3 || Y<0){
                    Console.Write("Mauvaise saisie");
                    //3
                    if(Xord==X and Yord==Y){Console.Write("PAF, piégé !");}
                    //4 Affichage de la grille avec les jetons O et X.
                    for(int i=0;i<3;i++){
                        if(i==Y){Console.Write("O");}
                        if(i==Yord){Console.Write("X")}
                        for(int j=0;j<3;j++){
                            if(j==X){Console.Write("O");}
                            if(j==Xord){Console.Write("X")}}}
                }
                else{
                    //5
                    if(Xord!=X and Yord!=Y){pt++;}}
                //6
                Console.WriteLine("Score : "+pt);
            }while(pt<10);
            //7
            if(pt==10){ConsoleVous avez des dons de clairvoyance », entre 7
et 9, « De belles prémonitions », de 4 à 6 « On ne peut pas tout prévoir », de 1 à 3 « Houla,
ne jouez pas au loto ! », 0 « Ce n’est vraiment pas de bol ! » 
            
        }
}}