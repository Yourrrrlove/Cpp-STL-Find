#include<iostream>
#include<functional>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	bool operator ==(const Person &p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_name;
	int m_age;
};
void test()
{
	vector<int>v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	
	vector<int>::iterator it = find(v.begin(), v.end(), 4);
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了"<<endl;
	}

}
void test2()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	vector<Person>::iterator it = find(v.begin(), v.end(), p4);
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "姓名：" << it->m_name<<" 年龄："<<it->m_age<<endl;
	}
}
int main()
{
	test();
	test2();
	system("pause");
	return 0;
}
