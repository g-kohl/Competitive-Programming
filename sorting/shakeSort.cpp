#include <bits/stdc++.h>

#define SIZE 100

using namespace std;

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << " ";
}

void shakeSort(vector<int> &v){
    bool isUnsorted=true;
    int begin=0, end=SIZE-1;

    while(isUnsorted){
        isUnsorted = false;

        for(int i=begin; i<end; i++){
            if(v[i] > v[i+1]){
                swap(v[i], v[i+1]);
                isUnsorted = true;
            }
        }

        if(!isUnsorted)
            break;

        end--;

        for(int i=end; i>begin; i--){
            if(v[i] < v[i-1]){
                swap(v[i], v[i-1]);
                isUnsorted = true;
            }
        }

        begin++;
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    shakeSort(v);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}