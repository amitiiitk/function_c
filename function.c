
//  #include<stdio.h>
//       void sum();

//     int main(){
//       sum(1,2,3,4);


//       return 0;
//     }

//     void sum(inta,intb,intc,intd){
//       int sum=inta+intb+intc+intd;

//       printf("%d",sum);
//     }



  
//  #include<stdio.h>
//       void square();

//     int main(){
//       square(1);
//       square(12);
//       return 0;
//     }

//     void square(intnum){
//       int square=intnum*intnum;

//       printf("%d\n",square);
//     }

    
 #include<stdio.h>
      void larger_value(float n1,float n2);

     int main(){
      larger_value(2.4,3);

      return 0;
    }

    void larger_value(float n1,float n2){
      if(n1>n2){
        printf("%f>%f",n1,n2);
      }
      else{printf("%f>%f",n2,n1);}

    }