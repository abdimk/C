//40. Write a C++ program to make such a pattern like a pyramid with an asterisk
#include <iostream>
using namespace std;

int main() {

    int space, rows{5};

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
