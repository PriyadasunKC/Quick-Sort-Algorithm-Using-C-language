#include<stdio.h>

void quicksort(int number[5],int lBound,int uBound){
   int start, end, pivot, temp;
   if(lBound<uBound){
      pivot=lBound;
      start=lBound;
      end=uBound;
      while(start<end){
         while(number[start]<=number[pivot]&&lBound<uBound)
         start++;
         while(number[end]>number[pivot])
         end--;
         if(start<end){
            temp=number[start];
            number[start]=number[end];
            number[end]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[end];
      number[end]=temp;
      
      quicksort(number,lBound,end-1);
      quicksort(number,end+1,uBound);
   }
}
int main(){
    int number [6] = {1,4,9,5,3,0};
    int count = 6;
   quicksort(number,0,count-1);
   for(int i=0;i<count;i++)
   printf(" %d",number[i]);
   return 0;
}
