#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

// https://leetcode.com/problems/reverse-words-in-a-string-iii/

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    string reverseWords(string s) {
        auto start = s.begin();
        auto curr = start;
        while (curr != s.end()) {
            if (*curr != ' ')
                ++curr;
            else {
                reverse(start, curr);
                ++curr;
                start = curr;
            }
        }
        reverse(start, curr);
        return s;
    }

//    string reverseWords(string s) {
//        istringstream in(s);
//        ostringstream out;
//        string word;
//        bool first = true;
//        while (in >> word) {
//            if (!first)
//                out << " ";
//            reverse(word.begin(), word.end());
//            out << word;
//            first = false;
//        }
//        return out.str();
//    }
};

void test1() {
    string s = "Let's take LeetCode contest";

    cout << "s'teL ekat edoCteeL tsetnoc ? \n" << Solution().reverseWords(s) << endl;
}

void test2() {

}

void test3() {

}