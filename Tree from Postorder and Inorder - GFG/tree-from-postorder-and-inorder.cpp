//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
Node* solve(int inorder[], int postorder[], int &postorderIndex, int start, int end, map<int, int>&mp)
{
    if(postorderIndex < 0 || start > end)
        return NULL;
    
    int element = postorder[postorderIndex--];
    int pos = find(inorder+start, inorder+end, element) - inorder;
    // int pos = mp[element];
    Node* root = new Node(element);

    // Recusive calls;
    root->right = solve(inorder, postorder, postorderIndex, pos+1, end, mp);
    root->left = solve(inorder, postorder, postorderIndex, start, pos-1, mp);

    return root;
}
Node *buildTree(int inorder[], int postorder[], int n) {
    int postorderIndex=n-1;
    map<int, int>mp;
    for(int i=0; i<n; i++)
        mp[inorder[i]]=i;
    Node* root = solve(inorder, postorder, postorderIndex, 0, n-1, mp);
    return root;
}
