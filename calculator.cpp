#include <iostream>

using namespace std;

double mathematical()
{
    //Getting Operands(as inputs) From Users
    double x{};
    double y{};
    char z{}; //Since we are getting only one mathematical sign operator, which is neither a whole number or a string then we are using type ( char )

    //Initiating The Values we got from Users
    cout << "Enter a number : ";
    cin >> x;
    cout << "Another number : ";
    cin >> y;
    cout << "Now, Enter a Math Sign Operator : ";
    cin >> z;


    //Logical Expressions to output result
    if (z == '+')
    {
        double plusOperator = {x + y};
        cout << "The Results Addition : " <<plusOperator;
    }
    else if (z == '-')
    {
        double subtractOperator = {x - y};
        cout << "The Results Subtraction : " <<subtractOperator;
    }
    else if (z == '*')
    {
        double multiplicationOperator = {x * y};
        cout << "The Results Multiplication : " <<multiplicationOperator;
    }
    else if (z == '/')
    {
        double divisionionOperator = {x / y};
        cout << "The Results Division : " <<divisionionOperator;
    }

    return 0;
}

int main()
{
    mathematical();
    return 0;
}
