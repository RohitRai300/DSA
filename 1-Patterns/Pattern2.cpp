/*

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/


#include <iostream>
using namespace std;


class Pattern2 {
public:    

void printPattern(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};


int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    Pattern2 pattern;
    pattern.printPattern(n);
    return 0;
}