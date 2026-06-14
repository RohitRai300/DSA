/*
Enter the value of n: 5
* * * * * 
* * * * 
* * * 
* * 
* 
*/

#include<bits/stdc++.h>
using namespace std;

class Pattern5 {
public:

 void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<< "* ";
        }
        cout << "\n";
    }
 }
};


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Pattern5 pattern;
    pattern.printPattern(n);

    return 0;
}