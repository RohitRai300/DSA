/*
Enter the value of n 5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/

#include<bits/stdc++.h>
using namespace std;

class Pattern4 {
public:

 void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout<< "\n";
    }
 }
};


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Pattern4 pattern;
    pattern.printPattern(n);

    return 0;
}