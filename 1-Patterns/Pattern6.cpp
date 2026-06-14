/*
Enter the value of n: 5]
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/

#include<bits/stdc++.h>
using namespace std;

class Pattern6 {
public:

 void printPattern(int n){
    for(int i=1; i<=n; i++){
        int counter = 1;
        for(int j=n; j>=i; j--){
            cout << counter << " ";
            counter++;
        }
        cout << "\n";
    }
 }
};


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Pattern6 pattern;
    pattern.printPattern(n);

    return 0;
}