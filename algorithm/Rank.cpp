#include "Rank.h"
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
/// Ĭ�Ϲ��캯��
/// </summary>
/// <typeparam name="T"></typeparam>
template<class T>
 Rank<T>::Rank() {

}