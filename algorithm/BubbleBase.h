#pragma once
template<class T>
class BubbleBase
{
public:
	BubbleBase();
	/// <summary>
	/// ð�������壺
	/// ð������ĺ����ǽ����Ԫ���ƶ�����������ұߣ�
	/// ������ڵ�����Ԫ��a[i]����a[i+1]����������ݽ�����
	/// </summary>
	/// <param name="dataArr">�����������</param>
	/// <param name="currentIdex">��ǰð������</param>
	void bubbleSort(T dataArr[],int n);
	/// <summary>
	/// ð�������壺
	/// ð������ĺ����ǽ����Ԫ���ƶ�����������ұߣ�
	/// ������ڵ�����Ԫ��a[i]����a[i+1]����������ݽ�����
	/// </summary>
	/// <param name="dataArr">�����������</param>
	/// <param name="currentIdex">��ǰð������</param>
	void bubble(T dataArr[], int currentIndex);

	/// <summary>
	///  ð������(�Ż�����
	/// �����˶Բ��ֻ�����ȫ�Ѿ�˳�������������м�ʱ��ֹ�ж�
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">�����������</param>
	/// <param name="currentIdex">��ǰð������</param>
	/// <returns></returns>
	void optimizeBubbleSort(T dataArr[], int n);
	/// <summary>
	///  ð������(�Ż�����
	/// �����˶Բ��ֻ�����ȫ�Ѿ�˳�������������м�ʱ��ֹ�ж�
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">�����������</param>
	/// <param name="currentIdex">��ǰð������</param>
	/// <returns></returns>
	bool optimizeBubble(T dataArr[], int n);

};

