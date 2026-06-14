/*
Enter the value of n 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

#include<bits/stdc++.h>
using namespace std;

class Pattern3 {
public:

 void printPattern(int n){
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
 }
};


int main(){
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    Pattern3 p3;
    p3.printPattern(n);

    return 0;
}