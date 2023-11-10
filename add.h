void taverage(int,string,int,int x=1);
void taverage(string,int,int,int x=1);
void add(int &ptr)
{
	int ye;
	string f="student.txt";
	ifstream r("student.txt",ios::in);
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
	int zh[5];
	int x=0;
	for(int i=0;i<rc(f2);i++)
	{
		if(ptr==su[i].tid)
		{
			zh[x]=su[i].id;
			x++;
		}
	}
	char z='y';
	while(z=='y')
	{
		cc(33);
		cc(44);
		cout<<"Regnum"<<setw(14)<<"Name"<<setw(17)<<"Surname"<<setw(10)<<"Class"<<setw(10)<<"Age"<<endl;
		cc(0);
		for(int k=0;k<rc(f);k++)
		{
		cout<<s[k].regnum<<setw(16)<<s[k].name<<setw(17)<<s[k].surname<<setw(10)<<s[k].y<<setw(10)<<s[k].age<<endl;
		}
		cout<<"Enter student id: ";
		string a1;
		cin>>a1;
		clear();
		cout<<"Enter number of grades you want to add: ";
		int a2;
		for(int i=0;i<rc(f);i++)
		{
			if(a1.compare(s[i].regnum)==0)
			{
				ofstream outfile;  
				ofstream grade(a1,ios::app);
				cin>>a2;
				cout<<"your subject id are: ";
				for(int l=0;l<x;l++)
				{
					cout<<zh[l]<<" , ";
				}
				for(int j=0;j<a2;j++)
				{
					g[i].sid=a1;
					g[i].tid=ptr;
					cout<<"\nEnter subject id: ";
					cin>>g[i].su;
					cout<<"Enter grade: ";
					cin>>g[i].g;
					cout<<"Enter class: ";
					cin>>g[i].clas;
					grade<<g[i].sid<<' '<<g[i].tid<<' '<<g[i].su<<' '<<g[i].g<<' '<<g[i].clas<<endl;
				}
			}
		}
		cout<<"Do you wan to enter more grades? y/n :";
		cin>>z;
	}
	if(z=='n')
	{
		enter();
		enter();
		clear();
		teacher_part();
  }
}

void ac(int &ptr)
{
	string f4;
	int e;
	string f1="student.txt";
	ifstream r1("student.txt",ios::in);
	for(int i=0;i<rc(f1);i++)
	{
  	r1>>s[i].regnum>>s[i].name>>s[i].surname>>e>>s[i].age;
		switch(e)
		{
  		case 10:{s[i].y=First;break;}
  		case 11:{s[i].y=Second;break;}
  		case 12:{s[i].y=Third;break;}
  	}
	}
	r1.close();
	char z='y';
	while(z=='y')
	{
		cc(33);
		cc(44);
		cout<<"Regnum"<<setw(14)<<"Name"<<setw(17)<<"Surname"<<setw(10)<<"Class"<<setw(10)<<"Age"<<endl;
		cc(0);
		for(int k=0;k<rc(f1);k++)
		{
      cout<<s[k].regnum<<setw(16)<<s[k].name<<setw(17)<<s[k].surname<<setw(10)<<s[k].y<<setw(10)<<s[k].age<<endl;
		}
	  cout<<"Enter the id of student: ";
		cin>>f4;
    clear();
	  ifstream r(f4,ios::in);
		for(int i=0;i<rc(f4);i++)
		{
			r>>g[i].sid>>g[i].tid>>g[i].su>>g[i].g>>g[i].clas;
		}
		cc(21);
		cc(43);
		cout<<"Student with id: "<<f4<<endl;
		cc(0);
		cc(33);
		cc(44);
		cout<<"Teacher id"<<setw(16)<<"Subject id"<<setw(10)<<"Grade"<<setw(10)<<"Class"<<endl;
		cc(0);
		for(int i=0;i<rc(f4);i++)
		{
		  if(ptr==g[i].tid)
			{
			cout<<g[i].tid<<setw(16)<<g[i].su<<setw(16)<<g[i].g<<setw(10)<<g[i].clas<<endl;
	  	}
		}
		int zhak=rc(f4);
		int o;
		while(z=='y')
		{
			cc(35);
			cc(3);
			cout<<"Other options:\n1.Student avg\n2.1st Year avg\n3.2nd Year avg\n4.3rd Year avg\n5.Subject avg\n6.1st Year subject avg\n7.2nd Year subject avg\n8.3rd Year subject avg\n9.Exit\n";
			cc(0);
			cin>>o;
			switch(o)
			{
				case 1:taverage(zhak,f4,ptr);break;
				case 2:taverage(zhak,f4,ptr,10);break;
				case 3:taverage(zhak,f4,ptr,11);break;
				case 4:taverage(zhak,f4,ptr,12);break;
				case 5:taverage(f4,zhak,ptr);break;
				case 6:taverage(f4,zhak,ptr,10);break;
				case 7:taverage(f4,zhak,ptr,11);break;
				case 8:taverage(f4,zhak,ptr,12);break;
				case 9:z='n';break;
			}
			cout<<"\nDo you want to see more about this student? y/n: ";
			cin>>z;
		}
			cout<<"\nDo you want to see other student grade? y/n: ";
			cin>>z;
			clear();
	}
	if(z=='n')
	{
		enter();
		enter();
		clear();
		teacher_part();
	}
}

