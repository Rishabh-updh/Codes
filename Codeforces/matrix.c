#include <stdio.h>
int main() {
    int I,J,counter=0;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
            I=i;
            J=j;
            break;
            }
        }
    }
    if(I>2){                       
    for(int i=I;i>2;i--){
            counter++;
        }
        if(J>2){
          for(int i=J;i>2;i--){
          counter++;
         }
        }
        else if(J<2){
          for(int i=J;i<2;i++){
          counter++;
        }
    }
        else if(J==2){
          counter=counter+0;
        }
}
    else if(I<2){
    for(int i=I;i<2;i++){
            counter++;
        }
        if(J>2){
          for(int i=J;i>2;i--){
          counter++;
         }
        }
        else if(J<2){
          for(int i=J;i<2;i++){
          counter++;
        }
       }
       else if(J==2){
          counter=counter+0;
        }
      }   
      if(I==2){        
        if(J>2){
          for(int i=J;i>2;i--){
          counter++;
         }
        }
        else if(J<2){
          for(int i=J;i<2;i++){
          counter++;
       }
      }
      else if(J==2){
        counter=counter+0;
      }
     }
    printf("%d\n",counter);
    return 0;
}