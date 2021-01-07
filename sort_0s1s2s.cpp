#include <bits/stdc++.h>
using namespace std;

void sort012(int [], int);
int main(){
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++){
       cin >> array[i];
    }       

    sort012(array, size);

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}

///USING MAP
// void sort012(int array[], int size){
//     map <int, int> map;
//     for (int i = 0; i < size; i++){
//         if(map.find(array[i]) == map.end()){
//             map.insert(make_pair(array[i], 1));
//         }
//         else{
//             map[array[i]]++;
//         }
//     }

//     int count = 0;
//     for (auto& it : map) {
//         while (it.second--){
//             array[count] = it.first;
//             count++;
//         }
//     }
//     cout << endl;
// }

///USING VARIABLES
// void sort012(int array[], int size){
//     int zeroes = 0, ones = 0, twos = 0;

//     for (int i = 0; i < size; i++){
//         if (array[i] == 0)zeroes++;
//         else if (array[i] == 1)ones++;
//         else if (array[i] == 2)twos++;
//     }

//     for (int i = 0; i < size; i++){
//         if(zeroes>0){
//             array[i] = 0;
//         }
//         else if(ones>0){
//             array[i] = 1;
//         }
//         else if (twos>0){
//             array[i] = 2;
//         }
//     }
// }

///USING DUTCH NATIONAL FLAG PROBLEM TECHNIQUE
void sort012(int array[], int size){
    int low = 0, high = size - 1, mid = 0;

    while (mid <= high){
        if(array[mid] == 0){
            swap(array[mid++], array[low++]);
        }else if(array[mid] == 2){
            swap(array[mid], array[high--]);
        }else{
            mid++;
        }
    }
}