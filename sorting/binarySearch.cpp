#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

int binarySearch(vector<int> &v, int begin, int end, int n){
    int mid;

    while(begin <= end){
        mid = begin + (end - begin) / 2;

        if(v[mid] == n)
            return mid;

        if(v[mid] > n)
            end = mid - 1;
        else
            begin = mid + 1;
    }

    if(v[begin] >= n)
        return begin;
    
    return begin + 1;
}

int main(){
    vector<int> v = {0, 2, 3, 6, 9};

    int pos;

    for(int i=0; i<SIZE; i++){
        pos = binarySearch(v, 0, v.size()-1, i);

        cout << i << " is or should be in " << pos << endl; 
    }

    return 0;
}