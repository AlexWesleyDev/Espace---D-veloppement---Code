using System;
namespace TP3{
    internal class program{
        static int choix;static string inputchoix;
        //2
        static void Menu(){
            Console.Write("\nMENU : \n1. Parler\n2. Travailler\n3. Jouer\n4. Dormir\n5. Quitter\nVotre Choix : ");
            inputchoix = Console.ReadLine();
            while(string.IsNullOrEmpty(inputchoix) || !int.TryParse(inputchoix,out int choix) || choix<1 ||
            choix>6){inputchoix = Console.ReadLine();}}
        //1
        static void TraitementChoix(){
            switch (choix){
                case 1:
                Console.WriteLine("Nous vous écoutons");
                break;
                case 2:
                Console.WriteLine("Faire ses exercices pour lundi en FT3 TC4");
                break;
                case 3:
                Console.WriteLine("Lancement du jeu Snake");
                break;
                case 4:
                Console.WriteLine("Réglage de l'horloge à 06h30. Bonne nuit !");
                case 5:
                Console.WriteLine("Fermeture des sessions.");
                break;
                default:
                Console.WriteLine("Merci, au revoir");
                break;}}
        //3
        static void Main(string[] args){
            do{
                Menu();
                TraitementChoix();}
            while(choix!=5);
            Console.ReadKey(true);}
    }
}