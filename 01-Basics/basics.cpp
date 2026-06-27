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
    /*
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
    */
    /*
        int mark;
        cin >> mark;
        if(mark>100 || mark<0){
            cout << "Invalid Mark";
        }
        else{
            if(mark<=25){
                cout << "You've got F";
            }
            else if(mark<=44){
                cout << "You've got E";
            }
            else if(mark<=49){
                cout << "You've got D";
            }
            else if(mark<=59){
                cout << "You've got C";
            }
            else if(mark<=79){
                cout << "You've got B";
            }
            else{
                cout << "You've got A+";
            }
        }
    */

    
    // Nested If Else //
    /*
        int age;
        cin >> age;
        if(age<0 || age>150){
            cout << "Are you even a human?";
        }
        else{
            if(age<18){
                cout << "not eligible for job";
            }
            else if(age<=57){
                cout << "eligible for job";
                if(age>=55){
                    cout << ", but retirement soon";
                }
            }
            else{
                cout << "retirement time";
            }
        }
    */


    // Switch Case //
    /*
        int day;
        cin >> day;
        switch (day){
            case 1:
                cout << "Monday";
                break;
            case 2:
                cout << "Tuesday";
                break;
            case 3:
                cout << "Wednesday";
                break;
            case 4:
                cout << "Thursday";
                break;
            case 5:
                cout << "Friday";
                break;
            case 6:
                cout << "Saturday";
                break;
            case 7:
                cout << "Sunday";
                break;
            
            default:
                cout << "Invalid";
                break;
            cout << "this line will not be printed, because 'break' let the code skip or get out of all the conditional statements.";
        }

        cout << ", this will be printed, cause this is outside the conditional statement";
    */


    // 1D Array //
    /*
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
        
        cout << arr[3] << endl;
        arr[3] += 10;
        cout << arr[3];
    */

    
    // 2D Array //
    /*
        int arr[3][5];

        arr[2][4] = 89;
        cout << arr[2][4] << endl;

        cout << arr[1][4];
    */


    // String //
    /*
        string s = "Striver";
        int len = s.size();
        cout << s[len-1] << endl;
        s[len-1] = 'z';
        cout << s[len-1];
    */


    // For Loop //
    /*
        for(int i=0; i<5; i++){
            cout << "Striver" << endl;
        }
        // cout << i;
        // will not print, because the scope is limited wherever i declared that variable
        int z;
        for(z=0; z<=4; z=z+1){
            cout << "StriverZ" << endl;
        } 
        cout << z << endl;
        int y;
        for(y=5; y>=1; y--){
            cout << "StriverY " << y << endl;
        } 
        cout << y;
    */
    
}
