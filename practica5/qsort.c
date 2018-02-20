#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "qsort.h"

static int compareById(const void *element1,const void *element2){
    Student *student1 = (Student *)element1;
    Student *student2 = (Student *)element2;
    return student1->id -  student2->id;
}

static int compareByName(const void *av,const void *bv){
    Student *a = (Student *)av;
    Student *b = (Student *)bv;
    return strcmp(a->name, b->name);
}

void sortById(Student *class, int numElements)
{
    qsort((void *) class,numElements,sizeof(Student),compareById);
    
}

void sortByName(Student *classroom,int n){
    qsort((void *) classroom, n,sizeof(Student),compareByName);
    
}

