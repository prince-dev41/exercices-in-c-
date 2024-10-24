#include <iostream>
using namespace std;

int main() {
    // Déclaration des variables
    int effectif, note, note_total = 0;
    float moyenne;

    // Saisie de l'effectif
    do {
        cout << "Entrer l'effectif de la salle : ";
        cin >> effectif;
    } while (effectif <= 0);

    // Création des tableaux pour stocker les noms et notes
    string noms[effectif];
    int notes[effectif];

    // Saisie des noms et notes
    for (int i = 0; i < effectif; ++i) {
        cout << "Entrer le nom de l'eleve numero " << i + 1 << " : ";
        cin >> noms[i];

        do {
            cout << "Entrer la note de " << noms[i] << " (0-20) : ";
            cin >> note;
        } while (note < 0 || note > 20);

        notes[i] = note;
        note_total += note;
    }

    // Calcul de la moyenne
    moyenne = (note_total) / effectif;

    // Affichage de la moyenne
    cout << "La moyenne de la salle est : " << moyenne << endl;

    // Recherche des élèves ayant une note supérieure à la moyenne
    cout << "Les eleves avec des notes superieures a la moyenne :" << endl;
    for (int i = 0; i < effectif; ++i) {
        if (notes[i] > moyenne) {
            cout << noms[i] << " : " << notes[i] << endl;
        }
    }

    return 0;
}
