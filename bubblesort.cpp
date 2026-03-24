 #include <vector>
#include <algorithm>
using namespace std;

// Time: O(n^2), Space: O(1)
void bubbleSort(vector<int>& arr, int &count) {
    int n = arr.size();

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            count++;

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
