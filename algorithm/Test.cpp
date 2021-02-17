#include<iostream>
#include"Rank.cpp"
#include"SelectionSort.cpp"
using namespace std;
int main() {
	int dataArr[9] = { 1,2,3,4,5,6,7,8,9};
	int dataRank[5] = { 0 };
	int n = 9;
	/*Rank<int>*rank = new Rank<int>();
	//rank->computeRankSortResult(5);
	rank->computeRank(dataArr, n, dataRank);
	rank->rearRangeRank(dataArr, n, dataRank);
	for (int i = 0; i < n; i++) {
		cout << dataArr[i] << endl;
	}*/

	SelectionSort<int>* sort = new SelectionSort<int>();
	//sort->tranditionSelectionSort(dataArr, 9);

	sort->optimizeSelectionSort(dataArr, 9);

	for (int i = 0; i < n; i++) {
		cout << dataArr[i] << endl;
	}


	delete sort;
	
	return 0;
}