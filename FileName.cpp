#include <stdio.h>  

int main() {
    int orderedArray[] = { 1, 3, 5, 7, 9 }; // ����һ���������е���������  
    int size = sizeof(orderedArray) / sizeof(orderedArray[0]);

    // ��ӡ��������  
    for (int i = 0; i < size; i++) {
        printf("%d ", orderedArray[i]);
    }
    printf("\n");

    return 0;
}
