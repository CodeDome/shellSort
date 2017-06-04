#include "stdafx.h"  
#include "stdlib.h"  
#include <iostream>  
using namespace std;
template<typename T>
void shellSort(T a[], int n) {
	     //假设步长为数组长度的一半
	      int gap = n/2;
	      int h = 1;
		  //计算步长gap的增量并按步长分组
	      while (h*gap<n) h = h*gap + 1;
		  //对每一组进行插入排序
	      while (h >= 1) {
             for (int i = 1; i<n; i++) {
	            for (int j = i; j - h >= 0 && a[j]<a[j - h]; j -= h)
	                 swap(a[j], a[j - h]);
		}
		        h /= gap;
		
	}
	
}
int main()
{
	int arr[11] = { 20,34,43,23,88,56,33,11,91,21,2 };
	shellSort(arr, 11);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}

