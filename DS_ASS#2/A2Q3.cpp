
//Name : Muhammad Fawad Jawaid Malik
//Roll No. 11k-2116
//Section: B

#include<iostream>
#include<assert.h>
#include<iomanip>

using namespace std;

class Node
{    
   public:        
   int INFO;    
   Node *NEXT;
};

Node *HEAD = NULL;

class Linkedlist
{
    public:
    char number()
    {
         char num;
         
         cin >> num;
         
         return num;
    }
    
    Node *Input(int size)
    {
         int i;
         Node *list;
         list=0;
         for(i=0;i<size;++i)
         {
             Node *np;
             np= new Node[sizeof(Node)];
             assert(np!=0);
             
             np->INFO=number();
             np->NEXT=list;
             list=np;
         }
         return list;
    }
    
    Node *InsertionSort(Node *list)
	{	 
         Node *k;
         Node *nplist;
	     if(list==0 || list->NEXT==0)
         { 
             return list; 
         }
	
	     nplist=list; 
         k=list->NEXT; 
         nplist->NEXT=0; 
	     
         while(k!=0)
		 {	
            Node *ptr;
		    if(nplist->INFO>k->INFO)  
			{ 
                Node *tmp;
			    tmp=k;  
                k=k->NEXT; 
                tmp->NEXT=nplist;
			    nplist=tmp; 
                continue;
			}

            for(ptr=nplist;ptr->NEXT!=0;ptr=ptr->NEXT) 
            {
			  if(ptr->NEXT->INFO>k->INFO)
              { 
                 break; 
              } 
            }

		    if(ptr->NEXT!=0)
		    {  
                struct Node *tmp;
			    tmp=k;  
                k=k->NEXT; 
                tmp->NEXT=ptr->NEXT;
			    ptr->NEXT=tmp; 
                continue;
		    }
		    else
		    {
			    ptr->NEXT=k;  
                k=k->NEXT; 
			    ptr->NEXT->NEXT=0; 
                continue;
		    }
		
         }
	 return nplist;
	}
	
	void Read(Node *list)
	{	 
        Node *i;
	    cout << setw(15) << "LIST" << endl;
	    for(i=list;i!=0;i=i->NEXT)
		{  
           cout << setw(13) << static_cast<char>(i->INFO) << endl; 
        }
	       cout<<"\n";
     }
};

int main()
{
    Node *list;
    Linkedlist listing;
    int num; 
    int numOfEl;    
    cout << "Enter number of characters you want to input: ";    
    cin >> numOfEl;
    
    cout << "Enter " << numOfEl << " characters: "<<endl;	   
     
    list=listing.Input(numOfEl); 
    cout << "\nList before sorting.\n";
    listing.Read(list);
    
    list=listing.InsertionSort(list);
    cout << "List after sorting.\n";    
    listing.Read(list);
    
    system("pause");
    return 0;
}  
    
