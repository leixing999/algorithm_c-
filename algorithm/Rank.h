#pragma once
template<class T>
class Rank
{
public:
	 Rank();
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
	 void computeRank(T dataArr[],int n,int dataRank[]);
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
	 void computeRankSort(T dataArr[], int n, int dataRank[]);


};

