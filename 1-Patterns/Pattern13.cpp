/*
Enter the number of rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/

#include <iostream>
using namespace std;


class Pattern13 {
public:    

void printPattern(int n) {
      int counter=1;

      for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<"\n";
      }
    }
};


int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    Pattern13 pattern;
    pattern.printPattern(n);
    return 0;
}