//Headers and Macros
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#define SETW_1 10
#define SETW_2 6
#define SETW_3 10

using namespace std;

typedef vector<int> Vint;

//利用參照取得真正的 capacity 值
void PrintVectorInfo(Vint& v)
{
	cout<<setw(SETW_1)<<"Element"<<setw(SETW_2)<<"Size";
	cout<<setw(SETW_3)<<"Capacity"<<endl;
	for ( Vint::iterator it = v.begin(); it != v.end(); it ++)
	{
		cout<<setw(SETW_1)<<(*it)<<setw(SETW_2)<<v.size();
		cout<<setw(SETW_3)<<v.capacity()<<endl;
	}
	cout<<endl;
}

//Main Function
int main(int argc, char** argv)
{
	//==START==//
	//宣告一個 vector
	Vint vint;
	//宣告兩個整數變數
	int a = 11, b = 22, c = 33;
	//建立只有一個元素空間的 vint
	//把變數 a 複製至第一個元素內
	vint.push_back(a);
	cout<<"Push Back: a = "<<a<<endl;
	//建立兩個元素空間的 vint
	//把變數 a 複製至第一個元素內
	//把變數 b 複製至第二個元素內
	//刪除上一次建立的 vint
	//上一次建立的 vint 只有一個元素空間
	//依此類推
	vint.push_back(b);
	cout<<"Push Back: b = "<<b<<endl;
	vint.push_back(c);
	cout<<"Push Back: c = "<<c<<endl;
	PrintVectorInfo(vint);
	//移除最後一個元素
	vint.pop_back();
	cout<<"Pop Back......"<<endl;
	PrintVectorInfo(vint);
	//移除最後一個元素
	vint.pop_back();
	cout<<"Pop Back......"<<endl;
	PrintVectorInfo(vint);
	//清除所有元素
	vint.clear();
	cout<<"Clear All Elements."<<endl;
	//==END==//
	getchar();
	return 0;
}
