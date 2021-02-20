#include "InsertSort.h"

template<class T>
InsertSort<T>::InsertSort() {

}
/// <summary>
/// 插入排序含义：
/// 从数组i+1出取得一个元素与左边【0，i】进行比较排序
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">待排序的数组</param>
/// <param name="n">数组长度</param>
template<class T>
void InsertSort<T>::insert(T dataArr[], int n) {

	for (int i = 1; i < n; i++) {
		T u = dataArr[i];
		int j = 0;
		for ( j = i-1; j >=0 && u<dataArr[j]; j--) {
			dataArr[j + 1] = dataArr[j];
		}
		dataArr[j + 1] = u;
	}


}