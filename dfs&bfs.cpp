//
//  main.cpp
//  middle
//
//  Created by Sisi Lee on 2020/3/17.
//  Copyright © 2020 Sisi Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> values;
//  层次优先遍历
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return values;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            values.push_back(q.back()->val);
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return values;
    }

    //深度优先遍历递归
//    vector<int> dfs(TreeNode* root){
//        if(!root) return values;
//        values.push_back(root->val);
//        dfs(root->left);
//        dfs(root->right);
//        return values;
//    }

//    // dfs不用递归，二叉树
//    vector<int> dfs1(TreeNode* root){
//        if(!root) return values;
//        stack<TreeNode*> s;
//        s.push(root);
//        while(!s.empty()){
//            TreeNode* top = s.top();
//            values.push_back(top->val);
//            s.pop();
//            if(top->right){
//                s.push(top->right);
//            }
//            if(top->left){
//                s.push(top->left);
//            }
//        }
//    }
};

//vector<int> rightSideView(TreeNode* root);

int main(int argc, const char * argv[]) {
//    TreeNode* root = NULL;
//    TreeNode* root = new TreeNode(1);
//    TreeNode* n2  = new TreeNode(2);
//    TreeNode* n3  = new TreeNode(3);
//    TreeNode* n5  = new TreeNode(5);
//    TreeNode* n4  = new TreeNode(4);
//    root->left = n2;
//    root->right = n3;
//    n2->left = NULL;
//    n2->right = n5;
//    n3->left = NULL;
//    n3->right = n4;
//    Solution s;
//    vector<int> a = s.rightSideView(root);
//    for(int i =0; i < a.size(); i++){
//        cout<<a[i]<<endl;
//    }
//    vector<int> a = s.dfs(root);

    cout << "Hello, World!\n";
    return 0;
}



