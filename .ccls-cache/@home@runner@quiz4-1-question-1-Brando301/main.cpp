#include <iostream>
using namespace std;
int main()
{
float l,b,h,d, radius,area;
int ch;
cout <<"MENU";
cout <<"n 1.Area of Rectangle";
cout <<"n 2.Area of Triangle ";
cout <<"n 3.Area of Circle ";
cout <<"n 4.Exit";
cout <<"n Enter your choice ";
cin >>ch;
switch (ch)
{
case 1:
{
cout<<"Enter length and breadth of the Rectangle";
cin>>l>>b;
area =l*b;
cout<<"Area of rectangle:"<< area << endl;
break;
}
case 2:
{
cout <<"Enter the base and height of Triangle";
cin >>b>>h ;
area = b*h*5;
cout <<"Area of triangle="<< area << endl;
break;
}
case 3:
{
cout<<"nEnter radius of circle:";
cin>>radius;
area = π * radius * radius;
cout<<"Area of Circle="<<area<<endl;
break;
}
case 4:
{
return 0;
break;
}
default:cout<<"n Invalid ";
break;
}
}




// Complete this program

#include <iostream>
using namespace std;

int main()
{
	int choice;
	double width, height, radius;
	double area;

	cout << "Geometry Calculator\n";
	cout << "\t1. Calculate the Area of Circle\n";
	cout << "\t2. Calculate the Area of Rectangle\n";
	cout << "\t3. Calculate the Area of Triangle\n";
	cout << "\t4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;

        //************************
        // Your code 
        //************************
        
        cout << area << endl;
}
