#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
 cout << "Welcome to my guessing game :)"<<endl;
 bool main_condition;
 main_condition = true;
 while(main_condition){
 int guess;
 guess = 0;
 cout << "Guess a number between 1 and 100 : ";
 while(!(cin >> guess)){
        cout << "\nPlease enter a valid numerical value" << endl ;
        cout << "Guess a number between 1 and 100 : ";
        cin.clear();
        cin.ignore(123,'\n');
 }
 int x;
 x = time(0);
 srand(x);
 int number;
 number = 1 + rand()%100;
 bool condition1;
 condition1 = true;
 int counter;
 counter = 0;
 while(condition1){
        if(guess == number){
                cout << "\nCongratulations ! You win" << endl;
                condition1 = false;
        }else{
            if(counter==1){
                    counter++;
            }
            if(guess > number && (counter ==0 || counter >3)){
                    cout << "Try guessing a smaller number " << endl;
         while(!(cin >> guess)){
        cout << "\nPlease enter a valid numerical value" << endl ;
        cout << "Guess a number between 1 and 100 : ";
        cin.clear();
        cin.ignore(123,'\n');
         }
        counter++;


            }else if (guess<number && (counter == 0 || counter >3)){

        cout << "Try guessing a greater number " << endl;
         while(!(cin >> guess)){
        cout << "\nPlease enter a valid numerical value" << endl ;
        cout << "Guess a number between 1 and 100 : ";
        cin.clear();
        cin.ignore(123,'\n');
         }
        counter ++;
            }

            if(counter == 2){
                    if((number % 2) ==0){
                            cout << "Bonus hint ;) The number is even"<<endl;
                            while(!(cin >> guess)){
                            cout << "\nPlease enter a valid numerical value" << endl ;
                            cout << "Guess a number between 1 and 100 : ";
                            cin.clear();
                            cin.ignore(123,'\n');
                            }
                            counter ++;
                    }else if ((number %2) !=0){
                            cout << "Hint ;) The number is odd"<<endl;
                            while(!(cin >> guess)){
                            cout << "\nPlease enter a valid numerical value" << endl ;
                            cout << "Guess a number between 1 and 100 : ";
                            cin.clear();
                            cin.ignore(123,'\n');
                            }
                            counter ++;
                    }
            }else if (counter == 3 && number >= 10){
                int second_digit;
                second_digit = number%10;
                if(second_digit>(number/10)){
                        cout << "Last bonus hint ;) The second digit is greater than the first digit" << endl;
                        while(!(cin >> guess)){
                            cout << "\nPlease enter a valid numerical value" << endl ;
                            cout << "Guess a number between 1 and 100 : ";
                            cin.clear();
                            cin.ignore(123,'\n');
                            }
                            counter ++;
                }else if (second_digit == (number/10) ){
                    cout << "Last bonus hint ;) The second digit is equal to the first digit" << endl;
                        while(!(cin >> guess)){
                            cout << "\nPlease enter a valid numerical value" << endl ;
                            cout << "Guess a number between 1 and 100 : ";
                            cin.clear();
                            cin.ignore(123,'\n');
                            counter ++;
                            }
                }else if (second_digit<(number/10)){
                    cout << "Last bonus hint ;) The second digit is smaller than the first digit" << endl;
                        while(!(cin >> guess)){
                            cout << "\nPlease enter a valid numerical value" << endl ;
                            cout << "Guess a number between 1 and 100 : ";
                            cin.clear();
                            cin.ignore(123,'\n');
                            }
                            counter ++;
                }
                }
                if(number<=10){
                        counter++;
                }
        }
 }
 bool condition2;
 condition2 =true;
 string choice;
 while(condition2){
 cout << "Do you want to play again ? (y/n)"<<endl;
 cin >> choice;
 if(choice == "y"){
        condition2 = false;
 }else if (choice == "n"){
    condition2 =false;
    main_condition = false;
 }else{
     cout << "Please enter a valid choice (y/n) "<<endl;
 }
 }
}
 cout << "\nThank you for playing have a nice day ;)"<<endl;

    return 0;
}
