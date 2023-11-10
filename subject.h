struct nsubjecet
{
  string name;
	int tid,id;
}su[100];
 
void subject()
{
	cc(33);
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
    int n3,y;
  	cout<<"Enter number of new subject: ";
  	cin>>n3;
		int count=0;
		ifstream f("subject.txt");       
  	string line;
  	//The following for loop counts the total number of lines in the file. 
  	for (int i = 0;getline(f, line); ++i)
		{     
  	  count++;
		} 
		f.close();
  	n3=n3+count;
		ifstream r3("subject.txt",ios::in);
		for(int i=0;i<count;i++)
		{
  		r3>>su[i].id>>su[i].name>>su[i].tid;
		}
		r3.close();
		ofstream outfile;  
  	ofstream subject("subject.txt",ios::app);
  	for (int i=count;i<n3;i++)
		{
			cout<<"Previous subject id: "<<su[i-1].id<<endl;
  		cout<<"Enter suject id from 2000-2999: ";
  		cin>>su[i].id;
  		cout<<"Enter name: ";
  		cin>>su[i].name;
  		cout<<"Enter teacher id: ";
  		cin>>su[i].tid;
  		subject<<su[i].id<<' '<<su[i].name<<' '<<su[i].tid<<endl;
 		}
		subject.close();
	 clear();
	}
 if((p.compare(a.pass)) != 0||(user.compare(a.name)) != 0)
 {
  cc(31);
	cout<<"You are not admin.\nPassword or Username incorrect";
	enter();
	enter();
	clear();}
	else
	{
		enter();
	}
}