// Void Pointers - has no associated data type with it
// It can point data to any data type and can be typecasted to any type
# include<iostream>
using namespace std;
int main()
{
    int n =10;
    void *ptr = &n;  // no data type
    printf( " %d", *(int*)ptr);  // typecasted to int pointer and then dereferencing so output is 10
    return 0;
}

// malloc and calloc function returns a void pointer, due to this reason they can allocate memory to any type of data
// allocate memory dynamically

// NULL pointers - doesn't point to any memory location, repersents an invalid memory location
// used to initialise a pointer when that pointer isn't assigned any valid memory address yet
int main()
{
    int *ptr = NULL; // NULL pointer
    return 0;
}

// Dangling pointer = points to some non existing memory location
int main()
{
    int *ptr = (int*)malloc(sizeof(int));
    free(ptr);   // now becomes dangling pointer
    ptr = NULL; // ptr is no more dangled as it's initialise to null pointer
    return 0;
}

// Wild pointers/ Uninitialized pointers
// point to some arbitary memory location and may cause a program to crash

int main()
{
    int *p;  // wild pointer, (always initialize them with the address of a known variable)
    *p = 10;
    return 0;
}

// Explicitly allocate the memory and put the values in the allocated

// Dynamic memory allocation - allocate memory at the time of execution 
// Static memory allocation - allocation during compile time, and can't be inc or dec during run time
// Heap is segment of memory where dynamic memory allocation takes place unlike stack where allocation occur in a definite order
// Allocated memory can be accessed using pointers only
// malloc(memory allocation) - dynamically allocate a contiguous memory according to the size specified 

//Structures -  user defined data type that can be used to group elements of different types into a single type.

struct student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct student s1 = {"jyoti", 3, 353};  // structure member as function argumnet 
    printf(s1.name, s1.age, s1.marks);
}

// Call by reference
// Structure variable as an argument

struct point  // structure declaration
{
    int x; 
    int y;
};

void print(struct  point p )
{
    printf("%d %d \n", p.x, p.y);

};
int main()
{
    struct  point p1 = {12, 43}; // p1 and p2 structure variable
    struct point p2 = {21, 43};
    print(p1); // call by value
    print(p2);
    return 0; 
}

// pointer to structure as an argument
// pass the address of structure ( use the arrow operator (->) to access the structure member inside the called function
// use when the structure is large enough
void print(struct  point *ptr)
{
    printf("%d %d \n", ptr->x, ptr->y);

};
int main()
{
    struct  point p1 = {12, 43}; // p1 and p2 structure variable
    struct point p2 = {21, 43};
    print(&p1); 
    print(&p2);
    return 0; 
}

// Compiler always starts with the main function
// mallloc allocate memory at heap
