//Question link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0#
#include <bits/stdc++.h>
using namespace std;

void arrayUnionIntersection(int [], int [], int, int);
int main(){
    int testCase;

    cin >> testCase;

    while(testCase--){
        int n, m;
        cin >> n >> m;

        int a[n], b[m];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }       

        for (int i = 0; i < m; i++){
            cin >> b[i];
        }

        arrayUnionIntersection(a, b, n, m);
    }
    return 0;
}

//USING UNORDERED MAPS
// void arrayUnionIntersection(int a[], int b[], int n, int m){
//     int newArray[n+m]={0};

//     map <int, int> arrayUnion;

//     for (int i = 0; i < n + m; i++){
//         if(i < n) newArray[i] = a[i];
//         else newArray[i] = b[i-n];
//     }

//     for (int i = 0; i < n + m; i++){
//         if(arrayUnion.find(newArray[i]) == arrayUnion.end()){
//             arrayUnion.insert(make_pair(newArray[i], 1));
//         }
//         else{
//             arrayUnion[newArray[i]]++;
//         }
//     }

//     cout << "Union: " << arrayUnion.size() << endl;

//     int intersection = 0;
//     for(auto& it : arrayUnion){
//         if(it.second>=2)intersection++;
//     }

//     cout << "Intersection: " << intersection << endl;
// }

void arrayUnionIntersection(int a[], int b[], int c[], int n, int m){
    int l = n + m;
    int count = 0;
    int newArray[l];

    for (int i = 0; i < l; i++){
        if(i < n) newArray[i] = a[i];
        else newArray[i] = b[i-n];
    }

    sort(newArray , newArray+l);

    int print = 0;
    for(int i = 0; i < l; i++){
        if(newArray[i]==newArray[i+1]){
            print++;
        }else{
            cout << newArray[print] << endl;
            print++;
        }
    }

}