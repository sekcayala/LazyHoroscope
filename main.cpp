//Authors:Alejandro Ayala
#include<iostream>
#include<string>

using namespace std;

int main()
{
int lucky;

  //declare variables
   string first, last;
   cout<<"What is your first name? \n";
   cin>>first;

   cout<<"What is your last name? \n";
   cin>>last;

   cout<<"Welcome," <<first [0]<<"." <<last [0]<< "." ", here is your fortune..." <<endl;

   cout<<"Your lucky number is " <<first.length()+last.length()<<endl;

   char a, e, i, o, u;

   if (first[0] = (a || e || i || o || u))
   {
   cout<<"You are destined to be famous!\n";
   }
   else
   {
   cout<< "You should keep a low profile.\n";
   }

   int len=last.length();
   if (last[len-1]= (a || e || i || o || u));
   {
   cout<<"You have already met your true love.\n";
   }
   cout<<"Have a good day!"<<endl;
  //get user input

  //tell fortune

  return 0;
}
