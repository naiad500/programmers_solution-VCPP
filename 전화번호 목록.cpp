#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for (int ii =0; ii < phone_book.size() - 1; ii++)
    {
        if(phone_book[ii+1].find(phone_book[ii]) == 0)
        {
            answer = false;
            break;
        }
        
    }
    return answer;
}
