#include <iostream>
using namespace std;
void subarraysum1(int *arr, int n){
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int cuusum = 0;
            for(int k = i; k <= j; k++){
                cuusum += arr[k];
            }
            // cout << cuusum <<",";
            maxsum = max(maxsum, cuusum);
            // cout << maxsum;
        }
        // cout << maxsum ;
        cout << endl;
    }
    cout << maxsum << endl;
}
int main () {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    subarraysum1(arr, n);
    return 0;
}