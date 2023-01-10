#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float a,b,c,d,x1,x2;
  cin >> a >> b >> c;
  d = b*b - 4 * a * c;
  if (a == 0 && b == 0 && c == 0) cout << 3;
  else if (a == 0&& b == 0 && c != 0) cout << 0;
  else if (a == 0 && b != 0)  cout << 1 << " " << -c/b; 
  else if (d < 0) cout << 0;
  else if (d == 0){
      x1 = -b/(2*a);
      cout << 1 << " " << x1;
  }    
  else if (d > 0){
      x1 = (-b - sqrt(d))/(2*a);
      x2 = (-b + sqrt(d))/(2*a);
      if (x1 > x2) cout << 2 << " " << x2 << " " << x1;
      else cout << 2 << " " << x1 << " " << x2; 
  }else cout << 3; 
  return 0; 
}