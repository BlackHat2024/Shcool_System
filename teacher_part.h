void teacher_part()
{
	cc(32) ;
	cout<<"Enter your teacher id: ";
	int a;
	cin>>a;
	cout<<"Enter your password: ";
	string b;
	cc(0);
	cc(32);
	cc(42);
	cin>>b;
	cc(0);
	int count=0;
	ifstream teacher("teacher.txt");       
	string line;
	//The following for loop counts the total number of lines in the file. 
	for (int i = 0;getline(teacher, line); ++i)
		{     
			count++;
		} 
	teacher.close();
	ifstream read("teacher.txt",ios::in);
  for(int i=0;i<count;i++)
	{
    read>>t[i].id>>t[i].pass>>t[i].name>>t[i].surname>>t[i].age>>t[i].s;
  }
	read.close();
	for(int i=0;i<count;i++)
	{ 
		string *p;
	  p=&t[i].pass;
		if(a==t[i].id&&(b.compare(*p)) == 0)
		{
			int *ptr;
			ptr=&t[i].id;
			cc(34);
			cout<<"1.Add grade to a student.\n2.Access grades of student.\n3.Opreration page.\n";
			cc(0);
			int cas;
			cin>>cas;
			switch(cas)
			{
				case 1: add(*ptr);break;
				case 2: ac(*ptr);break;
				case 3: enter();enter();clear();break;
			}
		}
	}
}