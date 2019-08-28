
//Name: Muhammad Fawad Jawaid Malik
//Roll no.11k-2116
//Section: B

#include<iostream>

using namespace std;

void Swap(double *i, double *j) 
      {
           double tmp;
           tmp=*i;
           *i=*j;
           *j=tmp;
      }



int main()
{
    int n,r,c,i,j,k,l,sum1,sum2,sum3,sum4,sum5,sum6;
    
    cout<<"Enter order of matrix."<<endl;
    
    cout<<"Enter number of Rows."<<endl; 
    cin>>r;
    
    double sum[r];
    
    cout<<"Enter number of Columns."<<endl;
    cin>>c;
    
    double a[r][c];
    
    cout<<endl<<"Enter Array:"<<endl;
    
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
         cin>>a[i][j];
    }
    
    cout<<endl<<"Array:"<<endl;
    
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
          cout<<a[i][j]<<" ";
       cout<<endl;
    }
    
    for(i=0;i<r;i++)
    {
       sum[i]=0;
       for(j=0;j<c;j++)
        sum[i]=sum[i]+a[i][j];
       cout<<"Sum of Row"<<i+1<<"="<<sum[i]<<endl;
    }
    
    
      for(int i=0;i<r-1;i++)
           {
                for(int j=r-1;j>i;j--)
                {
                    if(sum[j]<sum[j-1])
                    {
                        Swap(&sum[j-1],&sum[j]);
                        
                    }
                }
           } 
    
    cout<<endl<<"After Sorting:"<<endl;
    for(i=0;i<r;i++)
    {
       //sum[i]=0;
       //for(j=0;j<c;j++)
        //sum[i]=sum[i]+a[i][j];
       cout<<"Sum of Row"<<i+1<<"="<<sum[i]<<endl;
    }
    
    
    system("pause");
    return 0;
}
