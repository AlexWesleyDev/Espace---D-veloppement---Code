using System;
class Program4{
    static void Main(){
        string nom = "";double note1;double note2;double Moyenne;
        Console.Write("Saisir votre nom ? : ");nom = Console.ReadLine();
        if(string.IsNullOrEmpty(nom)){Console.WriteLine("Erreur de saisie de nom !");}
        else{
            Console.Write("Saisir note 1 ? : ");string inputNote1 = Console.ReadLine();
            Console.Write("Saisir note 2 ? : ");string inputNote2 = Console.ReadLine();
            if(string.IsNullOrEmpty(inputNote1) || !double.TryParse(inputNote1, out note1) ||
            string.IsNullOrEmpty(inputNote2) || !double.TryParse(inputNote2, out note2)){
                Console.WriteLine("Erreur : vous devez saisir un nombre entier non vide pour les notes !");}
            else{
                Moyenne = (note1+note2)/2;
                if(Moyenne >= 0 && Moyenne < 10){Console.WriteLine(nom + ", il va falloir faire un effort !");}
                else{
                    if(Moyenne <= 20 && Moyenne>0){Console.WriteLine(nom + " notion validée !");}
                    else{Console.WriteLine("Erreur de saisie !");}}}}
        Console.ReadKey(true);}}