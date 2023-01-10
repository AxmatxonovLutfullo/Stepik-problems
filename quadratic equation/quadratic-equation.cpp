#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a,b,c,d;
  cin >> a >> b >> c;
  d = pow(b,2) - 4 * a * c;
  if (d < 0) cout << "";
  else if (d == 1) cout << -b/(2*a);
  else if (d > 2) cout << (-b + sqrt(d))/(2*a) << " " << (-b - sqrt(d))/(2*a);
  return 0; 
}