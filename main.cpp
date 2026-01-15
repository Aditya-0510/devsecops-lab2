#include <bits/stdc++.h>
using namespace std;


vector<int> Merge(vector<int> a,vector<int> b){
    int  i = 0 , j = 0 ;
    vector<int> sorted ;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            sorted.push_back(a[i++]);
        }
        else sorted.push_back(b[j++]);
    }
    while(i<a.size() ){
        sorted.push_back(a[i++]);
    }
    while( j<b.size()){
        sorted.push_back(b[j++]);
    }
    return sorted;
}


vector<int> MergeSort(vector<int> a,int start,int end){
    
    if(start ==end){
        vector<int> one = {a[start]};
        return one;
    };
    int mid = start + (end-start)/2;
    vector <int > c = MergeSort(a,start,mid);
    vector <int > d = MergeSort(a,mid+1,end);
    return Merge(c,d);

}


int main(){
    
      
    return 0;
}