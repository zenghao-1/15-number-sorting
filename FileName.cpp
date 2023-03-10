#include <stdio.h>
int main() {
    int n = 15;
    int arr[15];
    int i, j, temp;
   
    printf("请输入15个数：\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
          // 冒泡排序
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
   
    printf("从小到大排序后的结果为：\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
