#include<iostream>
#include "SelectionSort.h"
template<class T>
SelectionSort<T>::SelectionSort() {

}
/// <summary>
/// 传统的选择排序
/// 选择排序的含义：
/// 通过循环每次选择一个最大的数放在待排序的数组的后面
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">待排序的数组</param>
/// <param name="size">数组大小</param>
template<class T>
void SelectionSort<T>::tranditionSelectionSort(T dataArr[], int size) {

	for (int i = size; i > 1; i--) {
		//通过设置数组maxIndex 提前将数组0排序
		int maxIndex = 0;
		//找出i中最大的数索引
		for (int j = 1; j < i; j++) {
			if (dataArr[maxIndex] <= dataArr[j]) {
				maxIndex = j;

			}
		}
		//交换排序数据
		swap(dataArr[maxIndex], dataArr[i - 1]);

	}
}
/// <summary>
/// 优化后选择排序算法
/// 通过增加控制变量来记录循环是否部分或者全部有序
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">待排序的数组</param>
/// <param name="size">数组大小</param>
template<class T>
void SelectionSort<T>::optimizeSelectionSort(T dataArr[], int size) {
	//增加是否剩余待排序数据是否有序。
	bool isEnd = false;
	for (int i = size; i > 1 && !isEnd; i--) {
		//通过设置数组maxIndex 提前将数组0排序
		int maxIndex = 0;
		isEnd = true;
		for (int j = 1; j < i; j++) {
			if (dataArr[maxIndex] <= dataArr[j]) {
				maxIndex = j;
			}
			else {
				isEnd = false;
			}
		}
		swap(dataArr[maxIndex], dataArr[i - 1]);

	}
}