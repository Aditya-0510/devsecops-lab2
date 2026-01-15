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

vector<int> bubblesort(vector<int>&arr){
    int n=arr.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
   return arr;
 }
 
void selectionSort(vector<int>&v){
    for (int i = 0; i < v.size()-1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }

        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
  }
}
void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main(){
    
      
    return 0;
}
