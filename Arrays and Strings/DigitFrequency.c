// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s;
    int frequency[10] = {};
    int ASCII_ZERO = 48;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 0; s[i] != '\0'; i++) {
        if(s[i] <= 57 && s[i] >= 48){
            frequency[s[i] - ASCII_ZERO]++;
        }
    }
    for (int j = 0; j < 10; j++) {
        printf("%d ", frequency[j]);
    }
    return 0;
}
