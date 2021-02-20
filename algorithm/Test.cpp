#include<iostream>
#include"Rank.cpp"
#include"SelectionSort.cpp"
#include"BubbleBase.cpp"
#include"InsertSort.cpp"
using namespace std;
int main() {
	int dataArr[9] = { 12,2,34,4,23,89,7,8,9};
	int dataRank[5] = { 0 };
	int n = 9;
	/*Rank<int>*rank = new Rank<int>();
	//rank->computeRankSortResult(5);
	rank->computeRank(dataArr, n, dataRank);
	rank->rearRangeRank(dataArr, n, dataRank);
	for (int i = 0; i < n; i++) {
		cout << dataArr[i] << endl;
	}*/

	//SelectionSort<int>* sort = new SelectionSort<int>();
	//sort->tranditionSelectionSort(dataArr, 9);

	//sort->optimizeSelectionSort(dataArr, 9);

	//BubbleBase<int>* bubbleBase = new BubbleBase<int>();

	//bubbleBase->bubbleSort(dataArr, n);
//	bubbleBase->optimizeBubbleSort(dataArr, 9);

	/*for (int i = 0; i < n; i++) {
		cout << dataArr[i] << endl;
	}*/

	InsertSort<int>* inseretSort = new InsertSort<int>();
	inseretSort->insert(dataArr, n);

	for (int i = 0; i < n; i++) {
		cout << dataArr[i] << endl;
	}

	delete inseretSort;
	
	return 0;
}