#include <bits/stdc++.h>

#define SIZE 100

using namespace std;

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void heapify(vector<int> &v, int i, int size){
    int largest=i, l=(2*i)+1, r=(2*i+2);

    if(l < size && v[l]>v[largest])
        largest = l;

    if(r < size && v[r]>v[largest])
        largest = r;

    if(largest != i){
        swap(v[largest], v[i]);
        heapify(v, largest, size);
    }
}

void heapSort(vector<int> &v){
    int heapSize = SIZE;

    for(int i=(SIZE/2)-1; i>=0; i--)
        heapify(v, i, heapSize);

    for(int i=0; i<SIZE; i++){
        swap(v[0], v[SIZE-1-i]);
        heapSize--;
        heapify(v, 0, heapSize);
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    heapSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}