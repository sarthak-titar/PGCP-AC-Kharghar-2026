#include <iostream>
#include <iomanip>
using namespace std;
class product{
    private:
    int productId;
    string name;
    double price;
    int quantity;
    public :
    void acceptDetails(); // Read all fields from user
    void displayDetails() const; // Print formatted product info
    double totalValue() const; // price * quantity
    bool isLowStock(int threshold) const;
    string  getname () const;
    int getprice () ;
    double reorderCost(int qty, double unitPrice);
    double reorderCost(double qty, double unitPrice); 
    double reorderCost(int qty, double unitPrice, double taxRate);
    double applyDiscount(double price, double discountPercent = 10.0);
};
            void product:: acceptDetails(){
                cout<<"Enter pruductID:"<<endl;
                cin>>productId;
                cout<<"Enter name:"<<endl;
                cin>>name;
                cout<<"Enter price:"<<endl;
                cin>>price;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
            }
            double product :: totalValue() const{
                return price*quantity;

            }


            int spaces = 10;
            void product:: displayDetails() const{
                cout<<productId;
                cout<<setw(spaces)<<name;
                cout<<setw(spaces)<<price;
                cout<<setw(spaces)<<quantity;
                cout<<setw(spaces)<<totalValue();
                cout<<endl;
                
            }
            string product:: getname () const{
                
                return name;
            }
            // int product:: getprice () const{
                
            //     return price;
            // }
            bool product:: isLowStock(int threshold) const{
               
                    return threshold > quantity;
            }
            // after reorder
            double product :: reorderCost(int qty, double unitPrice){
                return qty *unitPrice;

            }
            double product:: reorderCost(double qty, double unitPrice){
                return qty * unitPrice;
            }
            double product:: reorderCost(int qty, double unitPrice, double taxRate){
                return qty * unitPrice * (taxRate/100);
            }
            double product :: applyDiscount(double price, double discountPercent ){
                    return price * (discountPercent/100);
            }
            

 
int main(){
    int size = 5;
    product p[size];
    product p1;
    for(int i = 0  ;i <size; i++){
        cout<<"Enter Products Details:"<<endl;
        p[i].acceptDetails();
    }  
                
                cout<<"productId";
                cout<<setw(spaces)<<"name";
                cout<<setw(spaces)<<"price";
                cout<<setw(spaces)<<"quantity";
                cout<<setw(spaces)<<"Total";
                cout<<endl;
    for(int i = 0 ; i<size;i++){
        p[i].displayDetails();
    }
    static int max = 0 ; 
    for(int i= 1; i < size; i++){
        
        if(p[i].totalValue() > p[max].totalValue()){
            max = i;
        }
        
    }
    
    cout<<"Highest Value Product :"<<p[max].getname()<<"("<<p[max].totalValue()<<")"<<endl;
     cout<<"Low Stock (threshold: 10) :";
    for(int i = 0;i<size;i++){
         if(p[i].isLowStock(10) == true){
            cout<<p[i].getname()<<","<<endl;
         }
         else{
            continue;
         }
    }
    // after
    // double reorderCost(int qty, double unitPrice);
    // double reorderCost(double qty, double unitPrice); 
    // double reorderCost(int qty, double unitPrice, double taxRate);
    // double applyDiscount(double price, double discountPercent = 10.0);
 
    cout<<"===== PART B — FUNCTION OVERLOADING ====="<<endl;
    
   
    cout<<"Integer Quantity Reorder Cost"<<endl;
    cout<<"quantity:   "<<10<<endl;
    cout<<"unit price:  "<<50.00<<endl;

    cout<<"reorder cost:"<<p1.reorderCost( 10, 50.00)<<endl;
    cout<<""<<endl;
    //
   
    cout<<"Fractional Quantity Reorder Cost"<<endl;
     cout<<" quantity:   "<<2.50<<endl;
      cout<<"unit price:  "<<100.0<<endl;

    cout<<"reorder cost:"<<p1.reorderCost( 2.50, 100.0);
     cout<<""<<endl;
     //
    cout<<"Reorder Cost With Tax"<<endl;
   
    cout<<"quantity:  "<<10<<endl;
    cout<<"unit price:   "<<50.00<<endl;
    cout<<"tax rate:  "<<18.00<<endl;
    cout<<"reorder coet:  "<<p1.reorderCost( 10, 50.0,18.00)<<endl;
   cout<<"Discount Calculation"<<endl;
   cout<<"price :"<<endl;
   cout<<"discont final price:"<<p1.applyDiscount(1000.00,10.0)<<endl;
   



}
