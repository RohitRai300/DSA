/*
Reverse pascel traingle



*/


#include<bits/stdc++.h>
using namespace std;

class Pattern8{
public:

    void displayPattern(int n){
        for(int i=1; i<=n; i++){
            // 1. Print Spaces
            for(int j=1; j<i; j++){
                cout << "  ";
            }

            // 2. Print top Right center triangle
            for(int k=n; k>=i; k--){
                cout << "* ";
            }

            //3. Print top left centered traingle
            for(int l=n-1; l>=i; l--){
                cout<<"* ";
            }
            cout<< "\n";
    }
}

};

int main(){
    cout<< "Enter the value of n: ";
    int n;
    cin >> n;

    Pattern8 pattern;
    pattern.displayPattern(n);
}