#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <numeric>
#include <iomanip>



using namespace std;
#define endl "\n"

int main() {
  map<string, int> treeCount;
  vector<string> myVector;
  
  
  
  int T;
  string tree, var, blank, test;

  cin>>T;
  getline(cin,blank);
  getline(cin, test);
  
  while(T>=1)
  { 
    getline(cin,tree);
    //cout << tree << endl;
    if(tree.length() == 0)
    {
      T--;
      
      //from: https://www.techiedelight.com/find-sum-of-all-values-in-the-map-in-cpp/
      double total_sum = accumulate(treeCount.begin(), treeCount.end(), 0,
                        [](auto prev_sum, auto &entry) {
                            return prev_sum + entry.second;
                        });
      
      map<string, int>::iterator it = treeCount.begin();
      cout << fixed << setprecision(4);
      while(it != treeCount.end())
        {
          string tree = it->first;
          double count = it->second;
          cout << tree << ' '  << (count/total_sum)*100 << endl;
          it++;
        }
      if(T>=1)
      {  
        cout << endl;
      }
      treeCount.clear();
    }
    
    else if(tree.length() != 0)
    {
  
      if(treeCount.find(tree) == treeCount.end())
      {
        //initialized at 0, incremented outside of statement
        treeCount.insert(pair<string, int>(tree,0));
      }
      
      
      treeCount[tree]++;
    }
  

  }
}
