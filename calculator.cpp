#include <iostream>
using namespace std;
float multiply(float x, float y);
float add(float x, float y);
float substraction(float x,float y);
float modulo(float x,float y);
float divide(float x, float y);
float greater(float x, float y);
int main()
{
        float number_1;
        float number_2;
        float product_of_numbers;
	float sum_of_numbers;
	float diff_of_numbers;
	float remainder;
	float division_of_numbers;
	float greater_number;
        cout<<"Enter the first number"<<endl;
        cin>>number_1;
        cout<<"Enter the second number"<<endl;
	cin>>number_2;
        product_of_numbers=multiply(number_1, number_2);
	sum_of_numbers=add(number_1, number_2);
        cout<<"Product of two numbers is"<<product_of_numbers;<<endl;
	cout<<"sum of two numbers is"<<sum_of_numbers<<endl;
	diff_of_numbers=substraction(number_1, number_2);
        cout<<"Product of two numbers is"<<product_of_numbers;<<endl;
	greater_number=greater(number_1,number_2);
        cout<<"Product of two numbers"<<product_of_numbers;<<endl;
	cout<<"difference of two numbers is"<<diff_of_numbers<<endl;
	remainder=modulo(number_1, number_2);
	cout<<"Remainder is"<<remainder<<endl;
	division_of_numbers=divide(number_1,number_2);
        cout<<"Product of two numbers"<<product_of_numbers;<<endl;
	cout<<"sum of two numbers "<<sum_of_numbers<<endl;
	cout<<"Division of two numbers "<<division_of_numbers<<endl;
        return 0;
}
float greater(float x,float y)
{
	if(x>y)
		cout<<number_1<<" is greater than "<<number_2;
	else
		cout<<number_2<<" is greater than "<<number_1;
}
float multiply(float x, float y)
{
        return(x*y);
}

float add(float x, float y)
{
    return (x+y);
}
float substraction(float x, float y)
{
	if(x>y)
		return (x-y);
	else
		return (y-x);
}
float modulo(float x, float y)
{
	if(number_2 == 0)
		cout<<"INVALID"<<endl:
	else
		return(number_1%number_2);
}
float divide(float x, float y)
{
	if(number_2==0)
	{
		cout<<"Please choose a different value for second number"<<endl;
	}

	else
	{
		return number_1/number_2;
	}
}

