#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << " ";
}

int findPartition(vector<int> &v, int begin, int end){
    int l=begin+1, r=end, pivot=begin;

    while(l<r){
        while(v[l] < v[pivot] && l<end)
            l++;

        while(v[r] > v[pivot] && r>begin)
            r--;

        if(l<r && v[l]>v[r])
            swap(v[l], v[r]);
    }

    if(v[r] < v[pivot])
        swap(v[r], v[pivot]);

    return r;
}

void quickSort(vector<int> &v, int begin, int end){
    int pivot;

    if(begin < end){
        pivot = findPartition(v, begin, end);
        quickSort(v, begin, pivot-1);
        quickSort(v, pivot+1, end);
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    quickSort(v, 0, SIZE-1);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}