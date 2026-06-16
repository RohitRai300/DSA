/*

Enter the number of n: 10
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include <iostream>
using namespace std;


class Pattern10 {
public:    

/*
Logic:
If n = odd | a = n/2 | b = a + 1 | n=9 -> rows:9 (4+5)   
If n = even| b = n/2 | a = b - 1 | n=10 -> rows:9 (4+5)
*/
void printPattern(int n) {
        int a,b;

        if(n%2==0){
            b = n / 2;
            a = b - 1;
        }
        else{
            a = n / 2;
            b = a + 1;
        }

        // 1. Bottom left triangle
        for(int i=1; i<=a; i++){
            for(int j=1; j<=i; j++){
                cout<< "* ";
            }
            cout<< "\n";
        }    

        // 2. Top Left triangle
        for(int k=b; k>=1; k--){
            for(int l=k; l>=1; l--){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};


int main() {
    cout << "Enter the number of n: ";
    int n;
    cin >> n;

    Pattern10 pattern;
    pattern.printPattern(n);
    return 0;
}