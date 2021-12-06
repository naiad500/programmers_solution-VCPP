#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int ii = 0; ii < commands.size(); ii++)
    {
        /* 임시 벡터 생성 */
        vector<int> temp;
        
        /* 임시 벡터 값 삽입 */
        for (int jj = commands[ii][0] - 1; jj < commands[ii][1]; jj ++)
        {
            temp.push_back(array[jj]);
        }
        
        /* 정렬 */
        sort(temp.begin(), temp.end());
        
        /* 결과 */
        answer.push_back(temp[commands[ii][2] - 1]);
    }

    return answer;
}
