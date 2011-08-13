#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;



class MagicalGirlLevelTwoDivTwo {
public:

	
	bool dfs(queue<pair<int, int> > q, vector<vector<bool> > visited, vector<int> jT, int x, int y)
	{
		
		
		while(!q.empty())
		{
			pair<int, int> p = q.front();
			q.pop();

			if(p.first == x && p.second == y)
				return true;
			else
			{

				for(int i=0;i<jT.size();i++)
				{
					int N=jT[i];
					pair<int, int> p1, p2, p3, p4, p5, p6, p7, p8;
					p1.first = p.first+N;
					p1.second = p.second+1;
					p2.first = p.first+N;
					p2.second = p.second-1;
					p3.first = p.first+1;
					p3.second = p.second+N;
					p4.first = p.first-1;
					p4.second = p.second+N;
					p5.first = p.first-N;
					p5.second = p.second+1;
					p6.first = p.first-N;
					p6.second = p.second-1;
					p7.first = p.first+1;
					p7.second = p.second-N;
					p8.first = p.first-1;
					p8.second = p.second-N;


					if(p1.first>=0 && p1.second>=0 && p1.first<=60 && p1.second<=60 && !visited[p1.first][p1.second])
					{	

						q.push(p1);
						visited[p1.first][p1.second] = true;
					}
					if(p2.first>=0 && p2.second>=0 && p2.first<=60 && p2.second<=60 && !visited[p2.first][p2.second])
					{	
						q.push(p2);
						visited[p2.first][p2.second] = true;
					}
					if(p3.first>=0 && p3.second>=0 && p3.first<=60 && p3.second<=60 && !visited[p3.first][p3.second])
					{	
						q.push(p3);
						visited[p3.first][p3.second] = true;
					}
					if(p4.first>=0 && p4.second>=0 && p4.first<=60 && p4.second<=60 && !visited[p4.first][p4.second])
					{	
						q.push(p4);
						visited[p4.first][p4.second] = true;
					}
					if(p5.first>=0 && p5.second>=0 && p5.first<=60 && p5.second<=60 && !visited[p5.first][p5.second])
					{	
						q.push(p5);
						visited[p5.first][p5.second] = true;
					}
					if(p6.first>=0 && p6.second>=0 && p6.first<=60 && p6.second<=60 && !visited[p6.first][p6.second])
					{	
						q.push(p6);
						visited[p6.first][p6.second] = true;
					}
					if(p7.first>=0 && p7.second>=0 && p7.first<=60 && p7.second<=60 && !visited[p7.first][p7.second])
					{	
						q.push(p7);
						visited[p7.first][p7.second] = true;
					}
					if(p8.first>=0 && p8.second>=0 && p8.first<=60 && p8.second<=60 && !visited[p8.first][p8.second])
					{	
						q.push(p8);
						visited[p8.first][p8.second] = true;
					}
					
				}
			}
		}
		return false;
		
	}
	
	string isReachable(vector <int> jT, int x, int y) {
	
	x+=30;
	y+=30;

	vector<vector<bool> > visited(100, vector<bool>(100, false));
	queue<pair<int, int> > q;
	
	q.push(make_pair(30, 30));
	visited[30][30] = true;
	if(dfs(q, visited, jT, x, y))
		return "YES";
	else
		return "NO";
		
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, vector <int> p0, int p1, int p2, bool hasAnswer, string p3) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}" << "," << p1 << "," << p2;
	cout << "]" << endl;
	MagicalGirlLevelTwoDivTwo *obj;
	string answer;
	obj = new MagicalGirlLevelTwoDivTwo();
	clock_t startTime = clock();
	answer = obj->isReachable(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p3 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p3;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <int> p0;
	int p1;
	int p2;
	string p3;
	
	{
	// ----- test 0 -----
	int t0[] = {2};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	p2 = 4;
	p3 = "YES";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {3};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 5;
	p2 = 4;
	p3 = "NO";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {1,2,3,4,5,6,7,8,9,10};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = -30;
	p2 = 27;
	p3 = "YES";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {29};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = 29;
	p2 = 0;
	p3 = "NO";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
