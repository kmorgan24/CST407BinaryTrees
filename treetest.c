//**************************************************
// Binary tree test program
//
// Author: Phil Howard

#include <stdio.h>
#include <stdlib.h>

#include "cbinary.h"

void print_node(element_t element)
{
    printf("node: %d\n", Element_Value(element));
}


#define TREE_SIZE 100

int main()
{
    tree_t tree;
    tree = Tree_Init();
    int data[1000];

    for (int ii=0; ii<TREE_SIZE; ii++)
    {
        data[ii] = rand()%1000;
        printf("Inserting %d\n", data[ii]);
        Tree_Insert(tree, data[ii]);
    }

    for (int ii=0; ii<TREE_SIZE; ii++)
    {
        Tree_Traverse(tree, print_node);
        printf("Deleting %d\n", data[ii]);
        Tree_Delete(tree, data[ii]);
    }

    Tree_Destroy(tree);

    return 0;
}

