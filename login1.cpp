#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Student
{
 string fname;//first name
 string lname;//last name
 string registration;
 string classes;//Class/Section
}studentData;//Variable Intialized


struct Teacher
{
 string fname;//first name of teacher
 string lname;//last name of teacher
 string qualification;//Qualification of teacher
 string experience;//Experiance of the person
 string salary;//Pay of the Teacher
 string subject;//subject whos he/she teach
 string lecture;//Lecture per Week
 string address;//Addrres of teacher home
 string cel_no;//Phone number 
 string blod_grp;//Bool Group 
 string serves;//Number of serves in School
}tech[50];


int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tUniversity Information Managment System\n\t\t\t\t\t\t    (Powered by DXT)\n\n";
   cout<<"\t\t\t\t\t  ---------------------------------";
   cout<<"\n\t\t\t\t\t  Login: \n";	
   cout<<"\t\t\t\t\t  ---------------------------------\n\n";	
   cout << "\t\t\t\t\t  Enter Password: ";
   ch = _getch();
   while(ch != 13) //13 is the ASCII of RETURN
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "dxt1")
   {
      cout << "\n\n\n\t\t\t\t\t\t   Access Granted! \n";
      Sleep(2000);
   }
   else
   {
   	  cout << "\n\n\t\t\t\t\t  Password Incorrect!!!\n\n\t\t\t\t\t  Please Try Again.\n\n";
   	  Sleep(2000);
      system("cls");
      login();
   }
}

//Start of the Program	
int main()
{
	int login();
	login();
	return 0;
}
