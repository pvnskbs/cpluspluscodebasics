#include <iostream>

using namespace std;

int getmax (int *&arr, int size){
    int a = arr[0];
    // cout << arr[0];
    for (int i=1 ; i<size;i++){
        if (a < arr[i])
            a = arr[i];
    }
    return a;
}

int getmin (int *&arr, int size){
    int a = arr[0];
    // cout << arr[0];
    for (int i=1 ; i<size;i++){
        if (a > arr[i])
            a = arr[i];
    }
    return a;
}

int main() {

    int size = 5;
    int *arr = new int[size]{1,2,3,4,5};
    cout << "Max = " << getmax(arr, size) << ", Min = " << getmin(arr, size);
    return 0;
}
