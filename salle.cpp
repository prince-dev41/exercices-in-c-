#include <iostream>
using namespace std;

int main() {
    // Déclaration des variables
    int effectif, note;
    float moyenne;

    // Saisie de l'effectif
    do {
        cout << "Entrer l'effectif de la salle : ";
        cin >> effectif;
    } while (effectif <= 0);

    // tableaux pour stocker les noms et les notes
    string noms[effectif];
    float moyennes[effectif]; 
    int notes[effectif][3];

    // Saisie des noms et des notes
    for (int i = 0; i < effectif; i++) {
        cout << "Entrer le nom de l'élève numéro " << i + 1 << " : ";
        cin >> noms[i];

        int somme_notes = 0;

        for (int j = 0; j < 3; j++) {
            do {
                cout << "Entrer la note " << j + 1 << " de " << noms[i] << " (0-20) : ";
                cin >> note;
            } while (note < 0 || note > 20);

            notes[i][j] = note;
            somme_notes += note;
        }

        // Calcul de la moyenne
        moyennes[i] = (somme_notes) / 3;
    }

    // Affichage des résultats 
    cout << "--- Resultats ---" << endl;
    for (int i = 0; i < effectif; i++) {
        cout << "Nom: " << noms[i] << ", Moyenne: " << moyennes[i] << endl;
    }

    return 0;
}
