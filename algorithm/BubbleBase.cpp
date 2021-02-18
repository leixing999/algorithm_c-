#include "BubbleBase.h"

template<class T>
BubbleBase<T>::BubbleBase() {

}
/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">待排序的数组</param>
/// <param name="currentIdex">当前冒泡索引</param>
template<class T>
void BubbleBase<T>::bubble(T dataArr[], int currentIdex) {
	for (int i = 0; i < currentIdex; i++) {
		if (dataArr[i] > dataArr[i+1]) {
			swap(dataArr[i], dataArr[i + 1]);
		}
	}
}
/// <summary>
/// 冒泡排序定义：
/// 冒泡排序的含义是将最大元素移动到数组的最右边，
/// 如果相邻的两个元素a[i]大于a[i+1]，则进行数据交换。
/// </summary>
/// <param name="dataArr">待排序的数组</param>
/// <param name="currentIdex">当前冒泡索引</param>
template<class T>
void BubbleBase<T>::bubbleSort(T dataArr[], int n) {
	for (int i = n - 1; i > 1; i--) {
		this->bubble(dataArr, i);
	}
}

/// <summary>
///  冒泡排序(优化）：
/// 增加了对部分或者完全已经顺序排序的数组进行及时终止判断
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">待排序的数组</param>
/// <param name="currentIdex">当前冒泡索引</param>
/// <returns></returns>
template<class T>
bool BubbleBase<T>::optimizeBubble(T dataArr[], int currentIdex) {
	//如果完全有序则返回false，及时终止待排序列，因为已经有序。
	bool sorted = false;
	int j = 0;
	for (int i = 0; i < currentIdex; i++) {
		if (dataArr[i] > dataArr[i+1]) {
			swap(dataArr[i], dataArr[i + 1]);
			sorted = true;
		}
		
	}
	
	return sorted;
}


template<class T>
void BubbleBase<T>::optimizeBubbleSort(T dataArr[], int n) {
	for (int i = n - 1; i > 1&& optimizeBubble(dataArr, i); i--) {
		
	}
}