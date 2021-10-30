#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
#include <ctime>

//实现功能如下：
//添加联系人：信息包括姓名、性别、年龄、联系电话、家庭住址，最多1000人
//显示联系人：显示通讯录中所有联系人信息
//删除联系人：按照姓名删除指定联系人
//查找联系人
//修改联系人
//清空联系人：清空通讯录中所有信息
//退出通讯录


//菜单界面
void showMenu()
{
	cout << "  菜单：" << endl;
	cout << "  1、添加联系人" << endl;
	cout << "  2、显示联系人" << endl;
	cout << "  3、删除联系人" << endl;
	cout << "  4、查找联系人" << endl;
	cout << "  5、修改联系人" << endl;
	cout << "  6、清空联系人" << endl;
	cout << "  0、退出联系人" << endl;

}



//设计联系人结构体
//设计通讯录结构体
//main函数中创建通讯录
//封装添加联系人函数  void EditContact(Addressbooks *abs)
//测试

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
	struct Contact Array[MAX];//保存联系人
	int Size;//记录人员
};

void EditContact(Addressbooks* abs)
{

	if (abs->Size == 1000)
	{
		cout << "通讯录已满，无法添加！" << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->Array[abs->Size].Name = name;

		string sex;
		cout << "请输入性别：" << endl;
		cin >> sex;
		abs->Array[abs->Size].Sex = sex;

		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->Array[abs->Size].Age = age;

		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->Array[abs->Size].Phone = phone;

		string addr;
		cout << "请输入家庭地址：" << endl;
		cin >> addr;
		abs->Array[abs->Size].Addr = addr;
		abs->Size++;
		cout << "添加成功!" << endl;
		system("pause");
		system("cls");//清屏
	}

}

void showPerson(Addressbooks* abs)
{
	if (abs->Size == 0)
	{
		cout << "无联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->Size; i++)
		{
			cout << abs->Array[i].Name << endl;
			cout << abs->Array[i].Sex << endl;
			cout << abs->Array[i].Age << endl;
			cout << abs->Array[i].Phone << endl;
			cout << abs->Array[i].Addr << endl;

		}

	}
	system("pause");
	system("cls");//清屏 
}

int main()
{
	Addressbooks abs;
	struct Contact cont;
	abs.Size = 0;


	int select = 0;

	while (1)
	{
	showMenu();
		


	cin >> select;
	
	switch (select)
	{
	case 1:EditContact(&abs);
		break;
	case 2:showPerson(&abs);
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
		cout << "欢迎下次使用" << endl;
		system("pause");
		return 0;
		break;
	defualt:
		break;
	}
	
	}
	
}