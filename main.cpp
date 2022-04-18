#include <iostream>
using namespace std;
// function with input

  int main(){
    int num, i, res;
    cout <<"What times table do you want?";
    cin>>num;
    for(i=1; i<=12; i++){
      res = num*i;
      cout<<num<<"*"<<i<<"="<<res;
      cout<<endl;
 }
    cout<<endl;
    return 0;
}