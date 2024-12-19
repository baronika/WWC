/*
//SUM OF N NATURAL NUMBERS
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
*/

//3) OVERLOADING 
#include<iostream>
