#include<iostream>
using namespace std;

// 成员函数与成员变量分开存储

//class person
//{
//	int m_a; // 非静态成员变量，属于类的对象上
//	static int m_b; // 静态成员变量，不属于类的对象上
//	void func1() { ; }// 非静态成员函数，不属于类的对象上
//	static void func2() { ; }// 静态成员函数，不属于类的对象上
//};
//int person::m_b = 5;
//void test01()
//{
//	person p;
//	cout << sizeof(p) << endl;
//}
//void test02()
//{
//	person p;
//	cout << sizeof(p) << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}

// this指针
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;
//	}
//	person personAdd(person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	person p(20);
//	cout << p.age << endl;
//}
//void test02()
//{
//	person p1(10);
//	//cout << p1.age << endl;
//	person p2(10);
//	//cout << p2.age << endl;
//	p2.personAdd(p1);
//	cout << p2.age << endl;
//	p2.personAdd(p1).personAdd(p1).personAdd(p1); // 想要多次加和
//	cout << p2.age << endl;
//}
//int main()
//{
//	test02();
//
//	return 0;
//}

// 空指针访问成员函数
//class person
//{
//public:
//	void show_name()
//	{
//		cout << "Joyce" << endl;
//	}
//	void show_age()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << this->m_age << endl;
//	}
//
//	int m_age;
//
//};
//void test01()
//{
//	person* p = NULL;
//	p->show_age(); // 非法访问
//	p->show_name();
//}
//int main()
//{
//	test01();
//	return 0;
//}

// const修饰成员函数

class person
{
public:
	void show_name() const
	{
		this->m_a = 100; // 非 常对象，可修改
		//this = NULL;// this指针的指向不可修改
	}
	void func()
	{
		;
	}
	mutable int m_a;
	int m_b;
};
void test01()
{ 
	person p;
	p.show_name();
}
void test02()
{
	const person p; // 常对象
	//p.m_b = 20;
	p.m_a = 20;

	p.show_name();
	p.func();
}
	
int main()
{
	test02();
	return 0;
}