#include<iostream>
using namespace std;
int main()
{
	
	cout<<"                                 "<<"-------->UMT CAFE MANAGEMENT SYSTEM<--------"<<endl;


cout<<"Employees Attendance :- "<<endl;
cout<<"---------------------------"<<endl;
cout<<"It is requested to employee 1 (Ali) to enter your employee ID for Attendance : "<<endl;
int Employee_ID_1;
cin>>Employee_ID_1;
if(Employee_ID_1==431)
{
	cout<<"Mr.Ali you are present !"<<endl;
}
else
{
	cout<<"Invalid Entry !"<<endl;
	return 0;
}

cout<<"It is requested now to employee 2 (Fawad) to enter your employee ID for Attendance :"<<endl;
int Employee_ID_2;
cin>>Employee_ID_2;
if(Employee_ID_2==532)
{
	cout<<"Mr.Fawad you are present !"<<endl;
}
else
{
	cout<<"Invalid Entry !"<<endl;
	return 0;
}

cout<<"---------------------------------------------"<<endl;
cout<<"NOTE For Employees :-"<<endl;
cout<<"--------------------------------"<<endl;
cout<<"Its an order from UMT Cafe Manager that Ali will serve the cafe customers (students) on computer at counter for next 3 hours while fawad will manage cleaniness of the cafe then after 3 hours Ali will manage cleaniness and Fawwad will serve customers (students) on counter computer."<<endl;
cout<<"------------------------------------------------------------"<<endl;
cout<<"Enter Employee ID to log in  :"<<endl;
int Employee_Log;
cin>>Employee_Log;
if(Employee_Log==431)
{
	cout<<"Mr.Ali Loged in !"<<endl;
}
else
{
	cout<<"Invalid ID !"<<endl;
	return 0;
}


cout<<"Mr.Ali u can deal even unlimited students now kindly set how many students u want to deal today?"<<endl;
cout<<"Enter the Number of students :"<<endl;
int n;
cin>>n;
int p;
for(p=0;p<n;p++)


{

switch(Employee_Log)
{
	case 431:
		cout<<"Mr Ali you are loged in as per manager's order ."<<endl;
		cout<<"-------------------------------------------------"<<endl;
		cout<<"Mr.Ali today university cafe has following items available :-"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Serial No				Name 				Price"<<endl;
		cout<<"----------------------------------------------------------------------------------------"<<endl;
		cout<<"1.				Tea					30"<<endl;
		cout<<"2.				SmallPizza				40"<<endl;
		cout<<"3.				patties					40"<<endl;
		cout<<"4.				Pastry					40"<<endl;
		cout<<"5.				samosa					10"<<endl;
		cout<<"6.				GreenSalad				30"<<endl;
		cout<<"7.				Sandwhich				70"<<endl;
		cout<<"8.				Burger					100"<<endl;
		cout<<"9.				Fries					100"<<endl;
		cout<<"10.				Coffee					50"<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"Students can only purchase 2 things :-"<<endl;
		int a;
		cout<<"Enter The numbers of products student want to purchase ."<<endl;
		cin>>a;
		if(a==1)
		{
			cout<<"Enter The Name of product along with its price which the student has purchased ."<<endl;
			char Arr[20];
			int i;  // this i is the price of if (a==1)
			cin>>Arr>>i;
			
			cout<<"Dear Student your bill is RS."<<i<<endl;
		}
		else if(a==2)
		{
			cout<<"Enter The Name of products along with their prices which the student has purchased ."<<endl;
			char Arr1[20];
			char Arr2[20];
			int b,c;
			cin>>Arr1>>b;
			cin>>Arr2>>c;
			cout<<"Dear Student your bill is RS."<<b+c<<endl;
	}		
		else
		{
		
			cout<<"Invalid Entry !"<<endl;
			return 0;
		
		}
		break;
		default :
			cout<<"Invalid Entry !"<<endl;
			break;
		}
	}
	
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Mr Fawad Ali has Served :"<<n<<"Student/s"<<endl;
	cout<<"Mr Ali has shift Login System to Mr Fawad !"<<endl;
	int Employee_ID_34;
	cout<<"Enter ID for Login :"<<endl;
	cin>>Employee_ID_34;
	if(Employee_ID_34==532)
	{
		cout<<"Mr Fawad Loged in !"<<endl;
	}
	else
	{
		cout<<"Invalid ID !"<<endl;
		return 0;
	}
	
	
	cout<<"Mr Fawad u can deal unlimited number of students kindly enter how many students u want to deal today?"<<endl;
	int m;
	cout<<"Enter number of student :"<<endl;
	cin>>m;
	for(int q=0;q<n;q++)
	{
	
	switch(Employee_ID_34)
	{
		case 532:
				cout<<"Mr Fawad you are loged in as per manager's order ."<<endl;
		cout<<"-------------------------------------------------"<<endl;
		cout<<"Mr.Fawad today university cafe has following items available :-"<<endl;
			cout<<"-------------------------------------------------------------------"<<endl;
		cout<<"Serial No				Name 				Price"<<endl;
		cout<<"----------------------------------------------------------------------------------------"<<endl;
		cout<<"1.				Tea					30"<<endl;
		cout<<"2.				SmallPizza				40"<<endl;
		cout<<"3.				patties					40"<<endl;
		cout<<"4.				Pastry					40"<<endl;
		cout<<"5.				samosa					10"<<endl;
		cout<<"6.				GreenSalad				30"<<endl;
		cout<<"7.				Sandwhich				70"<<endl;
		cout<<"8.				Burger					100"<<endl;
		cout<<"9.				Fries					100"<<endl;
		cout<<"10.				Coffee					50"<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"Students can only purchase 2 things :-"<<endl;
		int b;
		cout<<"How many Products student want to purchase :"<<endl;
		cin>>b;
		if(b==1)
		{
			cout<<"Display of Product with price :"<<endl;
			char Arr67[20];
			int u;
			cin>>Arr67>>u;
			cout<<"Student Bill :"<<u<<endl;
		}
		else if (b==2)
		{
			cout<<"Display of 2 products with their price :"<<endl;
			char Arr68[20];
			char Arr69[20];
			int d,e;
			cin>>Arr68>>d;
			cin>>Arr69>>e;
			cout<<"Student Bill :"<<d+e<<endl;
		}
		else
		{
			cout<<"Invalid Entry !"<<endl;
			return 0;
		}
		break;
		default :
			cout<<"Invalid Entry !"<<endl;
			break;
		}
	}
	cout<<"-----------------------------------"<<endl;
	cout<<"This section is for UMT Cafe Manager ."<<endl;
	int rv;
	cout<<("Transacation 1: ALI, 2: FAWAD, 3: TOTAL");
	cin>>rv;

	if(rv==1)
	{
		cout<<"Ali Transcaton :"<<n<<" "<<"Student/s ." <<endl;
	}
	else if (rv==2)
	{
		cout<<"Fawad Transcation :"<<m<<" "<<"Student/s ."<<endl;
	}
	else if (rv==3)
	{
		cout<<"Total Transcation :"<<n+m<<" "<<"Students."<<endl;
	}
	else
	{
		cout<<"Invalid Entry !"<<endl;
	}
}
		
	
	
	
	
	
	
	
	
	


		
		
		
		
		
	


			
		
	

			
	



	
	
		






	



	


		

		
		
	



	
	
	


			
	











			
			
		
			
			
		
			


	
		
		
		
	





