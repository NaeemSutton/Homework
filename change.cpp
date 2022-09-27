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
        cout << "No change" << endl;
    }

   if (total >= 100 && total > 200) {
        totalDollars = total / dollars;
        total = total - (dollars * totalDollars);
        cout << totalDollars << " Dollars" << endl;
    }
    
    else if (total >= 100) {
        totalDollars = total / dollars;
        total = total - (dollars * totalDollars);
        cout << totalDollars << " Dollar" << endl;
    }

    if (total >= 25 && total < 100 && total >= 50) {
        totalQuarters = total / quarters;
        total = total - (quarters * totalQuarters);
        cout << totalQuarters << " Quarters" << endl;
    }
    
    else if (total >= 25 && total < 100 ) {
        totalQuarters = total / quarters;
        total = total - (quarters * totalQuarters);
        cout << totalQuarters << " Quarter" << endl;
    }

    if (total >= 10 && total < 25 && total >= 20) {
        totalDimes = total / dimes;
        total = total - (dimes * totalDimes);
        cout << totalDimes << " Dimes" << endl;
    }
    
    else if (total >= 10 && total < 25) {
        totalDimes = total / dimes;
        total = total - (dimes * totalDimes);
        cout << totalDimes << " Dime" << endl;
    }

    if (total >= 5 && total < 10 && nickels >= 10) {
        totalNickels = total / nickels;
        total = total - (nickels * totalNickels);
        cout << totalNickels << " Nickels" << endl;
    }
    
    else if (total >= 5 && total < 10) {
        totalNickels = total / nickels;
        total = total - (nickels * totalNickels);
        cout << totalNickels << " Nickel" << endl;
    }

    if (total >= 2 && total < 5  ) {
        totalPennies = total / pennies;
        total = total - (pennies * totalPennies);
        cout << totalPennies << " Pennies" << endl;
    }
    
    else if (total > 0 && total < 2  ) {
        totalPennies = total / pennies;
        total = total - (pennies * totalPennies);
        cout << totalPennies << " Penny" << endl;
    }

    return 0;


}
