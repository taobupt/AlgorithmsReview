#include"Header.h"
int trap(vector<int>nums)
{
	int left = 0, right = nums.size() - 1,res=0,maxleft=0,maxright=0;
	while (left <= right)
	{
		if (nums[left] <= nums[right])
		{
			if (maxleft <= nums[left])maxleft = nums[left];
			else res += maxleft - nums[left];
			left++;
		}
		else
		{
			if (maxright <= nums[right])maxright = nums[right];
			else res += maxright - nums[right];
			right--;
		}
	}
	return res;
}


// another solution
int trap1(vector<int>& height)
{
	int n = height.size(), res = 0;
	vector<int>left(n, 0);
	vector<int>right(n, 0);
	for (int i = 1, j = n - 2; i < n; ++i, --j)
	{
		left[i] = max(left[i - 1], height[i - 1]);
		right[j] = max(right[j + 1], height[j + 1]);
	}

	for (int i = 0; i < n; ++i)
	{
		int minValue = min(left[i], right[i]);
		if (minValue>height[i])res += minValue - height[i];
	}
	return res;
}