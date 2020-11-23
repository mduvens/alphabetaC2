
#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct node{ 
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node node;

node* newNode(int data){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node* insert(node* root, int data){
    if(root == NULL){
        root = newNode(data);       
    }
    else if(data <= root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
};
int search(node* root, int data){
    if(root == NULL) return 0;
    else if(root-> data == data) return 1;
    else if (data <= root->data) return search(root->left,data);
    else return search(root->right,data);
}



#endif