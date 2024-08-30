#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void selectionSort(vector<int> &v){
    int min;

    for(int i=0; i<SIZE; i++){
        min = i;

        for(int j=i; j<=SIZE; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }

        if(min != i)
            swap(v[i], v[min]);
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    selectionSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}