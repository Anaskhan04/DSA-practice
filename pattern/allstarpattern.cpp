#include <iostream>
using namespace std;


// PROBLEM 1 (START)
// *****
// *****
// *****
// *****
// *****

int patternN(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
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

//////// END 1







// // PROBLEM 2 (START)
// // *
// // * *
// // * * *
int main(){
    int i,j , num;
    cout << "enter num : ";
    cin >> num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// // END 2


//problem 3
//*****
//****
//***
//**
//*
void printn(int n){
for(int i=1;i<=n;i++){
  for( int j=n;j>=i;j--){
      cout << "*" ;
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
//END 3


// // PROBLEM 4(START)
// //    *    
// //   * *
// //  * * *
// // * * * *
// //* * * * *
int main(){
    int i,j , num;
    cout << "enter num : ";
    cin >> num;
    for(i=1;i<=num;i++){
        for(j=1;j<num-i+1;j++){     //for space
            cout << " ";
        }
        for(j=1;j<=2*i-1;j++){      //for star
            cout << "*";
        }
        for(j=1;j<num-i+1;j++){     //for space
            cout << " ";
        }
        
        cout << endl;
    }
    return 0;
}

//method 2
void printn(int n){
  for ( int i=1;i<=n;i++){
     for( int j=1;j<=n-i;j++){
      cout << " " ;
     }
     for( int k=1;k<=2*i-1;k++){
      cout << "*" ;

     }
     for( int j=1;j<=n-i;j++){
      cout << " " ;
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

// // END 4



// // PROBLEM 5 (START)
// //*******
// // *****  
// //  ***
// //   *

//method 1
int main(){
    int i,j , num;
    cout << "enter num : ";
    cin >> num;
    for(i=1;i<=num;i++){
        for(j=1;j<i;j++){     //for space
            cout << " ";
        }
        for(j=1;j<=2*num-(2*i-1);j++){      //for star
            cout << "*";
        }
        for(j=1;j<num;j++){     //for space
            cout << " ";
        }
        
        cout << endl;
    }
    return 0;
}

//method 2


void printn(int n){
for(int i=n;i>=1;i--){
     for( int j=1;j<=n-i;j++){
      cout << " " ;
     }
     for( int k=1;k<=2*i-1;k++){
      cout << "*" ;

     }
     for( int j=1;j<=n-i;j++){
      cout << " " ;
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



// // END 5


// // PROBLEM 6 (START)
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

//method 1



//method 2(worst : by anas)
void printn(int n){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout << "*" ;
      }
    cout << endl;
  }
for(int i=n-1;i>=1;i--){
      for(int j=i;j>=1;j--){
        cout << "*" ;
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

// end 6

// PROBLEM 7 (START)

// *    *
// **   **
// ***  ***
// **** ****
// **********
void printn(int n)
{
            for(int i=1;i<=n;i++){
                for( int j=1;j<=i;j++){
                    cout << "*";
                }
                for( int k=1;k<=n-i;k++){
                   cout << " ";
                }
                for( int j=1;j<=i;j++){
                    cout << "*";
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


//// END 7