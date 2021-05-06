#include <iostream>
using namespace std;

int main()
{
    const int n=5;
    int arr[n]={20, 8, 32, 6, 1}, min, k, swap;
    
//reshenie 1
    for(int i=0; i<n-1; i++)
    {
        k=i;
        min=arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                k=j;
            }
        }
        swap=arr[k];
        arr[k]=arr[i];
        arr[i]=swap;
    }
    for(int k=0; k<n; k++) cout<<"arr["<<k<<"]="<<arr[k]<<endl;
    
//reshenie 2
//    for(int i=0; i<n-1; i++)
//    {
//        for(int j=0; j<n-i-1; j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                swap=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=swap;
//            }
//        }
//    }
//    for(int k=0; k<n; k++) cout<<"arr["<<k<<"]="<<arr[k]<<endl;
    
return 0;
}
