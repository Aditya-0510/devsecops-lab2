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

int main(){
  
      
    return 0;
}