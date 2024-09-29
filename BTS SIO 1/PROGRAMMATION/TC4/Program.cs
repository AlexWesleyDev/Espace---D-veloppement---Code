/* See https://aka.ms/new-console-template for more information
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;*/
using System;
class Program{
    static void AutorisationAge(){
        Console.Write("Saisir votre âge : "); int age = Convert.ToInt32(Console.ReadLine());
        if (age >= 18) { Console.WriteLine("Accès autorisé."); }
        else { Console.WriteLine("Accès refusé."); }}
    static void Main(string[] args){
        //- 1. Mes premières alternatives
        //1
        int codeAccès = 0; const int NB = 10;
        Console.Write("Saisir le code : "); codeAccès = Convert.ToInt32(Console.ReadLine());
        if (codeAccès != NB) { Console.WriteLine("Erreur.Code erroné !"); }
        else { Console.WriteLine("Bravo.Code trouvé !"); }
        //2
        if (codeAccès >= 0) { Console.WriteLine(codeAccès + " est positif."); }
        else { Console.WriteLine("Le code saisi est négatif ! "); }
        //3
        AutorisationAge();
        //4
        Console.Write("Saisir un nom : "); string nom = Console.ReadLine();
        if (string.IsNullOrEmpty(nom)) { Console.WriteLine("Erreur. Chaine vide !"); }
        else { AutorisationAge(); }
        //5
        Console.Write("Saisir un nombre : "); int nbre = Convert.ToInt32(Console.ReadLine());
        if (nbre % 2 == 0) { Console.WriteLine(nbre + " est un nombre pair."); }
        else { Console.WriteLine(nbre + " est un nombre impair."); }
        Console.Write("Répondre par Oui ou Non : "); string rep = Console.ReadLine();
        if (rep == "OUI" || rep == "NON" || rep == "non" || rep == "oui") { Console.WriteLine("Juste."); }
        else { Console.WriteLine("Erreur.Réponse non conforme."); }
        //7
        Console.Write("Saisir un nombre entre 10-100 ou -10 et -100 : "); int N = Convert.ToInt32(Console.ReadLine());
        if (N >= 10 && N <= 100 || N <= -10 && N >= -100) { Console.WriteLine("Juste"); }
        else { Console.WriteLine("Erreur.Réponse non conforme."); }
        /*/8
        Console.WriteLine("Saisir deux nombres : ");Console.Write("Nb1 : ");int nb1=Convert.ToInt32(Console.ReadLine());
        Console.Write("Nb2 : ");int nb2=Convert.ToInt32(Console.ReadLine());
        if (nb1 > nb2) { Console.WriteLine(nb1 + " est le plus grand nombre."); }
        else{ Console.WriteLine(nb2 + " est le plus grand nombre."); }
        //9
        Console.WriteLine("Saisir 3 nombres : "); Console.Write("Nb1 : "); nb1 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Nb2 : "); nb2 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Nb3 : "); int nb3 = Convert.ToInt32(Console.ReadLine());
        if (nb1 > nb2 && nb1 > nb3) { Console.WriteLine(nb1 + " est le plus grand nombre."); }
        else {
            if (nb2 > nb1 && nb2 > nb3) { Console.WriteLine(nb2 + " est le plus grand nombre."); }
            else { if (nb3 > nb2 && nb3 > nb1) { Console.WriteLine(nb3 + " est le plus grand nombre.");}}}*/
        Console.ReadKey();}}