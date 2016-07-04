class Solution {
public:
    bool isValidSerialization(string preorder) {
        istringstream iss(preorder);
        string tmp;
        vector<string> vec;
        while(getline(iss, tmp, ','))
        	vec.push_back(tmp);
        int nullCnt = 0, nodeCnt = 0;        
        for(int i = 0;i < vec.size(); i++) {
        	if(vec[i] == "#")
        		nullCnt++;
        	else
        		nodeCnt++;
        	if(nullCnt >= nodeCnt + 1 && i != vec.size() - 1)
        		return false;
        }
        return nullCnt == nodeCnt + 1;
    }
};