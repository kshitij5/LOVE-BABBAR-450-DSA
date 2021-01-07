#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, min = INT_MAX, max = INT_MIN;

    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++){
       cin >> array[i];
    }                           //INPUT HERE

    for (int i = 0; i < size; i++){
        if (array[i]<min) min = array[i];
        if (array[i]>max) max = array[i];
    }

    cout << min << " " << max << endl;
    return 0;
}