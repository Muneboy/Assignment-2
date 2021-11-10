#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;
   
   // User enters phone number
   int areaCode;
   int prefix;
   int lineNumber;
   cin >> phoneNumber;
   
   // Calculate the areaCode, prefix and lineNumber variables
   areaCode = phoneNumber / 10000000;
   prefix = (phoneNumber / 10000) % 1000;
   lineNumber = phoneNumber % 10000;
   
   // Outputting the phone number breakdown
   cout << "(" << areaCode << ") " << prefix << "-" << lineNumber << endl;
   
   return 0;
}
