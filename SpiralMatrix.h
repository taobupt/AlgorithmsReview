#include"Header.h"
vector<int>spiralOrder(vector<vector<int>>& matrix)
{
	vector<int>res;
	if (matrix.empty() || matrix[0].empty())return res;
	int m = matrix.size(), n = matrix[0].size();
	vector<vector<bool>>vis(m,vector<bool>(n,false));
	res.push_back(matrix[0][0]);
	vis[0][0] = true;
	int x = 0, y = 0;
	while (int(res.size()) < m*n)
	{
		while (y + 1 < n && !vis[x][y + 1])
		{
			res.push_back(matrix[x][++y]);
			vis[x][y] = true;
		}
		while (x + 1 < m && !vis[x+1][y])
		{
			res.push_back(matrix[++x][y]);
			vis[x][y] = true;
		}
		while (y-1>=0 && !vis[x][y - 1])
		{
			res.push_back(matrix[x][--y]);
			vis[x][y] = true;
		}
		while (x-1>=0 && !vis[x-1][y])
		{
			res.push_back(matrix[--x][y]);
			vis[x][y] = true;
		}
	}
	return res;
}