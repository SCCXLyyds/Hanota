#include <iostream>
using namespace std;
void move(int n,char x,char y,char z){
	if(n==1){
		printf("%c-->%c\n",x,z);
	}
	else{
		move(n-1,x,z,y);  //将n-1个盘子从x(借助 z)移到 y上 
		printf("%c-->%c\n",x,z); //将第 n个盘子从 x 移到 z 上 
		move(n-1,y,x,z);  //将n-1个盘子从y借助 x移到 z 上 
	}
}
int main()
{
	int n;
	cout<<"请输入汉诺塔的层数： "; 
	cin>>n;
	cout<<"移动的步骤如下： "<<endl;
	move(n,'x','y','z');
//	请输入汉诺塔的层数： 3
//  移动的步骤如下：
//	x-->z
//	x-->y
//	z-->y
//	x-->z
//	y-->x
//	y-->z
//	x-->z 
    
	return 0;
}
