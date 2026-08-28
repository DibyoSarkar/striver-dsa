#include<bits/stdc++.h>
using namespace std;

// Function //
// void, return, parameterised, non parameterised //
// Void 
/* void printName(string nameCatch){
    cout << "Hey " << nameCatch << " !";
} */

// Return
/* int sumofTwo(int num1, int num2){
    int sum = num1 + num2;
    cout << num1 << " + " << num2 << " = ";
    return sum;
} */

// Same as Return function, but done with void;
/* void sumofTwo(int num1, int num2){
    int sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum;
} */

// Building functions same as in-built (math.h)
/*int maxx(int n1, int n2){
    if(n1 >= n2)
        return n1;

    else 
        return n2;
}*/

// pass by value - doesn't change the main value //
/*void doSomething(int number){
    cout << number << endl;
    number += 5;
    cout << number << endl;
    number += 5;
    cout << number << endl;
}*/

// pass by value - doesn't change the main value //
/*void doSomething(int &number){
    cout << number << endl;
    number += 5;
    cout << number << endl;
    number += 5;
    cout << number << endl;
}*/

int main(){


    // Input Output //
    /* 
    int x;
    cin >> x;
    cout << "Your number is: " << x; 
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


    // While Loop //
    /*
        int r=5;
        while(r>=1){
            cout << "StriverR " << r << endl;
            r--;
        } 
        cout << r;
    */


    // Do While Loop //
    /*int r=2;
        while(r>=5){
            cout << "StriverR " << r << endl;
            r--;
        } 
        cout << r << endl;
        // this loop above, will not work.
        // to run the loop at least once even if it doesn't match the conditions, we have to use do-while loop
        int q=2;
        do {
            cout << "StriverR " << r << endl;
            q--;
        } while(q>=5);
        cout << q << endl;
    */


    // Function //
    // void - non parameterised //
    /* printName(); */
    // void parameterised //
    /* string nameThrow, nameThrow1;
    cin >> nameThrow >> nameThrow1;
    printName(nameThrow);
    printName(nameThrow1); */

    /* int n1, n2;
    cin >> n1 >> n2;
    int res = sumofTwo(n1, n2);
    cout << res; */

    // in-built functions //
    /* int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);
    int maximum = max(num1, num2);
    cout << "Maximum = " << maximum << endl << "Minimum = " << minimum;*/

    // personally written function like in-built functions //
    /*int num1, num2;
    cin >> num1 >> num2;
    int res = maxx(num1, num2);
    cout << res;*/

    // pass by value - doesn't change the main value //
    /*int num = 10;
    doSomething(num);
    cout << num << endl;*/

    // pass by reference - does change the main value //
    /*int num = 10;
    doSomething(num);
    cout << num << endl;*/

    // array and loop combined usecase //
    /*int arr[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }*/
}
