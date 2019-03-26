#include <iostream>
using namespace std;
class ListNode
{
	public:
		ListNode* next;
		int data;
		List()
		{
			next = NULL;
			data = 0;
		}
}; 
int main(){
	//根节点 
	int n;

	ListNode* Root = new ListNode;
	Root->data = -1;
	ListNode* p = Root;//尾指针 
	
	while(cin>>n)
	{
		ListNode* Node = new ListNode;
		p->next = Node;
		Node->data = n;
		p = Node;
	}
	p = Root;
//
	while(p->next!=NULL)
	{
		cout<<p->data;
		p = p->next;
	}
	return 0;
} 

