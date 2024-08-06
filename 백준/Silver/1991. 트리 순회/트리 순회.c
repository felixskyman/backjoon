#include <stdio.h>
#include <stdlib.h>

typedef struct node* node_pointer;

typedef struct node {
	char key;
	node_pointer left_child;
	node_pointer right_child;
}node;

node_pointer tree;

/*char ch를 key로 가진 노드를 만들어 반환하는 함수*/
node_pointer create(char ch)
{
	node_pointer newnode;
	newnode = (node_pointer)malloc(sizeof(node));
	if (newnode == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	newnode->key = ch;
	newnode->left_child = NULL;
	newnode->right_child = NULL;
	return newnode;
}

/*tree에서 key가 ch인 노드를 찾으면 해당 노드 반환, 찾지 못하면 NULL 반환*/
node_pointer search(node_pointer tree, char ch)
{
	if (!tree) return NULL;
	
	if (tree->key == ch) return tree;
	else {
		node_pointer tmp = search(tree->left_child, ch);
		if (tmp != NULL) return tmp;
		return search(tree->right_child, ch);
	}
}

/*트리 중위순회*/
void inorder(node_pointer tree)
{
	if (tree) {
		inorder(tree->left_child);
		printf("%c", tree->key);
		inorder(tree->right_child);
	}
}

/*트리 전위순회*/
void preorder(node_pointer tree)
{
	if (tree) {
		printf("%c", tree->key);
		preorder(tree->left_child);
		preorder(tree->right_child);
	}
}

/*트리 후위순회*/
void postorder(node_pointer tree)
{
	if (tree) {
		postorder(tree->left_child);
		postorder(tree->right_child);
		printf("%c", tree->key);
	}
}

int main()
{
	int n, i;
	scanf("%d", &n);
	getchar();
	
	for (i = 0; i < n; i++)
	{
		char x, y, z;
		node_pointer parent, left, right;

		scanf("%c %c %c", &x, &y, &z);
		getchar();

		//key가 x인 노드가 존재하지 않으면 parent 노드를 새롭게 생성한다
		//존재하지 않는 경우는 첫번째로 입력되는 root노드 A뿐이므로 조건을 i==0으로 설정한다.
		if (i == 0) parent = create(x);
        //이미 존재하면 해당 노드를 parent로 설정한다.
		else parent = search(tree, x);

		//아래는 위 if-else문과 같은 기능을 하는 코드이다.
		/*
		parent = search(tree, x);
		if (parent == NULL) {
			parent = create(x);
		}
		*/

		if (y != '.') {
			left = create(y);
			parent->left_child = left;
		}
		if (z != '.') {
			right = create(z);
			parent->right_child = right;
		}
		
		if (i == 0) tree = parent;
	}

	preorder(tree); printf("\n");
	inorder(tree); printf("\n");
	postorder(tree); printf("\n");
	return 0;
}