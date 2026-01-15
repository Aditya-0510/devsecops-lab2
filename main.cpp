#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>v){
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