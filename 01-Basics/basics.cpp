#include<bits/stdc++.h>
using namespace std;

int main(){


    // Input Output //
    /* 
    int x;
    cin >> x;
    cout << "what's upp " << x; 
    */


    // Datatypes //
    /* int, long, long long, float, double */
    /*
        int abc1 = 15;
        cout << abc1;
    */

    /* string, getline */
    /*  
        string bca1;
        cin >> bca1;
        cout << bca1;
    */
    /*  
        string full;
        getline(cin, full);
        cout << full;
    */

    /* char */
    /*
        char not1 = 'h';
        cout << not1;
    */
    
    
    // If Else //
    int age;
    cin >> age;
    if(age<0 || age>150){
        cout << "Are you even a human?";
    }
    else{
        if(age<18){
            cout << "You're not an Adult";
        }
        else{
            cout << "You're an Adult";
        }
    }
    
}
