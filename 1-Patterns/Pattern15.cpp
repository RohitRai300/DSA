/*
Enter the number of rows: 5
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include <iostream>
using namespace std;


class Pattern15 {
public:    

void printPattern(int n) {
      int a = 65;
      for(int i=n;i>=1;i--){
        for(int j=i; j>=1; j--){
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

    Pattern15 pattern;
    pattern.printPattern(n);
    return 0;
}