#include<iostream>
using namespace std;
//vector�����Ĳ����ɾ��
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
//	v.insert(v.begin(), 2, 10);//���ذ汾 �൱����ͷ����������ʮ
//	printvector(v);//10 10 100 10 20 30 40
//	v.erase(v.begin());
//	printvector(v);//10 100 10 20 30 40  ��ͷ��ɾ��
//	v.erase(v.begin(), v.end());//�൱����ղ���
//	printvector(v);//ɶҲû�� 
//	v.clear();//��ղ���
//	printvector(v);//ɶҲû�� 
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//vector���������ݴ�ȡ
//void test()
//{
//	vector<int>v;
//	//��[]��ʽ��ȡ
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		cout << v[i] << " ";//0 1 2 3 4 5 6 7 8 9
//	}
//	cout << endl;
//	//��at��ȡԪ��
//	for (i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;//0 1 2 3 4 5 6 7 8 9
//	//��ȡ��һ��Ԫ��
//	cout << "��һ��Ԫ��Ϊ��" << v.front() << endl;//��һ��Ԫ��Ϊ��0
//	cout << "���һ��Ԫ��Ϊ��" << v.back() << endl;//���һ��Ԫ��Ϊ��9
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//vector��������
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
//	//����
//	v1.swap(v2);
//	printvector(v1);//10 9 8 7 6 5 4 3 2 1
//	printvector(v2);//0 1 2 3 4 5 6 7 8 9
//	//swap�����ã������ڴ棩
//	vector<int>v;
//	for (i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ��" << v.capacity() << endl;//v������Ϊ��12138
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;//v�Ĵ�СΪ��10000
//	v.resize(3);
//	cout << "v������Ϊ��" << v.capacity() << endl;//v������Ϊ��12138
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;//v�Ĵ�СΪ��3 ��Ȼv�Ĵ�С���� ��������û����С ���˷��ڴ�
//	//�������
//	vector<int>(v).swap(v);//����vector<int>(v)��ʾ�ÿ������캯��������һ���������󣨴�С������������v��size�� ֮��������v���н��� ֮��ϵͳ���Զ������������� ��������ڴ��˷� 
//	cout << "v������Ϊ��" << v.capacity() << endl;//v������Ϊ��3
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;//v�Ĵ�СΪ��3  ��С���
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector����Ԥ���ռ�
//#include<vector>
//void test()
//{
//	vector<int>v;
//	int i;
//	int* p = NULL;
//	int num = 0;//���ڼ�¼ϵͳ���ٿռ�Ĵ���
//	//δԤ���ռ�ǰ
//	//for (i = 0; i < 100000; i++)
//	//{
//	//	v.push_back(i);
//	//	if (p != &v[0])//��Ϊÿ��size����capacityʱ ϵͳ�����������¿����ڴ�
//	//	{
//	//		p = &v[0];
//	//		num++;
//	//	}
//	//}
//	//cout << num << endl;//30 ������30��
//	//Ԥ���ռ��
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
//	cout << num << endl;//1 ��ΪԤ���˿ռ� ����ֻ��Ҫ����һ�οռ�
//	cout << v.capacity() << endl;//100000  ��Ϊ���Լ�Ԥ���Ŀռ� ����Ҫϵͳ������ ������size����capacity֮ǰcapacity����100000
//	cout << v.size() << endl;//100000
//	v.push_back(1);
//	cout << v.capacity() << endl;//150000 ϵͳ�Զ�����һ�οռ�
//	cout << v.size() << endl;//100001
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//deque�����Ĺ����ʹ��
/*
deque������vector����������
deque������������ͷ���vector����������֮����ڲ�ʵ���й�
vector������һ�������Ŀռ� �� deque�����൱����һ�����ڴ�ŵ�ַ������(�п���) ÿ����ַָ��һ�οռ䣨�������� �γ������ϵ�����
*/
//deque�����Ĺ���
//#include<deque>
//void printDeque(const deque<int>& d)//��ֹd�е����ݱ�����
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:�Զ�������
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int>d1;
//	//��һ
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);//0��9
//	//����
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);//0��9
//	//����
//	deque<int>d3(10, 100);
//	printDeque(d3);
//	//����
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//int main()
//{
//	test();
//	return 0;
//}
//deque�����ĸ�ֵ����vector�������ƣ�
//#include<deque>
//void printDeque(const deque<int>& d)//��ֹd�е����ݱ�����
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:�Զ�������
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	//��һ
//	deque<int>d1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2 = d1;
//	printDeque(d2);
//	//����
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//	//����
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//int main()
//{
//	test();
//	return 0;
//}
//ע��deque���������ĸ��� �ж��Ƿ�Ϊ�գ�empty ����Ԫ�ظ��� size() ����ָ��Ԫ�ظ�����resize
//����չʾ
//#include<deque>
//void printDeque(const deque<int>& d)//��ֹd�е����ݱ�����
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:�Զ�������
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
//		cout << "����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "Ԫ�ز�Ϊ�գ���СΪ��" << d1.size() << endl;//Ԫ�ز�Ϊ�գ���СΪ��10
//	}
//	d1.resize(15);
//	printDeque(d1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 ʣ����ó�ʼ��Ϊ0
//	d1.resize(5);
//	printDeque(d1);//0 1 2 3 4
//	d1.resize(10);
//	printDeque(d1);//0 1 2 3 4 0 0 0 0 0 ��������Ѿ���ʧ
//}
//int main()
//{
//	test();
//	return 0;
//}
//β��(push_back)βɾ(pop_back) ͷ��(push_front)ͷɾ (pop_front()) ��Щ����չʾ 
//չʾɾ��������erase��
//#include<deque>
//void printDeque(const deque<int>& d)//��ֹd�е����ݱ�����
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator:�Զ�������
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
//	d1.erase(d1.begin());//erase()������Ҫ�ӵ�����
//	printDeque(d1);//1 2 3 4 5 6 7 8 9 
//	//���Ҫɾ��2 
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);//1 3 4 5 6 7 8 9
//	d1.erase(d1.begin(), d1.end());//�൱��d1.clear(); ���
//	printDeque(d1);
//}
//int main()
//{
//	test();
//	return 0;
//}
//deque���������ݴ�ȡ
//#include<deque>
//void test()
//{
//	deque<int>d1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	//��[]ȡ������
//	for (i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";//0 1 2 3 4 5 6 7 8 9
//	}
//	cout << endl ;
//	//��atȡ������
//	for (i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";//0 1 2 3 4 5 6 7 8 9
//	}
//	cout << endl;
//	cout << "��һ����Ϊ��" << d1.front() << endl;//��һ����Ϊ��0
//	cout << "���һ����Ϊ��" << d1.back() << endl;//���һ����Ϊ��9
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//deque:˫����� ˫����
//deque����
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
	printDeque(d);//5 10 20 30 Ĭ�ϴӴ�С
}
int main()
{
	test();
	return 0;
}



