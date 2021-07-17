#include<iostream>
using namespace std;
//vector容器的插入和删除
//#include<vector>
//void printvector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	printvector(v);//10 20 30 40 50
//	v.pop_back();
//	printvector(v);//10 20 30 40
//	v.insert(v.begin(), 100);
//	printvector(v);//100 10 20 30 40
//	v.insert(v.begin(), 2, 10);//重载版本 相当于在头部加了俩个十
//	printvector(v);//10 10 100 10 20 30 40
//	v.erase(v.begin());
//	printvector(v);//10 100 10 20 30 40  把头部删了
//	v.erase(v.begin(), v.end());//相当于清空操作
//	printvector(v);//啥也没有 
//	v.clear();//清空操作
//	printvector(v);//啥也没有 
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//vector容器的数据存取
//void test()
//{
//	vector<int>v;
//	//用[]方式存取
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		cout << v[i] << " ";//0 1 2 3 4 5 6 7 8 9
//	}
//	cout << endl;
//	//用at获取元素
//	for (i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;//0 1 2 3 4 5 6 7 8 9
//	//获取第一个元素
//	cout << "第一个元素为：" << v.front() << endl;//第一个元素为：0
//	cout << "最后一个元素为：" << v.back() << endl;//最后一个元素为：9
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//vector互换容器
//#include<vector>
//void printvector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	vector<int>v2;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for (i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printvector(v1);//0 1 2 3 4 5 6 7 8 9
//	printvector(v2);//10 9 8 7 6 5 4 3 2 1
//	//交换
//	v1.swap(v2);
//	printvector(v1);//10 9 8 7 6 5 4 3 2 1
//	printvector(v2);//0 1 2 3 4 5 6 7 8 9
//	//swap的巧用（收缩内存）
//	vector<int>v;
//	for (i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为：" << v.capacity() << endl;//v的容量为：12138
//	cout << "v的大小为：" << v.size() << endl;//v的大小为：10000
//	v.resize(3);
//	cout << "v的容量为：" << v.capacity() << endl;//v的容量为：12138
//	cout << "v的大小为：" << v.size() << endl;//v的大小为：3 虽然v的大小变了 但容量并没有缩小 很浪费内存
//	//解决方法
//	vector<int>(v).swap(v);//其中vector<int>(v)表示用拷贝构造函数构造了一个匿名对象（大小和容量都等于v的size） 之后让他与v进行交换 之后系统会自动回收匿名对象 不会造成内存浪费 
//	cout << "v的容量为：" << v.capacity() << endl;//v的容量为：3
//	cout << "v的大小为：" << v.size() << endl;//v的大小为：3  缩小完成
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector容器预留空间
//#include<vector>
//void test()
//{
//	vector<int>v;
//	int i;
//	int* p = NULL;
//	int num = 0;//用于记录系统开辟空间的次数
//	//未预留空间前
//	//for (i = 0; i < 100000; i++)
//	//{
//	//	v.push_back(i);
//	//	if (p != &v[0])//因为每次size大于capacity时 系统都将重新重新开辟内存
//	//	{
//	//		p = &v[0];
//	//		num++;
//	//	}
//	//}
//	//cout << num << endl;//30 开辟了30次
//	//预留空间后
//	v.reserve(100000);
//	for (i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << num << endl;//1 因为预留了空间 所以只需要开辟一次空间
//	cout << v.capacity() << endl;//100000  因为是自己预留的空间 不需要系统开辟了 所以在size大于capacity之前capacity都是100000
//	cout << v.size() << endl;//100000
//	v.push_back(1);
//	cout << v.capacity() << endl;//150000 系统自动开辟一段空间
//	cout << v.size() << endl;//100001
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//deque容器的构造和使用
/*
deque容器和vector容器的区别
deque容器容器对于头插比vector快这与两者之间的内部实现有关
vector容器是一段连续的空间 而 deque容器相当于有一个用于存放地址的数组(中控器) 每个地址指向一段空间（缓冲区） 形成理论上的连续
*/
//deque容器的构造
//#include<deque>
//void printDeque(const deque<int>& d)//防止d中的数据被更改
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:自读迭代器
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int>d1;
//	//法一
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);//0到9
//	//法二
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);//0到9
//	//法三
//	deque<int>d3(10, 100);
//	printDeque(d3);
//	//法四
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//int main()
//{
//	test();
//	return 0;
//}
//deque容器的赋值（与vector容器类似）
//#include<deque>
//void printDeque(const deque<int>& d)//防止d中的数据被更改
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:自读迭代器
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	//法一
//	deque<int>d1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2 = d1;
//	printDeque(d2);
//	//法二
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//	//法三
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//int main()
//{
//	test();
//	return 0;
//}
//注：deque中无容量的概念 判断是否为空：empty 返回元素个数 size() 重新指定元素个数：resize
//代码展示
//#include<deque>
//void printDeque(const deque<int>& d)//防止d中的数据被更改
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:自读迭代器
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int>d1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	if (d1.empty())
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "元素不为空，大小为：" << d1.size() << endl;//元素不为空，大小为：10
//	}
//	d1.resize(15);
//	printDeque(d1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 剩余的用初始化为0
//	d1.resize(5);
//	printDeque(d1);//0 1 2 3 4
//	d1.resize(10);
//	printDeque(d1);//0 1 2 3 4 0 0 0 0 0 后面的数已经丢失
//}
//int main()
//{
//	test();
//	return 0;
//}
//尾插(push_back)尾删(pop_back) 头插(push_front)头删 (pop_front()) 这些不做展示 
//展示删除操作（erase）
//#include<deque>
//void printDeque(const deque<int>& d)//防止d中的数据被更改
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:自读迭代器
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	int i;
//	deque<int>d1;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	d1.erase(d1.begin());//erase()括号中要加迭代器
//	printDeque(d1);//1 2 3 4 5 6 7 8 9 
//	//如果要删掉2 
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);//1 3 4 5 6 7 8 9
//	d1.erase(d1.begin(), d1.end());//相当于d1.clear(); 清空
//	printDeque(d1);
//}
//int main()
//{
//	test();
//	return 0;
//}
//deque容器的数据存取
//#include<deque>
//void test()
//{
//	deque<int>d1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	//用[]取出数据
//	for (i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";//0 1 2 3 4 5 6 7 8 9
//	}
//	cout << endl ;
//	//用at取出数据
//	for (i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";//0 1 2 3 4 5 6 7 8 9
//	}
//	cout << endl;
//	cout << "第一个数为：" << d1.front() << endl;//第一个数为：0
//	cout << "最后一个数为：" << d1.back() << endl;//最后一个数为：9
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//deque:双向队列 双队列
//deque排序
#include<deque>
#include<algorithm>
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test()
{
	deque<int>d;
	d.push_back(30);
	d.push_back(20);
	d.push_back(10);
	d.push_back(5);
	sort(d.begin(), d.end());
	printDeque(d);//5 10 20 30 默认从大到小
}
int main()
{
	test();
	return 0;
}



