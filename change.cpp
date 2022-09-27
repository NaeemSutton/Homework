#include <iostream>
using namespace std;

int main() {
    int dollars = 100;
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int total;
    int totalDollars;
    int totalQuarters;
    int totalDimes;
    int totalNickels;
    int totalPennies;


    cin >> total;

    if(total == 0) {
        cout << "no change" << endl;
    }

   else if (total >= 100) {
        totalDollars = total / dollars;
        total = total - (dollars * totalDollars);
        cout << totalDollars << " dollars" << endl;
    }

    else if (total >= 25 && total < 100) {
        totalQuarters = total / quarters;
        total = total - (quarters * totalQuarters);
        cout << totalQuarters << " quarters" << endl;
    }

    else if (total >= 10 && total < 25) {
        totalDimes = total / dimes;
        total = total - (dimes * totalDimes);
        cout << totalDimes << " dimes" << endl;
    }

    else if (total >= 5 && total < 10) {
        totalNickels = total / nickels;
        total = total - (nickels * totalNickels);
        cout << totalNickels << " nickels" << endl;
    }

    else if (total >= 1 && total < 5) {
        totalPennies = total / pennies;
        total = total - (pennies * totalPennies);
        cout << totalPennies << " pennies" << endl;
    }

    return 0;


}
