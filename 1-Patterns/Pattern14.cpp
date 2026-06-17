/*
Enter the number of rows: 5
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include <iostream>
using namespace std;


class Pattern14 {
public:    

void printPattern(int n) {
      int a = 65;
      for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<(char)a<<" ";
            a++;
        }
        a=65;
        cout<<"\n";
      }
    }
};


int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    Pattern14 pattern;
    pattern.printPattern(n);
    return 0;
}