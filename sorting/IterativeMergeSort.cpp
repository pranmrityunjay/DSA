/*#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int h) {
    int i, j, k;
    i = l;
    j = mid + 1;
    k = l;
    int result[100];

    while (i <= mid && j <= h) {
        if (arr[i] < arr[j]) {
            result[k++] = arr[i++];
        } else {
            result[k++] = arr[j++];
        }
    }

    for (; i <= mid; i++) {
        result[k++] = arr[i];
    }

    for (; j <= h; j++) {
        result[k++] = arr[j];
    }

    for (int i = l; i <= h; i++) {
        arr[i] = result[i];
    }
}

void mergeSort(int arr[], int size) {
    int p;
    for (p = 2; p <= size; p *= 2) {
        for (int i = 0; i <= size - p; i += p) {
            int l = i;
            int h = i + p - 1;
            int mid = (l + h) / 2;
            merge(arr, l, mid, h);
        }
    }

    if (p / 2 < size) {
        merge(arr, 0, p / 2, size - 1);
    }
}

int main() {
    int arr[] = {1, 3, 5, 6, 87, 43, 78, 43};
    int size = 8;

    mergeSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int h){
    int i=l;
    int k=l;
    int j=mid+1;
    int result[100];
    
}
void sort(int arr[],int l,int mid,int h){
    int size=12;
   for (p = 2; p <= size; p *= 2) {
        for (int i = 0; i <= size - p; i += p) {
            int l = i;
            int h = i + p - 1;
            int mid = (l + h) / 2;
            merge(arr, l, mid, h);
        }
    }

    if (p / 2 < size) {
        merge(arr, 0, p / 2, size - 1);
    }
}

int main(){
    int arr[]={23,42,3,22,313,35,34,766,567,5445,67,98,39};
    int l=0;
    int h=12;
   int mid=6;
   sort(arr,l,mid,h);
}