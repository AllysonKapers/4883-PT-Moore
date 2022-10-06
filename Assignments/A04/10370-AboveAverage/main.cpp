#include <iostream>
#include <iomanip>

#define endl "\n";

using namespace std;

int main() {
  int x, cases;
  double sum, count, avg, percent;

  cin >> cases;

  for(int i = 0; i < cases; i++)
  {
    cin >> x;
    int arr[x];
    sum = 0;
    count = 0;
    for(int j = 0; j < x; j++)
    {
      cin >> arr[j];
      sum += arr[j];
    }

    avg = sum/x;

    for(int k = 0; k < x; k++)
    {
      if(arr[k] > avg)
      {
        count++;
      }
    }

    percent = (count/x)*100;

    cout << fixed << setprecision(3) << percent << '%' << endl; 
  }  
}
