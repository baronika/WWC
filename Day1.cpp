
//1) SUM OF N NATURAL NUMBERS
#include<iostream>
using namespace std;
int Sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=Sum(arr,size);
    cout<<"sum of array is:"<<result<<endl;
    return 0;

}

//2) COUNT DIGITS IN A NUMBER

#include<iostream>
using namespace std;

int Count(int number){
        int count=0;
        while(number!=0){
            number=number/10;
            count++;
        }
        return count;
}
int main(){
    int number=123684;
    int res=Count(number);
    cout<<res<<endl;
}


//3) OVERLOADING 
#include<iostream>
using namespace std;
int Area(float r){
    float pi=3.14;
    return pi*r*r;
}
int Area(int l,int b){
    return l*b;
}
int Area(int s){
    return s*s;
}
int main(){
    int r=5;

    int l=2;
    int b=5;
    int s=25;
    
    cout<<"Area of circle:"<<Area(r)<<endl;
    cout<<"Area of rectangle:"<<Area(l,b)<<endl;
    cout<<"Area of square:"<<Area(s)<<endl;
    return 0;
}


//4) IMPLEMENT POLYMORPHISM FOR BANKING TRANSACTION
#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() = 0;
};

class SavingsAccount : public Account {
    int balance;
    double rate;
    int time;
public:
    SavingsAccount(int b, double r, int t) : balance(b), rate(r), time(t) {}
    void calculateInterest() override {
        cout << "Savings Account Interest: " << balance * rate * time / 100 << endl;
    }
};

class CurrentAccount : public Account {
    int balance;
    int fee;
public:
    CurrentAccount(int b, int f) : balance(b), fee(f) {}
    void calculateInterest() override {
        cout << "Balance after fee deduction: " << balance - fee << endl;
    }
};

int main() {
    int accountType;
    cin >> accountType;

    if (accountType == 1) {
        int balance, time;
        double rate;
        cin >> balance >> rate >> time;
        SavingsAccount sa(balance, rate, time);
        sa.calculateInterest();
    } else if (accountType == 2) {
        int balance, fee;
        cin >> balance >> fee;
        CurrentAccount ca(balance, fee);
        ca.calculateInterest();
    } else {
        cout << "Invalid account type." << endl;
    }

    return 0;
}


//5) IMPLEMENT INHERITANCE ON EMPLOYMENT MANAGEMENT SYSTEM

#include<iostream>
using namespace std;

class Company{
    public:
    string companyName="Google";
    void display(){
        cout<<"Company Name:"<<companyName<<endl;
    }
};
class Employee: public Company{
    public:
    string empName="Baronika";
    string position="SDE 2";
    int empId=102;
};
class Manager:public Company{
    public:
    string mName="John Doe";
    string position="Product Manager";
    int empId=101;
};

int main(){
    Employee emp1;
    emp1.empId;
    emp1.empName;
    cout<<"Id: "<<emp1.empId<<" Name: "<<emp1.empName<<endl;
    cout<<"Position:"<<emp1.position<<"\t"<<emp1.companyName<<endl;

    Manager m1;
    m1.empId;
    m1.mName;
    m1.position;
    cout<<"Id: "<<m1.empId<<"Name: "<<m1.mName<<endl;
    cout<<"Position:"<<m1.position<<m1.companyName<<endl;
    return 0;
}


