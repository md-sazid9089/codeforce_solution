#include <bits/stdc++.h>
using namespace std;

void conquer(vector<int>&d,int l,int mid,int u) {
    vector<int> newarray;
    int idx1=l;
    int idx2=mid+1;
    while(idx1<=mid && idx2<=u){
        if(d[idx1]<=d[idx2]) {
            newarray.push_back(d[idx1++]);
        }else{
            newarray.push_back(d[idx2++]);
        } 
    }
    while (idx1 <= mid){
        newarray.push_back(d[idx1++]);
    }
        while (idx2 <= u) {
        newarray.push_back(d[idx2++]);
    }
    for (int i = 0; i < newarray.size(); i++) {
        d[l + i] = newarray[i];
    }
}

void divide(vector<int>& b, int start, int end1) {
    if (start >= end1) {
            return;
    }
    int mid = start + (end1 - start) / 2;
    divide(b, start, mid);        
    divide(b, mid + 1, end1);     
    conquer(b, start, mid, end1); 
}

void print(vector<int>& c) {
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
divide(v,0,n-1);
print(v);
    return 0;
}
