#include<iostream>
using namespace std;

int main()
{
    int iterations;
    int numberOne;
    int numberTwo;

    int adder(int, int);

    cin>>iterations;
    for(int i=0;i<iterations;i++)
    {
        cin>>numberOne>>numberTwo;
        int answer = adder(numberOne,numberTwo);
        cout<<answer;
    }
    while(iterations)
    {
        cin>>numberOne>>numberTwo;
        int answer = adder(numberOne,numberTwo);
        cout<<answer;
        iterations--;
    }
}

int adder(int numberOne, int numberTwo)
{
    int rev(int);
    int numberO = rev(numberOne);
    int numberT = rev(numberTwo);

    int addition = numberO + numberT;
    int solution = rev(addition);

    return solution;
}

int rev(int number)
{
    int reversed = 0;
    while(number != 0)
    {
        reversed = reversed *10;
        reversed = reversed + number%10;
        number = number /10;
    }
    return reversed;
}

