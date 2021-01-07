#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases = 0;

    cin >> testCases;
    while(testCases--){
        int size = 0;
        cin >> size;

        int array[size];
        for(int i = 0; i < size; i++){
            cin >> array[i];
        }

        for(int i = size - 1; i > 0; i--){
            swap(array[i], array[i-1]);
        }

        for(int i = 0; i < size; i++){
            cout << array[i] << " ";
        }

    }
    return 0;
}