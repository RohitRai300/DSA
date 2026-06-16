/*
Enter the number of rows: 5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/

#include <iostream>
using namespace std;


class Pattern11 {
public:    

void printPattern(int n) {
      int counter;
      for(int i=1; i<=n;i++){
        if(i % 2 == 0){
                counter = 0;
            }
            else{
                counter = 1;
            }
        for(int j=1; j<=i; j++){
            cout << (counter%2) <<" ";
            counter++;
        }
        cout << "\n";
      }
    }
};


int main() {
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    Pattern11 pattern;
    pattern.printPattern(n);
    return 0;
}