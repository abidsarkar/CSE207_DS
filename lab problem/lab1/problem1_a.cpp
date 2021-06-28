#include <iostream>
using namespace std;
struct product{
    int id;
    string name;
    string brand_name;
    string type;
    int quantity;
    float prince_of_each_unit;
};
int main() {
    int n;//here n is the number of product
    cout<<"input the total number of product :";
    cin>>n;
    product total_product[n];
    for (int i =0;i<n;i++){

        cout<<"Enter ID= "<<endl;
        cin>>total_product[i].id;
        cout<<"Enter name"<<endl;
        cin>>total_product[i].name;
        cout<<"Enter brand name"<<endl;
        cin>>total_product[i].brand_name;
        cout<<"Enter type "<<endl;
        cin>>total_product[i].type;
        cout<<"Enter quantity "<<endl;
        cin>>total_product[i].quantity;
        cout<<"Enter price of each unit"<<endl;
        cin>>total_product[i].prince_of_each_unit;
    }
    for (int i=0; i<n;i++){
        if (total_product[i].prince_of_each_unit>40){
            cout<<"product name="<<total_product[i].name<<"\nproduct id= "<<total_product[i].id<<endl;
            cout<<"product type="<<total_product[i].type<<"\nproduct quantity="<<total_product[i].quantity<<endl;
            cout<<"price= "<<total_product[i].prince_of_each_unit;

        }
    }


    return 0;
}
