//Authors:Alejandro Ayala
#include<iostream>
#include<string>

using namespace std;

int main()
{
int lucky;

  //declare variables
   string first, last;
   cout<<"What is your first name?\n";
   cin>>first;

   cout<<"What is your last name?\n";
   cin>>last;

   cout<<"Welcome, " <<first [0]<<"." <<last [0]<< "." ", here is your fortune..." <<endl;

   cout<<"your lucky number is " <<first.length()<<endl;

   char a, A, e, E, i, I, o, O, u, U;

   if (first[0] = (a || A || e || E || i || I || o || O || u || U))
   {
   cout<<"you are destined to be famous!\n";
   }
   else 
   {
   cout<< "you should keep a low profile.\n";
   }

   int len=last.length();
   if (last[len-1] = (a || A || e || E || i || I || o || O || u || U))
   {
   cout<<"you have already met your true love.\n";
   }
   cout<<"have a good day!"<<endl;
  //get user input

  //tell fortune

  return 0;
}
