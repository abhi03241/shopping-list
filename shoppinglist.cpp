#include<iostream>
using namespace std;

const int m=50;

class items{
    int item_code[m];
    int item_price[m];
    int count;

    public:
         void CNT(){count = 0;}
         void get_item();
         void display_sum();
         void remove();
         void display_items();
};

void items :: get_item(){
    cout<<"enter item code : ";
    cin>>item_code[count];

    cout<<"enter item price : ";
    cin>>item_price[count];

    count++;
}
void items :: display_sum(){
    float sum = 0;
    for(int i=0;i<count;i++){
        sum+=item_price[i];
    }
    cout<<endl<<"total price : "<<sum<<endl;
}
void items :: remove(){
    int a;
    cout<<"enter item code : ";
    cin>>a;

    for(int i=0;i<count;i++){
        if(item_code[i] == a){
            item_price[i] = 0;
        }
    }
}
void items :: display_items(){
    cout<<endl<<"code price"<<endl;
    for(int i=0;i<count;i++){
        cout<<endl<<item_code[i];
        cout<<"   "<<item_price[i];
    }
    cout<<endl;
}
int main(){
    items order;
    order.CNT();
    int x;

    do{
    cout<<endl<<"you can do the following";
    cout<<"enter appropriate number"<<endl;
    cout<<"1 : add an item"<<endl;
    cout<<"2 : display total value"<<endl;
    cout<<"3 : delete an item"<<endl;
    cout<<"4 : display all items"<<endl;
    cout<<"5 : quit"<<endl;
    cout<<"what is your option ?"<<endl;

    cin>>x;

    switch(x){
        case 1 : order.get_item();
        break;
        case 2 : order.display_sum();
        break;
        case 3 : order.remove();
        break;
        case 4 : order.display_items();
        break;
        case 5 : break;
        default : cout<<"error in input"<<endl<<"try again"<<endl;
    }
}while(x !=5);

return 0;

}