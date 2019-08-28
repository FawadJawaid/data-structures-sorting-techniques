
//Name : Muhammad Fawad Jawaid Malik
//Roll No. 11k-2116
//Section: B

#include <iostream> 
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
   void Input(char data)
   {    
        Node *front, *tail;    
        tail = new Node;    
        tail->INFO = data;    
        tail->NEXT = NULL;    
        if(HEAD == NULL)        
         HEAD = tail;    
        else    
        {        
           front = HEAD;       
           while(front->NEXT!=NULL)            
             front = front->NEXT;       
           front->NEXT = tail;    
        }
   }
   
   void SelectionSort()
   {    
        Node *h = HEAD, *i, *j, *next_i;    
        for(i = h; i!=NULL && i->NEXT!=NULL; i=i->NEXT)    
        {        
            Node *min;        
            min = i;        
            for(j = i->NEXT; j!=NULL ; j=j->NEXT)       
            {            
                if(j->INFO < min->INFO)                
                    min=j;        
            }        
            if(min!=i)        
            {            
                int temp;            
                temp = min->INFO;            
                min->INFO = i->INFO;            
                i->INFO = temp;        
            }    
        }    
        HEAD = h;
   }
   
   void Read()
   {    
        Node *curr;    
        curr = HEAD;    
        cout << setw(15) << "LIST" << endl;    
        while(curr != NULL)    
        {        
           cout << setw(13) << static_cast<char>(curr->INFO) << endl;        
           curr = curr->NEXT;    
        }    
   }
};
    
   
int main()
{    
     Linkedlist list;
     char num; 
     int numOfEl;    
     cout << "Enter number of characters you want to input: ";    
     cin >> numOfEl;    
     cout << "Enter " << numOfEl << " characters: "<<endl;    
     for(int i = 0 ; i < numOfEl ; i++)    
     {        
           cin >> num;        
           list.Input(num);    
     }    
     cout << "\nList before sorting.\n";    
     list.Read();    
     list.SelectionSort();
     cout<<endl;    
     cout << "List after sorting.\n";    
     list.Read();
     
     system("pause");
}
