#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void insertionSort(vector<int> &v){
    for(auto it=v.begin(); it!=v.end(); it++){
        auto insertionPos = upper_bound(v.begin(), it, *it);

        rotate(insertionPos, it, it+1);
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    insertionSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}