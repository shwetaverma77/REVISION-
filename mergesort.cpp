
#include <vector>
using namespace std;

// Time: O(n log n), Space: O(n)

void merge(vector<int>& arr, int l, int m, int r, int &count) {
    vector<int> temp;
    int i = l, j = m+1;

    while(i <= m && j <= r) {
        count++;
        if(arr[i] < arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while(i <= m) temp.push_back(arr[i++]);
    while(j <= r) temp.push_back(arr[j++]);

    for(int k = 0; k < temp.size(); k++)
        arr[l+k] = temp[k];
}

void mergeSort(vector<int>& arr, int l, int r, int &count) {
    if(l >= r) return;

    int mid = (l+r)/2;

    mergeSort(arr, l, mid, count);
    mergeSort(arr, mid+1, r, count);

    merge(arr, l, mid, r, count);
}
