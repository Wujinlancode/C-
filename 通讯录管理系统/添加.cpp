#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
#include <ctime>

//ʵ�ֹ������£�
//�����ϵ�ˣ���Ϣ�����������Ա����䡢��ϵ�绰����ͥסַ�����1000��
//��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
//ɾ����ϵ�ˣ���������ɾ��ָ����ϵ��
//������ϵ��
//�޸���ϵ��
//�����ϵ�ˣ����ͨѶ¼��������Ϣ
//�˳�ͨѶ¼


//�˵�����
void showMenu()
{
	cout << "  �˵���" << endl;
	cout << "  1�������ϵ��" << endl;
	cout << "  2����ʾ��ϵ��" << endl;
	cout << "  3��ɾ����ϵ��" << endl;
	cout << "  4��������ϵ��" << endl;
	cout << "  5���޸���ϵ��" << endl;
	cout << "  6�������ϵ��" << endl;
	cout << "  0���˳���ϵ��" << endl;

}

//�����ϵ�˽ṹ��
//���ͨѶ¼�ṹ��
//main�����д���ͨѶ¼
//��װ�����ϵ�˺���  void EditContact(Addressbooks *abs)
//����

struct Contact
{
	string Name;
	string Sex;
	int Age;
	string Phone;
	string Addr;
};

struct Addressbooks
{
	struct Contact Array[MAX];//������ϵ��
	int Size;//��¼��Ա
};

void EditContact(Addressbooks *abs)
{
	
	if (abs->Size == 1000)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->Array[abs->Size].Name = name;

		string sex;
		cout << "�������Ա�" << endl;
		cin >> sex;
		abs->Array[abs->Size].Sex = sex;

		int age;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->Array[abs->Size].Age = age;

		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->Array[abs->Size].Phone = phone;

		string addr;
		cout << "�������ͥ��ַ��" << endl;
		cin >> addr;
		abs->Array[abs->Size].Addr = addr;
		cout << "��ӳɹ�!" << endl;
		system("pause");
		system("cls");//����
	}
	
}

int main()
{
	Addressbooks abs;
	struct Contact cont;
	abs.Size = 0;
	

	int select = 0;

	//while (1)
	//{
	showMenu();
	//	}

	
	cin >> select;
	switch (select)
	{
	case 1:EditContact(&abs);
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 0:
		cout << "��ӭ�´�ʹ��" << endl;
		system("pause");
		return 0;
		break;
	defualt:
		break;
	}


	system("pause");
}


