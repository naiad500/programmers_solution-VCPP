#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    /* HASH 맵핑 */
    unordered_map<string, int> map;
    for (auto player : participant)
    {
        if (map.end() == map.find(player))
            map.insert(make_pair(player, 1));
        else
            map[player] ++;
    }
    
    /* 완주자 제거 */
    for (auto player : completion)
        map[player] --;
    
    /* 결과 */
    for (auto player : participant)
    {
        if (map[player] > 0)
        {
            answer = player;
            break;
        }
    }

    return answer;
}
