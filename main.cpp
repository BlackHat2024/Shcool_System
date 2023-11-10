#include<iostream> 
#include<fstream> 
#include<string.h>
#include <string>
#include <iomanip>
using namespace std;
void teacher_part();
void student();
void teacher();
void subject();
void ac();
void student_part();
void admin();
void readme();
#include "help_fun.h" 
#include "admininfo.h"
#include "teacher.h"
#include "student.h"
#include "subject.h"
#include "add.h"
#include "teacher_part.h"
#include "student_part.h"
#include "admin.h"
int main(){
	int c=0;
	show();//function to print "EPOKA" with asterix
	cc(35) ;//color function
	cout<<"Site url: ";
	cc(0);//color function to turn color to defult
	cc(34) ;
	cc(1) ;
	cc(4) ;
	cout<<"https://www.epoka.edu.al/"<<endl<<endl;
	cc(0);
	enter();//function to press enter to continue
	clear();//function to clear what have been shown in compiler screen
  while(c!=8)
	{
		cc(33) ;
		cout<<"Available operations:\n\n1.Add teacher\n2.Add student\n3.Add subject\n4.Teacher part\n5.Student part\n6.Admin\n7.Read Me File\n8.Exit\n"; 
		cc(0);
		cin>>c;
		clear();
		switch(c)//switch case to go in different proceses of this program
		{
			case 1: teacher(); break;//function to add teachers
			case 2: student(); break;//function to add students 
			case 3: subject(); break;//function to add subjects
			case 4: teacher_part(); break;//function for teachers
			case 5: student_part(); break;//function for students
			case 6: admin(); break;//function of admin
			case 7: readme();enter();enter();clear();break;
			case 8: break;//Exit
  	}
	}
	return 0;

}