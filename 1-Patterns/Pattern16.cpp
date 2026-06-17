/*
Enter the number of n: 5
A 
B B 
C C C 
D D D D 
E E E E E 
*/

#include <iostream>
using namespace std;


class Pattern16 {
public:    

void printPattern(int n) {
     int a=65;
     for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<(char)a<<" ";
        }
        a++;
        cout<<"\n";
     }
    }
};


int main() {
    cout << "Enter the number of n: ";
    int n;
    cin >> n;

    Pattern16 pattern;
    pattern.printPattern(n);
    return 0;
}