
//Name: Muhammad Fawad Jawaid Malik
//Roll no.11k-2116
//Section: B

#include<iostream>

using namespace std;

class Sorting
{
    public:
     void Swap(int *i, int *j) 
      {
           int tmp;
           tmp=*i;
           *i=*j;
           *j=tmp;
      }
      
      void BubbleSort(int a[],int n)
      {
           for(int i=0;i<n-1;i++)
           {
                for(int j=n-1;j>i;j--)
                {
                    if(a[j]<a[j-1])
                    {
                        Swap(&a[j-1],&a[j]);
                    }
                }
           } 
              
      }
};
             

int main()
{
    int n,i,j;
    Sorting sort;
    
    cout<<"Enter the number of integers you want to enter:"<<endl;
    cin>>n;
    
    int a[n],b[n],r[n],c[n],t[n],s[n],d[n],h[n];
    

    
    for(i=0;i<n;i++)
    {
      b[i]=0;
      h[i]=0;
      c[i]=0;
      r[i]=0;
      t[i]=0;
      s[i]=0;
      d[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      
      if(a[i]>9&&a[i]<=99)
      {
                   
          c[i]=(a[i]%10);                 
          
          r[i]=a[i]/10;
            
            
       b[i]=c[i]+r[i];
      }
      else if(a[i]>99&&a[i]<=999)
      {
           c[i]=(a[i]%100)%10;
           r[i]=(a[i]%100)/10;
           t[i]=a[i]/100;
      //cout<<c[i];      
           b[i]=c[i]+r[i]+t[i];
      }
      else if(a[i]>999&&a[i]<=9999)
      {
           c[i]=(a[i]%1000)%100%10;
           r[i]=(a[i]%1000)/10%10;
           t[i]=(a[i]%1000)/100;
           s[i]=a[i]/1000;
           
           b[i]=c[i]+r[i]+t[i]+s[i];
      }
    }
    
    cout<<endl<<"Sum of digits of integers before sorting."<<endl;
    for(i=0;i<n;i++)
    {
      cout<<b[i]<<" ";
    }
    
 
    
    sort.BubbleSort(b,n);
    
    cout<<endl<<"Sum of digits of integers after sorting."<<endl;
    for(i=0;i<n;i++)
    {              
      cout<<b[i]<<" ";
    }
    
    cout<<endl;
    system("pause");
    return 0;
}
