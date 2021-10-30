#include <iostream>
using namespace std;

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

int main()
{
	showMenu();
	system("pause");
}