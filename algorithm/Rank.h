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
	 /// <summary>
	 /// ���μ����Լ�������Ժ���
	 /// </summary>
	 /// <param name="n"></param>
	 void computeRankSortResult(T n);
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
	 void rearRangeRank(T dataArr[], int n, int dataRank[]);

};

