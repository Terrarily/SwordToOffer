#include <iostream>
using namespace std;

class solve {
    public:
        int my_sqrt(int x) {
            int left = 0;
            int right = x -1;
            int midle;
            int ans;
            while (left <= right)
            {
                midle = left + (right - left)/2;
                if ((long long)midle * midle <= x)
                {
                    ans = midle;
                    left = midle + 1;
                } else {
                    right = midle - 1;
                }
            }
            return ans;
        }
};

int main(int argc, char const *argv[])
{
    solve s;
    cout << "sqrt(9) = " << s.my_sqrt(9) << endl;
    return 0;
}
