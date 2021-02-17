#pragma once
template<class T>
class SelectionSort
{
public:
	SelectionSort();
	/// <summary>
	/// 传统的选择排序
	/// 选择排序的含义：
	/// 通过循环每次选择一个最大的数放在待排序的数组的后面
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">待排序的数组</param>
	/// <param name="size">数组大小</param>
	void tranditionSelectionSort(T dataArr[],int size);

	void optimizeSelectionSort(T dataArr[], int size);

};

