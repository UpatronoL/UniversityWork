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
    Node * root = * tree;
    if (root == NULL || strcmp(root->word, word) == 0) return root;
    if (strcmp(root->word, word) > 0)   return findNode(&(root->left), word);
    else return findNode(&(root->right), word);
}

int main()
{
    struct Node *l    = newNode("left");
    struct Node *r    = newNode("right");
    struct Node *root = newNode("middle");
    root->left  = l;
    root->right = r;

    printf("%s\n", findNode(&root,   "left")->word);
    printf("%s\n", findNode(&root, "middle")->word);
    printf("%s\n", findNode(&root,  "right")->word);
    printf("%p\n", findNode(&root,   "none")      );

    return 0;
}
