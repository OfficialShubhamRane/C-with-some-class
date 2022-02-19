/** Just Another Pizza Place */
#include <iostream>
#include <string>

int customer_greeting();

int main(){

    int order_no;

    /** Greetings, get name, generate order no. */
    customer_greeting();
    /** Order Option and pricing , only one*/
    order_options();
    /** Toppings pricing , no limit*/

    /** No. of slices, standard 6, customizable */

    /** total bill, tip, donation */

    /** contact info (email or phone optional) */

    /** payment method */

    /** receipt generation*/

    return 0;
}

int customer_greeting(){
    std::string fName;
    
    std::cout << "Welcome to JAPP! May I have you name sir! \n";
    std::cin >> fName;
    std::cout << "What would you like to have today "<< fName <<" ? You can see the options below on the screen...";

    return 0;
}
