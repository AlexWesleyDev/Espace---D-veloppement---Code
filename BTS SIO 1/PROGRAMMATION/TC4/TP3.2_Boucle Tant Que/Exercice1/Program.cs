using System;
namespace TP3{
    internal class Program{
        static int choix;static string inputchoix;
        // Rep/Question 2
        static void Menu(){
            do{
                Console.Write("MENU : \n1. Parler\n2. Travailler\n3. Jouer\n4. Dormir\n5. Quitter\nVotre Choix : ");
                inputchoix = Console.ReadLine();
                //------------CETTE PARTIE EST FACULTATIVE-----------------//
                if(string.IsNullOrEmpty(inputchoix) || !int.TryParse(inputchoix,out choix) || choix<1 ||
                choix>5){
                    Console.ForegroundColor = ConsoleColor.Red;Console.WriteLine("Erreur de saisie ! Recommencez");
                    Console.ForegroundColor = ConsoleColor.White;}
                //------------FACULTATIF-----------------//
            }while(string.IsNullOrEmpty(inputchoix) || !int.TryParse(inputchoix,out choix) || choix<1 ||
                choix>5);
        }

        // BONUS 1
        static void Multiplication(){
            int choixTable,Resultat;  string inputTable,inputResultat;
            Console.Write("II - Réviser les tables de multiplication :\nChoix de la table ? : ");
            inputTable=Console.ReadLine();
            // Gestion de la conformité de la saisie (1-10 non nul ou vide).
            while(string.IsNullOrEmpty(inputTable)||!int.TryParse(inputTable,out choixTable)||choixTable<1 ||choixTable>10)
            {
                Console.Write("Erreur de saisie, recommencez ! Choix de la table :");
                inputTable=Console.ReadLine();
            }//
            
            Random rand = new Random();int cpt=0,n;
            for (int i = 1; i < 6; i++){
                n = rand.Next(1, 11);
                Console.Write(i+". "+choixTable+" x "+n+" = ");
                inputResultat=Console.ReadLine();
                if(string.IsNullOrEmpty(inputResultat)||!int.TryParse(inputResultat,out Resultat)||Resultat!=choixTable*n)
                {Console.WriteLine("- Faux ! Réponse attendue = "+choixTable*n);}
                else{cpt++;}
            }
            Console.WriteLine("Note Finale : "+cpt+" / 5");
        }

        // Rep/Question 1
        static void TraitementChoix(){
            switch (choix){
                case 1:
                Console.WriteLine("Nous vous écoutons");
                break;
                case 2:
                Console.WriteLine("I - Faire ses exercices pour lundi en FT3 TC4.");
                Multiplication();
                break;
                case 3:
                Console.WriteLine("Lancement du jeu Snake !");
                break;
                case 4:
                Console.WriteLine("Réglage de l'horloge à 06h30. Bonne nuit !");
                break;
                case 5:
                Console.WriteLine("Fermeture des sessions.");
                break;
                default:
                Console.WriteLine("Merci, au revoir");
                break;}}

        // Rep/Question 3
        static void Main(string[] args){
            do{
                Menu();TraitementChoix();
                Console.ForegroundColor = ConsoleColor.Blue;// FACULTATIF
                Console.WriteLine("------------------------");// FACULTATIF
                Console.ForegroundColor = ConsoleColor.White;// FACULTATIF
            }while(choix!=5);
            Console.ReadKey(true);}
    }
}