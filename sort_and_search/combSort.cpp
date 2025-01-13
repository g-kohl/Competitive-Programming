#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void combSort(vector<int> &v){
    bool isUnsorted=true;
    int gap=SIZE;

    while(isUnsorted || gap!=1){
        isUnsorted = false;
        gap /= 2;

        if(gap < 1)
            gap = 1;

        for(int i=0; i<SIZE-gap; i+=gap){
            if(v[i] > v[i+gap]){
                swap(v[i], v[i+gap]);
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

    combSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}