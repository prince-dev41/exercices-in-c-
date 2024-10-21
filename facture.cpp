// programme en c++ permettant de présenter une facture avec des conditions

#include <iostream>
using namespace std;

int main () {
    // déclartion des variables
    float price, quantity, tva = 18, tht, ttc, total_facture, price_taxed;
    string customer;

    // récupération des données pour la factue

    cout << "Veillez entrer le nom du client : " << endl;
    cin >> customer;

    cout << "Veillez entrer le prix du produit : " << endl;
    cin >> price;
    
    cout << "Veillez entrer la quantité commandée : " << endl;
     cin >> quantity;

    if (price <= 0 || quantity <= 0 ) {
        cout << "Veillez entrer des données valides. Le prix et la quantité doivent etre supérieure à 0. Reesayer avec des données valides. Merci " << endl;
        return 0;
    }
    // calcul du prix total hors taxe
    tht = (quantity*price);

    // calcul du prix taxe
    price_taxed = (tht * 0.18);

    // calcul du prix total avec taxe compris
    ttc = tht + price_taxed;

   // établissement de la facture
    if (ttc >= 5000 && ttc < 10000) {
        total_facture = ttc - (ttc * 0.03);
    } else if (ttc >+ 10000 && ttc <20000) {
        total_facture = ttc - (ttc * 0.05);
    } else if (ttc >+ 20000) {
        total_facture = ttc - (ttc * 0.1);
    } else {
        total_facture = ttc;
    }

    // affichage de la facture

    cout << "-----Votre facture : -----" << endl;
    cout << "Client : " << customer << endl;
    cout << "Prix : " << price << endl;
    cout << "Quantité : " << quantity << endl;
    cout << "TVA : 18% " << endl;
    cout << "TTH : " << tht << endl;
    cout << "TTC : " << ttc << endl;
    cout << "Total à payer : " << total_facture << endl;

    return 0;
}