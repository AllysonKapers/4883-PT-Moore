#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
  int N, div, rem, sum;
  string bin;
  cin >> N;
  while(N != 0)
  { div = N;
    bin = "";
    sum = 0;
    
    while(div != 0)
    {
      rem = div%2;
      div = div/2;
      sum += rem;
      bin += to_string(rem);
      
    }
    reverse(bin.begin(), bin.end());
    cout << "The parity of " + bin + " is ";
    cout << sum;
    cout << " (mod 2)." << endl;
    cin >> N;
  }
}
