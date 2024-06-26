#include <iostream>
#include <string>

using namespace std;

class Product {
    private:
        string name;
        double price;

    public:
       
        void get_product() {
            cout << "Enter product name: ";
            getline(cin, name);
            cout << "Enter product price: ";
            cin >> price;
            cin.ignore(); 
        }

        void print_product() const {
            cout << "Product Name: " << name << ", Price: $" << price << endl;
        }
};

int main() {
    int n;

   
    cout << "Enter the number of products: ";
    cin >> n;
    cin.ignore();


    Product* products = new Product[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for product " << i + 1 << ":" << endl;
        products[i].get_product();
    }

  
    cout << "\nProduct details:" << endl;
    for (int i = 0; i < n; ++i) {
        products[i].print_product();
    }

   
    delete[] products;

    return 0;
}

