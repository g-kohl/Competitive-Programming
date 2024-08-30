#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

void printVector(vector<int> v){
    cout << endl;

    for(int it : v)
        cout << it << ' ';
}

void merging(vector<int> &v1, int size_v1, vector<int> &v2, int size_v2, vector<int> &vf){
    int i=0, j=0, pos=0;

    while(i < size_v1 && j < size_v2){
        if(v1[i] <= v2[j])
            vf[pos++] = v1[i++];
        else
            vf[pos++] = v2[j++];
    }

    if(j < size_v2 && i >= size_v1)
        for(int k=j; k<size_v2; k++)
            vf[pos++] = v2[k];

    if(i < size_v1 && j >= size_v2)
        for(int k=i; k<size_v1; k++)
            vf[pos++] = v1[k];
}

void mergeSort(vector<int> &v, int begin, int end){
    int middle=(begin+end)/2, size_v1=middle-begin+1, size_v2=end-middle;
    vector<int> v1(size_v1), v2(size_v2), vf(size_v1+size_v2);

    if(begin < end){
        mergeSort(v, begin, middle);
        mergeSort(v, middle+1, end);

        for(int i=0; i<size_v1; i++)
            v1[i] = v[begin+i];

        for(int i=0; i<size_v2; i++)
            v2[i] = v[middle+1+i];

        merging(v1, size_v1, v2, size_v2, vf);

        for(int i=0; i<size_v1+size_v2; i++)
            v[begin+i] = vf[i];
    }
}

int main(){
    vector<int> v;

    for(int i=0; i<SIZE; i++)
        v.push_back(SIZE-1-i);

    cout << endl << "Vector before sorting:";
    printVector(v);

    mergeSort(v, 0, SIZE-1);

    cout << endl << "Vector after sorting:";
    printVector(v);

    return 0;
}