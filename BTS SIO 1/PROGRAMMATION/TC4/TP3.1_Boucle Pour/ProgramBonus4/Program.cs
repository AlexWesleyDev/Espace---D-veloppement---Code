using System;

namespace TP3{
    internal class Program{
        static string inputX,inputY;static int X,Y,Xord,Yord;
        // Gestion du coup de l'ordinateur
        static void CoupOrdi(){
            Random rand = new Random();
            Xord = rand.Next(3)+1; // Génère un entier compris entre 1 et 3 pour l'ordi en X
            Yord = rand.Next(3)+1; // Génère un entier compris entre 1 et 3 pour l'ordi en Y
        }
        // Gestion d'affichage de la grille.
        static void Affichage(){
            for(int i=3;i>=1;i--){
                for(int j=1;j<=3;j++){
                    if(i==Y && j==X){Console.Write("O");}
                    else{
                        if(i==Yord && j==Xord){Console.Write("X");}
                        else{Console.Write("*");}}}
                Console.WriteLine("");}
        }
        // -----------PRINCIPAL--------------//
        static void Main (string[] args){
            int point=0;
            Console.WriteLine("Grille Vide :");Affichage();// 1- Affichage de la grille vide
            Console.WriteLine("Saisir 1,2,ou 3 en X et Y pour joueur :");
            for(int i=1;i<=10;i++){
                Console.WriteLine("----------ETAPE : "+i+"----------");// ----------ETAPES-------//
                //2
                Console.WriteLine("Joueur : ");
                Console.Write("X : ");inputX=Console.ReadLine();
                Console.Write("Y : ");inputY=Console.ReadLine();
                //2.1 - Test de conformité des valeurs saisies.
                if(string.IsNullOrEmpty(inputX) || !int.TryParse(inputX,out X) || string.IsNullOrEmpty(inputY)
                    || !int.TryParse(inputY,out Y) || X>3 || X<1 || Y>3 || Y<1){
                    Console.WriteLine("Mauvaise saisie");
                    CoupOrdi();//2.2- Coup de l'ordinateur en cas de mauvaise saisie.
                }
                else{
                    CoupOrdi();//2.2- Coup de l'ordinateur en cas de bonne saisie.
                    point++;if(X==Xord && Y==Yord){point--;}//5 Gestion des points.
                }
                Console.WriteLine("Ordinateur ---> Xord : "+Xord+"  "+"Yord : "+Yord);// ----------Facultatif-------//
                if(X==Xord && Y==Yord){Console.WriteLine("PAF, piégé !");}//3
                Affichage();//4 Affichage de la grille avec les jetons O et X.
                Console.WriteLine("Score : "+point);//6 Affichage du score.
            }
            //7
            if(point==10){Console.WriteLine("Vous avez des dons de clairvoyance.");}
            if(point>=7 && point <=9){Console.WriteLine("De belles prémonitions.");}
            if(point>=4 && point <=6){Console.WriteLine("On ne peut pas tout prévoir.");}
            if(point>=1 && point <=3){Console.WriteLine("Houla, ne jouez pas au loto !");}
            if(point==0){Console.WriteLine("Ce n'est pas vraiment du bol !");}
            Console.ReadKey();
        }
    }
}