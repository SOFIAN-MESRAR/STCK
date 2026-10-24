// STCK.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex* c1 = new Complex(2, 3);
    Complex* c2 = new Complex(5, 3);
    c1->afficher();
    c2->afficher();
    Complex c3 = *c1 + *c2;
    c3.afficher();
    double a=5.5;
    Complex c4 = c3 + a;
    Complex c5 = *c1 * *c2;
    Complex c6 = *c1 / *c2;
    c4.afficher();
    c5.afficher();
    c6.afficher();
    if (*c1 == *c2) {
        cout << " sont EGAUX " << endl;
    }
    else {
        cout << "ne sont pas egaux" << endl;
    }

    if (*c1 != *c2) {
        cout << " c1 et c2 sont DIFFERENTS " << endl;
    }

    if (*c2 < *c1) {
        cout << " c2 est STRICTEMENT INFERIEUR " << endl;
    }

    if (*c1 > *c2) {
        cout << "c1 est STRICTEMENT SUPERIEUR " << endl;
    }

    delete c1;
    c1 = nullptr;
    delete c2;
    c2 = nullptr;
   
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
