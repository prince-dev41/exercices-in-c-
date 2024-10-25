#include <iostream>
using namespace std;

int main() {
    // Déclaration des variables
    int effectif, note;
    float moyenne;

    // l'effectif
    do {
        cout << "Entrer l'effectif de la salle : ";
        cin >> effectif;
    } while (effectif <= 0);

    // Tableaux pour stocker les noms et les notes
    string noms[effectif];
    int notes[effectif][3];

    // Saisie des noms et des notes
    for (int i = 0; i < effectif; i++) {
        cout << "Entrer le nom de l'élève numéro " << i + 1 << " : ";
        cin >> noms[i];

        for (int j = 0; j < 3; j++) {
            do {
                cout << "Entrer la note " << j + 1 << " de " << noms[i] << " (0-20) : ";
                cin >> note;
            } while (note < 0 || note > 20);

            notes[i][j] = note;
        }
    }

    // Affichage des résultats
    cout << "--- Résultats ---" << endl;
    for (int i = 0; i < effectif; i++) {
        float meilleur_note1 = notes[i][0];
        float meilleur_note2 = notes[i][1];

        // meilleures notes
        for (int j = 0; j < 3; j++) {
            if (notes[i][j] > meilleur_note1) {
                meilleur_note2 = meilleur_note1;
                meilleur_note1 = notes[i][j]; 
            } else if (notes[i][j] > meilleur_note2) {
                meilleur_note2 = notes[i][j];
            }
        }

        // Calcul de la moyenne
        moyenne = (meilleur_note1 + meilleur_note2) / 2;

        cout << "Nom: " << noms[i] << ", Moyenne: " << moyenne << endl;
    }

    return 0;
}
