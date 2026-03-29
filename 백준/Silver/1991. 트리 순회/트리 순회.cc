#include <iostream>
#include <vector>
using namespace std;

int tree[26][2];

void preorder(int n){
    if(n == -1) return;
    cout << (char)(n + 'A');
    preorder(tree[n][0]);
    preorder(tree[n][1]);
}

void inorder(int n){
    if(n == -1) return;
    inorder(tree[n][0]);
    cout << (char)(n + 'A');
    inorder(tree[n][1]);
}

void postorder(int n){
    if(n == -1) return;
    postorder(tree[n][0]);
    postorder(tree[n][1]);
    cout << (char)(n + 'A');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char root, left, right;
        cin >> root >> left >> right;
        
        int idx = root - 'A';
        
        tree[idx][0] = (left == '.') ? -1 : left - 'A';
        tree[idx][1] = (right == '.') ? -1 : right - 'A';
    }

    preorder(0);
    cout << "\n";

    inorder(0);
    cout << "\n";

    postorder(0);
    cout << "\n";

    return 0;
}