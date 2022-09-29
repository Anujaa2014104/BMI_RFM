#include<iostream>
using namespace std;


class basic
{
	public:
 	int id,age;
 	char name[100];
 	int d,m,y;
 	void personal()
 	{
	cout<<"Enter patient id       : ";
	cin>>id;
	cout<<"Enter your name        : ";
	cin>>name;
	cout<<"Enter your age         : ";
	cin>>age;
	cout<<"Enter the date         : ";
	cin>>d;
	//cout<<"Enter the month        : ";
	cin>>m;
	//cout<<"Enter the year         : ";
	cin>>y;
	cout<<"--------------------------------------------------------------------------------";
	
 	}
 	void print()
 	{cout<<endl<<endl<<endl<<endl;
	cout<<"                                        Personal Details ";
	cout<<endl<<endl<<endl<<endl;
 	cout<<"Patient id                    : "<<id<<endl;
	cout<<endl;
	cout<<"Name                          : "<<name<<endl;
	cout<<endl;
	cout<<"Age                           : "<<age<<endl;
	cout<<endl;
	cout<<"Date                          : "<<d<<"/"<<m<<"/"<<y<<endl;
	cout<<endl;
	cout<<"--------------------------------------------------------------------------------";
	 }
};



class bmi:public basic
{
public:
float weight,height,a,b,c,gen;
void information()
{
	cout<<"Enter your input for BMI calculation : \n\n";
	cout<<"Enter your weight in Kg : ";
	cin>>weight;
	cout<<"Enter your height in cm : ";
	cin>>height;
	cout<<"\n Enter 1 for Male\n\t 2 for Female\n\n";
	cout<<"Genter:";
	cin>>gen;
	cout<<"--------------------------------------------------------------------------------";	
}

void calculate()
{
	a=height/100;
	b=a*a;
	c=weight/b;
}
void display()
{
	cout<<endl<<endl<<endl<<endl;
	cout<<"                                        BMI REPORT ";
	cout<<endl<<endl<<endl<<endl;
	cout<<"\nWeight in Kg                : "<<weight<<endl;
	cout<<endl;
	cout<<"Height in cm                  : "<<height<<endl;
	cout<<endl;
	cout<<"Your Body Mass Index [BMI] is : "<<c<<" kg/m^2 "<<endl<<endl;
}	

void result()
{
	if(gen==1)
	{
	 	if(c<20.7)
		{
			cout<<"\n Underweight";
		}
		else if(c>20.7 && c<=26.4)
		{
			cout<<"\n Normal";
		}
		else if(c>26.4 && c<=27.8)
		{
			cout<<"\n Marginaly Overweight";
		}
		else if(c>27.8 && c<=31.1)
		{
			cout<<"\n overweight";
		}
		else if(c>31.1)
		{
			cout<<"\n Obese";
		}
		
	}
	else if(gen==2)
	{
		cout<<"\n age :"<<age;
	 	if(c<19.1)
		{
			cout<<"\n Underweight";
		}
		else if(c>19.1 && c<=25.8)
		{
			cout<<"\n Normal";
		}
		else if(c>25.8 && c<=27.3)
		{
			cout<<"\n Marginaly Overweight";
		}
		else if(c>27.3 && c<=32.3)
		{
			cout<<"\n overweight";
		}
		else if(c>32.3)
		{
			cout<<"\n Obese";
		}
		
	}
	else
	{
		cout<<"\n Check your input!!!!";
	}
	cout<<"\n--------------------------------------------------------------------------------";	
}
};



class rfm:public basic
{
	public:
		float hi,wc,mmass,fmass,a,b,gender;
		
		void input()
		{
			cout<<"Enter your input for RFM calculation  \n\n";
			cout<<"Enter your height in cm              : ";
			cin>>hi;
			cout<<"Enter your waist circumfrence in cm  : ";
			cin>>wc;
			cout<<"\n Enter 1 for Male\n\t 2 for Female\n";
			cout<<"gender                               :";
			cin>>gender;
			cout<<"--------------------------------------------------------------------------------";
		}
		
		void relative()
		{
			cout<<endl<<endl<<endl<<endl;
	 	 	 	cout<<"                                        RFM REPORT ";
	 	 	 	cout<<endl<<endl<<endl<<endl;
			cout<<"\nHeight in cm                  : "<<hi<<endl;
			cout<<"Waist Circumference in cm       : "<<wc<<endl;
			
			if(gender==1)
			{
				a=hi/wc;
				b=20*a;
				mmass=64-b;
				cout<<"\nRelatve Fat Mass[RFM]   : "<<mmass<<" % ";
				if(mmass<=2)
				{
					cout<<"\n\nExtremely low level of fat ";
				}
				else if(mmass>2 && mmass<=5)
				{
					cout<<"\n\nEssential fat ";
				}
				else if(mmass>=6 && mmass<=13)
				{
					cout<<"\n\nAthletes";
				}
				else if(mmass>=14 && mmass<=17)
				{
					cout<<"\n\nFitness";
				}
				else if(mmass>=18 && mmass<=24)
				{
					cout<<"\n\nAverage";
				}
				else if(mmass<-25)
				{
					cout<<"\n\nObese";
				}
				else
				{
					cout<<"\n\n invalid";
				}
			}
			else if(gender==2)
			{
				a=hi/wc;
				b=20*a;
				fmass=76-b;
				cout<<"\nRelative Fat Mass[RFM]        : "<<fmass;
				if(fmass<=10)
				{
					cout<<"\n\nExtremely low level of fat ";
				}
				else if(fmass>10 && fmass<=13)
				{
					cout<<"\n\nEssential fat ";
				}
				else if(fmass>=14 && fmass<=20)
				{
					cout<<"\n\nAthletes";
				}
				else if(fmass>=21 && fmass<=24)
				{
					cout<<"\n\nFitness";
				}
				else if(fmass>=25 && fmass<=31)
				{
					cout<<"\n\nAverage";
				}
				else if(fmass>=32)
				{
					cout<<"\n\nObese";
				}
				else
				{
					cout<<"\n\n invalid";
				}
			}
			else
			{
				cout<<"Please enter valid inputs !!! ";
			}
			cout<<"\n--------------------------------------------------------------------------------";
		}
};


int main()
{
	bmi b1;
	rfm r;
	basic b;
	cout<<"Enter\n\n1 to find BMI[Body Mass Index]\n\n\t2 to find RFM[Relative Fat Mass]\n\n\t\t3 to find both BMI and RFM";
	int n;
	cout<<"\nEnter 1 or 2 or 3 : ";
	cin>>n;
	b.personal();
	if(n==1)
	{
		//bmi b1;
	 	b1.information();
	 	b1.calculate();
	 	b.print();
	    b1.display();
	    b1.result();
	}
	else if(n==2)
	{
		//rfm r;
	 	r.input();
	 	b.print();
	    r.relative();
	    cout<<"\n--------------------------------------------------------------------------------";
	    
	}
	else if(n==3)
	{
		//bmi b1;
	 	b1.information();
	 	b1.calculate();
	    //rfm r;
	 	r.input();
	 	b.print();
	 	b1.display();
	 	b1.result();
	    r.relative();
	    cout<<"\n--------------------------------------------------------------------------------";
	}
	else
	
		cout<<"Enter a valid input ......";
}
