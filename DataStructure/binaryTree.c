#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


// Estrutura do Nó da arvore binária
struct Node {
  int value;
  struct Node* left;
  struct Node* right;
};

struct Node* createNode(int value) {
  
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // criando um node

  newNode->value = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct Node* insert(struct Node* root, int value){
  
  if(root == NULL){
    // se a arvore esta vazia, cria um novo nó
    return createNode(value);
  }

  if(value < root->value){ // se for menor, será alocado à direita

    root->left = insert(root->left, value); // alocando à esquerda
  }

  if (value > root->value){
    root->right = insert(root->right, value); // alocando à direita
  }
  printf("Ok insert\n"); // teste de uso do insert 
  return root;
}

void freeTree(struct Node* root) {
  if (root != NULL){
    freeTree(root->left);
    freeTree(root->right);
    free(root);
  } 
}
// in-order traversal
void inOrder(struct Node* root) {

  if(root != NULL) {
    inOrder(root->left); // for the left subtree
    printf("%d\n", root->value); // print the value
    inOrder(root->right); // for the right subtree
  }

}

// main function
int main(){
  
  struct Node* root;
  root = NULL;


  // insert values in the tree
  insert(root, 10);
  insert(root, 20);
  insert(root, 40);
  insert(root, 60);

  printf("Valores em ordem: \n");
  inOrder(root);
  printf("\n");

  freeTree(root);

  return 0;
}