void taverage(int y,string f6,int ptr,int x)
{
	int k=0;
	if(x==1)
	{
		double avg,s=0;
		int c=0;
		for(int i=0;i<y;i++)
		{
			if(ptr==g[i].tid)
			{
				s=s+g[i].g; c++;
			}
		}
		avg=s/c;
		cout<<"Total Avg is: "<<fixed<<setprecision(2)<<avg;
	}
	if(x==10)
	{
		double avg,s=0;
		int c1=0;
		for(int i=0;i<y;i++)
		{
			if(x==g[i].clas)
			{
				if(ptr==g[i].tid)
				{
				  s=s+g[i].g;
			  	c1++;
				}
			}
		}
		avg=s/c1;
	  cout<<"1st year Avg is: "<<fixed<<setprecision(2)<<avg;
	}
	if(x==11)
	{
		double avg,s=0;
		int c2=0;
		for(int i=0;i<y;i++)
		{
			if(x==g[i].clas)
			{
				if(ptr==g[i].tid)
				{
				 s=s+g[i].g;
			  	c2++;
				}
			}
		}
		avg=s/c2;
		cout<<"2nd year Avg is: "<<fixed<<setprecision(2)<<avg;
	}
	if(x==12)
	{
		double avg,s=0;
		int c3=0;
		for(int i=0;i<y;i++)
		{
			if(x==g[i].clas)
			{
				if(ptr==g[i].tid)
				{
				  s=s+g[i].g;
			  	c3++;
				}
			}
		}
		avg=s/c3;
	  cout<<"3rd year Avg is: "<<fixed<<setprecision(2)<<avg;
	}
}

void taverage(string f6,int y,int ptr,int x)
{
	ifstream r3("subject.txt",ios::in);
	for(int i=0;i<rc("subject.txt");i++)
	{
  	r3>>su[i].id>>su[i].name>>su[i].tid;
	}
	int kl=0,kola[10];
  for(int i=0;i<rc("subject.txt");i++)
	{
		if(ptr==su[i].tid)
		{
      kola[kl]=su[i].id;
		  kl++;
		}
	}
	cout<<"Your subject id are: ";
	for(int i=0;i<kl;i++)
	{
		cout<<kola[i]<<" , ";
	}
	cout<<"\nEnter subject code: ";
	int r;
	cin>>r;
	if(x==1)
	{
		double avg1,s=0,l=0;
		for(int i=0;i<y;i++)
		{
			if(r==g[i].su)
			{
		    s=s+g[i].g;
			 l++;
			}
		}
		avg1=s/l;
		cout<<"Total Avg of "<<r<<" is: "<<fixed<<setprecision(2)<<avg1;
	}
	if(x==10)
	{
	 double avg1,s=0,l=0;
	 for(int i=0;i<y;i++)
	 {
  	  if(r==g[i].su&&x==g[i].clas)
		  {
		    s=s+g[i].g;
		  	 l++;
	  	}
	  }
		avg1=s/l;
		cout<<"1st year Avg of "<<r<<" is: "<<fixed<<setprecision(2)<<avg1;
	}
	if(x==11)
	{
		double avg1,s=0,l=0;
		for(int i=0;i<y;i++)
		{
			if(r==g[i].su&&x==g[i].clas)
			{
		    s=s+g[i].g;
				l++;
			}
		}
		avg1=s/l;
		cout<<"Second year Avg of "<<r<<" is: "<<fixed<<setprecision(2)<<avg1;
	}
	if(x==12)
	{
		double avg1,s=0,l=0;
		for(int i=0;i<y;i++)
		{
			if(r==g[i].su&&x==g[i].clas)
			{
				s=s+g[i].g;
				l++;
			}
		}
		avg1=s/l;
		cout<<"3rd year Avg of "<<r<<" is: "<<fixed<<setprecision(2)<<avg1;
	}		
}