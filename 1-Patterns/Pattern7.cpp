/*
Enter the value of n: 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/

#include<bits/stdc++.h>
using namespace std;

class Pattern7 {
public:

 void printPattern(int n){
    for(int i=1; i<=n; i++){
        // 1. Print spaces: n-1 to 1
        for(int j=n-i; j>0; j--){
            cout <<"  ";
        }

        // 2. Print bottom-right pattern: 1 to <=i
        for(int k=1; k<=i; k++){
            cout << "* ";
        }

        // 3. Print bottom-left pattern: 1 to <i
        for(int l=1; l<i; l++){
            cout << "* ";
        }
        cout<<"\n";
    }
 }
};


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Pattern7 pattern;
    pattern.printPattern(n);

    return 0;
}