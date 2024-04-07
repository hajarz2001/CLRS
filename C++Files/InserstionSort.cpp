#include <iostream>
using namespace std;

void InsertionSort(int a[], int size) {
    for(int j = 1; j < size; j++) {
        int key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;  
    }
}
void InsertionSortDescend(int a[], int size) {
    for(int j = 1; j < size; j++) {
        int key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] < key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;  
    }
}

int main() {
    int arr[] ={31, 41, 59, 26, 41, 58};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arrAsc[n]; // Array for ascending order
    int arrDesc[n]; // Array for descending order

    for(int i = 0; i < n; i++) {
        arrAsc[i] = arr[i];
        arrDesc[i] = arr[i];
    }

    InsertionSort(arrAsc, n);

    InsertionSortDescend(arrDesc, n);

    cout << "Ascending Order: ";
    for(int i = 0; i < n; i++) {
        cout << arrAsc[i] << " ";
    }
    cout << endl;

    cout << "Descending Order: ";
    for(int i = 0; i < n; i++) {
        cout << arrDesc[i] << " ";
    }
    cout << endl;

    return 0;
}
