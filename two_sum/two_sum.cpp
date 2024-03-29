
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		multimap<int, int> number;
		int place;
		for (int i = 0; i < nums.size(); i++) {
			number.insert(multimap<int, int>::value_type(nums[i], i));
		}
		for (int j = 0; j < nums.size(); j++) {
			int temp = target - nums[j];
			if (number.find(target - nums[j]) != number.end()&& (*(number.find(target - nums[j]))).second!=j)
			{
				place = (*(number.find(target - nums[j]))).second;
				result.push_back(j);
				result.push_back(place);
				return result;
			}
		}
		return result;
	}
};
int main()
{
	vector<int> nums = { 3,2,4 };
	int target = 6;
	Solution test;
	vector<int> res = test.twoSum(nums,target);
	cout << *res.begin()<<*(++res.begin());
}
