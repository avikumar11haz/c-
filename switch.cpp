#include<iostream>
using namespace std;

int main(){
    int amount = 1330;
    int quotient;
    int num = 1;

    switch(num){
        case 1:
        {
            quotient = amount/100;
            cout << "no of 100 notes:" << quotient << endl;
            amount = amount - (quotient*100);
        }

        case 2:
        {
            quotient = amount/50;
            cout << "no of 50 notes:" << quotient << endl;
            amount = amount - (quotient*50);
        }

        case 3:
        {
            quotient = amount/20;
            cout << "no of 20 notes:" << quotient << endl;
            amount = amount - (quotient*20);
        }

        case 4:
        {
            quotient = amount/1;
            cout << "no of 1 notes:" << quotient << endl;
            amount = amount - (quotient*1);
        }
        break;
    }
}