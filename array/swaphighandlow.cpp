#include <iostream>
#include <climits>
using namespace std;



int main()
{
    int arr[] = {1,3, 4, 8, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxin=0;
    int minin=0;

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)                            //calculationg max num
        {
            max = arr[i];
            maxin=i;
        }
    }
    cout << "Maximum element is " << max << endl;
    cout<<"Maximum element is at index "<<maxin<<endl;

    int min = INT_MAX;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] < min)
        {                 //
            min = arr[j]; // big=max[arr[i],big]       //calculationg min num
            minin=j;
        }
    }
        cout << "Mainimum element is " << min << endl;
        cout<<"Minimum element index is "<<minin<<endl;


     swap(arr[maxin],arr[minin]);

     for(int k=0;k<size;k++){
        cout<< arr[k]<<" ";
     }

        

}

