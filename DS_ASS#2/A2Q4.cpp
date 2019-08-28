
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
    double T,L;
    
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
    
    cout<<endl<<"Array Before Sorting:"<<endl;
    
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
       //cout<<"Sum of Row"<<i+1<<"="<<sum[i]<<endl;
    }
    
    for(i=0;i<r;i++)
    {
      int h=i;
      
      for(j=0;j<r-1;j++)
      {            
           if(sum[j]>sum[h])
             h=j;
      }
      
      T=sum[h];
      sum[h]=sum[i];
      sum[i]=T;
      
      for(k=0;k<c;k++)
      {
          L=a[h][k];
          a[h][k]=a[i][k];
          a[i][k]=L;
      }
    }  
      
    cout<<endl<<"Array After Sorting:"<<endl;
    for(i=0;i<r;i++)
    {
       
       for(j=0;j<c;j++)
         cout<<a[i][j]<<" ";
       cout<<endl;
    }
    
    
    system("pause");
    return 0;
}
