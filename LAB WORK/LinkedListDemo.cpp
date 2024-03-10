#include"LinkedList.cpp"
int main(){
	/*Node* node1=new Node(5);
	Node* node2=new Node(7);
	Node* node3=new Node(9);
	node1->setLink(node2);
	node2->setLink(node3);
	Node* p=node1;
	cout<<p->getData()<<endl;
	p=p->getLink();
	cout<<p->getData()<<endl;
	p=p->getLink();
	cout<<p->getData()<<endl;
	while (p!=NULL){
		cout<<p->getData()<<endl;
		p=p->getLink();
	}*/
	
	LinkedList<int> ll;
	ll.createLL();
	ll.display();
	cout<<"Inserted 6 at Beginning"<<endl;
	ll.LL_insert_at_Beg(6);
	ll.display();
	cout<<"Inserted 2 at End:"<<endl;
	ll.LL_insert_at_End(2);
	ll.display();
	
	cout<<"Inserted 1 after 3:"<<endl;
	ll.LL_insert_after_key(3,1);
	ll.display();
	cout<<"Deleted from beginning:"<<endl;
	ll.LL_Del_at_Beg();
	ll.display();
	cout<<"Deleted from End:"<<endl;
	ll.LL_Del_at_End();
	ll.display();
	cout<<"Deleting the key 3:"<<endl;
	ll.LL_Del_a_key(3);
	ll.display();
	cout<<"Reversing Linked List"<<endl;
	ll.LL_Reverse();
	ll.display();
	cout<<"Searching for element 3"<<endl;
	ll.LL_Search(3);
	cout<<"Sorting Linked List"<<endl;
	ll.LL_Sort();
	ll.display();
	cout<<"Reverse Traversal"<<endl;
	ll.LL_ReverseTraverse();
	
	
	cout<<"Enter the character List for concatenation"<<endl;
	LinkedList<char> ll1;
	ll1.createLL();
	cout<<"First String:";
	ll1.display();
	LinkedList<char> ll2;
	ll2.createLL();
	cout<<"Second String:";
	ll2.display();
	cout<<"Concatenated String:";
	ll1.LL_concat(ll2);
	ll1.display();
	
	return 0;	
}


