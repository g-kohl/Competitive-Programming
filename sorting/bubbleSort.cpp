#include <bits/stdc++.h>

#define SIZE 100

using namespace std;

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void bubbleSort(vector<int> &v){
    bool isUnsorted = true;

    while(isUnsorted){
        isUnsorted = false;

        for(int i=0; i<SIZE-1; i++){
            if(v[i] > v[i+1]){
                swap(v[i], v[i+1]);
                isUnsorted = true;
            }
        }
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    bubbleSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}