#include <iostream>
using namespace std;

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

int main()
{
	int select = 0;

	//while (1)
	//{
		showMenu();
//	}
	

	cin >> select;
	switch (select)
	{
	case 1:
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