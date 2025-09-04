//question 8: 
#include<iostream>
#define max 100
void countunique(int arr[], int size) {
    int uniques = 0;
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniques++;
        }
    }
    std::cout << "The number of unique elements: " << uniques << std::endl;
}

int main() {
    int a[] = {3, 4, 4};
    int size = sizeof(a) / sizeof(a[0]);
    countunique(a, size);
    return 0;
}