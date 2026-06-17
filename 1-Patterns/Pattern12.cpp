/*
Enter the number of n: 4
1             1 
1 2         2 1 
1 2 3     3 2 1 
1 2 3 4 4 3 2 1 
*/

#include <iostream>
using namespace std;


class Pattern12 {
public:    

void printPattern(int n) {
        for(int i=1; i<=n; i++){

         // 1. Bottom left
         for(int a=1;a<=i;a++){
            cout<<a<<" ";
         }   

         // 2. Top Right Spaces
         for(int b=n; b>i; b--){
            cout<<"  ";
         }   

         // 3. Top left Spaces
         for(int c=n; c>i; c--){
            cout<<"  ";
         }
         
         // 4. Bottom Right   
         for(int d=i; d>=1; d--){
            cout<<d<<" ";
         }
         cout<<"\n";
        }
}    
};


int main() {
    cout << "Enter the number of n: ";
    int n;
    cin >> n;

    Pattern12 pattern;
    pattern.printPattern(n);
    return 0;
}