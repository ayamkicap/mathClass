#include<iostream>
#include<iomanip>
#include<cstdlib> //rand and srand
#include<ctime> //for the time function
using namespace std;

int main()
{
	cout << "*****************************************"<<endl;
	cout << "*                                       *"<<endl;
	cout << "*  WELCOME TO MULTIPLICATION CLASS!!!!  *"<<endl;
	cout << "*                                       *"<<endl;
	cout << "*****************************************\n"<<endl;
	system("pause");
	cout << endl;
	char conti;
	
	do
	{
		int ch;
		//mwnu for user to choose
		cout << "1 : learn"<<endl;
		cout << "2 : All multiplying from 1 to 10"<<endl;
		cout << "3 : question"<<endl;
		cout << "4 : quit"<<endl;
		cout << endl;
		
		cout << "please choose a number: ";
		cin >> ch;
		//validation for user
		while(ch > 4 || ch < 1)
		{
			cout << "you enter wrong number!"<< endl;
			cout << "please enter a number: ";
			cin >> ch;
		}
		cout <<"--------------------------------------------\n"<<endl;
		// using switch statement to choose what user want
		switch(ch)
		{
			int number;
			case 1://learning option
				cout << "*********************************"<<endl;
				cout << "*  WELCOME TO LEARNING SESSION  *"<<endl;
				cout << "*********************************\n"<<endl;
				cout << endl;
				char cont;
				do
				{
					
					cout << "What the number you want to learn?"<<endl;
					cout << "Enter : ";
					cin >> number;
					cout <<endl;
					cout << "Here the number of this multiplication "<<endl;
					cout <<endl;
					cout << "num\t |multi "<<number<<"|" <<endl;
					//calculate multiplication and 
					for(int i=1;i<=10;i++)
					{
						int multi;
						multi = i * number;
						cout << i<<"\t |"<< multi << "\t |" <<endl;
					}
					system("pause");
					cout <<endl;
					
					cout <<"Do you want to continue learn?"<<endl
						 <<"Enter X for continue and Z to other session: ";
					cin >> cont;
					//calidation for cont
					while(cont !='X' && cont !='x' && cont !='Z' && cont !='z')
					{
						cout << "you enter wrong letter!"<< endl;
						cout << "please enter a letter: "<<endl;
						cin >> cont;
					}
					
					cout << endl;
				}while(cont=='x'||cont=='X');//looping back when user input x or X
				cout <<"--------------------------------------------"<<endl;
				if(cont=='Z'||cont=='z')
					break;
				
			
			case 2://all multiplication option
				cout << "*******************************************"<<endl;
				cout << "*  WELCOME TO ALL MULTIPLICATION SESSION  *"<<endl;
				cout << "*******************************************\n"<<endl;
				cout << endl;
				
				cout <<"*\t"<<"multi 1 multi 2 multi 3 multi 4 multi 5 multi 6 multi 7 multi 8 multi 9 multi 10"<<endl;
				//calculate all multiplication from 1 untl 10
				for(int i = 1 ; i <= 10 ; i++)
				{
					cout << i <<"\t|";
					for(int j = 1 ; j <=10 ; j++)
					{
						cout << i * j << "\t" ;
					}
					cout << endl;
				}
				cout <<"--------------------------------------------"<<endl;
				break;
				
			case 3://QnA option
				{
				cout << "*********************************"<<endl;
				cout << "*  WELCOME TO QUESTION SESSION  *"<<endl;
				cout << "*********************************\n"<<endl;
				cout << endl;	
				
				char cont;
				int num1,num2,total,answer,numQ;
				float totalMark,mark;
				cout << "Please answer all the question..."	<<endl;
				//get the system time
				unsigned seed = time(0);
					
				//seed the random number generator
				srand(seed);
								
				//looping for question
				for(int i =0; i<5;i++)
				{
					num1 = rand() %10+1;//declaration for first random number
					num2 = rand()  %10+1;//declaration for second random number
					answer = num1 * num2;
					cout << num1 << " X " <<num2 << " = ";
					cin >> total;
					//give mark if user correct
					if(total == answer)
					{
						cout <<"you're correct"<<endl;
						mark += 5;
					}
					else
					{
						cout <<"wrong answer, the correct answer is: "<< answer<<endl;
					}
					
				}		
				
				cout << "-----------------------------------------"<<endl;
				//output total mark
				totalMark = (mark * 100)/25;
				cout << "Your total mark is "<<mark<<"/25 ("<<totalMark<<" %) "<<endl;
				break;
				cout <<"--------------------------------------------"<<endl;
				}
				
			default :
				break;
		}
				
				
			cout <<endl;
			//ask user wether want to continue or stop 
			cout << "Do you want to quit or continue?"<<endl;
			cout << "enter Y for continue and N for quit: ";
			cin >> conti;
			//validation for conti
			while(conti != 'Y' &&conti !='y'&& conti!='n' && conti != 'N')
				{
					cout << "you enter wrong letter!"<< endl;
					cout << "enter Y for continue and N for quit: "<<endl;
					cin >> conti;
				}
			cout <<"\n\n"<<endl;
				
	}while(conti =='Y'||conti=='y');
	cout << "Life is like riding a bicycle. To keep your balance, you must keep moving."<<endl
		 << "-Albert Einstein\n"<<endl;
	
	cout << "thank you for choosing this multiplicaation class.";
		
}
