/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    long long BFS(TreeNode* root, int k) {
        if (root == nullptr)
            return -1;

        queue<TreeNode*> q;
        q.push(root);
        vector<long long> levelSums;

        while (!q.empty()) {
            int levelSize =
                q.size();      
            long long sum = 0; 

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();

                sum +=currentNode->val; 
                if (currentNode->left)
                    q.push(currentNode->left);
                if (currentNode->right)
                    q.push(currentNode->right);
            }

            levelSums.push_back(sum); 
        }

        
        if (k > levelSums.size() || k <= 0) {
            return -1; 
        }
        sort(levelSums.begin(),levelSums.end(),greater());
        return levelSums[k-1]; 
    }
    long long kthLargestLevelSum(TreeNode* root, int k) { return BFS(root, k); }
};