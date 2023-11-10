struct nteacher
{
  string name, surname,pass;
	int id,age,s;
}t[50];

void teacher()
{
	cc(34);
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
	int n2;
  if((p.compare(a.pass)) == 0&&(user.compare(a.name)) == 0)
	{ 
		cout<<"Enter number of new teachers: ";
		cin>>n2;
		int count=0;
		ifstream teacher("teacher.txt");       
		string line;
  	//The following for loop counts the total number of lines in the file. 
  	for (int i = 0;getline(teacher, line); ++i)
		{     
  	 count++;
		} 
		teacher.close();
    n2=n2+count;
		ifstream read("teacher.txt",ios::in);
  	for(int i=0;i<count;i++)
		{
   		read>>t[i].id>>t[i].pass>>t[i].name>>t[i].surname>>t[i].age>>t[i].s;
  	}
		read.close();
		for (int i=count;i<n2;i++)
		{
			cout<<"Previeus teacher id: "<<t[i-1].id<<endl;
			ofstream outfile;  
			ofstream teacher("teacher.txt",ios::app);
			cout<<"Enter teacher id from 1000-1999: ";
			cin>>t[i].id;
			cout<<"Create a pasword: ";
			cin>>t[i].pass;
			cout<<"Enter name: ";
			cin>>t[i].name;
			cout<<"Enter surname: ";
			cin>>t[i].surname;
			cout<<"Enter age: ";
			cin>>t[i].age;
			cout<<"Enter salery: ";
			cin>>t[i].s;
			teacher<<t[i].id<<' '<<t[i].pass<<' '<<t[i].name<<' '<<t[i].surname<<' '<<t[i].age<<' '<<t[i].s<<endl;
		}
		teacher.close();
	  clear();
    exit();
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
