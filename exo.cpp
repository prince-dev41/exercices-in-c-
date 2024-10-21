#include <iostream>
using namespace std;

int main() {
    string nom, prenom;
    int annee, age;

    cout << "Entrer votre nom: ";
    cin >> nom;

    cout << "Entrer votre prénom: ";
    cin >> prenom;

    cout << "Entrer votre année de naissance: ";
    cin >> annee;

    age = 2024 - annee; 

    cout << "\n---- Résultat ----" << endl;
    cout << "Nom : " << nom << endl;
    cout << "Prénom : " << prenom << endl;
    cout << "Année de naissance : " << annee << endl;
    cout << "Âge : " << age << " ans" << endl;

     // Ajout de nouvelles fonctionnalités
    if (age >= 18) {
        cout << "Vous êtes majeur." << endl;
    } else {
        cout << "Vous êtes mineur." << endl;
    }

    int annees_retraite = 65 - age;
    if (annees_retraite > 0) {
        cout << "Il vous reste " << annees_retraite << " ans avant la retraite." << endl;
    } else {
        cout << "Vous êtes déjà à la retraite !" << endl;
    }

    return 0;
}
