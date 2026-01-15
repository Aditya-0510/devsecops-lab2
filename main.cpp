#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void Merge(vector<int> &a, int start, int mid, int end) {
    int  i = start , j = mid+1 ;
    vector<int> sorted ;
    while(i<=mid && j<=end){
        if(a[i]<=a[j]){
            sorted.push_back(a[i++]);
        }
        else sorted.push_back(a[j++]);
    }
    while(i<=mid ){
        sorted.push_back(a[i++]);
    }
    while( j<=end){
        sorted.push_back(a[j++]);
    }
    for (int k = 0; k < sorted.size(); k++) {
        a[start + k] = sorted[k];
    }
}


void MergeSort(vector<int> &a,int start,int end){
    
    if(start >=end){
        return;
    };
    int mid = start + (end-start)/2;
    MergeSort(a,start,mid);
    MergeSort(a,mid+1,end);

    Merge(a,start,mid,end);

}

void bubbleSort(vector<int>&arr){
      int n=arr.size();
      for(int i = 0; i < n - 1; i++) {
          for(int j = 0; j < n - i - 1; j++) {
              if(arr[j] > arr[j + 1]) {
                  int temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;
              }
          }
      }
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
    int n;
    cout << "Enter number of elements: " ;
    cin >> n;

    vector<int>a(n);
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    cout << "Enter your choice of sort: "<< endl;
    cout << "1.Bubble Sort" << endl;
    cout << "2.Merge Sort"<< endl;
    cout << "3.Insertion Sort"<< endl;
    cout << "4.Selection Sort"<< endl;
    cout << "5.Quick Sort"<< endl;

    int ch;
    cin >> ch;
    
    switch (ch) {
        case 1:
            bubbleSort(a);
            break;

        case 2:
            MergeSort(a,0,n-1);
            break;

        case 3:
            insertionSort(a);
            break;

        case 4:
            selectionSort(a);
            break;

        case 5:
            quickSort(a,0,n-1);
            break;

        default:
            cout << "Enter a valid response";
    }

    for(auto i: a){
        cout << i << " ";
    }

    return 0;
}
