#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n,min = 0;
  cin >> n;
  vector <int> a(n);
  for (int i = 0;i < n; i++) {
     cin >> a[i];
     if(a[i] % 2 != 0 && a[i] != 0) {
        if (min == 0) min = a[i];
        else if (min != 0 && min > a[i]) min = a[i];
     }
  } 
  if (min % 2 != 0) cout << min;
  else if (min % 2 == 0) cout<<0; 
  return 0;
}