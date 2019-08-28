
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
      
      void SelectionSort(int b[],int a[],int n)
      { 
        int least;
           for(int i=0;i<n-1;i++)
           {
                least=i;
                for(int j=i+1;j<n;j++)
                {
                    if(b[j]<b[least])
                    {
                         least=j;
                    }
                }
                Swap(&a[least],&a[i]);
           }
      }
};
             

int main()
{
    int n=0,i,j;
    Sorting sort;
    
    cout<<"Enter the number of integers you want to enter:"<<endl;
    cin>>n;
    
    int a[n],b[n],r[n],c[n],t[n],s[n],d[n],q[n],sum[n];
    

    
    for(i=0;i<n;i++)
    {
      sum[i]=0;              
      b[i]=0;
      c[i]=0;
      r[i]=0;
      t[i]=0;
      s[i]=0;
      q[i]=0;
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
      else if(a[i]>9999&&a[i]<=99999)
      {
           c[i]=(a[i]%10000)%1000%10;
           r[i]=(a[i]%10000)/10%10%10;
           t[i]=(a[i]%10000)/100%10;
           s[i]=(a[i]%10000)/1000;
           q[i]=a[i]/10000;
           
           b[i]=c[i]+r[i]+t[i]+s[i]+q[i];
      }
    }
    
    cout<<endl<<"Integers before sorting."<<endl;
    for(i=0;i<n;i++)
    {              
      cout<<a[i]<<" ";
    }
             
    sort.SelectionSort(b,a,n);
    
    cout<<endl<<"Integers after sorting."<<endl;
    for(i=0;i<n;i++)
    {              
      cout<<a[i]<<" ";
    }
    
    cout<<endl;
    system("pause");
    return 0;
}
