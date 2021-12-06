#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int ii;
    /* 정렬 */
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    /* 비교 */
    for (ii = 0; ii < completion.size(); ii++)
    {
        if (participant[ii] != completion[ii])
            break;
    }

    /* 결과 */
    answer = participant[ii];
    
    return answer;
}
