#include"Header.h"
struct Interval{
	int start;
	int end;
	Interval() :start(0), end(0){}
	Interval(int s, int e) :start(s), end(e){}
};

static bool cmp(Interval &a, Interval &b)
{
	return a.start != b.start ? a.start < b.start : a.end < b.end;
}
vector<Interval> merge(vector<Interval>& intervals) {
	sort(intervals.begin(), intervals.end(), cmp);
	int n = intervals.size();
	vector<Interval>res;
	if (n == 0)return res;
	for (int i = 1; i<n; ++i)
	{
		if (intervals[i].start>intervals[i - 1].end)res.push_back(intervals[i - 1]);
		else if (intervals[i].start <= intervals[i - 1].end && intervals[i].end >= intervals[i - 1].end)
		{
			intervals[i].start = intervals[i - 1].start;
		}
		else
		{
			intervals[i].start = intervals[i - 1].start;
			intervals[i].end = intervals[i - 1].end;
		}
	}
	res.push_back(intervals[n - 1]);
	return res;
}