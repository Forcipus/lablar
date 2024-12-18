#include <stdio.h>

void my_sort (int a[] , int low, int high);
int divide (int a[] , int low, int high);

int main(void){

    int size;

    scanf("%d", &size);

    int arr[size];

    int high = size;
    int low = size;

    for (int i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
    
    puts("\n");

    my_sort(arr, 0, size -1);
    divide(arr, low, high);

    for(int i = 0; i < high; ++i){
        printf("%d ", arr[i]);
    }
}

void my_sort (int arr[] , int low, int high) {
    for (int k = 0; k < high; ++k) {
        int swapped = 0;
        for (int i = 0; i < high; ++i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
    if (swapped == 0){
      break;
        }
    }
}
int divide(int arr[] , int low, int high){
    int mid_element = arr[0];
}