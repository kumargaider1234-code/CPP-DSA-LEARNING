#include <iostream>
using namespace std;
void printarr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main () {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = n-1;
    int temp = start;
    start = end;
    end = temp;
    start++;
    end--;
    printarr(arr, n);
    return 0;
}