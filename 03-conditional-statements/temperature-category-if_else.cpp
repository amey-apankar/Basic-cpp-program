//Categorize temperature:Write a program to categorize the temperature
//i)Temp>=30,"HOT"
//ii)20<=temp<30,"WARM"
//iii)temp<20,"COLD"
#include<iostream.h>
#include<conio.h>
main(){
clrscr();
int t;
cout<<"Enter a temperature";
cin>>t;
if(t>=30)
{
cout<<"HOT";
}
else if(20<=t && t<30)
{
cout<<"WARM";
}
else
{
cout<<"COLD";
}
getch();
}
