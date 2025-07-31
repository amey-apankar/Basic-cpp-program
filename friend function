//Write a program in C++ to add two private members from two different classes using a friend function..
#include<iostream.h>
#include<conio.h>
class ClassB;
class ClassA{
private:
int numA;
public:
void setData(int a){
numA=a;
}
friend void add(ClassA,ClassB);
};
class ClassB{
private:
int numB;
public:
void setData(int b){
numB=b;
}
friend void add(ClassA,ClassB);
};
void add(ClassA a,ClassB b){
int sum=a.numA+b.numB;
cout<<"Sum is:"<<sum;
}
void main(){
clrscr();
ClassA obj1;
ClassB obj2;
obj1.setData(15);
obj2.setData(25);
add(obj1,obj2);
getch();
}
