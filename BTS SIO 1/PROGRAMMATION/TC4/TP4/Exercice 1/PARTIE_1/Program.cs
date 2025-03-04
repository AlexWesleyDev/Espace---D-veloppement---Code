using System;
using System.Collections.Generic;

namespace TP4{
    internal class Program{
        static List<string> listeCourses = new List<string> { "pomme","sucre en poudre", "baguette", "tomate" };
        static string Rep, aliment;
        //###################""""""""""""""" PARTIE I """"""""""""""""#########################//

        // 1- Affichage des éléments de la liste de course.
        static void Affichage()
        {
            Console.WriteLine("Liste de mes courses :");
            for(int i=1;i<=listeCourses.Count;i++){
                Console.WriteLine(i+" - "+listeCourses[i-1]);
            }
        }
        // # Gestion de la bonne saisie d'une réponse attendue conforme.
        static void SaisieRepCorrecte()
        {
            while(string.IsNullOrEmpty(Rep) || (Rep!="o" && Rep!="n")){
                Console.Write("Erreur de saisie, répondez par o/n : ");
                Rep=Console.ReadLine();}
        }


        static void Main(string[] args){
            Affichage();// # 1/

            // # 2/ Vérification de la présence d'un élément dans la liste.
            // - Gestion de la bonne saisie de l'aliment.
            do{
                Console.Write("Saisir un aliment : ");
                aliment=Console.ReadLine();
            }while(string.IsNullOrEmpty(aliment));
            
            // - Test de présence.
            if(listeCourses.Contains(aliment)){
                Console.WriteLine(aliment +" est présent dans la liste.");}
            else{
                Console.WriteLine(aliment +" n'est pas présent dans la liste.");}


            // # 3/ Ajout d'un aliment à la liste.
            
            if(!listeCourses.Contains(aliment))
            {
                Console.Write("Voulez vous ajouter l'aliment saisi dans la liste o/n: ");
                Rep=Console.ReadLine();
                // - Gestion de la bonne saisie de réponse.
                SaisieRepCorrecte();
                if(Rep=="o"){listeCourses.Add(aliment);}
                Affichage();
            }

            // # 4/ Retirer un aliment de la liste.

            Console.Write("Voulez vous retirer un aliment de la liste o/n: ");
            Rep=Console.ReadLine();
            SaisieRepCorrecte();
            if(Rep=="o")
            {
                // - Bonne saisie de l'aliment non vide qui est à retirer.
                do{
                    Console.Write("Saisir l'aliment à retirer : ");
                    aliment=Console.ReadLine();
                }while(string.IsNullOrEmpty(aliment));
                // - Test de présence de l'aliment dans la liste.
                if(listeCourses.Contains(aliment)){
                    for(int i=0;i<listeCourses.Count;i++){
                        if(listeCourses[i]==aliment){listeCourses.RemoveAt(i);}
                    }}
                else{
                    Console.WriteLine("Aliment à retirer non présent dans la liste !");}
            }

            Affichage();// # 1/
        }
    }
}