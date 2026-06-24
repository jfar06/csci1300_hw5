#include <iostream>
#include <string>

using namespace std;

int daysToFund(int startBalance, int dailyDeposit){

    int count = 0;
    int currentBalance = startBalance;

    int vaultGoal = 42500;

    while(currentBalance < vaultGoal){

        currentBalance += dailyDeposit;
        count ++;

        cout << "Day " << count << ": deposited " << dailyDeposit << ", balance now "
        << currentBalance << endl;

    }

    return count;

}



int main(){

    int startValue;
    int depositAmount;
    
    int vaultGoal = 42500;

    

    cout << "Enter the starting Vault balance: ";
    cin >> startValue;
    cout << "Enter the daily deposit amount: ";
    cin >> depositAmount;


    int days = ((vaultGoal - startValue) / depositAmount) + 1;

    cout << "--- Vault Savings Plan ---" << endl;
    
    daysToFund(startValue, depositAmount);

    cout << "The Vault was funded in " << days <<  " days!" << endl;

    return 0;
}