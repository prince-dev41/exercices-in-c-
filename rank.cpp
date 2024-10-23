// programme en c++ permettant de donner la plus grande et la plus fable note d'une salle de class

#include <iostream>
using namespace std;

int main(){
    // Déclaration des variables
    int effectif, note;

    // Récupération de données
    do
    {
        cout << "Entrer l'effectif de la salle :" << endl;
        cin >> effectif;
    } while (effectif<=0);

    int notes[effectif];
    
    // Chargement du tableau de notes
    for (int i = 0; i < effectif; i++)
    {   
        do {
            cout << "Entrer la note numéro " << i + 1 << " (0-20) :" << endl;
            cin >> note;
        } while (note < 0 || note > 20); 
        notes[i]=note;
    }

    int sup = notes[0], inf=notes[0];

    // Comparaison
    for (int i = 1; i < effectif; i++) {
        if (notes[i] > sup) {
            sup = notes[i];
        }
        if (notes[i] < inf) {
            inf = notes[i];
        }
    }

    // Affichage des resulats
    cout << "La plus grande note :" << sup << endl;
    cout << "La plus petite note :" << inf << endl;

    return 0;
}