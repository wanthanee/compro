#include<iostream>
#include<string>
#include<iomanip>
#include <algorithm>
using namespace std;
void transposematrix(int temp[][50]);
int row, col;
int trans[50][50];
int main()
{
	char m;
	int n=0;
	int ele[50][50];
	do{
		cout<<"**************************************"<<endl;
		cout<<"                  Menu				 "<<endl;
		cout<<" 1.  Enter Matrix					 "<<endl;
		cout<<" 2.  Display Matrix					 "<<endl;
		cout<<" 3.  Transpose Matrix				 "<<endl;
		cout<<" 4.  Exit							 "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"Please select menu ";
		cin>>m;
	if(m=='1')
	{	
			cout<<"How many row ? ";
			cin>>row;
			cout<<"How many Column ? ";
			cin>>col;
			for(int j=0;j<row;j++)
			{   
				for(int i=0;i<col;i++)
					{	cout<<"Enter Element["<<j+1<<","<<i+1<<"] : ";
						cin>>ele[j][i];

					}
		
			}
	}
	else if(m=='2')
	{
		cout<<"\n--- Matrix  ---"<<endl;
		for(int j=0;j<row;j++)
		{   
			for(int i=0;i<col;i++)
			{	cout<<setw(5)<<ele[j][i];
			}
			cout<<endl;
		}
	}
	
	else if(m=='3')
	{	transposematrix(ele);
	}
	else return(0);
	}while(m='4');
	return(0);

}
void transposematrix(int temp[][50])
{
	cout<<"\n--- Transpose Matrix --- "<<endl;

	for(int j=0;j<row;j++)
	{   
		for(int i=0;i<col;i++)
			{	 trans[i][j]=temp[j][i];

			}
		cout<<endl;
		
	}

	for( int i=0;i<col;i++){
       for(int j=0;j<row;j++)
        {
            cout<<setw(5)<<trans[i][j];
         }
        cout<<endl;
    }


}