/*
Diamond traingle
Enter the value of n: 10
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
#include<bits/stdc++.h>
using namespace std;

class Pattern9{
public:

    void displayPattern(int n){
      int a = n/2;
// Normal pascel triangle
      for(int i=1; i<=a; i++){
      
        //1. Print spaces
        for(int j=a; j>i; j--){
          cout<< "  ";
        }

        //2. Bottom Right Triangle
        for(int k=1; k<=i; k++){
          cout<< "* ";
        }

        //3. Bottom Left triangle
        for(int l=1; l<i; l++){
          cout<<"* ";
        }
        cout<< "\n";
      }

// Inverted pascel triangle
        for(int i=1; i<=a; i++){
            // 1. Print Spaces
            for(int j=1; j<i; j++){
                cout << "  ";
            }

            // 2. Print top Right triangle
            for(int k=a; k>=i; k--){
                cout << "* ";
            }

            //3. Print top left centered traingle
            for(int l=a-1; l>=i; l--){
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

    Pattern9 pattern;
    pattern.displayPattern(n);
}