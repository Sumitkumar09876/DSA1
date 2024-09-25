#include <iostream>
using namespace std;

enum Color { RED, BLACK };

struct Node {
    int data;
    Color color;
    Node *left, *right, *parent;

    Node(int data) {
        this->data = data;
        left = right = parent = nullptr;
        color = RED; // New nodes are always red
    }
};

class RedBlackTree {
private:
    Node *root;

    void rotateLeft(Node *&pt) {
        Node *pt_y = pt->right;
        pt->right = pt_y->left;

        if (pt->right != nullptr)
            pt->right->parent = pt;

        pt_y->parent = pt->parent;

        if (pt->parent == nullptr)
            root = pt_y;
        else if (pt == pt->parent->left)
            pt->parent->left = pt_y;
        else
            pt->parent->right = pt_y;

        pt_y->left = pt;
        pt->parent = pt_y;
    }

    void rotateRight(Node *&pt) {
        Node *pt_y = pt->left;
        pt->left = pt_y->right;

        if (pt->left != nullptr)
            pt->left->parent = pt;

        pt_y->parent = pt->parent;

        if (pt->parent == nullptr)
            root = pt_y;
        else if (pt == pt->parent->left)
            pt->parent->left = pt_y;
        else
            pt->parent->right = pt_y;

        pt_y->right = pt;
        pt->parent = pt_y;
    }

    void fixViolation(Node *&pt) {
        Node *parent_pt = nullptr;
        Node *grandparent_pt = nullptr;

        while ((pt != root) && (pt->color == RED) && (pt->parent->color == RED)) {
            parent_pt = pt->parent;
            grandparent_pt = pt->parent->parent;

            // Case A: Parent of pt is left child of Grandparent pt
            if (parent_pt == grandparent_pt->left) {
                Node *uncle_pt = grandparent_pt->right;

                // Case 1: The uncle of pt is also red, only recoloring required
                if (uncle_pt != nullptr && uncle_pt->color == RED) {
                    grandparent_pt->color = RED;
                    parent_pt->color = BLACK;
                    uncle_pt->color = BLACK;
                    pt = grandparent_pt;
                } else {
                    // Case 2: pt is right child of its parent
                    if (pt == parent_pt->right) {
                        rotateLeft(parent_pt);
                        pt = parent_pt;
                        parent_pt = pt->parent;
                    }

                    // Case 3: pt is left child of its parent
                    rotateRight(grandparent_pt);
                    swap(parent_pt->color, grandparent_pt->color);
                    pt = parent_pt;
                }
            } else { // Case B: Parent of pt is right child of Grandparent pt
                Node *uncle_pt = grandparent_pt->left;

                // Mirror Case 1: The uncle of pt is also red
                if ((uncle_pt != nullptr) && (uncle_pt->color == RED)) {
                    grandparent_pt->color = RED;
                    parent_pt->color = BLACK;
                    uncle_pt->color = BLACK;
                    pt = grandparent_pt;
                } else {
                    // Mirror Case 2: pt is left child of its parent
                    if (pt == parent_pt->left) {
                        rotateRight(parent_pt);
                        pt = parent_pt;
                        parent_pt = pt->parent;
                    }

                    // Mirror Case 3: pt is right child of its parent
                    rotateLeft(grandparent_pt);
                    swap(parent_pt->color, grandparent_pt->color);
                    pt = parent_pt;
                }
            }
        }
        root->color = BLACK;
    }

public:
    RedBlackTree() { root = nullptr; }

    void insert(const int &data) {
        Node *pt = new Node(data);
        root = bstInsert(root, pt);
        fixViolation(pt);
    }

    Node* bstInsert(Node *root, Node *pt) {
        if (root == nullptr)
            return pt;

        if (pt->data < root->data) {
            root->left = bstInsert(root->left, pt);
            root->left->parent = root;
        } else if (pt->data > root->data) {
            root->right = bstInsert(root->right, pt);
            root->right->parent = root;
        }

        return root;
    }

    void inorderHelper(Node *root) {
        if (root == nullptr)
            return;

        inorderHelper(root->left);
        cout << root->data << " (" << (root->color == RED ? "R" : "B") << ") ";
        inorderHelper(root->right);
    }

    void inorder() {
        inorderHelper(root);
    }
};

int main() {
    RedBlackTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(15);
    tree.insert(30);
    tree.insert(25);

    cout << "Inorder Traversal of Created Tree: ";
    tree.inorder();
    cout << endl;

    return 0;
}
