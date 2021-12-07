#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string,int> map;

    for (int ii = 0; ii < phone_book.size(); ii++)
        map[phone_book[ii]] = 1;
    
    for (int ii = 0; ii < phone_book.size(); ii++)
    {
        for (int jj = 1; jj < phone_book[ii].size(); jj++)
        {
            string num = phone_book[ii].substr(0,jj);
            if (map[num] != 0)
                return false;
        }
    }

    return true;
}
