#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
#include <iomanip>                 // For setprecision
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;
   double wallPaint;
   
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   
   cout << "Enter wall width (feet):" << endl;
   cin >> wallWidth;
   
   // Calculate and output wall area
   wallArea = wallHeight * wallWidth;
   cout << fixed << setprecision(2) << "Wall area: " << wallArea << " square feet" << endl;
   
   // Calculate paint needed
   wallPaint = wallArea / 350;
   cout << "Paint needed: " << wallPaint << " gallons" << endl;

   // Round up to nearest paint can
   cout << fixed << setprecision(0) << "Cans needed: " << ceil(wallPaint) << " can(s)" << endl;

   return 0;
}