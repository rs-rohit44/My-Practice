#include <iostream>
#include<stack>
using namespace std;
int DecimalToBinary(int num)
{
    int answer=0;
    stack<int>st;
    while(num > 0)
    {
        st.push(num%2);
        num=num/2;
    }
    while(!st.empty())
    {
        answer=st.top()+answer*10;
        st.pop();
    }
    return answer;
}
int main() {
    int num=0;
    int result=0;
    cout<<"Enter the number :";
    cin>>num;
    result=DecimalToBinary(num);
    cout<<result;
    
    return 0;
}
