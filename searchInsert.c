#include <stdio.h>

int searchInsert(int *nums,int numSize,int target)
{
    int left = 0;
    int right = numSize - 1;
    int midle;
    while (left <= right)
    {
        midle = left + (right - left)/2;
        if (target <= nums[midle])
        {
            right = midle -1;    
        } 
        else
        {
            left = midle + 1;
        }
        
    }
    return left;
}

int main(int argc, char const *argv[])
{
    int nums[10] = {1,2,3,4,5,6,7,8,9,11};
    printf("si = %d\n",searchInsert(nums,10,0));
    printf("si = %d\n",searchInsert(nums,10,10));
    printf("si = %d\n",searchInsert(nums,10,12));
    printf("si = %d\n",searchInsert(nums,10,1));
    return 0;
}
