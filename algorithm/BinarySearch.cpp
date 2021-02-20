#include "BinarySearch.h"

template<class T>
BinarySearch<T>::BinarySearch() {

}

/// <summary>
/// 折半查找的含义：
/// 通过对查找元素，分别从数组的left 和right 取中间数（left+right)/2 进行比较查找，
/// 直到找到符合的值，否则返回-1.
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="sortedDataArr">已排序好的数组</param>
/// <param name="search">待查询的值</param>
/// <param name="n">数组长度</param>
/// <returns></returns>
template<class T>
int BinarySearch<T>::search(T sortedDataArr[], T search, int n) {
	int left = 0;
	int right = n - 1;
	int middle = 0;
	//int middle = (left + right) / 2;
	while (left <= right) {
		middle = (right + left) / 2;

		if (search == sortedDataArr[middle]) {
			return middle;
		}
		if (search > sortedDataArr[middle]) {
			left = middle + 1;
		}
		else {
			right = middle - 1;
		}


	}

	return -1;



}