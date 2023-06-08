#include<iostream>
using namespace std;

int main(){
    while(1){
        int a = 0 , b = 0;
        cout << "Enter the value of a:" << a << endl ;
        cin >> a;
        //int b = 0;
        cout << "Enter the value of b:" << b << endl;
        cin >> b;

        int num ;
        cin >> num;

        switch(num){
            case 1: 
            cout << "Addition of two given numbers:" << a+b << endl;
            break;

            case 2:
            cout << "Substration of two given numbers:" << a-b << endl;
            break;

            case 3:
            cout << "Multiplication of two given numbers:" << a*b << endl;
            break;

            case 4:
            cout << "Divide of two given numbers:" << a/b << endl;
            break;

            case 5:
            cout << "Modulo of two given numbers:" << a%b << endl;
            break;
        }
    }
}