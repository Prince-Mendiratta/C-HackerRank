// https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int *temp = (int*) malloc(num * sizeof(int));
    for (int j = num-1; j >= 0; j--) {
        temp[num-j-1] = arr[j];
    }
    arr = NULL;
    arr = temp;
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

/* Better Sol -
for (size_t i = 0, mid = num / 2; i < mid; i++) {
    int tmp = arr[i];
    arr[i] = arr[num - 1 - i];
    arr[num - 1 - i] = tmp;
}
*/