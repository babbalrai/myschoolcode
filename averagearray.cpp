#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float arr[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

//    while (n > 100 || n <= 0)
//    {
//        cout << "Error! number should in range of (1 to 100)." << endl;
//        cout << "Enter the number again: ";
//        cin >> n;
//    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / n;
    cout << "Average = " << average<<end;
    cout<<"sum of array is"<<sum;


    return 0;
}
