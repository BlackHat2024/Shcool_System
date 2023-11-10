enum year
{
	First=10,Second,Third
};

struct nstudent
{
  string regnum,name,surname;
	int age;
	year y;
}s[1000];

struct grade
{
  string sid;
	int su,tid,g,clas;
}g[100];

void student()
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
  	int n,ye;
  	cout<<"Enter number of new students: ";
  	cin>>n;
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
		n=n+rc(f);
		ofstream outfile;  
  	ofstream student("student.txt",ios::app);
  	for (int i=rc(f);i<n;i++)
		{
			cout<<"Previous registration number: "<<s[i-1].regnum;
  		cout<<"\nEnter student registration number from 0000-0999: ";
  		cin>>s[i].regnum;
  		cout<<"Enter name: ";
  		cin>>s[i].name;
  		cout<<"Enter surname: ";
  		cin>>s[i].surname;
  		cout<<"Year of studies: ";
  		cin>>ye;
  		cout<<"Enter age: ";
			cin>>s[i].age;
  		switch(ye)
			{
  			case 10:{s[i].y=First;break;}
  			case 11:{s[i].y=Second;break;}
  			case 12:{s[i].y=Third;break;}
  		}
  		student<<s[i].regnum<<' '<<s[i].name<<' '<<s[i].surname<<' '<<s[i].y<<' '<<s[i].age<<endl;
 		}
		student.close();
		clear();
	}
	if((p.compare(a.pass)) != 0||(user.compare(a.name)) != 0)
	{
		cc(31);
		cout<<"You are not admin.\nPassword or Username incorrect";
	 enter();
	 enter();
	 clear();
	}
	else
	{
	 	enter();
  }
}