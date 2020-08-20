#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    /* data */ 
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr =(int*)malloc(tsize*sizeof(int));

}

void show(struct myArray *a){
    for (int i=0;i<a->used_size;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}

int main() {
    struct myArray marks;
    createArray(&marks,10,2);
    show(&marks);
 
    return 0;
}