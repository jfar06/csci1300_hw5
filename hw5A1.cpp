#include <iostream>
#include <string>

using namespace std;


int totalGold(int donations[], int size){

    int donationSum = 0;

    for(int i = 0; i < size; i++){

        donationSum += donations[i];
    }

    return donationSum;
}

int main(){

    int const max = 100;
    int donations[max];
    int dontationAmount;
    int donationGoal = 42500;


    cout << "Enter the number of gold donations: ";
    cin >> dontationAmount;
    
    for(int i = 0; i < dontationAmount; i++){
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donations[i];
    }

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << totalGold(donations, dontationAmount) << endl;
    cout << "Vault goal: " << donationGoal << endl;
    
    if(donationGoal <= totalGold(donations, dontationAmount)){

        cout << "The Vault is fully funded! Surplus: " 
        << totalGold(donations, dontationAmount) - donationGoal << " gold" << endl;
    } else {

        cout << "The Vault still needs " << donationGoal - totalGold(donations, dontationAmount) << " more gold."
        << endl;
    }

    return 0;
}