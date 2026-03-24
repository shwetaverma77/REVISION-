#include <vector>
#include <algorithm>
using namespace std;

// Time: O(n^2), Space: O(1)
void selectionSort(vector<int>& arr, int &count) {
    int n = arr.size();

    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            count++;

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[i], arr[minIndex]);
    }
}
