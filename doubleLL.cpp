#include <iostream>
using namespace std;
template <typename > class DLinkedList;
template <typename E>
class DNode
 {
private:
	E elem;
	DNode<E> *next;
	DNode<E> *prev;
	friend class DLinkedList<E>;
};
template <typename E>
class DLinkedList
{
private:
	DNode<E> *head;
	DNode<E> *tail;
public:
	DLinkedList();
	~DLinkedList();
	bool empty();
	const E & front()const;
	const E & back() const;
	void addFront(const E &e);
	void addBack(const E &e);
	void removeFront();
	void removeBack();
	void print() const;
protected:
	void add (DNode<E> *v,const E &e);
	void remove (DNode<E> *v);
};
template<typename E>
DLinkedList<E>::DLinkedList() {     
	head=new DNode<E>;        
	tail=new DNode<E>;
	head->next=tail;   
	tail->prev=head;
}
template<typename E>
DLinkedList<E>::~DLinkedList(){
	while (!empty()) removeFront();
	delete head;
	delete tail;
}
template<typename E>
bool DLinkedList<E>::empty (){ 
 return head->next==tail;
  }
  template<typename E>
  const E & DLinkedList<E>::front() const{  
  	return head->next->elem;  
  }
 template<typename E>
 const E & DLinkedList<E>::back() const{ 
  	return tail->prev->elem; 
  }
  //Thêm một phần tử e vào trước  nút v 
 template<typename E>
 void DLinkedList<E>::add(DNode<E>*v, const E &e) {
 	DNode<E>*u=new DNode<E>; 
 	u->elem=e;      // tạo một nút mới cho  e
  	u->next=v;      // nối u với v
  	u->prev=v->prev;         
  	v->prev->next=v->prev=u;    
}
//Thêm phần tử vào đầu danh sách
template<typename E>
void DLinkedList<E>::addFront(const E &e)  { 
add(head->next, e);
 }
// Thêm phần tử vào cuối danh sách
template<typename E>
void DLinkedList<E>::addBack(const E &e){ 
	add (tail->prev, e); 
}
template<typename E>
void DLinkedList<E>::remove (DNode<E>*v)  // Xóa nút v
{
	v->prev->next=v->next;
	v->next->prev=v->prev;
	delete v;
}
// Xóa phần tử ở đầu danh sách
template<typename E>
void DLinkedList<E>::removeFront()
{
 remove(head->next);
  }
  // Xóa phần tửở cuối danh sách 
 template<typename E>
 void	DLinkedList<E>::removeBack()
 {
  remove(tail->prev); 
}
template<typename E>
void DLinkedList<E>::print() const
 {
 	DNode<E> *v=head->next;
 	cout<<"head <-> ";
 	while (v!=tail) {
 		cout<<v->elem<<" <-> ";v=v->next;  
 	}
 	cout<<" tail"<<endl;
 }
 int main(int argc, char const*argv[]) {
 	DLinkedList<int>x;
 	x.addFront(1); 
 	x.addFront(3);
 	x.addFront(5);  
 	x.addFront(7);
 	x.addFront(9);
 	x.print();
 	return 0;
}