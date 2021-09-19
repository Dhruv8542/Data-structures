#include <stdio.h>
#include <stdlib.h>


typedef struct myArray{
    int total_size;
    int used_size;
    int*ptr;
}ar;
void create(ar *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(usize));
}

void setval(ar*a){
    for (int i = 0; i <a->used_size; i++){
        printf("ENETR THE VALUE OF THE ELEMENT%d:",i);
        scanf("%d",&(a->ptr[i]));
    }
    
}
void show(ar*a)

{
    for(int i=0;i<a->used_size;i++){
        printf("The value is:%d\n",(a->ptr)[i]);
    }
}
int main(){
    ar marks;
    create(&marks,10,5);
    printf("Now setting the values\n");
    setval(&marks);
    printf("Now showing the values\n");
    show(&marks);
     return 0;
}