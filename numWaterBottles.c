#include <stdio.h>

int numWaterBottles(int numBottlees,int numExchange) {
    int bottle = numBottlees;
    int ans = numBottlees;
    while (bottle >= numExchange)
    {
        bottle -= numExchange;
        bottle++;
        ans++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    printf("bottle = %d\n",numWaterBottles(9,3));
    return 0;
}
