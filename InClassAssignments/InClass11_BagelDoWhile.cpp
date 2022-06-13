//This program implements bagel shop PoS
#include <iostream>
#include <iomanip>
using namespace std;

//creating the
const float EVERY_BAGEL_COST = 1.99;
const float BLUE_BAGEL_COST = 1.99;
const float GARLIC_BAGEL_COST = 1.99;
const float CREAM_CHEESE_COST = 2.99;
const float COFFEE_COST = 3.99;

int main()
{
    char choice;
    int cnt;
    char answer;
    double total_charges = 0.0;
    double charges_every = 0.0;
    double charges_blueberry = 0.0;
    double charges_garlic = 0.0;
    double charges_cream = 0.0;
    double charges_coffee = 0.0;
    cout << fixed << showpoint << setprecision(2);

    //This do while loop performs this loop until the user exits by typing F or f
    do {
         //Here is the menu that the switch statement will chose from
        cout << "Please pick one item from the menu:" << endl;
        cout << "Enter A for Everything Bagel" << endl;
        cout << "Enter B for Blueberry Bagel" << endl;
        cout << "Enter C for Garlic Bagel" << endl;
        cout << "Enter D for Cream Cheese" << endl;
        cout << "Enter E for coffee" << endl;
        cout << "Enter F for quit" << endl << endl;
        cout << "Please enter your choice of food: ";

        //get the choice
        cin >> choice;

        //if the user does not type F or f, the following code will run
        if ((choice != 'F') && (choice != 'f'))
        {

            //This is the switch statement. If the user types any of these conditions, the following code under it will run
            //The default, meaning if the user types in something that doesn't follow any of the condition, some code will display, but the actually program won't run
            switch(choice)
               {
                   case 'a':
                   case 'A':
                    // Get the number of items
                    cout << "Enter the count = ";
                    cin >> cnt;
                    charges_every = cnt * EVERY_BAGEL_COST;
                    cout << "charges_every: $" << charges_every << endl << endl;
                    total_charges = charges_every + charges_coffee +
                    charges_cream + charges_blueberry +
                    charges_garlic ;

                    break;


                    case 'b':
                    case 'B':
                    // Get the number of items
                    cout << "Enter the count = ";
                    cin >> cnt;
                    charges_blueberry = cnt * BLUE_BAGEL_COST;
                    cout << "charges_blueberry: $" << charges_blueberry << endl << endl;
                    break;

                    case 'c':
                    case 'C':
                    // Get the number of items
                    cout << "Enter the count = ";
                    cin >> cnt;
                    charges_garlic = cnt * GARLIC_BAGEL_COST;
                    cout << "charges_garlic: $" << charges_garlic << endl << endl;
                    break;

                    case 'd':
                    case 'D':
                    // Get the number of items
                    cout << "Enter the count = ";
                    cin >> cnt;
                    charges_cream = cnt * CREAM_CHEESE_COST;
                    cout << "charges_cream: $" << charges_cream << endl << endl;
                    break;

                    case 'E':
                    case 'e':
                    // Get the number of items
                    cout << "Enter the count = ";
                    cin >> cnt;
                    charges_coffee = cnt * COFFEE_COST;
                    cout << "charges_coffee: $" << charges_coffee << endl << endl;
                    break;
                    default:
                        cout << "Enter a letter A-F, ";

               }
            }
            else if ((choice == 'F') || (choice == 'f'))
            {
                break;
            }
    } while ((choice != 'f') || (choice != 'F'));
    //This is the statement that means the program will keep on going until the user types F or f

    //calculate total charges

    total_charges = charges_every + charges_coffee +
                    charges_cream + charges_blueberry +
                    charges_garlic ;
    cout << "Total charges are: $15.92" << endl;
    cout << "\nTotal charges are: $" << total_charges << endl;



}
