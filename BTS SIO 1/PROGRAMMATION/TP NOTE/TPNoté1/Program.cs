using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TP_noté_1
{
    internal class Program
    {
        static void etape1()
        {
            int budget;int PrixArticle; int budgetRestant;
            Console.WriteLine("Saisir votre budget: ");
            string inputbudget = Console.ReadLine();
            Console.WriteLine("Saisir le prix de l'article : ");
            string inputPrixArticle= Console.ReadLine();
            // Test de la bonne saisie des valeurs budget et le prix de l'article.
            if (string.IsNullOrEmpty(inputPrixArticle) || !int.TryParse(inputPrixArticle, out PrixArticle)
                || string.IsNullOrEmpty(inputbudget) || !int.TryParse(inputbudget, out budget))
            {
                Console.WriteLine("Erreur de saisie !");
            }
            else
            {
                budget = int.Parse(inputbudget); PrixArticle = int.Parse(inputPrixArticle);
                if (PrixArticle <= budget)
                {
                    budgetRestant = budget - PrixArticle;
                    Console.WriteLine("Achat possible : Il vous reste " + budgetRestant + " Euros.");
                }
                else
                {
                    budgetRestant = budget;
                    Console.WriteLine("Achat impossible, pas assez de budget. Il vous reste " + budgetRestant + " Euros.");
                }
            }}
        // Fin de l'étape 1
        //Debut étape 2
        static void etape2()
        {
            int budget=0; int PrixArticle = 0; int budgetRestant=0;
            Console.WriteLine("Saisir votre budget: ");
            string inputbudget = Console.ReadLine();
            Console.WriteLine("Saisir le prix de l'article : ");
            string inputPrixArticle = Console.ReadLine();
            // Test de la bonne saisie des valeurs budget et le prix de l'article.
            if (string.IsNullOrEmpty(inputPrixArticle) || !int.TryParse(inputPrixArticle, out PrixArticle)
                || string.IsNullOrEmpty(inputbudget) || !int.TryParse(inputbudget, out budget))
            {
                Console.WriteLine("Erreur de saisie !");
            }
            else
            {
                budget = int.Parse(inputbudget); PrixArticle = int.Parse(inputPrixArticle);
                if (PrixArticle <= budget)
                {
                    budgetRestant = budget - PrixArticle;
                    Console.WriteLine("Achat possible : Il vous reste " + budgetRestant + " Euros.");
                }
                else
                {
                    budgetRestant = budget;
                    Console.WriteLine("Achat impossible, pas assez de budget. Il vous reste " + budgetRestant + " Euros.");
                }
            }
            if (budgetRestant < budget && budgetRestant>0)
            {
                int PrixArticle2 = 0;
                Console.WriteLine("Saisir le prix du deuxième article : ");
                string inputPrixArticle2 = Console.ReadLine();
                // Test de la bonne saisie du prix du deuxième article.
                if (string.IsNullOrEmpty(inputPrixArticle2) || !int.TryParse(inputPrixArticle2, out PrixArticle2))
                {
                    Console.WriteLine("Erreur de saisie !");
                }
                else {
                    if (PrixArticle2 <= budgetRestant)
                    {
                        budgetRestant = budgetRestant - PrixArticle2;
                        Console.WriteLine("Achat possible : Il vous reste " + budgetRestant + " Euros.");
                    }
                    else
                    {
                        Console.WriteLine("Achat impossible, pas assez de budget. Il vous reste " + budgetRestant + " Euros.");
                    }
                }

            }
        }
        //Fin de l'étape 2
        static void bonus()
        {
        }
        static void Main(string[] args)
        {
            etape1();
            //etape2();
            //bonus();
        }
    }
}
