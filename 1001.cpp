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
	//���ڵ� 
	int n;

	ListNode* Root = new ListNode;
	Root->data = -1;
	ListNode* p = Root;//βָ�� 
	
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

