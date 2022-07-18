/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node *> q;
        if (root) q.push(root);
        else return root;
        
        int count = 0;
        Node *temp;
        while(!q.empty()) {
            count++;
            if(q.front()->left && q.front()->right) {
                q.push(q.front()->left);
                q.push(q.front()->right);
            }
            temp = q.front();
            q.pop();
            if(fmod(log2(count+1), 1)==0) {
                temp->next = NULL;
            } else {
                temp->next = q.front();
            }
        }
        return root;
    }
};