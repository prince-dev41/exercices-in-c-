// programme en c++ permettant de afficher les notes des eleves

#include <iostream>
using namespace std;

int main(){
    // Déclaration des variables
    int effectif, note_1, note_2;
    string name;
    double average;

    // Récupération des données
    do
    {
        cout << "Veillez entrer l'effectif de classe: " << endl;
        cin >> effectif;
    } while (effectif <= 0 );

    // Récupération et affichage des eleves avec leur deux notes et moyennes respectives.

    for (int i = 0; i < effectif; i++)
    {
        cout << "Veillez entrer le nom de l'élève : " << endl;
        cin >> name;

        // Récupération de la note 1
        cout << "Veillez entrer la première note : " << endl;
        cin >> note_1;
        do
        {
            cout << "Veillez entrer la première note : " << endl;
            cin >> note_1;
        } while (note_1 < 0 || note_1 > 20);

        // Récuperation de la note 2

        do
        {
            cout << "Veillez entrer la deuxième note : " << endl;
            cin >> note_2;
        } while (note_2 < 0 || note_2 > 20);
        
        // La formule de la moyenne

        average = (note_1 + note_2)/2;

        // Affichage maintenant du nom de l'élève, de note 1, note 2 et de la moyenne
        cout << "Nom : " << name << endl;
        cout << "Note 1: " << note_1 << endl;
        cout << "Note 2 : " << note_2 << endl;
        cout << "Moyenne obtenue : " << average << endl;
    }
    
    
    return 0;
}