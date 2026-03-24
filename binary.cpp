#include <vector>
using namespace std;

// Time: O(log n), Space: O(1)

int binarySearch(vector<int>& arr, int key, int &count) {
    int l = 0, r = arr.size() - 1;

    while(l <= r) {
        count++;
        int mid = (l + r) / 2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
