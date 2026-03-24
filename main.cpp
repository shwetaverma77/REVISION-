 #include <iostream>
#include <vector>
#include <chrono>
using namespace std;

// Function Declarations
void bubbleSort(vector<int>& arr, int &count);
void selectionSort(vector<int>& arr, int &count);
void insertionSort(vector<int>& arr, int &count);
void mergeSort(vector<int>& arr, int l, int r, int &count);
int binarySearch(vector<int>& arr, int key, int &count);

// Print function
void printArray(vector<int>& arr) {
    for(int x : arr) cout << x << " ";
    cout << endl;
}

int main() {

    vector<int> arr = {5, 2, 9, 1, 3};

    cout << "Input: ";
    printArray(arr);

    // 🔹 Bubble Sort
    vector<int> a1 = arr;
    int c1 = 0;

    auto s1 = chrono::high_resolution_clock::now();
    bubbleSort(a1, c1);
    auto e1 = chrono::high_resolution_clock::now();

    cout << "\nBubble Sort: ";
    printArray(a1);
    cout << "Iterations: " << c1 << endl;
    cout << "Time: "
         << chrono::duration_cast<chrono::nanoseconds>(e1 - s1).count()
         << " ns\n";

    // 🔹 Selection Sort
    vector<int> a2 = arr;
    int c2 = 0;

    auto s2 = chrono::high_resolution_clock::now();
    selectionSort(a2, c2);
    auto e2 = chrono::high_resolution_clock::now();

    cout << "\nSelection Sort: ";
    printArray(a2);
    cout << "Iterations: " << c2 << endl;
    cout << "Time: "
         << chrono::duration_cast<chrono::nanoseconds>(e2 - s2).count()
         << " ns\n";

    // 🔹 Insertion Sort
    vector<int> a3 = arr;
    int c3 = 0;

    auto s3 = chrono::high_resolution_clock::now();
    insertionSort(a3, c3);
    auto e3 = chrono::high_resolution_clock::now();

    cout << "\nInsertion Sort: ";
    printArray(a3);
    cout << "Iterations: " << c3 << endl;
    cout << "Time: "
         << chrono::duration_cast<chrono::nanoseconds>(e3 - s3).count()
         << " ns\n";

    // 🔹 Merge Sort
    vector<int> a4 = arr;
    int c4 = 0;

    auto s4 = chrono::high_resolution_clock::now();
    mergeSort(a4, 0, a4.size()-1, c4);
    auto e4 = chrono::high_resolution_clock::now();

    cout << "\nMerge Sort: ";
    printArray(a4);
    cout << "Iterations: " << c4 << endl;
    cout << "Time: "
         << chrono::duration_cast<chrono::nanoseconds>(e4 - s4).count()
         << " ns\n";

    // 🔹 Binary Search (on sorted array)
    int c5 = 0;
    int key = 3;

    int index = binarySearch(a4, key, c5);

    cout << "\nBinary Search (" << key << "): Index = " << index << endl;
    cout << "Iterations: " << c5 << endl;

    return 0;
}
