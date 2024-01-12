/*  Create a Product class that represents a product in the inventory.
    Each Product object should have the following attributes:

    •  Product ID (an integer)
    •  Product Name (a string)
    •  Price (a floating-point number)
    •  Quantity in stock (an integer)

  Implement a parameterized constructor for the Product class to
  initialize the attributes when a new product is added to the inventory.
*/

#include <iostream>
using namespace std;

class Product
{
    public:
    int product_id;
    string name;
    float price;
    int Quantity;

public:
    Product()
    {
        cout << "\n\nEnter the product ID : ";
        cin >> product_id;

        cout << "Enter the product name : ";
        cin >> name;

        cout << "Enter the price  of product : ";
        cin >> price;

        cout << "Enter the Quantity of  product  : ";
        cin >> Quantity;
    }

    void getdata()
    {
        int talal;
        cout << "\n\n\nproduct ID : " << product_id;
        cout << "\nproduct name : " << name;
        cout << "\nproduct price : " << price;
        cout << "\nproduct Quantity : " << Quantity;

        cout << "\n\nTotal Price : " << price * Quantity<<endl;
    }
};

int main()
{
    int n , id;
    cout<<"\n\nHow many data you want to use ? ";
    cin>>n;


    Product e[n];

    cout<<"\n\nEnter the product id u wnat to check : ";
    cin>>id;

    for ( int i = 0; i <n; i++)
    {
        if(id == e[i].product_id){
        e[i].getdata();
        }
    }
    


}