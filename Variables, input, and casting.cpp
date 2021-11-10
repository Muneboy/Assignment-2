#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
   int userInt;
   double userDouble;
   char userChar;
   string userString;
   
   // Enter in the variables
   cout << "Enter integer:" << endl;
   cin  >> userInt;
   
   cout << "Enter double:" << endl;
   cin >> userDouble;
   
   cout << "Enter character:" << endl;
   cin >> userChar;
   
   cout << "Enter string:" << endl;
   cin >> userString;
   
   // Output the variables
   cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
   
   // Output the four values in reverse
   cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;
   
   
   // Output the double cast as an integer
   int userDoubleCast;
   userDoubleCast = static_cast<int>(userDouble);
   cout << userDouble << " cast to an integer is " << userDoubleCast << endl;

   return 0;
}