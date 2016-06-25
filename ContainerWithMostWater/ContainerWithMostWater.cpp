class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        // if(height.size() < 2)
        // 	return result;
        int i = 0, j = height.size() - 1, tmp;
        while(i < j) {
        	tmp = (j - i) * min(height[i], height[j]);
        	result = max(tmp, result);
        	if(height[i] < height[j])
        		i++;
        	else
        		j--;
        }
        return result;
    }
};