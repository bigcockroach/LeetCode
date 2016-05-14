#include <vector>
#include <iostream>

using namespace std;

class NumArray {
public:
	NumArray(vector<int> &nums): inner(nums.size() + 1, 0){
		if (nums.size() <= 0)
			return;
		inner[0] = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			inner[i] = inner[i - 1] + nums[i];
		}
	}

	int sumRange(int i, int j) {
		if (i == 0){
			return inner[j];
		}
		return inner[j] - inner[i - 1];
	}
private:
	vector<int> inner;
};

int main() {
	vector<int> tmp = { -2, 0, 3, -5, 2, -1 };
	NumArray numarry(tmp);
	cout << numarry.sumRange(0, 2) << endl;
	cout << numarry.sumRange(2, 5) << endl;
	cout << numarry.sumRange(0, 5) << endl;
}