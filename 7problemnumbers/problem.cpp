#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    float n,c = 0,i = 0,i2 = 0;
    cin >> n;
    while (n != 0) {
         c += pow(n,2);
         i2 += n;
         i++;
         cin >> n;
    }
    cout << fixed << sqrt((c-(pow(i2,2)/i))/(i-1)) << setprecision(11);
    return 0;
}