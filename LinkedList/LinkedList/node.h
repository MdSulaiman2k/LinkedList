class node{

   private :

   int value ;                                      // data members
   node* nextlink ;

   public :
   void setvalues(int v , node *link ){              
        value =  v ;
        nextlink = link ;
   }
   void setvalue(int v ) {
       value = v ; 
    }
 
   void  setlocation(node* link){
       nextlink = link ;
   }
   
   int getvalue( ) {
       return value ; 
   }

   node* getlocation( ){
          return nextlink ; 
   }

   ~node(){
       
   }
 
};