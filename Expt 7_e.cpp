/*PRN: 22070123108
Experiment-no: 7(e)*/

#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    float avg;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        sum=sum+a1[i];
        avg=sum/n;
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    cout<<"The average of elements is: "<<avg;
return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter the elements of the array: 2
Enter the elements of the array: 8
Enter the elements of the array: 4
Enter the elements of the array: 7
Enter the elements of the array: 1
The sum of elements is: 22
The average of elements is: 4	
*/
