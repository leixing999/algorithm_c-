#pragma once
template<class T>
class BubbleBase
{
public:
	BubbleBase();
	/// <summary>
	/// 冒泡排序定义：
	/// 冒泡排序的含义是将最大元素移动到数组的最右边，
	/// 如果相邻的两个元素a[i]大于a[i+1]，则进行数据交换。
	/// </summary>
	/// <param name="dataArr">待排序的数组</param>
	/// <param name="currentIdex">当前冒泡索引</param>
	void bubbleSort(T dataArr[],int n);
	/// <summary>
	/// 冒泡排序定义：
	/// 冒泡排序的含义是将最大元素移动到数组的最右边，
	/// 如果相邻的两个元素a[i]大于a[i+1]，则进行数据交换。
	/// </summary>
	/// <param name="dataArr">待排序的数组</param>
	/// <param name="currentIdex">当前冒泡索引</param>
	void bubble(T dataArr[], int currentIndex);

	/// <summary>
	///  冒泡排序(优化）：
	/// 增加了对部分或者完全已经顺序排序的数组进行及时终止判断
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">待排序的数组</param>
	/// <param name="currentIdex">当前冒泡索引</param>
	/// <returns></returns>
	void optimizeBubbleSort(T dataArr[], int n);
	/// <summary>
	///  冒泡排序(优化）：
	/// 增加了对部分或者完全已经顺序排序的数组进行及时终止判断
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="dataArr">待排序的数组</param>
	/// <param name="currentIdex">当前冒泡索引</param>
	/// <returns></returns>
	bool optimizeBubble(T dataArr[], int n);

};

