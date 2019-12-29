#include <iostream>
#include <vector>
// #include <unordered_map> // needed for solution #1
#include <algorithm> // needed for solution #3

using namespace std;

// solution #1
/*
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> a;
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.find(target - nums[i]) != a.end())
				return { i, a[target - nums[i]] };
			a[nums[i]] = i;
		}
		return { 0, 0 };
	}
};
*/


//solution #2 
/*
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int a = nums.size();
		vector<int> solution = {0,0};
		unsigned int i,j;


		if (nums.empty())
		{
			return solution;
		}


		for (i=0; i<a; i++){
			for (j=0; j<a; j++){
				if ((i != j) && ((nums[i]+nums[j])==target)){
					solution[0] = j;
					solution[1] = i;
				}
			}
		}
 return solution;
	}
};
*/

//solution 3 Working

class solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int a = nums.size();
		vector<int> iterations = { 0,0 };
		vector<int>::iterator iter;

		unsigned int i;
		for (i = 0; i < a; i++) {
			if (binary_search(nums.begin(), nums.end(), target - nums[i]))
			{
				iterations[0] = i;
				iter = find(nums.begin(), nums.end(), (target - nums[i]));
				iterations[1] = *iter;
			}
		}
		return iterations;
	}
};



int main(){
	solution A;
	vector<int> array = {2,3,3,6,1 };
	int sum = 7;
	vector<int> B = A.twoSum(array, sum);
	for (int count = 0; count < B.size(); count++)
		cout << B[count] << " ";
	cout << endl;
	system("pause");
}