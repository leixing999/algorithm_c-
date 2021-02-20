#include "InsertSort.h"

template<class T>
InsertSort<T>::InsertSort() {

}
/// <summary>
/// ���������壺
/// ������i+1��ȡ��һ��Ԫ������ߡ�0��i�����бȽ�����
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">�����������</param>
/// <param name="n">���鳤��</param>
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