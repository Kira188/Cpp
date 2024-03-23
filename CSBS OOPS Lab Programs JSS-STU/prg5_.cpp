#include <iostream>

using namespace std;
 
template <class T>
void Print(T& arr, int n){
    cout <<"sorted"<< ": [";
    for (int i=0; i<n; i++){
        cout << arr[i];
        if (i < n-1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
template <class T>
void swap(T* x, T* y){
    T temp = *x;
    *x = *y;
    *y = temp;
}
 

template <class T>
int partition(T A[], int low, int high){
    T pivot = A[low];
    int i = low + 1;
    int j = high;
 
    while (true){
        while (i <= j && A[i] <= pivot){
            i++;
        }
        while (A[j] >= pivot && i <= j){
            j--;
        }
        if (j < i){
            break;
        } else {
            swap(A[i], A[j]);
        }
    }
    swap(A[low], A[j]);
    return j;
}
template <class T>
void QuickSort(T A[], int low, int high){
    if (low < high){
        int p = partition(A, low, high);
        QuickSort(A, low, p-1);
        QuickSort(A, p+1, high);
    }
}
 
int main() {
    cout << "First Element as Pivot + w/o INT_MAX or Infinity" << endl;
    double C[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    Print(C, sizeof(C)/sizeof(C[0]));
 
    QuickSort(C, 0, sizeof(C)/sizeof(C[0])-1);
    Print(C, sizeof(C)/sizeof(C[0]));
 
    return 0;
}