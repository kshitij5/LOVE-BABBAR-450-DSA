#include <bits/stdc++.h>
using namespace std;

void move_negative(int [], int);
int main(){
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++){
       cin >> array[i];
    }       

    move_negative(array, size);

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}

void move_negative(int array[], int size){
    int low = 0, high = 0;

    while (high < size){
        if (array[high]<0){
            swap(array[low++], array[high++]);
        }
        else if (array[high]>0) high++;
    }
}