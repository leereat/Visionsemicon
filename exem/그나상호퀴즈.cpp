#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	char ox;
	
	cout << "****************************************" << endl;
	cout << "        �׳��� Ǯ��� ��������~       "<< endl;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "****************************************" << endl;
	cout << "�׳��� ��ȣ�� �󸶳� �˰� ������� ??" <<endl;
	cout << "������ ���ô�!!" << endl << endl;
	system("pause");
	system("cls");
	
	
	
/*	while(1)
	{
		cout << "1������ : ��ȣ�� �׳��� �ʹ��ʹ� ����Ѵ�" << endl;
		cout << "������ O, Ʋ���� X" << endl;
		cout << "���� �Է� : ";
		cin >> ox;	
	
		if(ox = 'O' || 'o')
		{
			cout <<"�����Դϴ�!! ��ȣ�� �׳��� ��ô�̳� �������!" << endl;
			cout <<"�׷� ��������!!" << endl;
			system("cls");
			
		
		}
		else if(ox = 'X' || 'x')
		{
			cout <<"Ʋ�Ƚ��ϴ�..��� ������ 0���Դϴ�.." << endl;
			
		}
		else
		{
			cout << "�߸� �����̽���" << endl;
			
		}
	} */
	
	cout << "1������ : ��ȣ�� �׳��� �ʹ��ʹ� ����Ѵ�" << endl;
		cout << "������ O, Ʋ���� X" << endl;
		cout << "���� �Է� : ";
		cin >> ox;	
	
	switch(ox)
	{
		case 'O':
		
			cout <<"�����Դϴ�!! ��ȣ�� �׳��� ��ô�̳� �������!" << endl;
			Sleep(1000);
			cout <<"�׷� ��������!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
		case 'o':
		
			cout <<"�����Դϴ�!! ��ȣ�� �׳��� ��ô�̳� �������!" << endl;
			Sleep(1000);
			cout <<"�׷� ��������!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
			
		
		case 'X':
		
			cout <<"Ʋ�Ƚ��ϴ�..��� ������ 0���Դϴ�.." << endl;
			Sleep(1000);
			return 1;
			//break;
		
		case 'x':
		
			cout <<"Ʋ�Ƚ��ϴ�..��� ������ 0���Դϴ�.." << endl;
			Sleep(1000);
			return 1;
		//	break;
			
		default :
	
			cout << "�߸� �����̽���..�����սô�" << endl;
			Sleep(1000);
		//	cout << "�ٽ� �Է��� �ּ���" << endl;
		//	cout << "�Է� : "; 
		//	cin >> ox;
			return 1;
		
		}
	cout << "2������ : ��ȣ�� �׳��� ��ͱ� �����ѳ��� 2016�� 11�� 25���̴�!"<< endl;
	cout << "������ O, Ʋ���� X" << endl;
	cout << "���� �Է� : ";
	cin >> ox;
	switch(ox)
	{
		case 'x':
		
			cout <<"�����Դϴ�!! ��ȣ�� �׳��� ��ϳ��� 11�� 25���� �ƴ���!!" << endl;
			cout <<"��ȣ�� �׳��� ��ϳ��� 10�� 25���̴ϱ��!" << endl;
			Sleep(1000);
			cout <<"�׷� ��������!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
		case 'X':
		
			cout <<"�����Դϴ�!! ��ȣ�� �׳��� ��ô�̳� �������!" << endl;
			cout <<"��ȣ�� �׳��� ��ϳ��� 10�� 25���̴ϱ��!" << endl;
			Sleep(1000);
			cout <<"�׷� ��������!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
			
		
		case 'o':
		
			cout <<"Ʋ�Ƚ��ϴ�..��� ������ 10���Դϴ�.." << endl;
			Sleep(1000);
			cout <<"��ȣ�� �׳��� ��ϳ��� 10�� 25�� �Դϴ�.."  << endl;
			cout <<"�������� ��ġ���ϰڱ���" << endl;
			Sleep(1000);
			return 1;
			//break;
		
		case 'O':
			cout <<"Ʋ�Ƚ��ϴ�..��� ������ 10���Դϴ�.." << endl;
			Sleep(1000);
			cout <<"��ȣ�� �׳��� ��ϳ��� 10�� 25�� �Դϴ�.."  << endl;
			cout <<"�������� ��ġ���ϰڱ���" << endl;
			Sleep(1000);
			return 1;
		//	break;
			
		default :
	
			cout << "�߸� �����̽���..�����սô�" << endl;
			Sleep(1000);
		//	cout << "�ٽ� �Է��� �ּ���" << endl;
		//	cout << "�Է� : "; 
		//	cin >> ox;
			return 1;	
		}
		
	cout << "3������ : �׳��� ������ ���� ���� �Ҹ���? "<< endl;
	cout << "1. ��!!!, 2. ȫ!!!, 3. ��!!!, 4. ��!!!, 5. ��!!!" << endl; 
	cout << "1~5 ������ ���ڸ� �Է��ϼ���" << endl;
	cout << "���� �Է� : ";
	cin >> num;
		
			switch(num)
	{
		case 1:
		
			cout <<"Ʋ�Ƚ��ϴ�!! �� ������" << endl;
			cout <<"��� ������ 20���Դϴ�." << endl;
			Sleep(1000);
			return 1; 
		
			
		case 2:
		
			cout <<"Ʋ�Ƚ��ϴ�!! �� ������" << endl;
			cout <<"��� ������ 20���Դϴ�." << endl;
			Sleep(1000);
			return 1; 
			
			
		
		case 3:
		
			cout <<"Ʋ�Ƚ��ϴ�!! ȫ ������" << endl;
			cout <<"��� ������ 20���Դϴ�." << endl;
			Sleep(1000);
			return 1; 
		
		case 4:
			cout <<"�����Դϴ�!! �׳��� �׻� ��!! ���� ������" << endl;
			Sleep(1000);
			cout <<"���� ��������� �ʳ���?" << endl;
			Sleep(1000);
			break;
			
		
			case 5:
			cout <<"Ʋ�Ƚ��ϴ�!!  ������" << endl;
			cout <<"��� ������ 20���Դϴ�." << endl;
			Sleep(1000);
			return 1;
		//	break;
			
		default :
	
			cout << "�߸� �����̽���..�����սô�" << endl;
			Sleep(1000);
		//	cout << "�ٽ� �Է��� �ּ���" << endl;
		//	cout << "�Է� : "; 
		//	cin >> ox;
			return 1;	
		}
		
		cout << "��!!!" ;
		Sleep(1000);
		cout << "��";
		Sleep(500);
		cout << "��";
		Sleep(500);
		cout <<"��";
		Sleep(500);
		cout << "��";
		Sleep(500);
		cout << "��";
		Sleep(500);
		
				
return 0;
}
