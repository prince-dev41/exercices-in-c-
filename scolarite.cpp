// programme en c++ permettant de calculer la scolarite due par un parent

#include <iostream>
using namespace std;

int main(){
    // Déclaration des différents variables
    int children_number=0, i=0, primary_effectif, secondary_effectif, primary_1, primary_2, primary_3, secondary_1, secondary_2, secondary_3;
    float total_amount, total_without, primary_amount, secondary_amount;
    string password = "Prince", checked_password;

    // Proccedons à l'authentification
    cout << "Proccédons maintenant à l'authentification." << endl;
    cout << "Entrer votre mot de passe :" << endl;
    cin >> checked_password;

    // Logique qui me permet de faire l'authentfication du suer
    while (checked_password != password && i<3 )
    {
        cout << "Entrer votre mot de passe (Vous n'aviez que 3 essais):" << endl;
        cin >> checked_password;
        i++;

        if (i==2 &&  checked_password != password){
        cout << "Accès bloqué ! Veillez réessayer" << endl;
        return 0;  
        }
    };
   

    // Connectons maintenant le user et redirigeons le sur le proramme.
    if (password == checked_password){
        cout << "Bienvenue sur votre dashboard !" << endl;
        cout << "Nous allons proccéder au calcul de la scolarité que vous devez." << endl;
    };

    // Primaire
    cout << "Vous aviez combien d'enfants au primaire ?" << endl;
    cin >> primary_effectif;

    if (primary_effectif > 0){
        cout << "Commbien en interne ?" << endl;
        cin >> primary_1;
        primary_amount = (25000*primary_1);
        children_number += primary_1;
    };

    if (primary_effectif > 0){
        cout << "Commbien en externe ?" << endl;
        cin >> primary_2;
        primary_amount += (12500*primary_2);
        children_number += primary_2;
    };

    if (primary_effectif > 0){
        cout << "Commbien ont une démi-pension ?" << endl;
        cin >> primary_3;
        primary_amount += (18000*primary_3);
        children_number += primary_3;
    };

    // Secondaire
    cout << "Vous aviez combien d'enfants au secondiare ?" << endl;
    cin >> secondary_effectif;

    if (secondary_effectif >0){
        cout << "Commbien en interne au secondaire ?" << endl;
        cin >> secondary_1;
        secondary_amount = (40000*secondary_1);
        children_number += secondary_1;
    };

    if (secondary_effectif > 0){
        cout << "Commbien en externe au secondaire ?" << endl;
        cin >> secondary_2;
        secondary_amount += (21000*secondary_2);
        children_number += secondary_2;
    };

    if (secondary_effectif > 0){
        cout << "Commbien ont une démi-pension au secondaire ?" << endl;
        cin >> secondary_3;
        secondary_amount += (26000*secondary_3);
        children_number += secondary_3;
    };

    // Scolarité due
    total_amount = primary_amount + secondary_amount;
    // Application des remises
    if (children_number >= 2 && children_number <= 3) {
        total_amount = total_amount - (total_amount * 0.03);
    } else if (children_number >= 4 && children_number <=6) {
        total_amount = total_amount - (total_amount * 0.05);
    } else if (children_number > 6) {
        total_amount = total_amount - (total_amount * 0.8);
    } else {
        total_amount = total_amount;
    }

    cout << "Total d'enfants :" << children_number << endl;
    cout << "Total Scolarité :" << total_amount << endl;
    
    return 0;
}