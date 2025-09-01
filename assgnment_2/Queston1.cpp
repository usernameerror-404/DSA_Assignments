#include<iostream>
using namespace std;

int bnarysearch(int arr[], int n, int targetnumber){
    int start = 0, end = n-1;
    while(start<=end){
        int middle = (start+ end)/2;

        if (arr[middle] == targetnumber){
            return middle;
        }
        else if(arr[middle]<targetnumber){
            start = middle + 1;
        }
        else{
            end = middle-1;
        }
    }
    return -1; //f element s not found return -1

}


int main() {
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    int target;

    cout << "Enter the number you want to search: ";
    cin >> target;

    int result = bnarysearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "error element not found" << endl;
    }

    return 0;
}

