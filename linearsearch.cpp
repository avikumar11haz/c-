#include<iostream>
using namespace std;

void reversearray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[] , int size){
    for(int i =0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int array[6]= {5,7, 32,22,10,19};
    reversearray(array, n);
    printarray(array, n);
}