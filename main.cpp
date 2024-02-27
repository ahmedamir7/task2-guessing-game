#include <iostream>

using namespace std;

int main()
{
 cout << "Welcome to my simple calculator :) " << endl;
 bool main_condition;
 main_condition = true;
 while (main_condition){
        cout << " \nEnter first number : ";
        double first_number;
        first_number = 0;
        while ( !(cin >> first_number)){
        cout << "\nPlease enter a valid numerical value" << endl ;
        cout << " Enter first number : ";
        cin.clear();
        cin.ignore(123,'\n');
        }
        cout << " \nEnter arithmetic operator : ";
        string arithmetic_operator;
        cin >> arithmetic_operator;
        bool condition1;
        condition1 = true;
        while(condition1){
                if(arithmetic_operator == "+"){
                        condition1 = false;
                }else if(arithmetic_operator == "-"){
                        condition1 = false;
                }else if(arithmetic_operator == "*"){
                        condition1 = false;
                }else if(arithmetic_operator == "/"){
                        condition1 = false;
                }else {
                    cout << "\n Please enter a valid arithmetic operator  " << endl;
                    cout << " Enter arithmetic operator : ";
                    cin >> arithmetic_operator;
                }
        }
        bool condition2;
        condition2 = true;
        double second_number;
        while(condition2){
        cout << " \nEnter second number : ";
        second_number = 0;
        while ( !(cin >> second_number)){
        cout << "\nPlease enter a valid numerical value" << endl ;
        cout << " Enter second number : ";
        cin.clear();
        cin.ignore(123,'\n');
        }
        if(second_number == 0 && arithmetic_operator == "/" ){
                cout << "Cannot divide by zero" << endl;
        }else{
            condition2 = false;
        }
        }
        double result;
        if(arithmetic_operator == "+"){
                result = first_number + second_number;
        }else if(arithmetic_operator == "-"){
                result = first_number - second_number;
        }else if(arithmetic_operator == "*"){
                result = first_number * second_number;
        }else if(arithmetic_operator == "/"){
                result = first_number / second_number;
        }
        cout << "\nThe result is " << result << endl;
        cout << "Do you want to perform another operation ? (y/n)" << endl;
        string choice ;
        cin >> choice ;
        bool condition3;
        condition3 = true;
        while (condition3){
                if(choice == "y"){
                    condition3 = false;
                }else if (choice == "n"){
                    condition3 = false;
                    main_condition = false;
                }else {
                    cout << "\nPlease enter a valid choice " << endl;
                    cout << "Do you want to perform another operation ? (y/n)" << endl;
                    cin >> choice ;
                }
        }
 }
 cout << "\nThank you for using my simple calculator have a good day ;)" << endl;
    return 0;
}
