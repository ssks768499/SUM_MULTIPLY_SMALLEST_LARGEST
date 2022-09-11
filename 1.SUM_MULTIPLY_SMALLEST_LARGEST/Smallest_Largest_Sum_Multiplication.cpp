#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, smallest, largest, sum, multiply;
    
    cout<< "Enter any three numbers : \n";
    cin>>n1>>n2>>n3;
    
    smallest = n1;
    largest = n2;
    
    if (n2 < smallest)
    {
        smallest = n2;
    }
    if (n3 < smallest)
    {
        smallest = n3;
    }
    if (n3>largest)
    {
        largest = n3;
    }
    if (n2 > largest)
    {
        largest = n2;
    }
    sum=n1+n2+n3;
    multiply=n1*n2*n3;
    
    cout<< "\n\nThe smallest number among ("<<n1<<","<<n2<<","<<n3<<") is: "<<smallest;
    cout<< "\n\nThe largest number among ("<<n1<<","<<n2<<","<<n3<<") is: "<<largest;
    cout<< "\n\nThe sum of the numbers are: "<<sum;
    cout<< "\n\nThe multiplication of the numbers are: "<<multiply;
    cout<< "\n\n\n\n\n";
    
    return 0;
}
