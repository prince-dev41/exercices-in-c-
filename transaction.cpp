// programme en c++ permettant de faire des transactions

#include <iostream>
using namespace std;

int main(){
    // Initialisation du compte avec des variales
    float sold_initial = 2409, final_sold, deposit_amount, retrait_amount;
    int selected_option;

    cout << "Veillez enter une option : " << endl;
    cout << "Menu: " << endl;
    cout << "1. Consulter votre solde " << endl;
    cout << "2. Effectuez un dépot " << endl;
    cout << "3. Effectuez un retrait " << endl;
    cout << "0. Retour " << endl;

    cin >> selected_option;

    // Utilisation du Switch
    switch (selected_option)
    {
    case 1:
        cout << "Votre solde actuel est de  : " << sold_initial << " Francs CFA" << endl;
        break;
    case 2:
        cout << "Entrez le montant du dépot : "<< endl;
        cin >> deposit_amount;
        cout << "------ Détails : ----- "<< endl;
        cout << "Solde initial : " << sold_initial << endl;
        cout << "Montant déposé : " << deposit_amount << endl;

        // Calcul du solde final;
        final_sold = sold_initial + deposit_amount;

        cout << "Solde final : " << final_sold << endl;
        break;
    case 3:
        cout << "Entrez le montant du retrait : "<< endl;
        cin >> retrait_amount;
        if (retrait_amount > sold_initial){
            cout << "Votre solde est insuffisant pour effectuer cette transaction ! "<< endl;
            cout << "Entrez un montant inférieur ou égale à : " << sold_initial << endl;
            cin >> retrait_amount;
        };
        cout << "------ Détails : ----- "<< endl;
        cout << "Solde Initial : "<< sold_initial << endl;
        cout << "Montant retiré : " << retrait_amount << endl;

        // Calcul du solde final;
        final_sold = sold_initial - retrait_amount;

        cout << "Solde final : " << final_sold << endl;
        break;
    case 0:
        cout << "Veillez enter une option : " << endl;
        cout << "Menu: " << endl;
        cout << "1. Consulter votre solde " << endl;
        cout << "2. Effectuez un dépot " << endl;
        cout << "3. Effectuez un retrait " << endl;
        cout << "0. Retour " << endl;
        cin >> selected_option;
    default:
        break;
    }

    return 0;
}
