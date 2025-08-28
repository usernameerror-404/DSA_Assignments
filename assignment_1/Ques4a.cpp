//question 4 a part: reversing elements of array


#include <stdio.h>
int main() {
    int arr[100], n, i, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n / 2; i++) {
        t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
