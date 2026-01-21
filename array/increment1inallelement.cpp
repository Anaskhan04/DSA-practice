#include <iostream>
using namespace std;

int add1more(int arr[],int size)
{
   for(int i=0;i<size;i++){
            arr[i]=arr[i]+1;
        }
    for (int i=0;i<size;i++){
            cout << arr[i] << " ";
        }    
}
int main()
{
    int arr[] = {7, 3, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    add1more(arr,size) ;
    return 0;
}