using System;
namespace TP3_Version1{
    internal class Program{
        static double piece;static string inputPiece;
        const double PrixCafé = 0.50;

        static void Main(string[] args){
            Console.WriteLine("Quelle pièce insérez-vous ?");
            Console.WriteLine("- 1 pour 1 euro\n- 2 pour 2 euros\n- 10 pour 0,10 euro\n- 20 pour 0,20 euro\n- 50 pour 0,50 euro");
            inputPiece=Console.ReadLine();
            while(string.IsNullOrEmpty(inputPiece) || !double.TryParse(inputPiece,out piece) || (piece!=1 && piece!=2 && piece!=10
            && piece!=20 && piece!=50))
            {
                Console.WriteLine("Erreur de saisie, recommencez : ");
                inputPiece=Console.ReadLine();
            }
            if(piece==1 || piece==2){Console.WriteLine("Vous avez inséré "+piece+" euro(s)");}
            else{Console.WriteLine("Vous avez inséré "+piece+" centimes d'euro");}
            // Gestion de l'état du montant inséré selon le prix du café.
            if(piece==10 || piece==20 || piece==50){piece=piece*0.01;}
            //
            if(piece>=PrixCafé){
                    if(piece>PrixCafé){Console.WriteLine("Vous avez trop versé, nous vous devons "+(piece-PrixCafé)+". RECUPERER VOS PIECES !");}
                    Console.WriteLine("******CAFE en cours de PREPARATION******");
            }
            else{if(piece<PrixCafé){Console.WriteLine("Montant insuffisant, reste à payer "+(PrixCafé-piece));}}
        }
    }
}