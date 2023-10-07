#include <iostream>
using namespace std;

class Node {
    public:
    int key;
    Node* p;
    Node* left;
    Node* right;

    Node(int data) {
        key = data;
        p = NULL;
        left = NULL;
        right = NULL;
    }
};
class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree() {
        root = NULL;
    }

    void treeInsert(int data) {
        Node* z = new Node(data);
        Node* y = NULL;
        Node* x = root;

        while (x != NULL) {
            y = x;
            if (z->key <= x->key) {
                x = x->left;
            } else {
                x = x->right;
            }
        }
        z->p = y;
        if (y == NULL) {
            root = z;
        } else {
            if (z->key <= y->key) {
                y->left = z;
            } else {
                y->right = z;
            }
        }
    }

    void inOrderTreewalk(Node* x) {
        if (x != NULL) {
            inOrderTreewalk(x->left);
            cout << x->key << endl;
            inOrderTreewalk(x->right);
        }
    }
};

int main() {
    BinarySearchTree tree;
    tree.treeInsert(20);
    tree.treeInsert(25);
    tree.treeInsert(40);
    tree.treeInsert(60);
    tree.treeInsert(10);

    tree.inOrderTreewalk(tree.root);
    return 0;
}
