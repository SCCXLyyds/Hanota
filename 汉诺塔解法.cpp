#include <iostream>
using namespace std;
void move(int n,char x,char y,char z){
	if(n==1){
		printf("%c-->%c\n",x,z);
	}
	else{
		move(n-1,x,z,y);  //��n-1�����Ӵ�x(���� z)�Ƶ� y�� 
		printf("%c-->%c\n",x,z); //���� n�����Ӵ� x �Ƶ� z �� 
		move(n-1,y,x,z);  //��n-1�����Ӵ�y���� x�Ƶ� z �� 
	}
}
int main()
{
	int n;
	cout<<"�����뺺ŵ���Ĳ����� "; 
	cin>>n;
	cout<<"�ƶ��Ĳ������£� "<<endl;
	move(n,'x','y','z');
//	�����뺺ŵ���Ĳ����� 3
//  �ƶ��Ĳ������£�
//	x-->z
//	x-->y
//	z-->y
//	x-->z
//	y-->x
//	y-->z
//	x-->z 
    
	return 0;
}
