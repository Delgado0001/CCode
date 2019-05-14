// ddg pointers1.cpp

#include <iostream>
using namespace std;

int main(){
	int one, two;
	int * thePointer;
	thePointer = &one;
	*thePointer = 1111;
	thePointer = &two;
	*thePointer = &2222;
	cout<<"one is "<<one<<" "<<&one<<" \n";
	cout<<"two is "<<two<<" "<<&two<<" \n";
	cout<<"thePointer "<<thePointer<<" "<<&thePointer<<"\n";
	return 0;
}


// ddg pointers2.cpp

#include <iostream>
using namespace std;

int main(){
	int one = 111 , two = 222;
	int *p1, * p2;
	p1 = &one;
	p2 = &two;
	*p1 = 1010;
	*p2 = *p1;
	p2 = p1;
	*p2 = 2020;
	
	cout<< "one is" << one <<" "<< one <<" \n";
	cout<<"two is "<<two <<" "<<two<<" \n";
	cout<<"one two locations "<<&one<<" "<<&two<<" \n";
	cout<<"pointer values "<<*p1<<" "<<*p2<<"\n";
	cout<<"pointer values "<<&p1<<" "<<&p2<<"\n";
	return 0;
}
