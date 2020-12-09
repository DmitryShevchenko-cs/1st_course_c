#include <iostream>

using namespace std;

int main()
{
    
    long int num_a;
    int sum=0, k=0;
    long int num_b;
    int temp;

    cin >> num_a;
    while (num_a != 0) {
        
        temp = num_a % 10;
        cout << temp << "" ;
       
        
        sum += temp;

        num_a /= 10;
        k++;

    }

    cout << "\n\n" << sum << endl;
    cout << k << endl;
   

    return 0;
}

