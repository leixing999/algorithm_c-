#include "BinarySearch.h"

template<class T>
BinarySearch<T>::BinarySearch() {

}

/// <summary>
/// �۰���ҵĺ��壺
/// ͨ���Բ���Ԫ�أ��ֱ�������left ��right ȡ�м�����left+right)/2 ���бȽϲ��ң�
/// ֱ���ҵ����ϵ�ֵ�����򷵻�-1.
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="sortedDataArr">������õ�����</param>
/// <param name="search">����ѯ��ֵ</param>
/// <param name="n">���鳤��</param>
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