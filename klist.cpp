#include<bits/stdc++.h>
using namespace std;
class A{
public:
	A(){
		cout<<"hotdog"<<endl;
	}
};
class B:public A{

};
int main(){

	A a;
	B b;

	return 0;
}