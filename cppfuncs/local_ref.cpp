#include <iostream>
using namespace std;

int& MultiplyBy10(int num){
    int retval = 0;
    retval = 10 * num;
    return retval;

}// retval can't accessible anymore

int main(){
    int out = MultiplyBy10(10);
    cout << "out is: " << out << endl;
    return 0;
}