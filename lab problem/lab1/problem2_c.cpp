#include <iostream>

using namespace std;
struct product {
    int id;
    string name;
    string brand_name;
    string type;
    int quantity;
    float prince_of_each_unit;
};

int main() {
    int n;//here n is the number of product
    cout << "input the total number of product :";
    cin >> n;
    //product total_product[n];
    product *total_product = new product[n * sizeof(product)];
    for (int i = 0; i < n; i++) {

        cout << "Enter ID= " << endl;
        cin >> (total_product + i)->id;
        cout << "Enter product name" << endl;
        cin >> (total_product + i)->name;
        cout << "Enter brand name" << endl;
        cin >> (total_product + i)->brand_name;
        cout << "Enter type " << endl;
        cin >> (total_product + i)->type;
        cout << "Enter quantity " << endl;
        cin >> (total_product + i)->quantity;
        cout << "Enter price of each unit" << endl;
        cin >> (total_product + i)->prince_of_each_unit;
    }
    //
    //string user_input_type;
    float result,flag=0;
    //cout << "Enter the product type :" << endl;
    //cin >> user_input_type;
    for (int i = 0; i < n; i++) {
        //if (user_input_type == (total_product[i]).type){
            result = ((total_product+i)->quantity) * ((total_product+i)->prince_of_each_unit);
            //cout << result;
            flag=flag+result;

        //}
    }
    cout << "Total asset is"<<flag;
    delete[] total_product;
    return 0;
}
