#include<iostream>
#include<ostream>
using namespace std;

template <class T>
class Node{
		T data;
		Node<T>* link;
	public:
		Node(T);
		void setData(T);
		void setLink(Node<T>*);
		T getData();
		Node<T>* getLink();
};

template<class T>		
class LinkedList{
		Node<T>* head;
	public:
		LinkedList();
		void createLL();
		void display();
		void LL_insert_at_Beg(T);
		void LL_insert_at_End(T);
		void LL_insert_before_key(T,T);
		void LL_insert_after_key(T,T);
		void LL_Del_at_Beg();
		void LL_Del_at_End();
		void LL_Del_a_key(T);
		void LL_concat(LinkedList<T>&);
		void LL_Reverse();
		void LL_Search(T);
		void LL_ReverseTraverse();
		void LL_ReverseTraverse(Node<T>*);
		void LL_Sort();
};		
		
