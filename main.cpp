#include <bits/stdc++.h>
using namespace std;

vector<int> bubblesort(vector<int>arr){
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

int main(){
  vector<int>a={2,1,5,8,2,4};
     bubblesort(a);
      
    return 0;
}
