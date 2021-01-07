#include<bits/stdc++.h>
using namespace std;
struct model {
    int min, max;
};
model kthMinMax(int *, int, int, int);
int main(){
    int testCase = 0;
    cin >> testCase;

    while(testCase--){
        int numberOfElements = 0;
        cin >> numberOfElements;

        int a[numberOfElements];

        for(int i = 0; i < numberOfElements; i++){
            cin >> a[i];
        }

        int k;
        cin >> k;
        model minmax = kthMinMax(a, 0, numberOfElements, k);
        cout << "Smallest: " << minmax.min <<endl;
        cout << "Largest: " << minmax.max <<endl;
    }
    return 0;
}

model kthMinMax(int arr[], int l, int r, int k) {
    //sort in ascending order
    sort(arr, arr+r+1);

    model result;
    result.min = arr[k-1];
    result.max = arr[r-k];

    return result;
}
