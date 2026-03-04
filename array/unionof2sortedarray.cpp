#include <bits/stdc++.h>
using namespace std;

vector<int> sortedarrayunion(vector<int> arr1, vector<int> arr2, int size1, int size2)
{
  vector<int> ans;
  int i = 0, j = 0;

  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
       if(ans.empty() || ans.back() != arr1[i])                              //to avoid duplicates
      ans.push_back(arr1[i]);
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
       if(ans.empty() || ans.back() != arr1[i])
      ans.push_back(arr2[j]);
      j++;
    }
    else
    {
       if(ans.empty() || ans.back() != arr1[i])
      ans.push_back(arr1[i]);
      i++;
      j++;
    }
  }

    while (i < size1) {
        if (ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while (j < size2) {
        if (ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

  int main()
  {
    vector<int> arr1 = {1,1, 2, 4,  6};
    vector<int> arr2 = {2, 3, 5, 7,7,8};
    int size1 = arr1.size();
    int size2 = arr2.size();

    vector<int> ans = sortedarrayunion(arr1, arr2, size1, size2);

    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }


  // USIGN SET DATA TYPE

  vector<int> sortedarrayunion(vector<int> arr1, vector<int> arr2, int size1, int size2)
  {
    set<int> s;
    for (int i = 0; i < size1; i++)
    {
      s.insert(arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
      s.insert(arr2[i]);
    }

    vector<int> ans(s.begin(), s.end());
    return ans;
  }

  //Bcz set data type does not allow duplicates and it stores the elements in sorted order, we can directly insert the elements of both arrays into the set and then convert it back to a vector to get the union of the two sorted arrays without duplicates.