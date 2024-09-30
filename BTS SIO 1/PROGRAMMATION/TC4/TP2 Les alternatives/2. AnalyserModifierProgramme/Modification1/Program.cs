using System;
class Program1{
    static void Main(){
        string nom = "";double note = 0;
        Console.Write("Saisir votre nom ? : ");nom = Console.ReadLine();
        if(string.IsNullOrEmpty(nom)){Console.WriteLine("Erreur de saisie de nom !");}
        else{
            Console.Write("Saisir votre note ? : ");note = Convert.ToDouble(Console.ReadLine());
            if(note >= 0 && note < 10){Console.WriteLine(nom + ", il va falloir faire un effort !");}
            else{
                if(note <= 20){Console.WriteLine(nom + " notion validée !");}
                else{Console.WriteLine("Erreur de saisie !");}}}
            Console.ReadKey(true);}}
