#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* define Node, newNode, findNode here */
typedef struct Node Node;
struct Node
{
    char * word;
    Node * left;
    Node * right;
};

Node *newNode(char * word)
{
    struct Node * new = malloc(sizeof(Node));
    if(new != NULL)
    {
	new -> word = strdup(word);
	new -> left = 0;
	new -> right = 0;
	return new;
    }
    return new;
}

Node *findNode(Node **tree, char *word) {
    Node *root = * tree;
    
    if(root == NULL)
	return *tree = newNode(word);

    if (strcmp(root->word, word) > 0) return findNode(&(root->left), word);
    if(strcmp(root->word, word) < 0) return findNode(&(root->right), word);
    return root;
}

int main()
{
    struct Node *root = 0;
    findNode(&root, "middle");
    findNode(&root, "left");
    findNode(&root, "right");

    printf("%s\n", findNode(&root,   "left")->word);
    printf("%s\n", findNode(&root, "middle")->word);
    printf("%s\n", findNode(&root,  "right")->word);

    return 0;
}
