#include<iostream>
#include "LinkedList\LinkedList.h"
using namespace std ;

/*class  stackonLinkedList {
   public :
   node* top ; 

   stackonLinkedList(){
   	   top = NULL ;
   }

  void push(int value ){
      node* fresh = new node ;
      bool success = true ;
      if(fresh != NULL ){
          fresh->setvalue(value);
          fresh->setlocation(top) ;
          top = fresh ;
      }else{
         cout<<"Boundary Error !" ;
         success = false ;
      }
     
    }

  int pop(){
  	  int value = -999 ;
  	  if(top != NULL) {
  	  node* pop =  top->getlocation() ;
  	  value = top->getvalue();
      free(top);
      top = pop ;
    }
  	  return value ;
    }

  void displayValues(){
	node* hdr = top ;	
	while(hdr != NULL ){
          cout<<"the value is   "<< hdr->getvalue()<<endl ;
          hdr = hdr->getlocation() ;
	}
}  

~stackonLinkedList(){
    node* hdr = top ;
	while(hdr != NULL){
		top = hdr->getlocation() ;
		free(hdr) ;
		hdr = top;
	}
}

  
};

*/
int main()
{
	node* head = createLinkedList(5) ;
	displayValues(head);
	
	}