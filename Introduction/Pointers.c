// https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int tmp = *b;
    if(*a > *b){
        *b = *a - *b;
    }else{
        *b = *b - *a;
    }
    *a = *a + tmp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}