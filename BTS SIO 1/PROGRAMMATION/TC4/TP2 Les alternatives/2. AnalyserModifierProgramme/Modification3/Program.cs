using System;
class Program{
    static void Main(){
        string nom = "";double note = 0;
        Console.Write("Saisir votre nom ? : ");nom = Console.ReadLine();
        if(string.IsNullOrEmpty(nom)){Console.WriteLine("Erreur de saisie de nom !");}
        else{
            Console.Write("Saisir votre note ? : ");string inputNote = Console.ReadLine();
            if(string.IsNullOrEmpty(inputNote) || !double.TryParse(inputNote, out note)){
                Console.WriteLine("Erreur : vous devez saisir un nombre entier non vide pour la note !");}
            else{
                if(note >= 0 && note < 10){Console.WriteLine(nom + ", il va falloir faire un effort !");}
                else{
                    if(note <= 20 && note>0){Console.WriteLine(nom + " notion validée !");}
                    else{Console.WriteLine("Erreur de saisie !");}}}
            Console.ReadKey(true);}}}
