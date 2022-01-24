#include <iostream>
using namespace std;
int main()
{
    try {
        try {
            throw 100;
        }
        catch (int n) {
            cout << "Handled Partially ";
            throw; 
        }
    }
    catch (int n) {
        cout << "Handled completely";
    }
        return(0);
    }