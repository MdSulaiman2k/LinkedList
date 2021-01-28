#include "node.h"
using namespace std ;

void deleteNode(node* header){
  node* hdr = header ;
  while(hdr != NULL){
    header = hdr->getlocation() ;
    free(hdr) ;
    hdr = header;
  }
}


void displayValues(node* header){
  node* hdr = header ;  
  while(hdr != NULL ){
          cout<<"the value is   "<< hdr->getvalue()<<endl ;
          hdr = hdr->getlocation() ;
  }
}



class  stackonLinkedList {
   public :
   node* top ; 
   int totalnodes ; 

   stackonLinkedList(){
   	   top = NULL ;
           totalnodes = 0 ;
   }

   

   void Stack(node* head){
     node* top = NULL ;
     node* hdr =  head ;
     bool noboundaryError =   true ;
     while(hdr != NULL && noboundaryError ){
        node* fresh = new node ;
        if(fresh != NULL ) {
            fresh->setvalue(hdr->getvalue() ) ;
            fresh->setlocation(top) ;
            top = fresh ;
        }else{
          cout<<"BoundaryError" ;
          noboundaryError =  false ;
          deleteNode(top) ;
        }
        hdr = hdr->getlocation() ;
      }
      hdr = head ;
      node* temp = top ;
      if(noboundaryError) totalnodes = 0 ; 
      while(hdr != NULL  && noboundaryError ){
        hdr->setvalue(top->getvalue()) ;
        top = top->getlocation();
        hdr = hdr->getlocation();
        totalnodes++ ;
        
      }
      deleteNode(top) ;
      this->top = head ;
}


void popArrayonStack(node* head){
     node* top = NULL ;
     node* hdr =  head ;
     bool noboundaryError =   true ;
     while(hdr != NULL && noboundaryError ){
        node* fresh = new node ;
        if(fresh != NULL ) {
            fresh->setvalue(hdr->getvalue() ) ;
            fresh->setlocation(top) ;
            top = fresh ;
        }else{
          cout<<"BoundaryError" ;
          noboundaryError =  false ;
          deleteNode(top) ;
        }
        hdr = hdr->getlocation() ;
      }
      hdr = head ;
      node* temp = top ;
      if(noboundaryError) totalnodes = 0 ; 
      while(hdr != NULL  && noboundaryError ){
        hdr->setvalue(top->getvalue()) ;
        top = top->getlocation();
        hdr = hdr->getlocation();
        totalnodes++ ;
        
      }
      deleteNode(top) ;
      this->top = head ;
}



  
  void push(int value ){
      node* fresh = new node ;
      bool success = true ;
      if(fresh != NULL ){
          fresh->setvalue(value);
          fresh->setlocation(top) ;
          top = fresh ;
          totalnodes++ ; 
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
      totalnodes--;
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



node* createLinkedList(int length){
	   node* header = NULL ;
       if(length > 0 ){
           header = new node ;
           if(header != NULL ){
           	   int value ;
           	   cout<<"enter the value : " ; cin>>value ;
               header->setvalue(value);
               header->setlocation(NULL) ;
               int i = 1 ;
               bool boundaryError = false ;
               node* temp = header ;
               while(i < length && !boundaryError){
                   node* fresh = new node ;
                   if(fresh != NULL ){
                   	   cout<<"enter the value : " ; cin>>value ;
                   	   fresh->setvalue(value) ;
                   	   fresh->setlocation(NULL);
                       temp->setlocation(fresh) ;
                       temp = fresh ;                      
                   }
                   else{
                   	  cout<<" BoundaryError  ! " ;
                   	  boundaryError = true ;
                      deleteNode(header) ;
                   }
                   i++ ;
               }
           }
           else{
           	   cout<<" BoundaryError  ! " ;
           }
       }
       return header ; 
}






 /*void Stack(node* head){
     node* top = NULL ;
     node* hdr =  head ;
     bool noboundaryError =   true ;
     while(hdr != NULL && noboundaryError ){
        node* fresh = new node ;
        if(fresh != NULL ) {
            fresh->setvalue(hdr->getvalue() ) ;
            fresh->setlocation(top) ;
            top = fresh ;
        }else{
          cout<<"BoundaryError" ;
          noboundaryError =  false ;
          deleteNode(top) ;
        }
        hdr = hdr->getlocation() ;
      }
      hdr = head ;
      node* temp = top ;
      while(hdr != NULL  && noboundaryError ){
        hdr->setvalue(top->getvalue()) ;
        top = top->getlocation();
        hdr = hdr->getlocation();
      }
      deleteNode(top) ;
}*/



