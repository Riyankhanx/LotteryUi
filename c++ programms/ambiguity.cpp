#include<iostream>
#include<conio.h>
using namespace std;
class  A {
  	 
	
	public:
	void func()
	{
		cout<<"I am A "<< endl;
		}
	
	};
 
  
class B{
    public:
void func()
	{
		cout<<"I am B "<< endl;
		}
	
		};
	 
	class C:public A,public B{
		

};
int main()
{
C obj;
obj.A::func();
obj.B::func();
	
	
	
	getch();
	return 0;
}