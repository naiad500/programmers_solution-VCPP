#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int ii;
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for (ii = 0; ii < completion.size(); ii++)
    {
        if (participant[ii] != completion[ii])
            break;
    }
    
    answer = participant[ii];
    
    return answer;
}
