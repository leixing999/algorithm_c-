#include<iostream>
#include"Rank.cpp"
using namespace std;
int main() {
	int dataArr[5] = { 4,3,9,3,7 };
	int dataRank[5] = { 0 };
	int n = 5;
	Rank<int>*rank = new Rank<int>();
	//rank->computeRankSortResult(5);
	rank->computeRank(dataArr, n, dataRank);
	rank->rearRangeRank(dataArr, n, dataRank);
	for (int i = 0; i < n; i++) {
		cout << dataArr[i] << endl;
	}
	
	return 0;
}