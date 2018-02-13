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
  //get user input

  //tell fortune

  return 0;
}
