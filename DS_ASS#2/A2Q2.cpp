
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
   
   void BubbleSort()
   {    
          Node* curr = HEAD;
          int count = 0;    
          while(curr!=NULL)    
          {    
              count++;        
              curr = curr->NEXT;        
          }    
          for(int i = count ; i > 1 ; i-- )    
          {        
             Node *temp, *p;        
             p = HEAD;        
             for(int j = 0 ; j < count-1 ; j++ )        
             {            
                if(p->INFO > p->NEXT->INFO)
                {   
                     Node *q = p->NEXT;                
                     p->NEXT = q->NEXT;                
                     q->NEXT = p;                
                     if(p == HEAD)                
                     {                    
                         HEAD = q;                    
                         p = q;                
                     }                
                     else                
                     {                    
                         p = q;                    
                         temp->NEXT = q;                
                     }            
                }            
                temp = p;            
                p = p->NEXT;        
             }    
          }
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
     list.BubbleSort();
     cout<<endl;    
     cout << "List after sorting.\n";    
     list.Read();
     
     system("pause");
}
