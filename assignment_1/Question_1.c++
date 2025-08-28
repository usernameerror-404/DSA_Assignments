#include <stdio.h>
#define MAX 100

int arr[MAX], n = 0;

void create() {
    int i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
}

void display() {
    int i;
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void insert() {
    int pos, val, i;
    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);
    for (i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
}

void remove() {
    int pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
}



void linearSearch() {
    int val, i, f = 0;
    printf("Enter value: ");

    scanf("%d", &val);
    for (i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("Found at %d\n", i);
            f = 1;
            break;
        }
    }
    if (!f) printf("Not found\n");
}

int main() {
    int ch;
    do {
        printf("1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: create(); break;

            case 2: display(); break;

            case 3: insert(); break;

            case 4: remove(); break;

            case 5: linearSearch(); break;
        }
    } while (ch != 6);

    return 0;
}
