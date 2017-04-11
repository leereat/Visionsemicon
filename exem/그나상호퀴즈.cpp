#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	char ox;
	
	cout << "****************************************" << endl;
	cout << "        그나가 풀어보는 퀴즈퀴즈~       "<< endl;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "****************************************" << endl;
	cout << "그나는 상호를 얼마나 알고 있을까요 ??" <<endl;
	cout << "시작해 봅시다!!" << endl << endl;
	system("pause");
	system("cls");
	
	
	
/*	while(1)
	{
		cout << "1번문제 : 상호는 그나를 너무너무 사랑한다" << endl;
		cout << "맞으면 O, 틀리면 X" << endl;
		cout << "정답 입력 : ";
		cin >> ox;	
	
		if(ox = 'O' || 'o')
		{
			cout <<"정답입니다!! 상호는 그나를 무척이나 사랑하죠!" << endl;
			cout <<"그럼 다음문제!!" << endl;
			system("cls");
			
		
		}
		else if(ox = 'X' || 'x')
		{
			cout <<"틀렸습니다..당신 점수는 0점입니다.." << endl;
			
		}
		else
		{
			cout << "잘못 적으셨습다" << endl;
			
		}
	} */
	
	cout << "1번문제 : 상호는 그나를 너무너무 사랑한다" << endl;
		cout << "맞으면 O, 틀리면 X" << endl;
		cout << "정답 입력 : ";
		cin >> ox;	
	
	switch(ox)
	{
		case 'O':
		
			cout <<"정답입니다!! 상호는 그나를 무척이나 사랑하죠!" << endl;
			Sleep(1000);
			cout <<"그럼 다음문제!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
		case 'o':
		
			cout <<"정답입니다!! 상호는 그나를 무척이나 사랑하죠!" << endl;
			Sleep(1000);
			cout <<"그럼 다음문제!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
			
		
		case 'X':
		
			cout <<"틀렸습니다..당신 점수는 0점입니다.." << endl;
			Sleep(1000);
			return 1;
			//break;
		
		case 'x':
		
			cout <<"틀렸습니다..당신 점수는 0점입니다.." << endl;
			Sleep(1000);
			return 1;
		//	break;
			
		default :
	
			cout << "잘못 적으셨습다..집중합시다" << endl;
			Sleep(1000);
		//	cout << "다시 입력해 주세요" << endl;
		//	cout << "입력 : "; 
		//	cin >> ox;
			return 1;
		
		}
	cout << "2번문제 : 상호와 그나가 사귀기 시작한날은 2016년 11월 25일이다!"<< endl;
	cout << "맞으면 O, 틀리면 X" << endl;
	cout << "정답 입력 : ";
	cin >> ox;
	switch(ox)
	{
		case 'x':
		
			cout <<"정답입니다!! 상호와 그나가 사귄날은 11월 25일이 아니죠!!" << endl;
			cout <<"상호와 그나가 사귄날은 10월 25일이니까요!" << endl;
			Sleep(1000);
			cout <<"그럼 다음문제!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
		case 'X':
		
			cout <<"정답입니다!! 상호는 그나를 무척이나 사랑하죠!" << endl;
			cout <<"상호와 그나가 사귄날은 10월 25일이니까요!" << endl;
			Sleep(1000);
			cout <<"그럼 다음문제!!" << endl;
			Sleep(1000);
			system("cls");
			break;
			
			
		
		case 'o':
		
			cout <<"틀렸습니다..당신 점수는 10점입니다.." << endl;
			Sleep(1000);
			cout <<"상호와 그나가 사귄날은 10월 25일 입니다.."  << endl;
			cout <<"섭섭함을 금치못하겠군요" << endl;
			Sleep(1000);
			return 1;
			//break;
		
		case 'O':
			cout <<"틀렸습니다..당신 점수는 10점입니다.." << endl;
			Sleep(1000);
			cout <<"상호와 그나가 사귄날은 10월 25일 입니다.."  << endl;
			cout <<"섭섭함을 금치못하겠군요" << endl;
			Sleep(1000);
			return 1;
		//	break;
			
		default :
	
			cout << "잘못 적으셨습다..집중합시다" << endl;
			Sleep(1000);
		//	cout << "다시 입력해 주세요" << endl;
		//	cout << "입력 : "; 
		//	cin >> ox;
			return 1;	
		}
		
	cout << "3번문제 : 그나가 삐질때 마다 내는 소리는? "<< endl;
	cout << "1. 흉!!!, 2. 홍!!!, 3. 흥!!!, 4. 훙!!!, 5. 형!!!" << endl; 
	cout << "1~5 사이의 숫자를 입력하세요" << endl;
	cout << "정답 입력 : ";
	cin >> num;
		
			switch(num)
	{
		case 1:
		
			cout <<"틀렸습니다!! 흉 ㅋㅋㅋ" << endl;
			cout <<"당신 점수는 20점입니다." << endl;
			Sleep(1000);
			return 1; 
		
			
		case 2:
		
			cout <<"틀렸습니다!! 흥 ㅋㅋㅋ" << endl;
			cout <<"당신 점수는 20점입니다." << endl;
			Sleep(1000);
			return 1; 
			
			
		
		case 3:
		
			cout <<"틀렸습니다!! 홍 ㅋㅋㅋ" << endl;
			cout <<"당신 점수는 20점입니다." << endl;
			Sleep(1000);
			return 1; 
		
		case 4:
			cout <<"정답입니다!! 그나는 항상 훙!! 으로 삐지죠" << endl;
			Sleep(1000);
			cout <<"정말 사랑스럽지 않나요?" << endl;
			Sleep(1000);
			break;
			
		
			case 5:
			cout <<"틀렸습니다!!  ㅋㅋㅋ" << endl;
			cout <<"당신 점수는 20점입니다." << endl;
			Sleep(1000);
			return 1;
		//	break;
			
		default :
	
			cout << "잘못 적으셨습다..집중합시다" << endl;
			Sleep(1000);
		//	cout << "다시 입력해 주세요" << endl;
		//	cout << "입력 : "; 
		//	cin >> ox;
			return 1;	
		}
		
		cout << "끝!!!" ;
		Sleep(1000);
		cout << "감";
		Sleep(500);
		cout << "사";
		Sleep(500);
		cout <<"합";
		Sleep(500);
		cout << "니";
		Sleep(500);
		cout << "다";
		Sleep(500);
		
				
return 0;
}
