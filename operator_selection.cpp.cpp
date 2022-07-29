/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main ()
{
    
int num1;
cout<<"enter value of num1 =";
cin>>num1;
int num2;
cout<<"enter value of num2 =";
cin>>num2;
char a;
cout<<"enter the characters + - * / %";
cin>>a;
if(a == '*'){
cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
}
 else if (a == '/'){
 cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;    
 }
  else if (a == '%'){
 cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;    
 } else if (a == '+'){
 cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;    
 }
  else if (a == '-'){
 cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;  
 
 }
 