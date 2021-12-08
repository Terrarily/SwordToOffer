#include <iostream>
#include <string>
using namespace std;

class Anagram {
    public:
        int obj[26] = {0};
        bool isAnagram(string s,string t) {
            for (int i = 0; i < s.size(); i++)
            {
                obj[s[i] - 'a']++;
            }
            for (int i = 0; i < t.size(); i++)
            {
                obj[t[i] - 'a']--;
            }
            for (int i = 0; i < 26; i++)
            {
                if (obj[i] != 0)
                {
                    return false;
                }
            }
            return true;               
        }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
