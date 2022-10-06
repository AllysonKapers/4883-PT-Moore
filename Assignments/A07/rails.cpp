#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <numeric>
#include <iomanip>
#include <stack>

using namespace std;

#define endl "\n"

int main() {
  
  int N, P, c , t;
  string out = "Yes";
  int x = -1;

  cin >> N;
  while(N != 0)
  { 
    while(x == -1)
    { stack<int> trains;
      int checkOut[N];
      cin >> P;
      if(P != 0)
      { //loads next line into array after checking 
        //if line started with 0
        checkOut[0] = P; 
        for(int i = 1; i < N; i++)
        {  
          cin >> checkOut[i];
        }
        //t = next train needed c = current train
        t = 0; 
        c = 1;
        while(c <= N)
        {
          trains.push(c); 
          
          while(!trains.empty() && trains.top() == checkOut[t])
          {
            trains.pop();
            t++;
          }
          c++;
            
        }
        //if stack still contains trains order cannot be achieved
        if(!trains.empty())
        {
          cout << "No" << endl;
        }
        if(trains.empty())
        {
          cout << "Yes" << endl;
        }
        
      }
      else
      {
        x = 0;
        cout << endl;
      }
      
      
      
    } 
    
    cin >> N;
    x = -1;
    
  }
}
