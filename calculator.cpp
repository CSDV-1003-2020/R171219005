#include <iostream>
using namespace std;
float multiply(float x, float y);
float add(float x, float y);
float divide(float x, float y);
int main()
{
        float number_1;
        float number_2;
        float product_of_numbers;
	float sum_of_numbers;
	float division_of_numbers;
        cout<<"Enter the first number"<<endl;
        cin>>number_1;
        cout<<"Enter the second number"<<endl;
	cin>>number_2;
        product_of_numbers=multiply(number_1, number_2);
	sum_of_numbers=add(number_1, number_2);
	division_of_numbers=divide(number_1,number_2);
        cout<<"Product of two numbers"<<product_of_numbers;<<endl;
	cout<<"sum of two numbers "<<sum_of_numbers<<endl;
	cout<<"Division of two numbers "<<division_of_numbers<<endl;
        return 0;
}
float multiply(float x, float y)
{
        return(x*y);
}

float add(float x, float y)
{
    return (x+y);
}

float divide(float x, float y)
{
	if(number_2==0)
	{
		cout<<"Please choose a different value for second number"<<endl;
	}

	else
	{
		return number_1/number_2<<endl;
	}
}


