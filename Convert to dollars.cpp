#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   
   // Coin input
   cin >> quarters;
   cin >> dimes;
   cin >> nickels;
   cin >> pennies;
   
   // Coin to dollar amount calculatoins
   double quartersDollar;
   double dimesDollar;
   double nickelsDollar;
   double penniesDollar;
   
   quartersDollar = quarters * 0.25;
   dimesDollar = dimes * 0.1;
   nickelsDollar = nickels * 0.05;
   penniesDollar = pennies * 0.01;
   
   // Calculating total dollar amount
   dollars = quartersDollar + dimesDollar + nickelsDollar + penniesDollar;
   
   // Output total dollar amount
   cout << fixed << setprecision(2);
   cout << "Amount: $" << dollars << endl;
   
   return 0;
}