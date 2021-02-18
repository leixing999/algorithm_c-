#include "BubbleBase.h"

template<class T>
BubbleBase<T>::BubbleBase() {

}
/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">�����������</param>
/// <param name="currentIdex">��ǰð������</param>
template<class T>
void BubbleBase<T>::bubble(T dataArr[], int currentIdex) {
	for (int i = 0; i < currentIdex; i++) {
		if (dataArr[i] > dataArr[i+1]) {
			swap(dataArr[i], dataArr[i + 1]);
		}
	}
}
/// <summary>
/// ð�������壺
/// ð������ĺ����ǽ����Ԫ���ƶ�����������ұߣ�
/// ������ڵ�����Ԫ��a[i]����a[i+1]����������ݽ�����
/// </summary>
/// <param name="dataArr">�����������</param>
/// <param name="currentIdex">��ǰð������</param>
template<class T>
void BubbleBase<T>::bubbleSort(T dataArr[], int n) {
	for (int i = n - 1; i > 1; i--) {
		this->bubble(dataArr, i);
	}
}

/// <summary>
///  ð������(�Ż�����
/// �����˶Բ��ֻ�����ȫ�Ѿ�˳�������������м�ʱ��ֹ�ж�
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">�����������</param>
/// <param name="currentIdex">��ǰð������</param>
/// <returns></returns>
template<class T>
bool BubbleBase<T>::optimizeBubble(T dataArr[], int currentIdex) {
	//�����ȫ�����򷵻�false����ʱ��ֹ�������У���Ϊ�Ѿ�����
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