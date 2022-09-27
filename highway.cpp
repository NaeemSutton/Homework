#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   int auxiliary;
   int primary;
   int evenOdd;
   
   cin >> highwayNumber;
   
   evenOdd = highwayNumber % 2;
   
    if (highwayNumber == 0 || highwayNumber % 100 == 0) {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
    } else if(highwayNumber >= 1 && highwayNumber <= 99) {
      if (evenOdd == 0){
         cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
         }
         else {
          cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
          
         }
    } else if(highwayNumber >= 100 && highwayNumber <= 999) {
        auxiliary = highwayNumber % 100;
         if(evenOdd == 0) {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << auxiliary << ", going east/west." << endl;
            }
            else{
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << auxiliary << ", going north/south." << endl;
         }
    } else {
         cout << highwayNumber << " is not a valid interstate highway number." << endl;
    }

      
      
         
         return 0;
         
}