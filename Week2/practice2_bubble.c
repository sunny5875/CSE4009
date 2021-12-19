//Template
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int compare(int a, int b){
    if(a>b)  
    	return 1;
    else 
       	return -1;
}
    

/***************************************************************
define bubble sort that uses pointer to 'compare' function above
***************************************************************/


int main(){
    int n_array[SIZE] = {2,-9, 10, 15, 1, 3, -12, 5, 4, 1};

    //return형 (*함수포인터이름) (매개변수 타입;)
    int (*fp)(int,int);
    //함수포인터에 함수이름 넣기==함수 메모리 주소를 포인터에 저장
    //함수 이름도 배열처럼 함수가 저장된 메모리 공간의 주소값을 의미

    fp=compare;
    size_t i=0;
    size_t j=0;
    int temp;

    for(i=0; i<SIZE; i++){
        for(j=0;j<SIZE-(i+1);j++){
            if(fp(n_array[j],n_array[j+1])==1){
                temp=n_array[j];
                n_array[j]=n_array[j+1];
                n_array[j+1]=temp;
            }
        }
    }

    for(i=0;i<SIZE;i++){
        printf("%d ",n_array[i]);
    }
    printf("\n");

    //source code

    return 0;
}
