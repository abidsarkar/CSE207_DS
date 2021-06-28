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
    //product total_product[n];
    product *total_product= new product[n*sizeof(product)];
    for (int i =0;i<n;i++){

        cout<<"Enter ID= "<<endl;
        cin>>total_product->id;
        cout<<"Enter name"<<endl;
        cin>>total_product->name;
        cout<<"Enter brand name"<<endl;
        cin>>total_product->brand_name;
        cout<<"Enter type "<<endl;
        cin>>total_product->type;
        cout<<"Enter quantity "<<endl;
        cin>>total_product->quantity;
        cout<<"Enter price of each unit"<<endl;
        cin>>total_product->prince_of_each_unit;
    }
    for (int i=0; i<n;i++){
        if (total_product->prince_of_each_unit>40){
            cout<<"product name="<<total_product->name<<"\nproduct id= "<<total_product->id<<endl;
            cout<<"product type="<<total_product->type<<"\nproduct quantity="<<total_product->quantity<<endl;
            cout<<"price= "<<total_product->prince_of_each_unit;
            cout<<"_____________________"<<endl;//easy to debug that for more product my code work or not

        }
    }
   delete [] total_product;
//test that delete work or not
//    for (int i=0; i<n;i++){
//        if (total_product->prince_of_each_unit>40){
//            cout<<"product name="<<total_product->name<<"\nproduct id= "<<total_product->id<<endl;
//            cout<<"product type="<<total_product->type<<"\nproduct qunatity="<<total_product->quantity<<endl;
//            cout<<"price= "<<total_product->prince_of_each_unit;
//
//        }
//    }
    return 0;
}
