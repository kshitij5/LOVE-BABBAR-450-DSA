#include <iostream>
using namespace std;

int main(){
    int size;

    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++){
       cin >> array[i];
    }                           //INPUT HERE

    printf("Array Reversed is: \n");
    for (int i = size - 1; i >= 0; i--){
        cout << array[i] << " ";
    }                           //OUTPUT REVERSED ARRAY
    return 0;
}