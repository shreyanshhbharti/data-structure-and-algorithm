//Leet code 700
#include <iostream>
using namespace std;

// Structure of a node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        // If tree is empty
        if (root == nullptr) {
            return nullptr;
        }

        // If value is found
        if (root->val == val) {
            return root;
        }

        // Search right subtree
        if (val > root->val) {
            return searchBST(root->right, val);
        }

        // Search left subtree
        return searchBST(root->left, val);
    }
};

int main() {

    // Creating BST
    //        4
    //       / \
    //      2   7
    //     / \
    //    1   3

    TreeNode* root = new TreeNode(4);

    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution obj;

    int val = 2;

    TreeNode* result = obj.searchBST(root, val);

    if (result != nullptr) {
        cout << "Node found: " << result->val << endl;
    } else {
        cout << "Node not found" << endl;
    }

    return 0;
}