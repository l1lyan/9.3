#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class Building
//{
//	friend void  goodgay(Building* building);// goodgay��Building�����ѣ����Է���Building��˽�г�Ա
//public:
//	Building()
//	{
//		m_sittingroom = "����";
//		m_bedroom = "����";
//	}
//
//public:
//	string m_sittingroom;//����
//private:
//	string m_bedroom;//����
//};
//void  goodgay(Building *building)
//{
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_bedroom << endl;//����˽���������ⲻ�ɷ��ʡ�������Ԫȫ�ֺ���friend
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
//	void visit();//�ιۺ���������Building�е�����
//	
//	Building* building;
//
//};
//class Building
//{
//	friend class Goodgay;//Goodgay�Ǳ���ĺ����� ���Է��ʱ���˽�г�Ա
//public:
//	Building();
//	
//public:
//	string m_sittingroom;//����
//private:
//	string m_bedroom;//����
//};
////����д��Ա����
//Building::Building()
//{
//	m_sittingroom = "����";
//	m_bedroom = "����";
//}
//Goodgay::Goodgay()
//{
//	building = new Building;
//}
//void Goodgay::visit()
//{
//	cout << "�û��������ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "�û��������ڷ��ʣ�" << building->m_bedroom << endl;//�������ɷ���˽�����ԡ�����Ԫfriend
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
//	Goodgay(); //���캯��
//	void visit();//��visit�������Է���Building��˽�г�Ա
//	void visit2();//��visit���������Է���Building��˽�г�Ա
//	Building* building;
//};
//
//class Building
//{
//	friend void Goodgay::visit();//���߱��������Goodgay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
//public:
//	Building();// ���캯��
//
//public:
//	string m_settingroom;
//private:
//	string m_bedroom;
//};
//
//Building::Building()//Building���й��캯����ʵ��
//{
//	m_settingroom = "Keting";
//	m_bedroom = "woshi";
//}
//Goodgay::Goodgay()//Goodgay���й��캯����ʵ��
//{
//	building = new Building;//�ڶ�������Building���󣬲�����ָ��ά���ö���
//}
//
//void Goodgay::visit()//Ϊ�˸�������Goodgay�������������Goodgay::
//{
//	cout << "visit�������ڷ��ʣ�" << building->m_settingroom << endl;
//	cout << "visit�������ڷ��ʣ�" << building->m_bedroom << endl;
//}
//void Goodgay::visit2()
//{
//	cout << "visit2�������ڷ��ʣ�" << building->m_settingroom << endl;
//	//cout << "visit2�������ڷ��ʣ�" << building->m_bedroom << endl;//����
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
//	//1.��Ա��������+
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
////2.ȫ�ֺ�������+
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
//	//�����Ա���������������������Ϊ�޷�ʵ��cout�����
//
//	int m_A;
//	int m_B;
//};
////2.ȫ�ֺ�������+
//ostream &operator<<(ostream& cout,Person p)//����operator<<(cout, p),��cout<<p
//{
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B;
//	return cout;//��Ҫreturn cout ����cout << p1 << endl;����endl���ᱨ��
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
	//����ǰ��++�����
	MyInteger& operator++()//����������Ϊ��һֱ��һ�����ݽ��е�������
	{
		m_num++;
		return *this;//��������
	}
	//���غ���++�����
	MyInteger operator++(int)//int����ռλ����������������ǰ�úͺ��ã���ֹ��ǰ���ظ�
	{
		//�ȼ�¼��ʱ����
		MyInteger temp = *this;
		m_num++;//�����
		return temp;//��󽫼�¼�������
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