#include <iostream>
using namespace std;


// problem 1  (start)
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 


int patternN(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
int n; 
cout << "Enter the number: ";
cin >> n;
patternN(n);
return 0;
}

// end // problem 1 (end)


// problem 2 (start)
// 1
// 12
// 123
// 1234
// 12345
int main(){
    int i, num;
    cout << "enter num : ";
    cin >> num;
    
    for (i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
// end // problem 2 (end



// problem 3 (start)
    //1
    //22
    //333

//method 1
int main()
{
    int i, num;
    cout << "enter num : ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;}


//method 2  (using fucntion)
void reversetrianglenum3(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter num :";
    cin >> n;
    reversetrianglenum3(n);
}
// problem 3 (end)





// problem 4 (start
// 1 2 3 4 
// 1 2 3
// 1 3
// 1

// method 1
void reversetrianglenum(int n){
    for (int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// method 2
void reversetrianglenum2(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// problem 4 (end)


//problem 5 (start)
//12345
// 1234
// 123
// 12
// 1

void printn(int n){
for(int i=n;i>=1;i--){
  for( int j=1;j<=i;j++){
      cout << j ;
     }
   cout << endl;  
  }
}

int main(){
int num;
cout << "enter number" ;
cin >> num;
printn(num);
return 0;

}


//end problem 5



// problem 6 (start)

// 1 2 3 4 5 
// 2 3 4 5
// 3 4 5
// 4 5
// 5
void reversetrianglenum3(int n){
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter num :";
    cin >> n;
    reversetrianglenum(n);
}


// problem 6 (end)
