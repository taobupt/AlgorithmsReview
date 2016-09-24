#include"Header.h"
#include"TrapRainWater.h"
#include"SpiralMatrix.h"
#include"MergeInterval.h"
int main()
{
	
	
	
	/*vector<int>v{ 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	cout<<trap(v)<<endl;
	cout << trap1(v) << endl;*/




	vector<vector<int>>res{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	spiralOrder(res);
	return 0;
}