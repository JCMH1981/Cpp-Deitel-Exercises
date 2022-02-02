/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 3.13:
(Invoice Class) Create a class called Invoice that a hardware store might use 
to represent an invoice for an item sold at the store. An Invoice should 
include four data members —a part number (type string), a part description 
(type string), a quantity of the item being purchased (type int) and a price 
per item (type int). [Note: In subsequent chapters, we'll use numbers that 
contain decimal points (e.g., 2.75) —called floating-point values— to 
represent dollar amounts.] Your class should have a constructor that 
initializes the four data members. A constructor that receives multiple 
arguments is defined with the form:

    ClassName(TypeName1 parameterName1, TypeName2 parameterName2, ...)

Provide a set and a get function for each data member. In addition, provide a 
member function named getInvoiceAmount that calculates the invoice amount 
(i.e., multiplies the quantity by the price per item), then returns the amount 
as an int value. If the quantity is not positive, it should be set to 0. If 
the price per item is not positive, it should be set to 0. Write a test 
program that demonstrates class Invoice's capabilities.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/02/02 */

#include <iostream>
#include "Invoice.h"

int main()
{
    Invoice invoice(" ", " ", 0, 0);

    std::string number, description;
    int quantity, price;

    std::cout << "Enter the part number: ";
    std::cin >> number;
    invoice.setPartNumber(number);

    std::cout << "Enter the part description: ";
    std::cin >> description;
    invoice.setPartDescription(description);
    
    std::cout << "Enter the quantity of the item: ";
    std::cin >> quantity;
    invoice.setItemQuantity(quantity);
    
    std::cout << "Enter the price per item: ";
    std::cin >> price;
    invoice.setItemPrice(price);

    std::cout << "-------" << std::endl;
    std::cout << "INVOICE" << std::endl;
    std::cout << "-------" << std::endl;
    std::cout << "Part number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part description: " << invoice.getPartDescription() 
              << std::endl;
    std::cout << "Quantity of the item: " << invoice.getItemQuantity()
              << std::endl;
    std::cout << "Price per item: " << invoice.getItemPrice() << std::endl;
    std::cout << "Invoice amount: " << invoice.getInvoiceAmount() 
              << std::endl;

    return 0;
}
