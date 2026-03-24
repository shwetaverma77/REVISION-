#include <vector>
using namespace std;

// Time: O(n^2) worst, O(n) best
// Space: O(1)

void insertionSort(vector<int>& arr, int &count) {
    int n = arr.size();

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            count++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
