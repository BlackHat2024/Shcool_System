void l1();
void l2();
void l3();

void admin()
{
	cc(35);
  cout<<"You should be admin to perform this operation. ";
	cc(0);
	cc(32);
	cout<<"\nEnter username: ";
	string user;
	cin>>user;
  cout<<"Enter password: ";
  string p;
	cc(0);
	cc(32);
	cc(42);
  cin>>p;
	cc(0);
	clear();
  if((p.compare(a.pass)) == 0&&(user.compare(a.name)) == 0)
	{
		char w='y';
		while(w=='y')
		{
			int v;
			cc(33);
			cc(4);
			cc(3);
			cout<<"1.List of teachers\n2.List of students\n3.List of subjects\n4.Exit"<<endl;
			cin>>v;
			cc(0);
			switch(v)
			{
				case 1:l1();break;
				case 2:l2();break;
				case 3:l3();break;
				case 4:break;
			}
			if(v==4)
			{
				w='n';
				clear();
			}
		}
	}
}
void l1()
{
	ifstream read("teacher.txt",ios::in);
  for(int i=0;i<rc("teacher.txt");i++)
	{
    read>>t[i].id>>t[i].pass>>t[i].name>>t[i].surname>>t[i].age>>t[i].s;
  }
	read.close();
	cc(33);
	cc(44);
	cout<<"Teacher id"<<setw(20)<<"Teacher pass"<<setw(15)<<"Name"<<setw(18)<<"Surname"<<setw(18)<<"Age"<<setw(10)<<"Wage"<<endl;
	cc(0);
	for(int i=0;i<rc("teacher.txt");i++)
	{
    cout<<t[i].id<<setw(22)<<t[i].pass<<setw(18)<<t[i].name<<setw(18)<<t[i].surname<<setw(18)<<t[i].age<<setw(10)<<t[i].s<<"$"<<endl;
  }
  enter();
	enter();
	clear();
}
void l2()
{
  string f="student.txt";
	ifstream r("student.txt",ios::in);
	int ye;
	for(int i=0;i<rc(f);i++)
	{
  	r>>s[i].regnum>>s[i].name>>s[i].surname>>ye>>s[i].age;
		switch(ye)
		{
  		case 10:{s[i].y=First;break;}
  		case 11:{s[i].y=Second;break;}
  		case 12:{s[i].y=Third;break;}
  	}
	}
	r.close();
  string f2="subject.txt";
	ifstream r2("subject.txt",ios::in);
	for(int i=0;i<rc(f2);i++)
	{
    r2>>su[i].id>>su[i].name>>su[i].tid;
	}
	r2.close();
	cc(33);
	cc(44);
	cout<<"Regnum"<<setw(14)<<"Name"<<setw(17)<<"Surname"<<setw(10)<<"Class"<<setw(10)<<"Age"<<endl;
	cc(0);
	for(int k=0;k<rc(f);k++)
	{
   cout<<s[k].regnum<<setw(16)<<s[k].name<<setw(17)<<s[k].surname<<setw(10)<<s[k].y<<setw(10)<<s[k].age<<endl;
	}
	enter();
	enter();
	clear();
}
void l3()
{
	ifstream r3("subject.txt",ios::in);
	for(int i=0;i<rc("subject.txt");i++)
	{
  	r3>>su[i].id>>su[i].name>>su[i].tid;
	}
	cc(33);
	cc(44);
	cout<<"Subject id"<<setw(20)<<"Subject Name"<<setw(20)<<"Teacher id"<<endl;
	cc(0);
	for(int i=0;i<rc("subject.txt");i++)
	{
  	cout<<su[i].id<<setw(26)<<su[i].name<<setw(20)<<su[i].tid<<endl;
	}
	enter();
	enter();
	clear();
}