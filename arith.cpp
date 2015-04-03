#include<iostream.h>
#include<stdlib.h>

class Arithmetic
{
	private:
		int Numerator;
		int Denominator;
	public:
		Arithmetic();
		void Intro();
		void Outro();
		void Add();
		void Subtract();
		void Multiply();
		void Divide();
}First,Second;

Arithmetic::Arithmetic()
{
	First.Numerator=0;
	First.Denominator=0;
	Second.Numerator=0;
	Second.Denominator=0;

}

void Arithmetic::Intro()
{
	char choice;
	cout<<"Enter first numerator ";
	cin>>First.Numerator;
	cout<<"Enter first denominator ";
	cin>>First.Denominator;
	cout<<"Enter second numerator ";
	cin>>Second.Numerator;
	cout<<"Enter second denominator ";
	cin>>Second.Denominator;

	system("cls");

	cout<<"What do you want to do with these fractions?"<<endl;
	cout<<"<A>dd them, <S>ubtract them, <M>ultiply them, or <D>ivide them"<<endl;
	cin>>choice;

	if (choice=='A' || choice=='a')
		Add();
	else if (choice=='S' || choice=='s')
		Subtract();
	else if (choice=='M' || choice=='m')
		Multiply();
	else //if (choice=='D' || choice=='d')
		Divide();

}

void Arithmetic::Add()
{
	First.Numerator=First.Numerator*Second.Denominator;
	Second.Numerator=Second.Numerator*First.Denominator;
	First.Numerator=First.Numerator+Second.Numerator;
	First.Denominator=First.Denominator*Second.Denominator;

}

void Arithmetic::Subtract()
{
	First.Numerator=First.Numerator*Second.Denominator;
	Second.Numerator=Second.Numerator*First.Denominator;
	First.Numerator=First.Numerator-Second.Numerator;
	First.Denominator=First.Denominator*Second.Denominator;

}

void Arithmetic::Multiply()
{
	First.Numerator=First.Numerator*Second.Numerator;
	First.Denominator=First.Denominator*Second.Denominator;
}

void Arithmetic::Divide()
{
	First.Numerator=First.Numerator*Second.Denominator;
	First.Denominator=First.Denominator*Second.Numerator;
}



void Arithmetic::Outro()
{
	int x=2;
	for (int y=0;y<100;y++)
	{

	while (x!=1000)
	{
		if (First.Numerator%x==0 && First.Denominator%x==0)
		{
			First.Numerator=First.Numerator/x;
			First.Denominator=First.Denominator/x;
			Outro();
		}
		else
			x++;
	}
	}

	cout<<First.Numerator<<"/"<<First.Denominator<<endl;
	
}


int main()
{
/*
Arithmetic thistime;
thistime.Intro();
thistime.Outro();
system("pause");
main();
*/

	int numbers[100];
	int x=0;
	while (numbers[x-1]!=-1)
	{
	cout<<"number ";
	cin>>numbers[x];
	x++;
	}

	for (int y=0;y<x;y++)
	{
		cout<<(char)numbers[y];
	}



	return 0;
}


