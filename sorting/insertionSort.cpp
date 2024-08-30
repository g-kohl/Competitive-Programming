#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void insertionSort(vector<int> &v){
    for(auto it=v.begin(); it!=v.end(); it++){ //iterate through the entire vector
        auto insertionPos = upper_bound(v.begin(), it, *it); //get the position of the first number greater than the current one

        rotate(insertionPos, it, it+1); //rotate the vectors [insertionPos...it-1] [it...it]
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++) //initialize array in descending order
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    insertionSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}