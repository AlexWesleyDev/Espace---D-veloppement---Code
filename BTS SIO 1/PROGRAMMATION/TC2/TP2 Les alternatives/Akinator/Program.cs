using System;
class Program5{
    static void Akinator0(){
        Console.WriteLine("Pensez à un personnage parmi ceux ci : Wonder Woman, Batman, Groot, Hulk, Lara Croft.");
        Console.Write("Est-ce que c'est un humain ? (oui/non) : ");string reponse = Console.ReadLine().ToLower();
        if (reponse == "oui"){
            Console.Write("Est-ce que c'est un homme ? (oui/non) : ");string rep1 = Console.ReadLine().ToLower();
            if(rep1 == "oui"){Console.WriteLine("C'est Batman !");}
            else{
                Console.Write("Est-ce que le personnage a deux pistolets ? (oui/non) : ");
                string rep2 = Console.ReadLine().ToLower();
                if(rep2=="oui"){Console.WriteLine("C'est Lara Croft !");}
                else{Console.WriteLine("C'est Wonder Woman !");}}}
        else{
            if (reponse == "non"){
                Console.Write("Est-ce que le personnage est vert ? (oui/non) : ");string reponse1 = Console.ReadLine().ToLower();
                if(reponse1=="oui"){Console.WriteLine("C'est Hulk !");}
                else{Console.WriteLine("C'est Je S'appelle Groot !");}}
            else{Console.WriteLine("Saisie incorrecte");}}}
    
    static void Main(string[] args){
    Akinator0();
    Console.ReadKey(true);}
}