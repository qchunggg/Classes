#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Palindrome {
    private:
        string s;
    public:
        Palindrome (string s) {
            this->s = s;
        }

        int transform (char old, char moi) {
            int cost = 0; 
            for (int i = 0; i < s.length (); i++) {
                if (s [i] == old) { 
                    s [i] = moi; 
                    cost++; 
                }
            }
            return cost; 
        }

        bool isPalindrome () {
            return s == string (s.rbegin (), s.rend ());
        }

        int minCost () {
            int cost = 0; 
            for (int i = 0; i < s.length () / 2; i++) {
                char c = s [s.length () - i - 1];
                if (s [i] != c) {
                    cost += transform (c, s [i]);
                }
            }
            return cost; 
        }
};


int main () {
    string s; 
    cin >> s;
    Palindrome p (s);
    cout << p.minCost () << endl; 
    return 0;
}