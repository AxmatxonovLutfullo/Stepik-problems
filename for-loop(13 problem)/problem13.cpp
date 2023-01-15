#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int gr,vr;
    vector <int> g;
    vector <int> v;
    for (int i = 0;i < 8;i++) {
        cin >> gr >> vr;
        g.push_back(gr);
        v.push_back(vr);
    }
    for(int i = 0; i < g.size() - 1; i++){
        for(int j = i + 1; j < g.size(); j++){
            if(abs(g[i] - g[j]) == abs(v[i] - v[j]) || (g[i] == g[j]) || (v[i] == v[j])){
              cout << "YES";
            }
        }
    }
    cout << "NO";
    return 0;
}