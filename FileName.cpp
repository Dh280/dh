#include <stdio.h>  

int main() {
    int orderedArray[] = { 1, 3, 5, 7, 9 }; // 这是一个升序排列的有序数组  
    int size = sizeof(orderedArray) / sizeof(orderedArray[0]);

    // 打印有序数组  
    for (int i = 0; i < size; i++) {
        printf("%d ", orderedArray[i]);
    }
    printf("\n");

    return 0;
}
