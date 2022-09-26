#include <iostream>
#include <string>
using namespace std;


int main()
{
   string name;
   string favouriteSport;
   string favouriteTeam;
   string favouritePlayer;


   cout << "What is your name? " << endl;
   getline(cin,name);
   cout<<endl;

   cout << "Hey, "<<name<<endl;
   cout<<endl;

   cout<< "What is your favourite sport?"<<endl;
   getline(cin,favouriteSport);
   cout<<endl;

   cout<< "No way I love "<< favouriteSport << endl;
   cout<<endl;

   cout<< "What is your favourite team?"<<endl;
   getline(cin,favouriteTeam);
   cout<<endl;

   cout<< "What are the chances!! I love the " << favouriteTeam << endl;
   cout<<endl;

   cout<< "Who is your all time favourite player?? "<<endl;
   getline(cin,favouritePlayer);
   cout<<endl;

   cout<< "I am a huge fan of "<< favouritePlayer << endl;
   cout<<endl;

   cout<< "Thank you! " <<endl;






   system("pause>0");
   return 0;

}
