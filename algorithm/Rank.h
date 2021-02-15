#pragma once
template<class T>
class Rank
{
public:
	 Rank();
	 /// <summary>
	 /// 计算数据数组的名次【总的比较次数(n-1)n/2】
	 /// 
	 /// 名次计算的含义：
	 ///  一个元素在一个序列的名次是所有的比他小的元素个数
	 ///  加上在它左边出现与它相同元素个数之和；
	 /// </summary>
	 /// <typeparam name="T"></typeparam>
	 /// <param name="dataArr">待计算的数据数组</param>
	 /// <param name="n">数组长度</param>
	 /// <param name="dataRank">数据数组的名次结果数组</param>
	 void computeRank(T dataArr[],int n,int dataRank[]);
	/// <summary>
	/// 按照名次计算的结果，对原始数据数组进行排序【2n次元素移动】
	/// 
	/// 名次计数排序的含义：
	/// 通过一个附加数组实现了对名次计算结果对原始数据的
	/// 重新排序
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">待计算的数据数组</param>
	/// <param name="n">数组长度</param>
	/// <param name="dataRank">数据数组的名次结果数组</param>
	 void computeRankSort(T dataArr[], int n, int dataRank[]);


};

