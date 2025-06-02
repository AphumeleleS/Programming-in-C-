#include <iostream>
using namespace std;

const float up20 = 0.10, up30 = 0.15, up40 = 0.20, up50 = 0.30;             // decalring discount constants
const float price = 12;                                                     // declaring constant price of item

int main()
{
    float amount_products, cost;                                            // declaring real variables of cost & amount
    cout << "Welcome to Shoprite!\n" << endl;

    cout << "The item's price is R12\n";
    cout << "Please enter the amount of products you are purchasing: \n";
    cin >> amount_products;                                                 // amount of products input

    if (amount_products<=20)                                                // if statement testing if disocunt applies
    {
        cost = price * amount_products;                                     // calculating with no discount
        cout << "You receive no discount.\n";                               // display type of discount
        cout << "Your total cost is: R"<<cost<<endl;                        // display total cost
    }
    else if ((amount_products>20)&&(amount_products<=30))
    {
        cost = (price * amount_products) * (1-up20);                        // calculating with discount
        cout << "You receive a 10% discount.\n";                            // display type of discount
        cout << "Your total cost is: R"<<cost<<endl;                        // display total cost
    }
    else if ((amount_products>30)&&(amount_products<=40))
    {
        cost = (price * amount_products) * (1-up30);                        // calculating with discount
        cout << "You receive a 15% discount.\n";                            // display type of discount
        cout << "Your total cost is: R"<<cost<<endl;                        // display total cost
    }
    else if ((amount_products>40)&&(amount_products<=50))
    {
        cost = (price * amount_products) * (1-up40);                        // calculating with no discount
        cout << "You receive a 20% discount.\n";                            // display type of discount
        cout << "Your total cost is: R"<<cost<<endl;                        // display total cost
    }
    else if (amount_products>=50)
    {
        cost = (price * amount_products) * (1-up50);                        // calculating with no discount
        cout << "You receive a 30% discount.\n";                            // display type of discount
        cout << "Your total cost is: R"<<cost<<endl;                        // display total cost
    }

    return 0;
}
