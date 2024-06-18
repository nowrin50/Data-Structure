#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};

Node* newNode(int data) { //new node with the given data 
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

Node* insert(Node* root, int data) { //insert a new node with a given data 
    // If the tree is empty, create a new node
    if (root == NULL) {
        return newNode(data);
    }
    // If the data is smaller than the current node's data, go to the left subtree
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    // If the data is greater than the current node's data, go to the right subtree
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void printInorder(struct Node* node) { //Inorder
    if (node == NULL) {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPreorder(struct Node* node) { //Preorder
    if (node == NULL) {
        return;
    }
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void printPostorder(struct Node* node) { //Postorder
    if (node == NULL) {
        return;
    }
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 8);
    root = insert(root, 16);
    root = insert(root, 24);
    root = insert(root, 2);
    root = insert(root, 14);
    root = insert(root, 6);
    root = insert(root, 9);

//Printing out inorder, preorder and postorder
    cout << "Inorder traversal \n";
    printInorder(root);
    cout << "\n";

    cout << "Preorder traversal \n";
    printPreorder(root);
    cout << "\n";

    cout << "Postorder traversal \n";
    printPostorder(root);
    cout << "\n";
    return 0;
}
