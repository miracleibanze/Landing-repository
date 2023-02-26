#include<iostream>
using namespace std;
class MyClass {
	public:
		int a=4;
		void myfunction(){
			cout<<"Some content in parent class.";
		}
};
class Mychild: public MyClass {
	public:
		void myfunc(){
			cout<<a;
		}
};

class Mygrandchild: public Mychild {
	public:
		void myfunct(){
			cout<<(a*2);
		}
};

int main(){
	Mygrandchild myobj;
	myobj.myfunction();
	return 0;
}