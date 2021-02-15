#include<iostream>
#include "Rank.h"
using namespace std;
/// <summary>
/// ����������������Ρ��ܵıȽϴ���(n-1)n/2��
/// 
/// ���μ���ĺ��壺
///  һ��Ԫ����һ�����е����������еı���С��Ԫ�ظ���
///  ����������߳���������ͬԪ�ظ���֮�ͣ�
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">���������������</param>
/// <param name="n">���鳤��</param>
/// <param name="dataRank">������������ν������</param>
template<class T>
void Rank<T>::computeRank(T dataArr[], int n, int dataRank[]) {
	/**������������г�ʼ��**/
	for (int i = 0; i < n; i++) {
		dataRank[i] = 0;
	}

	/**�������μ���**/
	for (int i = 1; i < n; i++) {

		for (int j = 0; j < i; j++) {
			if (dataArr[j] <= dataArr[i]) {
				dataRank[i]++;
			}
			else {
				dataRank[j]++;
			}
		}
	}

}
/// <summary>
/// �������μ���Ľ������ԭʼ���������������2n��Ԫ���ƶ���
/// 
/// ���μ�������ĺ��壺
/// ͨ��һ����������ʵ���˶����μ�������ԭʼ���ݵ�
/// ��������
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">���������������</param>
/// <param name="n">���鳤��</param>
/// <param name="dataRank">������������ν������</param>
template<class T>
void Rank<T>::computeRankSort(T dataArr[], int n, int dataRank[]) {
	T* tempDataArr = new T[n];
	/*�����������ֵ�ƶ���tempDataArr����ȷ��λ��*/
	for (int i = 0; i < n; i++) {
		tempDataArr[dataRank[i]] = dataArr[i];
	}
	/*��U�е�Ԫ�������ƶ���ԭʼ����������dataArr*/
	for (int i = 0; i < n; i++) {
		dataArr[i] = tempDataArr[i];
	}

	delete[]tempDataArr;
}
/// <summary>
/// ���μ����Լ�������Ժ���
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="f"></param>
template<class T>
void Rank<T>::computeRankSortResult(T f) {
	int dataArr[5] = { 4,3,9,3,7 };
	int dataRank[5] = { 0 };
	int n = 5;
	Rank<int>* rank = new Rank<int>();
	rank->computeRank(dataArr, n, dataRank);
	for (int i = 0; i < 5; i++) {
		cout << dataRank[i] << endl;
	}

	rank->computeRankSort(dataArr, n, dataRank);
	cout << "----------------" << endl;

	for (int i = 0; i < 5; i++) {
		cout << dataArr[i] << endl;
	}
}

/// <summary>
/// ԭ�����ź���
/// ԭ�����ź����Ķ����ǣ�
/// ������i=0��ʼ��������dataArr[i],�������dataRank[i]=i��i��1��Ȼ�����µ�����
/// �����һ������Ԫ�أ����dataRank[i]������i��������i��dataRank[i]������Ԫ�ؽ��н�����
/// ͬʱdataArrҲ���н�����
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="dataArr">���������������</param>
/// <param name="n">���鳤��</param>
/// <param name="dataRank">������������ν������</param>
template<class T>
void Rank<T>::rearRangeRank(T dataArr[], int n, int dataRank[]) {
	for (int i = 0; i < n; i++) {
		while (dataRank[i] != i) {
			int r = dataRank[i];
			swap(dataArr[i], dataArr[r]);
			swap(dataRank[i], dataRank[r]);
		}
	}
}
/// <summary>
/// Ĭ�Ϲ��캯��
/// </summary>
/// <typeparam name="T"></typeparam>
template<class T>
 Rank<T>::Rank() {

}