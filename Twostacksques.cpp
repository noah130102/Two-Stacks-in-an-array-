#include <iostream>
#include <stack>
#include <string>

using namespace std;


class twostacks{
    int size;
    int *arr;
    int top1;
    int top2;
    public:
    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
    twostacks(int n){
        size = n;
        arr= new int[n];
        top1=-1;
        top2=size;
    }
};

void twostacks::push1(int x){
    if (top1 < top2-1)
    {
        top1++;
        arr[top1]=x;
    }else{
        cout<<"Stack overflown";
        return;
    }
    
}
void twostacks::push1(int x){
    if (top1 < top2-1)
    {
        top2--;
        arr[top2]=x;
    }else{
        cout<<"Stack overflown";
        return;
    }
    
}
int twostacks::pop1(){
    if (top1>=0)
    {
        int x = arr[top1];
        top1--;
        return x;
    }else{
        cout<<"Stack underflown";
        return;
    }
    

}
int twostacks::pop2(){
    if (top2<size)
    {
        int x = arr[top2];
        top2++;
        return x;
    }else{
        cout<<"Stack underflown";
        return;
    }
    

}