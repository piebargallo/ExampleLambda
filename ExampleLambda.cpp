#include <iostream>
using namespace std;

// Driver code
int main() {
   
   // Def local var
   int m = 0;
   int n = 0;
   
   // Lambda expression
   [&, n] (int a) mutable { m = ++n * a; }(4);
   
   // Printing result of body expression
   cout << m << endl << n;
   
   return 0;

} // End code