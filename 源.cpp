#include<iostream>
using namespace std;

// ��Ա�������Ա�����ֿ��洢

//class person
//{
//	int m_a; // �Ǿ�̬��Ա������������Ķ�����
//	static int m_b; // ��̬��Ա��������������Ķ�����
//	void func1() { ; }// �Ǿ�̬��Ա��������������Ķ�����
//	static void func2() { ; }// ��̬��Ա��������������Ķ�����
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

// thisָ��
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
//	p2.personAdd(p1).personAdd(p1).personAdd(p1); // ��Ҫ��μӺ�
//	cout << p2.age << endl;
//}
//int main()
//{
//	test02();
//
//	return 0;
//}

// ��ָ����ʳ�Ա����
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
//	p->show_age(); // �Ƿ�����
//	p->show_name();
//}
//int main()
//{
//	test01();
//	return 0;
//}

// const���γ�Ա����

class person
{
public:
	void show_name() const
	{
		this->m_a = 100; // �� �����󣬿��޸�
		//this = NULL;// thisָ���ָ�򲻿��޸�
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
	const person p; // ������
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