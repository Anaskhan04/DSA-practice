#include <iostream> 
using namespace std;

// method 1
//this is brute force method (worsst) soting=n(nlong(n)) after that comparing the second largest element is O(n)
// total time complexity is O(nlogn) + O(n) = O(nlogn)  which i snot good
//if you have sorted array then you can use this code or make the givenn array to sorted arrat
// sort all the array that the last ellemt is largest its obvious . now we have to coppare if the previous element is smaller than the last element then we can say that the second largest element is the previous element. if they are same we have to coppare the previous element with the previous previous element and so on until we find the second largest 
void sl( int arr[],int size){
int largest=arr[size-1];
for(int i=size-2;i>=0;i--){
    if(arr[i]<largest){
        cout << "The second largest element is: " << arr[i] << endl;
        break;
    }
}
}

int main(){
    int arr[5]={1,5,5,5,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    sl(arr, size);
}


// method 2
// frist find the largest element then coppare the all element with the largest element and if it is smaller than the largest element and greater than all value in array then we can say that it is the second largest element
// time co,mplexity is O(n) + O(n) = O(2n) = O(n) which is better but not the best or optimal 
#include <iostream>
using namespace std;

void sl(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "The  largest element is "<< largest << endl;

    int secondlargest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    cout << "The second largest element is: " << secondlargest << endl;
}

int main()
{
    int arr[7] = {1,7,5,6,7,7,5};
    int size = 7;
    sl(arr, size);
}

// method 3
// this is the best method to find the second largest element in an array

#include <iostream>
using namespace std;
void sl(int arr[], int size)
{
    int secondlargest = -1;
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    cout << "The largest element is: " << largest << endl;
    if (secondlargest == -1)                                              
    {
        cout << "There is no second largest element." << endl;
    }
    else
    {
        cout << "The second largest element is: " << secondlargest << endl;
    }
}
int main()
{
    int arr[7] = {2, 1, 1, 1, 1, 1, 1};
    int size = 7;
    sl(arr, size);
}