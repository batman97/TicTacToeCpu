 #include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

void intialize(char board[][3])
{
	for(int i=0;i<3;i++)
	{
	  for(int j=0;j<3;j++)
	  board[i][j]=' ';
    }
}

void printboard(char board[][3])
{
    system("cls");// use library <stdlib.h>
    cout<<endl<<endl;
    cout<<"<TIC TAC TOE>"<<endl;
    cout<<endl<<endl;
	for(int i=0;i<4;i++)
	{

		cout<<i<<"|";
	   for(int j=0;j<4;j++)
	   {
	   	  if(i==0 && j!=0)
	   	  cout<<j<<"|";
	   	  else if(i!=0 && j!=0)
	   	  cout<<board[i-1][j-1]<<"|";
	   }

	   cout<<endl<<"--------"<<endl;

	}
	cout<<endl<<endl;
}
void rowc(char board[][3],string n1, char ch1, string n2, char ch2,bool &run)
{
    int p=0;
    int c=0;

	for(int i=0;i<3;i++)//row
		{
		    p=0,c=0;
			for(int j=0;j<3;j++)
			{
			   if(board[i][j]==ch1)
			   p++;
			   else if(board[i][j]==ch2)
			   c++;
		    }

            if(p==3)
		    {
		    	run=false;
		    	cout<<n1<<" is the winner";
		    	break;
			}
			if(c==3)
		    {
		    	run=false;
		    	cout<<n2<<" is the winner";
		    	break;
			}
        }

}
void colc(char board[][3],string n1, char ch1, string n2, char ch2,bool &run)
{

	for(int i=0;i<3;i++)//col
		{
		    int p=0;
		   int  c=0;
			for(int j=0;j<3;j++)
			{
			   if(board[j][i]==ch1)
			   p++;
			   else if(board[j][i]==ch2)
			   c++;
		    }
		    if(p==3)
		    {
		    	run=false;
		    	cout<<n1<<" is the winner";
		    	break;
			}
			if(c==3)
		    {
		    	run=false;
		    	cout<<n2<<" is the winner";
		    	break;
			}

	    }
}
void diagc(char board[][3],string n1, char ch1, string n2, char ch2,bool &run)
{

	    int p=0,c=0;
		for(int i=0;i<3;i++)
		{

			for(int j=0;j<3;j++)
			{
			   if( i==j && board[i][j]==ch1)
			   p++;
			   else if(i==j && board[i][j]==ch2)
			   c++;
		    }
		    if(p==3)
		    {
		    	run=false;
		    	cout<<n1<<" is the winner";
		    	break;
			}
			if(c==3)
		    {
		    	run=false;
		    	cout<<n2<<" is the winner";
		    	break;
			}

	    }
		p=0,c=0;
		for(int i=0;i<3;i++)
		{

			for(int j=0;j<3;j++)
			{
			   if((i+j)==2 && board[i][j]==ch1)
			   p++;
			   else if((i+j)==2 && board[i][j]==ch2)
			   c++;
		    }
		    if(p==3)
		    {
		    	run=false;
		    	cout<<n1<<" is the winner";
		    	break;
			}
			if(c==3)
		    {
		    	run=false;
		    	cout<<n2<<" is the winner";
		    	break;
			}

	    }

}

int rcpu(char board[3][3],int &a,int &num,char ch1, char ch2,bool &cpu)
{
    int p=0;
    int c=0;
    for(int i=0;i<3;i++)
    {
        p=0,c=0;
        for(int j=0;j<3;j++)
        {
            if(board[i][j]==ch1)
            p++;
            else if(board[i][j]==ch2)
            c++;
        }

        if(c==2)
        {

            if(board[i][0]==' ')
            {board[i][0]=ch2;
             num++;
             a++;
             cpu=true;

             printboard(board);
             return 1;
             }
             if(board[i][1]==' ')
            {board[i][1]=ch2;
             num++;
             a++;
             cpu=true;

             printboard(board);
             return 1;}
             if(board[i][2]==' ')
            {board[i][2]=ch2;
              num++;
             a++;
             cpu=true;

             printboard(board);
             return 1;}

        }
    }
    for(int i=0;i<3;i++)
    {
        p=0,c=0;
        for(int j=0;j<3;j++)
        {
            if(board[i][j]==ch1)
            p++;
            else if(board[i][j]==ch2)
            c++;
        }


         if(p==2)
        {
            if(board[i][0]==' ')
            {board[i][0]=ch2;
             num++;
             a++;
             cpu=true;
             printboard(board);
             return 1;}
             if(board[i][1]==' ')
            {board[i][1]=ch2;
             num++;
             a++;
             cpu=true;
             printboard(board);
             return 1;}
             if(board[i][2]==' ')
            {board[i][2]=ch2;
             num++;
             a++;
             cpu=true;
             printboard(board);
             return 1;}


        }

    }


}

