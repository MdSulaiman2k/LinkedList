#include<iostream>
#include "node.h" 
using namespace std;

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

void displayValues(node* header){
	node* hdr = header ;	
	while(hdr != NULL ){
          cout<<"the value is   "<< hdr->getvalue()<<endl ;
          hdr = hdr->getlocation() ;
	}
}

void deleteNode(node* header){
	node* hdr = header ;
	while(hdr != NULL){
		header = hdr->getlocation() ;
		free(hdr) ;
		hdr = header;
	}
}


int main(){  
	int n ;
	cout<<"enter the number : " ; cin>>n ;
	node* header = createLinkedList(n) ;
	displayValues(header) ;
	deleteNode(header) ;
   
}