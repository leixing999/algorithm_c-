#pragma once
template<class T>
class SelectionSort
{
public:
	SelectionSort();
	/// <summary>
	/// ��ͳ��ѡ������
	/// ѡ������ĺ��壺
	/// ͨ��ѭ��ÿ��ѡ��һ�����������ڴ����������ĺ���
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">�����������</param>
	/// <param name="size">�����С</param>
	void tranditionSelectionSort(T dataArr[],int size);

	void optimizeSelectionSort(T dataArr[], int size);

};

