#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void shellSort(vector<int> &v){
    for(int gap=SIZE/2; gap>0; gap/=2){
        for(int i=0; i<gap; i++){
            for(int j=gap; j<SIZE-1; j+=gap){
                int key = v[j+i];
                int k = j - gap + i;

                while(k >= 0 && key < v[k]){
                    swap(v[k+gap], v[k]);
                    k -= gap;
                }
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

    shellSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}