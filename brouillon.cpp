#include<iostream>
#include<string>
#include<fstream>
#include<array>
using namespace std;
//1
struct film {
    string titre;
    int annee;
    string realisateur;
    int duree;
    string langue;};

struct ensemble {
    int nombre_films;
    film * films;};

struct selection {
    film **films;
    int nombre_films;
};

// Fonction pour créer un ensemble de films
ensemble creerEnsemble(int taille) {
    ensemble e;
    e.films = new film[taille]; // Allocation dynamique d'un tableau de films
    e.nombre_films = taille;
    return e;
}

// Fonction pour créer une sélection de films
selection creerSelection(int taille) {
    selection s;
    s.films = new film*[taille]; // Allocation dynamique d'un tableau de pointeurs vers des films
    s.nombre_films = taille;
    return s;
}

// Exemple d'utilisation
int main() {
    // Création d'un ensemble de 3 films
    ensemble e = creerEnsemble(3);

    // Initialisation des films dans l'ensemble
    e.films[0] = {"Film1", 2000, "Realisateur1", 120, "Francais"};
    e.films[1] = {"Film2", 2005, "Realisateur2", 130, "Anglais"};
    e.films[2] = {"Film3", 2010, "Realisateur3", 140, "Espagnol"};

    // Création d'une sélection de 2 films
    selection s = creerSelection(2);
    s.films[0] = &e.films[0]; // Sélectionner le premier film
    s.films[1] = &e.films[2]; // Sélectionner le troisième film

    // Affichage des films dans la sélection
    for (int i = 0; i < s.nombre_films; ++i) {
        std::cout << "Titre: " << s.films[i]->titre << ", Annee: " << s.films[i]->annee << "\n";
    }

    // Libération de la mémoire allouée
    delete[] e.films;
    delete[] s.films;

    return 0;}
