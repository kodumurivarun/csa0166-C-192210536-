#include<iostream>
class classB;
class classA {
	private:
		int numberA;
		public:
			classA(int a) : numberA(a) {}
			friend int findMax(classA, classB);
 };
 class classB {
 	private:
 		int numberB;
 		public:
 			classB(int b) : numberB(b) {}
			 friend int findMax(classA,classB);
 };
 int findMax(classA a,classB b) {
 	if (a.numberA > b.numberB) {
 		return a.numberA;
	 } else {
	 	return b.numberB;
	 }
 }
 int main() {
 	classA objA(10);
 	classB objB(20);
 	int max = findMax(objA,objB);
 	std::cout << "The maximum number is: "<<max<<std::endl;
 	return 0;
 }
