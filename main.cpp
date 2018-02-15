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

   if (first[0] == 'a' ||first[0] == 'A' ||first[0] == 'e' ||first[0] == 'E' ||first[0] == 'i' ||first[0] == 'I' ||first[0] == 'o' ||first[0] == 'O' ||first[0] == 'u' ||first[0] == 'U')
   {
   cout<<"you are destined to be famous!\n";
   }
   else 
   {
   cout<< "you should keep a low profile.\n";
   }

   int len=last.length();
   char let = last[len-1];
   if (let =='a' ||let == 'A' ||let == 'e' ||let == 'E' ||let == 'i' ||let== 'I' ||let == 'o' ||let =='O' ||let == 'u' ||let == 'U')
   {
   cout<<"you have already met your true love.\n";
   }
   cout<<"have a good day!"<<endl;
  //get user input

  //tell fortune

  return 0;
}
