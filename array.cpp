
#include<iostream>
using namespace std;

int main()
{
    int arr[10]={ 10, 20, 30 ,40 ,50};
    int size = 5;

    cout<<"Array:";
    for (int i =0; i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    int a=2;
    int value;
    cout <<"ENTER INTER..VALUE:";
    cin>>value;
    for (int i=size;i>a;i--)
    {
        arr[i]=arr[i-1];
        arr[a]=value;
        size++;
        
    }
        cout<<"inser...";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        int b;
        cout<<"ENTER INDEX FOR DELE..";
        cin>>b;
        
        for(int i=b;i<size;i++)
        {
            arr[i]=arr[i+1];
            size--;
        }
        cout<<"deletion...."<<endl;
        for(int i =0;i<size;i++)
        {
            cout<<arr[i]<<" "<<endl;

        }

        int k;
        cout<<"ENTER ELEME...";
        cin>>k;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==k)
            {
                cout<<k<<":Element found.."<<endl;

            }
            break;
        }

        cout<<"ENTER ARR[1]:";
        cin>>arr[1];
        cout<<"Updating..";
        for (int i=0;i<size;i++)
        {
            cout<<arr[i]<<" "<<endl;
        }

        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    int t =arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        cout<<"after sorting.."<<endl;

        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
}