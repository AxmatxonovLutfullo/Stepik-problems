#include <iostream>
using namespace std;
int main() {   
    int num, i = 1, imax = 1, oldnum = 0;
    cin >> num;
    while (num != 0) { 
        oldnum = num; 
        cin >> num;
        if (num == oldnum) {
            i++;
            if (i >= imax) {
                imax = i;
            }
        } else {
            i = 1;
        }  
    }
    cout << imax; 
        return 0;
    }