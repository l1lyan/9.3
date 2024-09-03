#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class Building
//{
//	friend void  goodgay(Building* building);// goodgay是Building好朋友，可以访问Building中私有成员
//public:
//	Building()
//	{
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//
//public:
//	string m_sittingroom;//客厅
//private:
//	string m_bedroom;//卧室
//};
//void  goodgay(Building *building)
//{
//	cout << "好基友全局函数 正在访问：" << building->m_sittingroom << endl;
//	cout << "好基友全局函数 正在访问：" << building->m_bedroom << endl;//报错，私有属性类外不可访问。除非友元全局函数friend
//}
//
//void test01()
//{
//	Building building;
//	goodgay(&building);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Building;
//class Goodgay
//{
//public:
//	Goodgay();
//	void visit();//参观函数，访问Building中的属性
//	
//	Building* building;
//
//};
//class Building
//{
//	friend class Goodgay;//Goodgay是本类的好朋友 可以访问本类私有成员
//public:
//	Building();
//	
//public:
//	string m_sittingroom;//客厅
//private:
//	string m_bedroom;//卧室
//};
////类外写成员函数
//Building::Building()
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//Goodgay::Goodgay()
//{
//	building = new Building;
//}
//void Goodgay::visit()
//{
//	cout << "好基友类正在访问：" << building->m_sittingroom << endl;
//	cout << "好基友类正在访问：" << building->m_bedroom << endl;//报错，不可访问私有属性。加友元friend
//}
//void test01()
//{
//	Goodgay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Building;
//class Goodgay
//{
//public:
//	Goodgay(); //构造函数
//	void visit();//让visit函数可以访问Building中私有成员
//	void visit2();//让visit函数不可以访问Building中私有成员
//	Building* building;
//};
//
//class Building
//{
//	friend void Goodgay::visit();//告诉编译器这个Goodgay类下的visit成员函数作为本类的好朋友，可以访问私有成员
//public:
//	Building();// 构造函数
//
//public:
//	string m_settingroom;
//private:
//	string m_bedroom;
//};
//
//Building::Building()//Building类中构造函数的实现
//{
//	m_settingroom = "Keting";
//	m_bedroom = "woshi";
//}
//Goodgay::Goodgay()//Goodgay类中构造函数的实现
//{
//	building = new Building;//在堆区创建Building对象，并且用指针维护该对象
//}
//
//void Goodgay::visit()//为了告诉它是Goodgay下作用域，添加上Goodgay::
//{
//	cout << "visit函数正在访问：" << building->m_settingroom << endl;
//	cout << "visit函数正在访问：" << building->m_bedroom << endl;
//}
//void Goodgay::visit2()
//{
//	cout << "visit2函数正在访问：" << building->m_settingroom << endl;
//	//cout << "visit2函数正在访问：" << building->m_bedroom << endl;//报错
//}
//void test01()
//{
//	Goodgay gg;
//	gg.visit();
//	gg.visit2();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//class Person
//{
//public:
//	//1.成员函数重载+
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//	int m_A;
//	int m_B;
//};
////2.全局函数重载+
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	Person p3 = p1 + p2;
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//	Person p4 = p1 + 100;
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person p);
//public:
//	Person(int a,int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private :
//	//不会成员函数重载左移运算符，因为无法实现cout在左侧
//
//	int m_A;
//	int m_B;
//};
////2.全局函数重载+
//ostream &operator<<(ostream& cout,Person p)//本质operator<<(cout, p),简化cout<<p
//{
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B;
//	return cout;//需要return cout 否则cout << p1 << endl;加了endl，会报错
//}
//void test01()
//{
//	Person p1(10,10);
//	cout << p1 << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//重载前置++运算符
	MyInteger& operator++()//返回引用是为了一直对一个数据进行递增操作
	{
		m_num++;
		return *this;//将自身返回
	}
	//重载后置++运算符
	MyInteger operator++(int)//int代表占位参数，可用于区分前置和后置，防止与前置重复
	{
		//先记录当时结结果
		MyInteger temp = *this;
		m_num++;//后递增
		return temp;//最后将记录结果返回
	}
private:
	int m_num;
};
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << "m_num = " << myint.m_num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test02();
	system("pause");
	return 0;
}