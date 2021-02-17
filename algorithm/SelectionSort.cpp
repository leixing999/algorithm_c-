#include<iostream>
#include "SelectionSort.h"
template<class T>
SelectionSort<T>::SelectionSort() {

}
/// <summary>
/// ��ͳ��ѡ������
/// ѡ������ĺ��壺
/// ͨ��ѭ��ÿ��ѡ��һ�����������ڴ����������ĺ���
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">�����������</param>
/// <param name="size">�����С</param>
template<class T>
void SelectionSort<T>::tranditionSelectionSort(T dataArr[], int size) {

	for (int i = size; i > 1; i--) {
		//ͨ����������maxIndex ��ǰ������0����
		int maxIndex = 0;
		//�ҳ�i������������
		for (int j = 1; j < i; j++) {
			if (dataArr[maxIndex] <= dataArr[j]) {
				maxIndex = j;

			}
		}
		//������������
		swap(dataArr[maxIndex], dataArr[i - 1]);

	}
}
/// <summary>
/// �Ż���ѡ�������㷨
/// ͨ�����ӿ��Ʊ�������¼ѭ���Ƿ񲿷ֻ���ȫ������
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">�����������</param>
/// <param name="size">�����С</param>
template<class T>
void SelectionSort<T>::optimizeSelectionSort(T dataArr[], int size) {
	//�����Ƿ�ʣ������������Ƿ�����
	bool isEnd = false;
	for (int i = size; i > 1 && !isEnd; i--) {
		//ͨ����������maxIndex ��ǰ������0����
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