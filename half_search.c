#include <stdio.h>

int half_search(int *num,int numsSize,int target) {
    int left = 0;
    int right = numsSize - 1;
    int midle;
    while (left <= right) {
        midle = left + (right - left) / 2;
        if (target < num[midle]) {
            right = midle - 1;
        } else if (target > num[midle]) {
            left = midle + 1;
        } else if (target == num[midle]) {
            return midle;
        }
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    int re = half_search(num,10,9);
    printf("re = %d\n",re);
    return 0;
}

