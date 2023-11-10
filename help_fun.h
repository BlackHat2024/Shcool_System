void delay(int number_of_seconds) //delay function 
{
  int milli_seconds = 1000 * number_of_seconds; 
  clock_t start_time = clock();  
  while (clock() < start_time + milli_seconds) ; 
} 

void cc(int a)//color function
{
	printf("\033[1;%dm" ,a);
}

void show()//asterix printing function
{
	cout<<"\033[1;32m";
	cout<<"########   #####       ######     #    #        #"<<endl ;
  delay(100) ;
	cout<<"#          ######     ########    #   #       #   #"<<endl;
  delay(100) ;
	cout<<"#          ######    ##########   #  #       #     #"<<endl;
  delay(100) ;
	cout<<"########   #####    ############  ###        #######"<<endl;
  delay(100) ;
	cout<<"#          #         ##########   #  #       #     #"<<endl;
  delay(100) ;
	cout<<"#          #          ########    #   #      #     #"<<endl;
  delay(100) ;
	cout<<"########   #           ######     #    #     #     #"<<endl;
  delay(100) ;
  cout<<"\033[0m"<<endl;
}

void enter()//function to perform enter button
{
  while( getchar() != '\n' );
}

void clear()//function to clear workplace
{
  delay(100);
  cout << "\x1B[2J\x1B[H";
}

int rc(string file)//generic functions that counts the number of elements in a file
{
	int count=0;
	ifstream a(file,ios::in);     
  string line;
  for (int i = 0;getline(a, line); ++i)
 {     
    count++;
 }
	return count;
}

int exit()
{
	return 0;
}

void readme()//readme file printing function
{
	string line;
	int col=31;
	ifstream file("Readme.txt");
	if(file.is_open())
	{
		while(getline(file,line))
		{
			if(col==38)
			{
				col=31;
			}
			cc(col);
			cout<<line<<endl;
			cc(0);
			col++;
		}
	}
}