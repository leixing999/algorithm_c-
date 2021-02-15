#include<iostream>
#include"Rank.cpp"
using namespace std;
int main() {
	int dataArr[5] = { 4,3,9,3,7 };
	int dataRank[5] = { 0 };
	int n = 5;
	Rank<int>*rank = new Rank<int>();
	rank->computeRank(dataArr, n, dataRank);
	for (int i = 0; i < 5; i++) {
		cout << dataRank[i] << endl;
	}

	rank->computeRankSort(dataArr, n, dataRank);
	cout << "----------------" << endl;

	for (int i = 0; i < 5; i++) {
		cout << dataArr[i] << endl;
	}

	return 0;
}