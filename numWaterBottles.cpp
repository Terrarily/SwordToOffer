#include <iostream>
using namespace std;

class solve {
    public:
        int numWaterBottles(int numBottles,int numExchange) {
            int bottle = numBottles;
            int ans =  numBottles;
            while (bottle >= numExchange)
            {
                bottle -= numExchange;
                bottle++;
                ans++;
            }
            return ans;
        }
};

int main(int argc, char const *argv[])
{
    solve s;
    cout << "numWaterBottles(9,3) = " << s.numWaterBottles(9,3) << endl;
    return 0;
}
