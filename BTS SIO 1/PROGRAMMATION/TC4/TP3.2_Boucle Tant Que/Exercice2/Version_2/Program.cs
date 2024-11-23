using System;
namespace TP3_Version2{
    internal class Program{
        static double piece,total=0;static string inputPiece;
        const double PrixCafé = 0.50;

        static void ChoixBoisson(){
            int boisson;string inputBoisson;
            Console.WriteLine("Choisissez votre boisson chaud :");
            Console.WriteLine("1. Café nature avec sucre\n2. Chocolat chaud\n3. Thé\n4. Cappuccino\n5. Café Latte");
            inputBoisson=Console.ReadLine();
            while(string.IsNullOrEmpty(inputBoisson)||!int.TryParse(inputBoisson,out boisson)||boisson>5||boisson<1)
            {
                Console.Write("Erreur, veuillez bien choisir le numéro de votre boisson : ");inputBoisson=Console.ReadLine();
            }
            switch (boisson)
            {
                case 1:
                Console.WriteLine("Café nature avec sucre sélectionné.");
                break;
                case 2:
                Console.WriteLine("Chocolat chaud sélectionné.");
                break;
                case 3:
                Console.WriteLine("Thé sélectionné.");
                break;
                case 4:
                Console.WriteLine("Cappuccino sélectionné.");
                break;
                case 5:
                Console.WriteLine("Café latte sélectionné.");
                break;                
                default:
                Console.WriteLine("Merci de votre choix.");
                break;
            }
        }

        static void Main(string[] args){
            do{
                ChoixBoisson();
                Console.WriteLine("Quelle pièce insérez-vous ?");
                Console.WriteLine("- 1 pour 1 euro\n- 2 pour 2 euros\n- 10 pour 0,10 euro\n- 20 pour 0,20 euro\n- 50 pour 0,50 euro");
                // Gestion de l'état du montant total inséré par rapport au prix du café.
                do{
                    inputPiece=Console.ReadLine();
                    while(string.IsNullOrEmpty(inputPiece) || !double.TryParse(inputPiece,out piece) || (piece!=1 && piece!=2 && piece!=10
                    && piece!=20 && piece!=50))
                    {
                        Console.Write("Erreur de saisie, recommencez : ");
                        inputPiece=Console.ReadLine();
                    }
                    if(piece==10 || piece==20 || piece==50){piece=piece*0.01;}
                    total+=piece;
                    total=Math.Round(total,2); //
                    if(total<PrixCafé){Console.Write("Montant : "+total+" euro(s)"+". Introduire des pièces : ");}
                }while(total<PrixCafé);

                Console.WriteLine("Total = "+total);// Test à retirer !!!!
                
                if(total>=1){Console.WriteLine("Vous avez inséré "+total+" euro(s).");}
                else{Console.WriteLine("Vous avez inséré "+total+" centimes d'euro.");}            
                //
                if(total>=PrixCafé){
                        if(total>PrixCafé){
                            Console.WriteLine("Vous avez trop versé, nous vous devons "+ Math.Round((total-PrixCafé),2) +" €. RECUPERER VOS PIECES !");
                        }
                }
                
                Console.WriteLine("******CAFE en cours de PREPARATION******");
                //Console.WriteLine("******CAFE prêt.Terminé !******"); facultatif
    
                Console.Write("Souhaitez-vous quitter ? (o/n):\n");
                inputPiece=Console.ReadLine();
                total=0;// Remise à zero de la valeur total pour éviter l'enregistrement du montant de l'opération précédente.

            }while(!string.IsNullOrEmpty(inputPiece) && inputPiece=="n");//On arrête la préparation si l'utilisateur décide de quitter.
        }
    }
}