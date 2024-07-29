#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};


void insert(TreeNode*& root, int value) {
    if (root == nullptr) {
        root = new TreeNode(value);
    } else {
        if (value < root->data) {
            insert(root->left, value);
        } else {
            insert(root->right, value);
        }
    }
}

void inorder(TreeNode* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;

    insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    return 0;
}

