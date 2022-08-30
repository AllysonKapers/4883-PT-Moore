/**
* Ally Moore
* 4883 Prog Tech
* 08.30.22
*/
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    long long int B = 0, A = 0, R = 0;
    
    while (cin >> A >> B) {
        
      R = A-B;
      if(R < 0)
      {
        R = R*-1;
      }
      cout << R << endl;

    }
    return 0;
}
