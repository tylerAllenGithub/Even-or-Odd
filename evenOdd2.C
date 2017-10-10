/*Tyler Allen
CS111
3-4-15
Lab7-2
This program will receive an unknown amount of numbers and output  if it is even or odd. the user will enter a zero when there are no more numbers to enter. if the user entered no numbers beside 0 show "No numbers were entered.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int count=0;
  char answer;
  int num;
  int total=0;
  int numEven=0;
  int numOdd=0;
  double avg;

  cout<<"Do you have a number to check? y or n: ";
  cin>>answer;
  while(answer!='y'&&answer!='Y'&&answer!='N'&&answer!='n')
    {
      cout<<"Do you have a number to check? y or n: ";
      cin>>answer;
    }
  while(answer!='n'&&answer!='N')
    {
      cout<<"Enter a number: ";
      cin>>num;
      count++;
      total+=num;
      if(num%2==0)
	{	
	  numEven++;
          cout<<num<<" is even"<<endl<<endl;
	}
      else
	{
          numOdd++;
	  cout<<num<<" is odd"<<endl<<endl;
	}
      //////////ask for input again
      cout<<"Do you have a number to check? y or n: ";
      cin>>answer;
      while(answer!='y'&&answer!='Y'&&answer!='N'&&answer!='n')
	{
	  cout<<"Do you have a number to check? y or n: ";
	  cin>>answer;
	}//check for answer to be valid

    }//end of while loop

  if(count==0)
    cout<<"No numbers were entered."<<endl;
  else
    {
  avg=(double)total/count;
  cout<<endl<<numEven<<" even numbers"<<endl;
  cout<<numOdd<<" odd numbers"<<endl;
  cout<<"The average is "<<fixed<<setprecision(2)<<avg<<endl;
    }
  return 0;
}
