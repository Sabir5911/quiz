#include <iostream>
#include <fstream>
using namespace std;

int Task1()
{
    fstream file;
    int number;
    int foc = 1;
    cout << "Enter a number ";
    cin >> number;
    int i;
    for (i = 1; i <= number; i++)

    {

        foc = foc * i;

        cout << i << "*" << foc;
    };

    file.open("file.txt", ios::out);
    file << "Fictorial of " << number << " = " << foc;
}

int Task2()
{
    fstream file;
    int number, Table;
    cout << "Enter a number ";
    cin >> number;
    if (number < 0)
    {
        cout << "negative number";
    }
    file.open("file.txt", ios::out);

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;

        file << number << " * " << i << " = " << number * i << endl;
    }}

int Task3()
{
fstream file;
    file.open("file.txt", ios::out | ios::app);
    int number = 0;

    int sum = 0;
    int i = 0;
    int avg = 0;

    do
    {
        cout << "Enter a number \n"
             << endl;
        cin >> number;
        file<< i <<" Number "<<"="<<number<<endl;
        sum += number;
       
        avg = (sum / 10);
    
        i++;
    } while (i <= 10);
     file<<"Sum of Number ="<<sum<<endl;
  file<<"Avg of Number ="<<avg<<endl;
    cout << "averege of number =" << avg;
}







int task5()
{

    int number;
    fstream file;

    file.open("file.txt", ios::out | ios::app);

    do
    {
        cout << "Entr a number";
        cin >> number;

        if (number % 2 == 0)
        {
            cout << "even  number" << endl;
            file << number << "  is a even number" << endl;
        }
        else if (number % 2 != 0)
        {
            file << number << " is a prime number" << endl;
            cout << "prime number" << endl;
        }

        else
        {
            file << number << " is a Negative number" << endl;
            cout << "Negative  Number" << endl;
        }
    } while (number >= 0);
}

int main()
{

    // Task1();
    // Task2();
    // Task3();
    // task4();
    task5();
}

int Task5()
{
}
