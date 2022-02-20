/** Just Another Pizza Place */
#include <iostream>
#include <string>
#include <vector>

int order_no;
double total_bill_charge = 0.0;
std::string fName;
std::string main_base;
std::vector<std::string> toppingsList;

int customer_greeting();
int choose_main_base();
int choose_topping();
int receipt_generation();

int main(){

    /** Greetings, get name, generate order no. */
    customer_greeting();

    /** Order Option and pricing , only one*/
    choose_main_base();

    /** Toppings pricing , no limit*/
    choose_topping();

    /** No. of slices, standard 6, customizable */

    /** total bill, tip, donation */

    /** contact info (email or phone optional) */

    /** payment method */

    /** receipt generation*/
    receipt_generation();

    return 0;
}

int customer_greeting(){
    
    
    std::cout << "Welcome to JAPP! May I have you name sir! \n";
    std::cin >> fName;
    std::cout << "What would you like to have today "<< fName <<" ? You can see the options below on the screen... \n";

    return 0;
}

int choose_main_base(){
    
    std::cout << "Main Base Options\n";
    std::cout << " 1. Cheese    $5.00\n 2. Pepperoni $5.00\n 3. Veggies   $5.00\n";
    std::cin >> main_base;

    total_bill_charge = total_bill_charge + 5.00;

    return 0;
}

int choose_topping(){

    std::string topping;

    std::cout << "Would you like any toppings from below(Each for $0.25)\n";
    std::cout << " 1. Three Cheese\n 2. Chicken\n 3. Mashroom\n 4. Pineapple\n";
    std::cin >> topping;

    while( !(topping.compare("no") == 0)){
        toppingsList.push_back(topping);
        total_bill_charge = total_bill_charge + 0.25;

        std::cout << "Would you like any toppings from below(Each for $0.25)\n";
        std::cout << " 1. Three Cheese \n2. Chicken\n 3. Mashroom\n 4. Pineapple\n";
        std::cin >> topping;
    }

    return 0;
}

int receipt_generation(){
    printf("Name:             [%s]\n", fName.c_str());
    printf("Main Base:        [%s]\n", main_base.c_str());
    printf("Toppings List:        \n");
    for(std::string topping_name : toppingsList){
        printf("                  [%s]\n",topping_name.c_str());
    }
    printf("Bill value:       [%4.2f]\n",total_bill_charge);
    return 0;
}