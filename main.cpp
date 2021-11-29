#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    int x;
    cin >> x;
    if(nprimo(x-1,x) == 0){
        cout << "numero non primo" << endl;
    }else{
        cout << "numero primo" << endl;
    }

    return 0;
}
