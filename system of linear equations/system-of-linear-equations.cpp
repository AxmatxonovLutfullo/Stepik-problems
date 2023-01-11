#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,d,e,f,del,dely,delx;
    cin >> a >> b >> c >> d >> e >> f;
    del = a * d - b * c;
    delx = a * f - c * e;
    dely = e * d - f * b;
    if (del) cout << "2 " << delx/del << " " << dely/del;
    else{
        if (dely || delx) cout << 0;
        else if(!a && !b && !c && !d && !e && !f) cout << 5;
        else if(!a && !b) cout << 1 << " " << -a/b << " " << e/b;
        else if(!c && !d) cout << 1 << " " << -c/d << " " << f/d;
        else if(b) cout << 4 << " " << e/b;
        else if(d) cout << 4 << " " << f/d;
        else if(a) cout << 3 << " " << e/a;
        else if(c) cout << 3 << " " << f/c;

    }  
    return 0;
}    