int ccpu(char board[3][3],int &a,int &num,char ch1, char ch2,bool &cpu)
{
    int p=0;
    int c=0;
    for(int i=0;i<3;i++)
    {
        p=0,c=0;
        for(int j=0;j<3;j++)
        {
            if(board[j][i]==ch1)
            p++;
            else if(board[j][i]==ch2)
            c++;
        }

        if(c==2)
        {

            if(board[0][i]==' ')
            {board[0][i]=ch2;
             num++;
             a++;
             cpu=true;
             printboard(board);
             return 1;}
             if(board[1][i]==' ')
            {board[1][i]=ch2;
             num++;
             a++;
             cpu=true;

             printboard(board);
             return 1;}
             if(board[2][i]==' ')
            {board[2][i]=ch2;
              num++;
             a++;
             cpu=true;

             printboard(board);
             return 1;}

        }
    }

    for(int i=0;i<3;i++)
    {
        p=0,c=0;
        for(int j=0;j<3;j++)
        {
            if(board[j][i]==ch1)
            p++;
            else if(board[j][i]==ch2)
            c++;
        }
         if(p==2)
        {
            cout<<"CPU's turn:(2)";
            if(board[0][i]==' ')
            {board[0][i]=ch2;
             num++;
             a++;
             cpu=true;
             cout<<"1"<<endl;
             printboard(board);
             return 1;}
             if(board[1][i]==' ')
            {board[1][i]=ch2;
             num++;
             a++;
             cpu=true;
             cout<<"1"<<endl;
             printboard(board);
             return 1;}
             if(board[2][i]==' ')
            {board[2][i]=ch2;
              num++;
             a++;
             cpu=true;
             cout<<"1"<<endl;
             printboard(board);
             return 1;}

        }

    }

}

int dcpu(char board[3][3],int &a,int &num,char ch1, char ch2,bool &cpu)
{
    int p=0,c=0;
		for(int i=0;i<3;i++)
		{

			for(int j=0;j<3;j++)
			{
			   if( i==j && board[i][j]==ch1)
			   p++;
			   else if(i==j && board[i][j]==ch2)
			   c++;
		    }
        }
        if(c==2)
        {
            for(int i=0;i<3;i++)
            {

              if(board[i][i]==' ')
              {board[i][i]=ch2;
               num++;
               a++;
               cpu=true;
               printboard(board);
               return 1;
               }
            }
        }
        if(p==2)
        {
            for(int i=0;i<3;i++)
            {

              if(board[i][i]==' ')
              {board[i][i]=ch2;
               num++;
               a++;
               cpu=true;
               printboard(board);
               return 1;
               }
            }
        }
		p=0,c=0;
		for(int i=0;i<3;i++)
		{

			for(int j=0;j<3;j++)
			{
			   if((i+j)==2 && board[i][j]==ch1)
			   p++;
			   else if((i+j)==2 && board[i][j]==ch2)
			   c++;
		    }
        }
       if(c==2)
      {
          for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                if((i+j)==2 && board[i][j]==' ')
                {
                  if(board[i][j]==' ')
                   {board[i][j]=ch2;
                    num++;
                    a++;
                    cpu=true;
                    printboard(board);
                    return 1;
                   }
                }
              }
         }
       }
       if(p==2)
      {
          for(int i=0;i<3;i++)
         {
             for(int j=0;j<3;j++)
             {
                if((i+j)==2 && board[i][j]==' ')
                {
                  if(board[i][j]==' ')
                   {board[i][j]=ch2;
                    num++;
                    a++;
                    cpu=true;
                    printboard(board);
                    return 1;
                   }
                }
              }
         }
       }


}

void game(char board[][3],string n1, char ch1, string n2, char ch2)
{
	int x,y,a=0,p=0,c=0,num=0;
	bool cpu=false;
	mt19937 sim(time(NULL));
    uniform_int_distribution <int> cor(1,3);
	bool run = true;
	while(run== true)
	{
		if(a%2==0)
		{
			cout<<n1<<"'s turn , please enter the coordinate:"<<endl;
			cin>>x>>y;
			if((!cin>>x))
		    {
              cout<<"bad input"<<endl;
		      //system("pause");
		      cin.clear();
		      cin.ignore(999999, '\n');
		      continue;
		    }
		    if((!cin>>y))
		    {
              cout<<"bad input"<<endl;
		      //system("pause");
		      cin.clear();
		      cin.ignore(999999, '\n');
		      continue;
		    }
			if(x>3 || x<1)
            {
                cout<<"bad input"<<endl;
                continue;
            }
			if(y>3 || y<1)
			{
                cout<<"bad input"<<endl;
                continue;
            }
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]=ch1;
				num++;
				if(cpu==true)
                cpu=false;
			}
			else
			continue;
	    }

		else
		{
		    if(a%2!=0)
		    {rcpu(board,a,num,ch1,ch2,cpu);
            }
            if(a%2!=0)
		    {ccpu(board,a,num,ch1,ch2,cpu);
            }
            if(a%2!=0)
		    {dcpu (board,a,num,ch1,ch2,cpu);
            }
		    if (a%2!=0)
          {

			x=cor(sim);
			y=cor(sim);
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]=ch2;
				num++;
				cpu=false;
			}
			else
			continue;
          }

		}

		cout<<endl;

		if(cpu==false)
        {  a++;
           cout<<"3"<<endl;
           printboard(board);
         }
		rowc(board, n1,  ch1,  n2,  ch2, run);
		colc(board, n1,  ch1,  n2,  ch2, run);
		diagc(board, n1,  ch1,  n2,  ch2, run);

		if(num==9)
		{
			cout<<"its a draw!!";
			run=false;
			break;
		}


    }
}
int main()
{
	string n1;
	string n2="CPU";
	char ch1;
	char ch2;
	char c='y';
	char board[3][3];
  while( c== 'y' || c=='Y')
    { system("cls");
        cout<<"Welcome to tic tac toe"<<endl<<endl;
	cout<<"<CPU version>"<<endl<<endl;
	cout<<"Please enter your name:"<<endl;
	cin>>n1;
	cout<<"Welcome "<<n1;
	cout<<endl<<n1<<" select your symbol:"<<endl;
	cin>>ch1;
	cout<<endl<<"Please select CPU's symbol:"<<endl;
	cin>>ch2;
    intialize(board);
    printboard(board);
    cout<<endl;
    game(board,n1,ch1,n2,ch2);
    cout<<endl<<"Do you want to restart the game (y/n)"<<endl;
    cin>>c;


    }

	return 0;
}
