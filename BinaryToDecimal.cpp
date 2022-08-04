#include <iostream>
#include<cmath>
using namespace std;
int BinaryToDecimal(int num)
{
    int answer=0,i=0;
    while(num!=0)
    {
        answer=answer+(num%10)*pow(2,i);
        i++;
        num=num/10;
    }
    return answer;
}
int main() {
    int num=0;
    int result=0;
    cout<<"Enter the number :";
    cin>>num;
    result=BinaryToDecimal(num);
    cout<<result;
    
    return 0;
}
