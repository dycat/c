#include <stdio.h>

#define N 10

void selection_sort(int arr[]) {
    int i, j, temp;

    for (i=N; i > 0 ;i--) {
        int max = i;
        for (j=N-1; j > 0 ;j--) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        if (max != i) {
            swap(arr[max], arr[i]);
        }
    }

}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[N], i;
    
    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr);

    printf("In sorted order: ");
    for (i = 0; i < N; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");

}