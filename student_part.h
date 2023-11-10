void average(int,string,int x=1);//overloading
void average(string,int,int x=1);//functions
int r1(int arr1d[],int);
template <typename T> //template
T r2(T arr2d[10][2],T y)//2D array
{
	int sum2d=0;
	for(int k=0;k<y;k++)
	{
		for(int l=0;l<2;l++)
		{
	    sum2d=sum2d+arr2d[k][l];
		}
	}
	return sum2d;
}

void student_part()
{
	cc(32);
	cout<<"Enter your id :";
	string f6;
	cin>>f6;
	ifstream r(f6,ios::in);
	int y=rc(f6);
	for(int i=0;i<rc(f6);i++)
	{
		r>>g[i].sid>>g[i].tid>>g[i].su>>g[i].g>>g[i].clas;
	}
	cc(33);
	cc(44);
	cout<<"Teacher id"<<setw(16)<<"Subject id"<<setw(10)<<"Grade"<<setw(10)<<"Class"<<endl;
	cc(0);
	for(int i=0;i<rc(f6);i++)
	{
		if(f6.compare(g[i].sid)==0)
		{
			cout<<g[i].tid<<setw(16)<<g[i].su<<setw(16)<<g[i].g<<setw(10)<<g[i].clas<<endl;
		}
	}
	char a='y';
	while(a=='y')
	{
		cc(33);
		cc(4);
		cout<<"\n1.Your avg\n2.1st Year avg\n3.2nd Year avg\n4.3rd Year avg\n5.Subject avg\n6.1st Year subject avg\n7.2nd Year subject avg\n8.3rd Year subject avg\n9.Exit\n";
		int q;
		cc(0);
		cin>>q;
		switch(q)
		{
			case 1:average(y,f6);break;
			case 2:average(y,f6,10);break;
			case 3:average(y,f6,11);break;
			case 4:average(y,f6,12);break;
			case 5:average(f6,y);break;
			case 6:average(f6,y,10);break;
			case 7:average(f6,y,11);break;
			case 8:average(f6,y,12);break;
			case 9: enter();enter();clear();break;
		}
		if(q<9)
		{
			cout<<"\nDo you want to see anything else? y/n :";
			cin>>a;
			if(a=='n')
			{
				a='n';
				enter();
				clear();
			}
		}
		else{
			a='n';
			clear();
		}
	}

}

void average(int y,string f6,int x)
{
	int k=0;
	if(x==1)
	{
		double avg,s=0;
		int arr1d[10],arr2d[10][2],i=0;
		if(y%2==0)
		{
			cout<<"2d avg\n";
			int te=y/2;
			for(int k=0;k<y;k++)
			{
				for(int l=0;l<2;l++)
				{
					arr2d[k][l]=g[i].g;
					i++;
				}
			}
			s=r2(arr2d,y);//passing 2D array into function
		}
		else
		{
			cout<<"rec avg\n";
			for(int i=0;i<y;i++)
			{
				arr1d[i]=g[i].g;
			}
			s=r1(arr1d,y);
		}
		avg=s/y;
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
				s=s+g[i].g;
				c1++;
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
				s=s+g[i].g;
				c2++;
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
				s=s+g[i].g;
				c3++;
			}
		}
		avg=s/c3;
	  cout<<"3rd year Avg is: "<<fixed<<setprecision(2)<<avg;
	}
}

void average(string f6,int y,int x)
{
	cout<<"Enter subject code: ";
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

int r1(int arr1d[],int y)//recursion function
{
	if (y <= 0)
	{ 
    return 0;
	} 
	else
	{
    return (r1(arr1d, y - 1) + arr1d[y - 1]); 
	}
}
