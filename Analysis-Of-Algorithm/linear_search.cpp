#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[100] ,n ,x , i; 
    cout<<"Enter the length: ";
    cin>>n; 
    for (i = 0; i < n; i++)
    {
        cout<<"Enter The Element: ";
        cin>>arr[i];
    }
    cout<<"Enter The Element to Search: ";
    cin>>x;
    int result = search(arr, n, x); 
   (result == -1)? cout<<"Element is not present in array \n" 
                 : cout<<"Element is present at index " <<result;
    cout<<"\n"; 
   return 0; 
} 