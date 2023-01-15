//                                             DATA  STRUCTURES         AND       ALGORITHM

//  	DATA STRUCTURE -->  ways to arrange data in main memory for efficient usage.
//		ALGORITHM  --->  sequence of steps to solve given problem.


///                                             1. Implementing Array as an Abstract Data Type
//  
//#include <stdio.h>
//#include <stdlib.h>
//
//struct myArray{
//	int total_size;
//	int used_size;
//	int * ptr;
//	
//};
//
//void array( struct myArray * a, int tsize, int usize){
//	a->total_size = tsize;
//	a->used_size = usize;
//	a->ptr = (int *) malloc(a->total_size*sizeof(int));             //  syntax of malloc
//	//   (*a).ptr = (int *) malloc(total_size*sizeof(int));          // ({Type of pointer}) = ({type of memory * })malloc(sizeof({size_of_memory}))
//}
//
//void set_value(struct myArray * a){
//	int element;
//	for(int i=0; i<a->used_size; i++){
//		printf("Enter the %d element : ", i);
//		scanf("%d", &element);
//		a->ptr[i] = element;
//	}
//}
//
//void display(struct myArray * a){
//	
//	for(int i=0; i<a->used_size; i++){
//		printf("\nELement at  %d position : %d\n", i, a->ptr[i]);
//		
//		
//	}
//}
//
//int main(){
//	struct myArray marks;
//	array(&marks, 100, 3);
//	set_value(&marks);
//	display(&marks);
//	
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class myArray{
//	int total_size;
//	int used_size;
//	int * ptr;
//	public :
//		myArray(int * a, int tsize, int usize){
//			total_size = tsize;
//			used_size = usize;
//			ptr = a;
//		}
//		void set_value(){
//			int element;
//			for(int i=0; i<used_size; i++){
//				cout<<"Enter the "<<i<<" element : ";
//				cin>>element;
//				this->ptr[i] = element;
//			}
//			
//		}
//		void display(){
//			for(int i=0; i<used_size; i++){
//				cout<<"\nValue of "<<i<<" element is : "<<this->ptr[i];
//			}
//		}	
//		
//};
//
//int main(){
//	int n = 100;
//	int * ptr2 = new int[n];
//	myArray marks(ptr2, n, 3);
//	marks.set_value();
//	marks.display();
//	
//	return 0;	
//}



///            												2. Operations in array
//#include <iostream>
//using namespace std;
//void display(int s, int a[]){
//	cout<<" - ";
//	for(int i=0; i<s; i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<"\n";
//}
//
//int insertelement(int c, int s, int a[], int in_ele, int pos)
//{
//	if(pos>c){
//		return -1;
//	}
//	else{
//		for(int i = s-1; i>=pos; i--){
//			a[i+1] = a[i];
//		}
//		a[pos] = in_ele;
//		return 1;
//	}
//}
//
//int deletion(int c, int s, int a[], int pos){
//	if(pos>=c){
//		return -1;
//	}
//	else{
//		for(int i=pos; i<s-1; i++){
//			a[i] = a[i+1];
//		}
//		return 1;
//	}
//}
//
//int main(){
//	int size = 6;
//	int arr[20] = {7, 12, 87, 34, 16, 65};
//	int capacity;
//	int inserted_index = 3;
//	int inserted_ele = 300;
//	cout<<"Initial array";
//	display(size, arr);
//	cout<<"Array after insertion";
//	insertelement(20, size, arr, inserted_ele, inserted_index);
//	size += 1;
//	display(size, arr);
//	int del_pos = 2;
//	cout<<"Deleted Array";
//	deletion(20, size, arr, del_pos);
//	size -= 1;
//	display(size, arr);
//	return 0;
//}


//                                                                 3.  LINEAR AND BINARY SEARCH
//#include <iostream>
//using namespace std;
//
//int linear_search(int a[], int s, int ele){
//	for(int i=0; i<s; i++){
//		if(a[i]==ele){
//			return i;
//		}
//		
//	}
//	return -1;
//}
//
//int binary_search(int a[], int s, int ele){
//	int low, mid, high;
//	
//	low = 0;
//	high = (s-1);
//	while(low<=high){
//		mid = (low+high)/2;
//		if(a[mid]==ele){
//			return mid;
//		}else if(a[mid]<ele){
//			low = mid + 1;
//		}else if(a[mid]>ele){
//			high = mid - 1;
//		}	
//	}
//	return -1;
//	
//}
//
//int main(){
////	int arr[] = {2, 45, 7, 67, 23, 28, 75, 4};
//	int arr[] = {2, 6, 13, 56, 73, 82, 246, 357, 6898};
//	int size = sizeof(arr)/sizeof(int);
//	int element = 246;
////	int index = linear_search(arr, size, element);
//	int index = binary_search(arr, size, element);
//	if(index==-1){
//		cout<<"\nElement not found";
//	}
//	else{
//		cout<<"Element is at "<<index<<" position.";
//	}
//	return 0;
//}



//                                                          4.   IMPLEMENTATION OF LINKED LIST IN C

//#include <stdio.h>
//#include <stdlib.h>           // std:: for malloc 
//
//struct Node{
//	int data;
//	struct Node * ptr;
//};
//
//void display(struct Node * p){
//	while(p!=NULL){
//		printf("Elements are : %d\n", p->data);
//		p = p->ptr;
//	}
//}
//
//int main(){
//	struct Node * head;
//	struct Node * second;
//	struct Node * third;
//	head = (struct Node*)malloc(sizeof(struct Node));         // pointer for head, second.... , these pointer point next element.
//	second = (struct Node*)malloc(sizeof(struct Node));
//	third = (struct Node*)malloc(sizeof(struct Node));
//	//  set values of head struct
//	head->data = 34;
//	(*head).ptr = second;
//	
//	second->data = 67;
//	second->ptr = third;
//	
//	third->data = 93;
//	third->ptr = NULL;
//	display(head);
//	return 0;
//}

//                                                           CODE IN CPP.

//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Node{
//	public :
//	int data;
//	Node * ptr;
//	void display(Node * p){
//		while(p!=NULL){
//		
//		cout<<"Element is : "<<p->data<<endl;
//		p = p->ptr;
//	}
//	}
//};
//
//int main(){
//	Node Linked_list;
//	Node * head =  new Node;
//	Node * second =  new Node;
//	Node * third =  new Node;
//	head->data = 34;
//	head->ptr = second;
//	
//	second->data = 257;
//	second->ptr = third;
//	
//	third->data = 7984;
//	third->ptr = NULL;
//	Linked_list.display(head);
//	return 0;
//}



//                                                           5.   INSERTION OPERATIONS


//#include <stdio.h>
//#include <stdlib.h>           // std:: for malloc 
//
//struct Node{
//	int data;
//	struct Node * next;
//};
//
//void display(struct Node * p){
//	while(p!=NULL){
//		printf("Elements are : %d\n", p->data);
//		p = p->next;
//	}
//}
//
//struct Node * Insertion_begin(struct Node* ptr2, int ele){          //  ptr2  = taking head as an input.
//	struct Node * p = (struct Node*)malloc(sizeof(struct Node));      //  create new struct pointer and allocate memory for it.
//	p->data = ele;              
//	p->next = ptr2; 	                                                  
//	return p;
//}
//
//struct Node * Insertion_index(struct Node * head, int index, int ele){
//	struct Node * p = (struct Node*)malloc(sizeof(struct Node));
//	int i=0;
//	struct Node * q = head;
//	while(i!=index-1){
//		q = q->next;
//		i++; 
//	}
//	p->data = ele;
//	p->next = q->next;          //  NOTE : first point the inserting pointer to the next one, then break the linked btw q and (i+1) pointer.
//	q->next = p;
//	return head;
//}
//
//struct Node* Insertion_end(struct Node * head, int ele){
//	struct Node * p = (struct Node *)malloc(sizeof(struct Node));
//	struct Node * q = head;
//	int i=0;
//	while(q->next!=NULL){           // while, p->next = null, last pointer
//		q = q->next;
//		i++;
//	}
//	p->data = ele;
//	q->next = p;
//	p->next = NULL;
//	return head;
//}
//
//struct Node * Insertion_after(struct Node * head, struct Node * pre_Node, int ele){    //  pre_Node = After which node the new node is to be inserted.
//	struct Node * p = (struct Node*)malloc(sizeof(struct Node));
//	p->data  = ele;
//	p->next = pre_Node->next;
//	pre_Node->next = p;
//	return head;
//}
//
//
//int main(){
//	struct Node * head;
//	struct Node * second;
//	struct Node * third;
//	head = (struct Node*)malloc(sizeof(struct Node));         // pointer for head, second.... , these pointer point next element.
//	second = (struct Node*)malloc(sizeof(struct Node));
//	third = (struct Node*)malloc(sizeof(struct Node));
//	//  set values of head struct
//	head->data = 34;
//	(*head).next = second;
//	
//	second->data = 67;
//	second->next = third;
//	
//	third->data = 93;
//	third->next = NULL;
//	int element = 16000;
//	printf("\nLinked List before Insertion : \n");
//	display(head);
////	head = Insertion_begin(head, element);            //  head = , because it return new head of the linked list.
////	head = Insertion_index(head, 2, element);
////	head = Insertion_end(head, element);
////	Insertion_after(head, second, element);
//	printf("\nLinked List After the Insertion : \n");
//	display(head);
//	return 0;
//}



//                                                         IN CPP
//#include <iostream>
//using namespace std;
//
//class Node{
//	public :
//		int data;
//		Node * next;
//		void display(Node * p){
//			while(p!=NULL){
//				cout<<p->data<<endl;
//				p = p->next;
//			}
//		}
//		Node * Insertion_begin(Node * head, int ele);
//		Node * Insertion_index(Node * head, int index, int ele);
//		Node * Insertion_end(Node * head, int ele);
//		Node * Insertion_after(Node * head, Node * pos, int ele);
//};
//
//Node * Node :: Insertion_begin(Node * head, int ele){
//			Node * p = new Node;
//			p->data = ele;
//			p->next = head;
//			return p;
//}
//
//Node * Node :: Insertion_index(Node * head, int index, int ele){
//	Node * p = new Node;
//	Node * q;
//	p->data = ele;
//	int i = 0;
//	while(i!=(index-1)){
//		q = q->next;
//		i++;
//	}
//	p->next = q->next;
//	q->next = p;
//	return head;
//}
//
//Node * Node :: Insertion_end(Node * head, int ele){
//	Node * p = new Node;
//	Node * q;
//	while(q->next!=NULL){
//		q = q->next;
//	}
//	p->data = ele;
//	q->next = p;
//	p->next = NULL;
//	return head;
//}
//
//Node * Node :: Insertion_after(Node * head, Node * pos, int ele){
//	Node * p = new Node;
//	p->data = ele;
//	p->next = pos->next;
//	pos->next = p;
//	return head;
//}
//
//int main(){
//	int element = 1200;
//	Node Insert;
//	Node * head;
//	head = new Node;
//	Node * second;
//	second = new Node;
//	Node * third;
//	third = new Node;
//	head->data = 842;
//	head->next = second;
//	second->data = 234;
//	second->next = third;
//	third->data = 653;
//	third->next = NULL;
//	cout<<"Linked List before insertion : "<<endl;
//	Insert.display(head);
//	cout<<"\nLinked List After Insertion : "<<endl;
////	head = Insert.Insertion_begin(head, element);
//	head = Insert.Insertion_index(head, 1, element);             // ERROR   -->  Doesn't print linked list
////	head = Insert.Insertion_end(head, element);                  //  ERROR --> Doesn't print.
////	head = Insert.Insertion_after(head, second, element);
//	Insert.display(head);
//	return 0;
//}




//                                                         6. DELETION OPERATIONS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node{
//	int data;
//	struct Node * next;
//};
//
//void display(struct  Node * head){
//	while(head!=NULL){
//		printf("%d\n", head->data);
//		head = head->next;
//	}
//}
//
//struct Node * Deletion_begin(struct Node * head){
//	struct Node * p;                              // doean't need to allocate memory in heap, as in insert we have to insert this ptr
//	p = head;                                     // so we need to allocate memory but in this we have to free this ptr at the end.
//	head = head->next;
//	free(p);
//	return head;
//}
//
//struct Node * Deletion_index(struct Node * head, int index){
//	struct Node * p;                              // doean't need to allocate memory in heap, as in insert we have to insert this ptr
//	p  = head;                                     // so we need to allocate memory, but in this case we only have to point a node by this pointer.
//	int i = 0;
//	struct Node * q;
//	q = head->next;
//	while(i!=(index-1)){
//		p = p->next;
//		q = q->next;
//		i++;
//	}
//	p->next = q->next;
//	free(q);
//	return head;
//}
//
//struct Node * Deletion_end(struct Node * head){
//	struct Node * p = head;
//	struct Node * q = head->next;
//	while(q->next!=NULL){
//		p = p->next;
//		q = q->next;
//	}
//	p->next = NULL;
//	free(q);
//	return head;
//}
//
//struct Node * Deletion_givenValue(struct Node * head, int Value){
//	struct Node * p = head;
//	struct Node * q = head->next;
//	while(q->data!=Value && q->next!=NULL){
//		p = p->next;
//		q = q->next;
//	}
//	if(q->data == Value){
//	
//	p->next = q->next;
//	free(q);
//	}else{
//		printf("\nElement not found.\n");
//	}	
//	return head;
//}
//
//
//int main(){
//	struct Node * head = (struct Node*)malloc(sizeof(struct Node));
//	struct Node * second = (struct Node*)malloc(sizeof(struct Node));
//	struct Node * third = (struct Node*)malloc(sizeof(struct Node));
//	struct Node * fourth = (struct Node*)malloc(sizeof(struct Node));
//	head->data = 754;
//	second->data = 235;
//	third->data = 452;
//	fourth->data = 985;
//	head->next = second;
//	second->next = third;
//	third->next = fourth;
//	fourth->next = NULL;
//	printf("Linked list before Deletion : \n");
//	display(head);
//	printf("\nLinked list after deletion : \n");
////	head= Deletion_begin(head);
////	head = Deletion_index(head, 2);
////	head = Deletion_end(head);
//	int value  = 234;
//	head = Deletion_givenValue(head, value);
//	display(head);
//	
//	return 0;
//}




//                                                                 7.  CIRCULAR LINKED LIST
//                                                                     IMPLEMENTATION AND INSERTION

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node{
//	int data;
//	struct Node * next;
//};
//void display(struct Node * head){
//	struct Node * p = head;
//	do{
//		printf("ELement is : %d\n", p->data);
//		p = p->next;
//	}while(p!=head);
//}
//
//struct Node * InsertionAtFirst(struct Node * head, int ele){
//	struct Node * p = (struct Node* )malloc(sizeof(struct Node));
//	struct Node * q = head;
//	p->data = ele;
//	while(q->next!=head){
//		q = q->next;
//	}
//	q->next = p;
//	p->next = head;
//	head = p;         // if i commnet out this, then it will become insertion_At_End.
//	return head;
//}
//
//struct Node * Insertion_after_Value(struct Node * head, int Value, int ele){
//	struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
//	ptr->data = ele;
//	struct Node * p = head->next;
//	while(p->data!=Value && p->next!=head){
//		p = p->next;
//	}
//	if(p->data==Value){
//		ptr->next = p->next;
//		p->next = ptr;
//		
//	}
//	return head;
//}
//
//int main(){
//	struct Node * head = (struct Node* )malloc(sizeof(struct Node));
//	struct Node * second = (struct Node* )malloc(sizeof(struct Node));
//	struct Node * third = (struct Node* )malloc(sizeof(struct Node));
//	struct Node * fourth = (struct Node* )malloc(sizeof(struct Node));
//	head->data = 2;
//	head->next = second;
//	second->data = 39;
//	second->next = third;
//	third->data = 84;
//	third->next = fourth;
//	fourth->data = 56;
//	fourth->next = head;
//	printf("\nCircular Liked List before insertion : \n");
//	display(head);
//	printf("\nCircular Liked List before insertion : \n");
////	head = InsertionAtFirst(head, 99);
//	head = Insertion_after_Value(head, 39, 200);
//	display(head);
//	return 0;
//}


//                                                            8. DOUBLY LINKED LIST

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node{
//	int data;
//	struct Node * prev;
//	struct Node * next;
//};
//
//void task(struct Node * head){
//	struct Node * p = head;
//	do{
//		printf(" %d ", p->data);
//		p = p->next;
//	}while(p->next!=NULL);
//	printf(" %d ", p->data);
//	p = p->prev;
//	
//	while(p!=NULL){
//		printf(" %d ", p->data);
//		p = p->prev;
//	}
//}
//
//struct Node * Insertion_begin(struct Node * head, int ele){
//	struct Node * p = (struct Node*)malloc(sizeof(struct Node));
//	p->data = ele;
//	p->next = head;
//	head->prev = p;
//	p->prev = NULL;
//	head = p;
//	return head;
//}
//
//void display(struct Node * head){
//	struct Node * p = head;
//	while(p!=NULL){
//		printf(" %d ", p->data);
//		p = p->next;
//	}
//}
//
//int main(){
//	struct Node * head = (struct Node *)malloc(sizeof(struct Node));
//	struct Node * second = (struct Node *)malloc(sizeof(struct Node));
//	struct Node * third = (struct Node *)malloc(sizeof(struct Node));
//	struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
//	head->data = 235;
//	second->data = 432;
//	third->data = 864;
//	fourth->data = 156;
//	head->prev = NULL;
//	head->next = second;
//	second->prev = head;
//	second->next = third;
//	third->prev = second;
//	third->next = fourth;
//	fourth->prev = third;
//	fourth->next = NULL;
//	task(head);
////	printf("\nDoubly linked list before Insertion : \n");
////	display(head);
////	printf("\nDoubly linked list after Insertion : \n");
////	head = Insertion_begin(head, 2600);
////	display(head);
//	return 0;
//}



//															9. IMPLEMENTING STACK USING AN ARRAY


//#include <stdio.h>
//#include <stdlib.h>
// 
//struct stack
//{
//    int size;
//    int top;
//    int *arr;
//};
// 
//int isEmpty(struct stack *ptr)
//{
//    if (ptr->top == -1)         // if we take struct stack s, then we use (ptr.top == -1), as ptr is not the pointer here.
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
// 
//int isFull(struct stack *ptr)
//{
//    if (ptr->top == ptr->size - 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
// 
//int main()
//{
////     struct stack s;
////     s.size = 80;
////     s.top = -1;
////     s.arr = (int *) malloc(s.size * sizeof(int));
// 
//    struct stack *s = (struct stack *)malloc(sizeof(struct stack));     // if we take stack (*s) as pointer, we have to allocate memory to this in heap
//    s->size = 6;
//    s->top = -1;
//    s->arr = (int *)malloc(s->size*sizeof(int));   // also we have to allocate for array, otherwise it can't take element on indexes. 
//////    
//	
//    s->arr[0] = 34;
//    s->top++;
////    s->size = 80;
////    s->top = -1;
////    s->arr = (int *)malloc(s->size * sizeof(int));
////	s.arr[0] = 53;
////	s.top++;
//	    // Check if stack is empty
//    if(isEmpty(s)){                   // if we take struct stack s, then we passes referrence of s as variable, by puuting (&s).
//        printf("The stack is empty");
//    }
//    else{
//        printf("The stack is not empty");
//    }	 
//    return 0;
//}



//        														10. OPERATIONS : PUSH,  POP, PEEK, TOP AND BOTTOM
//#include <stdio.h>
//#include <stdlib.h>
//
//struct stack{
//	int size;
//	int top;
//	int * arr;
//};
//
//int IsEmpty(struct stack * ptr){
//	if(ptr->top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int IsFull(struct stack * ptr){
//	if(ptr->top == ptr->size-1){
//		return 1;
//		
//	}else{
//		return 0;
//	}
//}
//
//void push(struct stack * ptr, int ele){
//	if(IsFull(ptr)){
//		printf("\nStack Overflow.");
//	}else{
//	ptr->top++;
//	ptr->arr[ptr->top] = ele;
//	}
//}
//
//int pop(struct stack * ptr){
//	if(IsEmpty(ptr)){
//		printf("\nStack Underflow.");
//		return -1;
//	}else{
//	
//	int value = ptr->arr[ptr->top];
//	ptr->top--;
//	return value;
//}
//}
//
//int peek(struct stack * ptr, int i){
//	if(ptr->top - i + 1 < 0){
//		printf("\nInvalid position.");
//		return -1;
//	}else{
//		return ptr->arr[ptr->top - i + 1];
//	}
//}
//
//void display(struct stack * ptr){
//	for(int i=0; i<=ptr->top; i++){
//		printf("\nElemets are %d", ptr->arr[i]);
//	}
//}
//
//int Top(struct stack * ptr){
//	return ptr->arr[ptr->top];
//}
//
//int Bottom(struct stack * ptr){
//	return ptr->arr[0];
//}
//int main(){
//	struct stack * p = (struct stack *)malloc(sizeof(struct stack));
//	p->size = 4;
//	p->top = -1;
//	p->arr = (int *)malloc(p->size * sizeof(int));
//	int element = 753;
//	printf("Stack is created.\n");
////	printf("%d\n", IsFull(p));
////	printf("%d\n", IsEmpty(p));
//	push(p, element);
//	push(p, 34);
//	push(p, 86);
//	push(p, 236);
////	printf("%d\n", IsFull(p));
////	printf("%d\n", IsEmpty(p));
//	printf("\nStack elements are : ");
//	display(p);
//	int pop_ele;
////	pop_ele = pop(p);
////	if(pop_ele == -1){
////		printf("\nElement doesn't pop.");
////	}else{
////	
////	printf("\nPop Element are : %d", pop_ele);
////}
////	pop_ele = pop(p);
////	printf("\nPop Element are : %d", pop_ele);
////	pop_ele = pop(p);
////	printf("\nPop Element are : %d", pop_ele);
////	pop_ele = pop(p);
////	printf("\nPop Element are : %d", pop_ele);
////	pop_ele = pop(p);
////	printf("\nStack elements are : ");
//	printf("\nElement at 2nd position are : %d", peek(p, 2));
////	display(p);
//	printf("\nTopmost Element are  : %d", Top(p));
//	printf("\nBottom Element are  : %d", Bottom(p));
//	return 0;
//}



//                                                  11. IMPLEMENTING STACK USING LINKED LIST
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node{
//	int data;
//	struct node * next;
//};
//int Is_Empty(struct node * top){
//	if(top==NULL){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//int Is_Full(struct node * top){
//	struct node * p = (struct node*)malloc(sizeof(struct node));
//	if(p==NULL){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//struct node * push(struct node * top, int ele){
//	struct node * p = (struct node *)malloc(sizeof(struct node));
//	if(p==NULL){
//		printf("Stack Overflow.\n");
//		
//	}else{
//	
//	p->data = ele;
//	
//	if(top==NULL){
//		p->next = NULL;
//		top = p;
//				}
//	else{
//		p->next = top;
//		top = p;
//		}
//	}	
//	return top;
//}
//
//int pop(struct node ** top){            // * for as the address is received, so *top here is a pointer that stores the address of top pointer of main().
//	int x;
//	if(*top==NULL){                      // this now update top of main(), whenever the pop() is called, bcoz it received address
//		printf("Stack Underflow.\n");     // to use before we derefernce the received address, by putting *. now the value of top is going to changed.
//		return -1;
//	}
//	else{
//	
//	struct node * p = *top;
//	*top = (*top)->next;
//	x = p->data;                    //  here now, we can return x, and the poped element are poped.
////	printf("Poped elemenet are : %d\n", x);
//	free(p);
//	}
//	return x;
//	
//}
//void display(struct node * top){
//	struct node * ptr = top;
//	
//	while(ptr!=NULL){
//		printf("%d\n", ptr->data);
//		ptr = ptr->next;
//	}
//}
//int peek(struct node * top, int n){
//	struct node * p = top;
//	for(int i=0; i<(n-1); i++){
//		p = p->next;
//	}
//	return p->data;
//}
//int main(){
//	struct node * top = (struct node * )malloc(sizeof(struct node));
//	top = NULL;
//	int pop_ele = pop(&top);
//	display(top);	
//	printf("%d\n", Is_Empty(top));
//	printf("%d\n", Is_Full(top));
//
//	printf("Stack is created.\n");
//	top = push(top, 34);
//	top = push(top, 15);
//	top = push(top, 04);
//	top = push(top, 93);
//	printf("Stack after insertion.\n");
//	display(top);
////	printf("%d\n", Is_Empty(top));
////	printf("%d\n", Is_Full(top));
//	pop_ele = pop(&top);             // To update top, everytime when we call pop(), we pass address of top,   &top.
//	printf("Stack after pop TOP element.\n");
//	printf("Poped element are : %d\n", pop_ele);
//	display(top);
////	int ele_index = peek(top, 2);
////	printf("\nElement at 2nd positon : %d", ele_index);
////	ele_index = peek(top, 3);
////	printf("\nElement at 3rd positon : %d", ele_index);
//		
//	return 0;
//}


//                                                    CODE FOR OTHER WAY.  ---> TO MAKE TOP AS GLOBAL VARIALBLE.
// if we don't want to pass memory of top, and also don't wanna put * everywhere in pop(), we can make top as global variable.


//#include <stdio.h>
//#include <stdlib.h>
//
//struct node{
//	int data;
//	struct node * next;
//};
//
//struct node * top;              // we make top as global variable, so it can be access and changed by anyplace.
//int Is_Empty(struct node * top){
//	if(top==NULL){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//int Is_Full(struct node * top){
//	struct node * p = (struct node*)malloc(sizeof(struct node));
//	if(p==NULL){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//struct node * push(struct node * top, int ele){
//	struct node * p = (struct node *)malloc(sizeof(struct node));
//	if(p==NULL){
//		printf("Stack Overflow.\n");
//		
//	}else{
//	
//	p->data = ele;
//	
//	if(top==NULL){
//		p->next = NULL;
//		top = p;
//				}
//	else{
//		p->next = top;
//		top = p;
//		}
//	}	
//	return top;
//}
//
//int pop(struct node * tp){           // as there is a local variable of the same name, as we have to change the name of local variable.
//	int x;                            
//	if(tp==NULL){                      
//		printf("Stack Underflow.\n");     
//		return -1;
//	}                      // * for as the address is received, so *top here is a pointer that stores the address of top pointer of main().
//	else{       // this now update top of main(), whenever the pop() is called, bcoz it received address
//	                  // to use before we derefernce the received address, by putting *. now the value of top is going to changed.
//	struct node * p = tp;
//	top = (tp)->next;             // NOTE :  and at last we change value store in top ( or update top ) . 
//	x = p->data;                   
////	printf("Poped elemenet are : %d\n", x);
//	free(p);
//	}
//	return x;
//	
//}
//void display(struct node * top){
//	struct node * ptr = top;
//	
//	while(ptr!=NULL){
//		printf("%d\n", ptr->data);
//		ptr = ptr->next;
//	}
//}
//int peek(struct node * top, int n){
//	struct node * p = top;
//	for(int i=0; i<(n-1) && p!=NULL; i++){      // with condition that p!=NULL, if p==NULL, means position doesn't exist in stack.
//		p = p->next;
//	}
//	if(p!=NULL){              /// here we check, is p!=NULL, is the position exist or not.
//	
//	return p->data;}
//	else{
//		return -1;
//	}
//}
//
//int main(){
//	top = (struct node * )malloc(sizeof(struct node));
//	top = NULL;
//	int pop_ele = pop(top);
//	display(top);	
//	printf("%d\n", Is_Empty(top));
//	printf("%d\n", Is_Full(top));
//
//	printf("Stack is created.\n");
//	top = push(top, 34);
//	top = push(top, 15);
//	top = push(top, 04);
//	top = push(top, 93);
//	printf("Stack after insertion.\n");
//	display(top);
////	printf("%d\n", Is_Empty(top));
////	printf("%d\n", Is_Full(top));
//	pop_ele = pop(top);             // To update top, everytime when we call pop(), we pass address of top,   &top.
//	printf("Stack after pop TOP element.\n");
//	printf("Poped element are : %d\n", pop_ele);
//	display(top);
////	int ele_index = peek(top, 2);
////	printf("\nElement at 2nd positon : %d", ele_index);
////	ele_index = peek(top, 3);
////	printf("\nElement at 3rd positon : %d", ele_index);
//		
//	return 0;
//}




//															12. PARANTHESIS MATCH PROBLEM USING STACK

//#include <stdio.h>
//#include <stdlib.h>
//
//struct stack{
//	int size;
//	int top;
//	char * arr;
//	
//};
//
//int IsEmpty(struct stack * ptr){
//	if(ptr->top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int IsFull(struct stack * ptr){
//	if(ptr->top == ptr->size-1){
//		return 1;
//		
//	}else{
//		return 0;
//	}
//}
//
//void push(struct stack * ptr, char ele){
//	if(IsFull(ptr)){
//		printf("\nStack Overflow.");
//		
//	}else{
//	ptr->top++;
//	ptr->arr[ptr->top] = ele;
//	
//	}
//}
//
//char pop(struct stack * ptr){
//	if(IsEmpty(ptr)){
//		printf("\nStack Underflow.");
//		return -1;
//	}else{
//	
//	char value = ptr->arr[ptr->top];
//	ptr->top--;
//	return value;
//}
//}
//
//int paranthesis_match(char * exp){
//	struct stack * p;
//	p->size = 20;
//	p->top = -1;
//	p->arr = (char *)malloc(p->size*sizeof(char));
//	for(int i=0; exp[i]!='\0'; i++){
//		if(exp[i]=='('){
//			push(p, '(');
//		}
//		else if(exp[i]==')'){
//			if(IsEmpty(p)){
//				return 0;
//			}
//			pop(p);
//		}
//	}
//		if(IsEmpty(p)){
//			return 1;
//		}
//		else{
//			return 0;
//		}
//}
//
//int main(){
//	char * exp = "5 + (2 - 3(4 )";
//	if(paranthesis_match(exp)){
//		printf("The paranthesis is matched.\n");
//	}
//	else{
//		printf("The paranthesis is not matched.\n");
//	}
//	return 0;
//}


//                    USNIG LINKED LIST
//#include <stdio.h>
//#include <stdlib.h>
//
//struct stack{
//	char data;
//	struct stack * next;
//};
//
//int Is_Empty(struct stack * top){
//	if(top==NULL){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//int Is_Full(struct stack * top){
//	struct stack * p = (struct stack*)malloc(sizeof(struct stack));
//	if(p==NULL){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//struct stack * push(struct stack * top, char ele){
//	struct stack * p = (struct stack *)malloc(sizeof(struct stack));
//	if(p==NULL){
//		printf("Stack Overflow.\n");
//		
//	}else{
//	
//	p->data = ele;
//	printf("push called 1\n");
//	if(top==NULL){
//		p->next = NULL;
//		top = p;
//				}
//	else{
//		p->next = top;
//		top = p;
//		}
//	}	
//	return top;
//}
//
//char pop(struct stack * top){            // * for as the address is received, so *top here is a pointer that stores the address of top pointer of main().
//	printf("pop called 1.\n");
//	char x;
//	if(top==NULL){                      // this now update top of main(), whenever the pop() is called, bcoz it received address
//		printf("Stack Underflow.\n");     // to use before we derefernce the received address, by putting *. now the value of top is going to changed.
//		return -1;
//	}
//	else{
//	printf("pop called 2.\n");
//	struct stack  * p = top;
//	top = (top)->next;
//	x = p->data;                    //  here now, we can return x, and the poped element are poped.
////	printf("Poped elemenet are : %d\n", x);
//	free(p);
//	}
//	return x;
//	
//}
//
//int paranthesis_match(char * exp){
//	struct stack * ptr = (struct stack * )malloc(sizeof(struct stack));
//	ptr = NULL;
//	if(Is_Empty(ptr)){
//		printf("Yes\n");
//	}
//	for(int i=0; exp[i]!='\0'; i++){
//		if(exp[i]=='('){
//			push(ptr, exp[i]);
//		}
//		else if(exp[i]==')'){
//			if(Is_Empty(ptr)){
//				return 0;
//			}
//			pop(ptr);
//		}
//		
//	}
//	if(Is_Empty(ptr)){
//		return 1;
//		printf("Is empty called.\n");
//	}
//	else{
//		return 0;
//	}
//}
//
//int main(){
//	char * exp = "()";
//	if(paranthesis_match(exp)){
//		printf("Paranthesis matched.\n");
//	}else{
//		printf("Paranthesis is not matched.\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//struct stack{
//	int size;
//	int top;
//	char * arr;
//	
//};
//
//int IsEmpty(struct stack * ptr){
//	if(ptr->top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int IsFull(struct stack * ptr){
//	if(ptr->top == ptr->size-1){
//		return 1;
//		
//	}else{
//		return 0;
//	}
//}
//
//void push(struct stack * ptr, char ele){
//	if(IsFull(ptr)){
//		printf("\nStack Overflow.");
//		
//	}else{
//	ptr->top++;
//	ptr->arr[ptr->top] = ele;
//	
//	}
//}
//
//char pop(struct stack * ptr){
//	if(IsEmpty(ptr)){
//		printf("\nStack Underflow.");
//		return -1;
//	}else{
//	
//	char value = ptr->arr[ptr->top];
//	ptr->top--;
//	return value;
//}
//}
//
//int stack_top(struct stack * ptr){
//	return ptr->top;
//}
//
//int match(char a, char b){
//	if(a=='(' && b == ')'){
//		return 1;
//	}
//	if(a=='{' && b == '}'){
//		return 1;
//	}
//	if(a=='[' && b == ']'){
//		return 1;
//	}
//	return 0;
//}
//
//int paranthesis_match(char * exp){
//	struct stack * p;
//	p->size = 20;
//	p->top = -1;
//	p->arr = (char *)malloc(p->size*sizeof(char));
//	char popped_char;
//	
//	for(int i=0; exp[i]!='\0'; i++){
//		if(exp[i]=='(' || exp[i] == '{' || exp[i] == '['){
//			push(p, exp[i]);
//		}
//		else if(exp[i]==')' || exp[i] == '}' || exp[i] == ']' ){
//			if(IsEmpty(p)){
//				return 0;
//			}
//			
//			popped_char = pop(p);
//			if(!match(popped_char, exp[i])){
//				return 0;
//			}
//		}
//	}
//		if(IsEmpty(p)){
//			return 1;
//		}
//		else{
//			return 0;
//		}
//}
//
//int main(){
//	char * exp = "4 + { 3 - 23[768*34]() - (34 -75) }";
//	if(paranthesis_match(exp)){
//		printf("The paranthesis is matched.\n");
//	}
//	else{
//		printf("The paranthesis is not matched.\n");
//	}
//	return 0;
//}



//                                                  13.  CONVERSION : INFIX TO POSTFIX 
//										doesn't work properly.
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct stack{
//	int size;
//	int top;
//	char * arr;
//};
//
//char Top(struct stack * ptr){
//	return ptr->arr[ptr->top];
//}
//
//int IsEmpty(struct stack * ptr){
//	if(ptr->top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int IsFull(struct stack * ptr){
//	if(ptr->top == ptr->size-1){
//		return 1;
//		
//	}else{
//		return 0;
//	}
//}
//
//void push(struct stack * ptr, char ele){
//	if(IsFull(ptr)){
//		printf("\nStack Overflow.");
//	}else{
//	ptr->top++;
//	ptr->arr[ptr->top] = ele;
//	}
//}
//
//char pop(struct stack * ptr){
//	if(IsEmpty(ptr)){
//		printf("\nStack Underflow.");
//		return -1;
//	}else{
//	
//	char value = ptr->arr[ptr->top];
//	ptr->top--;
//	return value;
//}
//}
//int is_operator(char a){
//	if(a=='+' || a=='-' || a=='*' || a=='/'){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int precedence(char a){
//	if(a=='*' || a=='/'){
//		return 3;
//	}
//	else if(a=='+' || a=='-'){
//		return 2;
//	}
//	else{
//		return 0;
//	}
//}
//char * infix_post(char * exp){
//	struct stack * p = (struct stack *)malloc(sizeof(struct stack));
//	p->size = 20;
//	p->top = -1;
//	p->arr = (char *)malloc(p->size*sizeof(char));
//	char * postfix = (char *)malloc((strlen(exp)+1)*sizeof(char));
//	int i=0, j=0;
//	while(exp[i]!='\0'){
//		if(!is_operator(exp[i])){
//			postfix[j]  = exp[i];
//			j++;
//			i++;
//		}
//		else if(precedence(exp[i])>precedence(Top(p))){
//			push(p, exp[i]);
//			i++;
//		}else{
//			postfix[j] = pop(p);
//			j++;
//		}
//	}
//	while(!IsEmpty(p)){
//		printf("called\n");
//		postfix[j] = pop(p);
//		j++;
//	}
//	postfix[j] = '\0';              // to terminate the string, otherwise its not a valid string. 
//	return postfix;        // string has inbuilt terminate character, but in char array we have to mention it.
//}
//
//int main(){
//	
//	char * infix = "w-e*t/y+r*b*t-z+o";
//    printf("postfix is %s", infix_post(infix));
//    return 0;
//}

//													INFIX TO PREFIX CONVERSION

//#include <iostream>           // DOESN'T WORK FOR EXPRESSION WITH BRACKET, FOR THIS VISIT GEEKSFORGEEKS
//#include <bits/stdc++.h>
//using namespace std;
//
//bool is_operator(char a){
//    if(a=='+'||a=='-'||a=='*'||a=='/'){
//        return true;
//    }
//    return false;
//}
//
//int length(char * a){
//    int i=0;
//    while(a[++i]!='\0'); //{   // because here i++, first compare i then increment the i.
//        // i++;                // so every time after temination of while loop, value of increment by 1.
//    // }
//    return i;
//}
//// CONVERSION FROM INFIX TO PREFIX
//
//int precedence(char a){
//    if(a=='*' || a=='/'){
//        return 3;
//    }
//    else if(a=='+' || a=='-'){
//        return 2;
//    }
//    return 0;
//}
//
//void display(char * a){
//    cout<<"\n Expression are : ";
//    for(int i=0; a[i]!='\0'; i++){
//        cout<<a[i];
//    }
//}
//
//int main(){
//    char s[] = "a-b+c*d/e+f-q*r";
//    int l = length(s);
//    char temp;
//    display(s);
//    for(int i=0; i<(l/2); i++){
////        if(s[i]=='('){
////            s[i] = ')';
////        }
////        else if(s[i]==')'){
////            s[i]='(';
////        }
//        temp = s[i];
//        s[i] = s[l-i-1];
//        s[l-i-1] = temp;
//    }
//    display(s);
//    stack <char> t;
//    char res[50];
//    int i=0, j=0;
//    while(s[i]!='\0'){
//        if(!is_operator(s[i])){
//            res[j++] = s[i++];
//        }
//        else if(!t.empty() && precedence(s[i]) > precedence(t.top()) || t.empty()){
//            t.push(s[i++]);
//        }
//        else{
//            temp = t.top();
//            t.pop();
//            res[j++] = temp;
//        }
//    }
//    while(!t.empty()){
//        res[j++] = t.top();
//        t.pop();
//    }
//    display(res);
//    for(i=0; i<(j/2); i++){
//        temp = res[i];
//        res[i] = res[j-i-1];
//        res[j-i-1] = temp;
//    }
//    cout<<"\n Conversion of Infix to Prefix. \n";
//    display(res);
//    return 0;
//}


//    											14. IMPLEMENTATION OF QUEUE
//#include <stdio.h>
//#include <stdlib.h>
//
//struct queue{
//	int size;
//	int front;
//	int back;
//	int * arr; 
//};
//int isEmpty(struct queue * ptr){
//	if(ptr->front== ptr->back){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//int isFull(struct queue * ptr){
//	if(ptr->back == ptr->size-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//void enqueue(struct queue * ptr, int ele){
//	if(isFull(ptr)){
//		printf("\nQueue is Full. \n");
//	}
//	else{
//		ptr->back++;
//		ptr->arr[ptr->back] = ele;
//	}
//}
//
//int dequeue(struct queue * ptr){
//	int value = -1;
//	if(isEmpty(ptr)){
//		printf("\nQueue is Empty.\n");
//		
//	}else{
//		ptr->front++;
//		value = ptr->arr[ptr->front];
//	}
//	return value;
//}
//void display(struct queue * ptr){
//	printf("\nQueue is : ");
//	int intial = ptr->front;
//	while(ptr->front!=ptr->back){
//		ptr->front++;
//		printf("%d   ", ptr->arr[ptr->front]);
//		
//	}
//	ptr->front = intial;
//}
//
////                                                      TAKING MEMORY FOR STRUCT QUEUE POINTER IN HEAP. ( DYANAMIC MEMORY ALLOCATION )
//int main(){                                                   
//	struct queue * p = (struct queue *)malloc(sizeof(struct queue));
//	p->size = 20;
//	p->front = -1;
//	p->back = -1;
//	p->arr = (int *)malloc(p->size*sizeof(int ));
////	dequeue(p);
////	printf("%d\n", isEmpty(p));
////	printf("%d\n", isFull(p));
//	enqueue(p, 34);
//	enqueue(p, 06);
//	enqueue(p, 17);
//	enqueue(p, 52);
//	enqueue(p, 284);
//	printf("\nQueue After Insertion.\n");
//	display(p);
//	printf("\nDequeue Element are : %d\n", dequeue(p));
////	dequeue(p);
////	printf("Queue After deletion.\n");
////	display(p);
//	return 0;
//}

//                                             TAKING p as a struct queue, for changes we pass memory of p to the respective function.

//int main(){                     
//	struct queue p;               // here we 
//	p.size = 20;
//	p.front = -1;
//	p.back = -1;
//	p.arr = (int *)malloc(p.size*sizeof(int ));
////	dequeue(p);
////	printf("%d\n", isEmpty(p));
////	printf("%d\n", isFull(p));
//	enqueue(&p, 34);
//	enqueue(&p, 06);
//	enqueue(&p, 17);
//	enqueue(&p, 52);
//	enqueue(&p, 284);
//	printf("\nQueue After Insertion.\n");
//	display(&p);                            // HERE DISPLAY CHANGES THE FRONT OF STRUCT QUEUE, SO WE RECHANGE THE VALUE OF FRONT IN DISPLAY.
//	if(isEmpty(&p)){
//		printf("\nEmpty\n");
//	}
//	printf("\nDequeue Element are : %d\n", dequeue(&p));
//	dequeue(&p);
//	printf("Queue After deletion.\n");
//	display(&p);
//	return 0;
//}



//													15. CIRCULAR QUEUE
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct circular{
//	int size;
//	int f;
//	int b;
//	int * arr;
//};
//int isFull(struct circular * ptr){
//	if((ptr->b+1)%ptr->size == ptr->f){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//isEmpty(struct circular * ptr){
//	if(ptr->b == ptr->f){
//		return 1;
//		
//	}
//	return 0;
//}
//void enqueue(struct circular * ptr, int ele){
//	if(!isFull(ptr)){
//	ptr->b =  ( ptr->b+1 ) % ptr->size;
//	ptr->arr[ptr->b] = ele;
//	printf("Enqueued element is :  %d\n", ptr->arr[ptr->b]);
//	}else{
//		printf("\nQueue is Full.\n");
//	}
//}
//
//int dequeue(struct circular * ptr){
//	int value = -1;
//	if(!isEmpty(ptr)){
//		ptr->f = (ptr->f+1)%ptr->size;
//		value = ptr->arr[ptr->f];
//	}else{
//		printf("Dequeue is not possible.\n");
//	}
//	return value;
//}
//
//int main(){
//	struct circular * p = (struct circular *)malloc(sizeof(struct circular));
//	p->size = 4;
//	p->f = p->b = 0;            // NOTE : in circular, f and b equals to zero intially, otherwiae isFull() doesn't work.
//	p->arr = (int *)malloc(p->size*sizeof(int ));
//	enqueue(p, 34);
//	enqueue(p, 15);
//	enqueue(p, 52);
//	printf("Dequeue element are : %d\n", dequeue(p));
//	printf("Dequeue element are : %d\n", dequeue(p));
//	enqueue(p, 92);
//	enqueue(p, 27);
//	enqueue(p, 65);
//	return 0;
//}



//        											16. QUEUE USING LINKED LIST.
//#include <stdio.h>
//#include <stdlib.h>
//	
//struct queue{
//	int data;
//	struct queue * next;
//};
//
//struct queue * b = NULL;
//struct queue * f = NULL;
//
//void display(){
//	if(f==NULL){
//		printf("Queue is Empty\n");
//	}else{
//	struct queue * ptr = f;
//	printf("\nQueue Elements are : \n");
//	while(ptr!=NULL){
//		printf(" %d \n", ptr->data);
//		ptr = ptr->next; 
//		}
//	}
//}
//
//int isEmpty(){
//	if(f == NULL ){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//void enqueue( int ele){
//	struct queue * ptr = (struct queue * )malloc(sizeof(struct queue));
//	ptr->data = ele;
//	ptr->next = NULL;
//	if(ptr==NULL){
//		printf("Queue is full.\n");
//	}
//	else if(b==NULL && f==NULL){
//		b = ptr;
//		f = ptr;
//	}else{
//		b->next = ptr;
//		b = ptr;
//	}
//	
//}
//
//int dequeue( ){
//	int value =-1;
//	struct queue * ptr = f;
//	if(f==b){
//		value = f->data;
//		f=b=NULL;
//	}
//	else if(f==NULL){
//		printf("Queue is Empty.\n");
//		
//	}else{
//		value = ptr->data;
//		f = f->next;
//		free(ptr);
//	}
//	return value;
//}

/* here if i create back and front in the main function, when i pasees them into any function, the copies of these will sent
   and it never changes. 
   so,  i can do two things to prevent this ---->  1. making them the global variable, so as i can change them from anywhere.
   											---->  2. or i can return these values from that function.
*/
int main(){

//	printf("element are  : %d\n", enqueue(back, 34));
	display();
	enqueue(27);
	enqueue(52);
	enqueue(83);
	display();
	printf("Dequeue element are  : %d\n", dequeue());
	printf("Dequeue element are  : %d\n", dequeue());
	printf("Dequeue element are  : %d\n", dequeue());
	enqueue(34);
	enqueue(156);
	display();
	printf("Dequeue element are  : %d\n", dequeue());
	return 0;
}



//                                                   DOUBLE ENDED QUEUE  ( DEQueue )
//#include <stdio.h>
//#include <stdlib.h>
//
//struct queue{
//	int size;
//	int b;
//	int f;
//	int * arr;
//};
//
//int isEmpty(struct queue * ptr){
//	if(ptr->f == ptr->b){
//		return 1;
//		
//	}else{
//		return 0;
//	}
//}
//
//int isFull(struct queue * ptr){
//	if(ptr->b == ptr->size-1){
//		return 1;
//	}
//	return 0;
//}
//
//void enqueuef(struct queue * ptr, int ele){
//	if(!isFull(ptr) && ptr->f != -1){
//		ptr->arr[ptr->f] = ele;
//		ptr->f--;
//	}
//	else{
//		printf("insertion from front can't possible.\n");
//	}
//}
//
//void enqueueb(struct queue * ptr, int ele){
//	if(!isFull(ptr)){
//		ptr->b++;
//		ptr->arr[ptr->b] = ele;
//	}
//	else{
//		printf("Insertion from back can't possible.\n");
//	}
//}
//
//int dequeuef(struct queue * ptr){
//	int value;
//	if(!isEmpty(ptr)){
//		ptr->f++;
//		value = ptr->arr[ptr->f];
//	}else{
//		printf("Deletion not possible.\n");
//		value = -1;
//	}
//	return value;
//}
//
//int dequeueb(struct queue * ptr){
//	int value = -1;
//	if(!isEmpty(ptr)){
//		value = ptr->arr[ptr->b];
//		ptr->b--;
//	}else{
//		printf("Deletion not possible.\n");
//	}
//	return value;
//}
//
//void display(struct queue * ptr){
//	printf("Queue elements are : \n");
//	int initial = ptr->f;
//	while(ptr->f!=ptr->b){
//		ptr->f++;
//		printf("%d\n", ptr->arr[ptr->f]);
//	}
//	ptr->f = initial;
//}
//
//int main(){
//	struct queue * p = (struct queue *)malloc(sizeof(struct queue));
//	p->size = 20;
//	p->b = p->f = 6;
//	p->arr = (int *)malloc(p->size*sizeof(int));
////	printf("%d\n", isFull(p));
////	printf("%d\n", isEmpty(p));
//	enqueueb(p, 83);
//	enqueueb(p, 35);
//	enqueueb(p, 155);
//	enqueueb(p, 863);
//	display(p);
//	printf("After :\n");
//	enqueuef(p, 53);
//	enqueuef(p, 42);
//	display(p);
//	dequeuef(p);
//	display(p);
//	dequeueb(p);
//	dequeueb(p);
//	display(p);
//	return 0;
//}



// 													INTRODUCTION  TO  SORTING  ALGORITHM
//											BUBBLE SORT

//#include <iostream>
//using namespace std;
//
//void display(int s, int * p){
//	cout<<"\nArray is : ";
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"  ";
//	}
//	cout<<"\n";
//}
//
//void bubble_sort(int s, int * p){
//	int task;
//	for(int i=0; i<s-1; i++){
//		cout<<"\nPass no "<<i+1<<endl;
//		for(int j=0; j<s-1-i; j++){
//			if(p[j]>p[j+1]){                  //       >  --> FOR ASCENDING ORDER
//				task = p[j];                 //        <  -->  FOR DECENDING ORDER
//				p[j] = p[j+1];
//				p[j+1] = task;
//			}
//			display(s, p);
//		}
//		
//	}
//}
//
//void early_bubble_sort(int s, int * p){
//	int task;
//	int is_Sorted = 0;
//	for(int i=0; i<s-1; i++){
//		cout<<"\nPass no "<<i+1<<endl;
//		is_Sorted = 0;
//		for(int j=0; j<s-1-i; j++){
//			if(p[j]>p[j+1]){                     //  > --> FOR ACSENDING ORDER.
//				is_Sorted = 1;                  //   < --> FOR DESENDING ORDER.
//				task = p[j];
//				p[j] = p[j+1];
//				p[j+1] = task;
//			}
////			display(s, p);
//		}
//		if(is_Sorted==0){
//			
//			break;
//		}
//		
//	}
//}
//
//int main(){
////	int n;
////	cout<<"Enter the no. of elements in the array.: ";
////	cin>>n;
////	int a[] = { 23, 74, 32, 46, 87, 21};
//	int a[] ={1, 2, 5, 7};
//	int n = 4;
////	for(int i=0; i<n; i++){
////		cin>>a[i];
////	}
//	display(n, a);
//	cout<<"\nSorted Array.\n";
////	bubble_sort(n, a);
//	early_bubble_sort(n, a);
//	display(n, a);
//	return 0;
//}



// 														INSERTION SORT

//#include <iostream>
//using namespace std;
//
//void display(int *p, int s){
//	cout<<"\nArray is : ";
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"  ";
//	}
//	cout<<"\n";
//}
//
//void insertion_sort(int * p, int  s){
//	int key;
//	for(int i=1; i<=s-1; i++){
//		key = p[i];
//		int j = i-1;
//		while(j>=0 && p[j]>key){             //  >  ----> FOR ASCENDING ORDER.
//			p[j+1] =p[j];                   //   <  ----> FOR DESENDING ORDER.
//			j--;
//		}
//		p[j+1] = key;
//	}
//}
//
//int main(){
//
////	int a[] = { 23, 74, 32, 46, 87, 21};
//	int a[] ={23, 75, 13, 32, 7, 46};
//	int n = 6;
////	for(int i=0; i<n; i++){
////		cin>>a[i];
////	}
//	display(a, n);
//	cout<<"\nSorted Array.\n";
//	insertion_sort(a, n);
//	display(a, n);
//	return 0;
//}



//											 	SELECTION SORT

//#include <iostream>
//using namespace std;
//
//void display(int * p, int s){
//	cout<<"\nArray is : ";
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"   ";
//	}
//	cout<<"\n";
//}
//
//void selection_sort(int * p, int x){
//	int min = 0;
//	int task;
//	cout<<"\nSelection sort stats.\n";
//	for(int i=0; i<x-1; i++){
//		min = i;
//		for(int j=i+1; j<x; j++){
//			if(p[j]<p[min]){
//				min = j;	
//			}
//			
//		}
//		task = p[i];
//		p[i] = p[min];
//		p[min] = task;
//		display(p, x);
//	}
//	cout<<"\nSelection sort end.\n";
//}
//
//int main(){
//	int a[] = {5, 2, 64, 35, 62, 23, 26};
//	int n = 7;
//	cout<<"Initial Array.\n";
//	display(a, n);
//	selection_sort(a, n);
//	cout<<"\nFinal Array.\n";
//	display(a, n);
//	return 0;
//}



//															Quick Sort

//#include <iostream>
//using namespace std;
//
//
//void display(int * p, int s){
//	cout<<"\nArray is : ";
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"   ";
//	}
//	cout<<"\n";
//}
//
//int partition(int *p, int low, int high){
//	int pivot = p[low];
//	int i = low+1;
//	int j = high;
//	int task;
//	
//	do{
//	while(p[i]<=pivot){
//		i++;
//	}
//	while(p[j]>pivot){
//		j--;
//	}
//	if(i<j){
//	
//	task = p[i];
//	p[i] = p[j];
//	p[j] = task;
//	
//	}	
//	
//	}while(i<j);
//	
//	task = p[j];
//	p[j] = p[low];
//	p[low] = task;
//	
//	return j;
//}
//
//void quick_sort(int * p, int low, int high){
//	int partition_index;
//	if(low<high){
//	partition_index = partition(p, low, high);
//	quick_sort(p, low, partition_index-1);
//	quick_sort(p, partition_index+1, high);
//	}
//	
//}
//
//int main(){
//	int a[] = {43, 64, 24, 53, 83, 34, 6, 2};
//	int n = 8;
//	cout<<"\nInitial Array.\n";
//	display(a, n);
//	quick_sort(a, 0, n-1);
//	cout<<"\nAfter Sort.\n";
//	display(a, n);
//	return 0;	
//}





/// 												MERGE SORT
// 1. MERGING TWO SORTED ARRAY IN A NEW THIRD ARRAY.

//#include <iostream>
//using namespace std;
//
//void display(int * p, int s){
//	
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"   ";
//	}
//	cout<<"\n";
//}
//
//void merge_sort(int * p, int x, int * q, int y, int * r){
//	int i, j, k;
//	i = j = k = 0;
//	while(i<x && j<y){
//		
//		if(p[i]<=q[j]){
//			
//			r[k] = p[i];
//			k++;
//			i++;
//		}else{
//			
//			r[k] = q[j];
//			k++;
//			j++;
//		}
//	}
//	while(i<x){
//		r[k] = p[i];
//		k++;
//		i++;
//	}
//	while(j<y){
//		r[k] = q[j];
//		k++;
//		j++;
//	}
//	
//}
//
//int main(){
//	int a[] = {12, 43, 64, 69, 74};
//	int n = 5;
//	cout<<"\nArray 1 is : ";
//	display(a, n);
//	int b[] = {4, 11, 23, 53, 65, 84, 90, 95};
//	int m = 8;
//	cout<<"\nArray 2 is : ";
//	display(b, m);
//	int c[20];
//	int p = m+n;
//	merge_sort(a, n, b, m, c);
//	cout<<"\nArray 3 is : ";
//	display(c, p);
//	return 0;
//}


//  2.   SORT ARRAY USING MERGE SORT WHICH CAN  BE DIVIDED INTO TWO SORTED PARTS INTO ITSELF.

//#include <iostream>
//using namespace std;
//
//void display(int * p, int s){
//	
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"   ";
//	}
//	cout<<"\n";
//}
//
//void merge(int * p, int low, int mid, int high){
//	int i, j, k, r[20];
//	i = low;
//	j = mid+1;
//	k = low;
//	while(i<=mid && j<=high){
//		
//		if(p[i]<p[j]){
//			
//			r[k] = p[i];
//			k++;
//			i++;
//		}else{
//			
//			r[k] = p[j];
//			k++;
//			j++;
//		}
//	}
//	while(i<=mid){
//		r[k] = p[i];
//		k++;
//		i++;
//	}
//	while(j<=high){
//		r[k] = p[j];
//		k++;
//		j++;
//	}
//	
//	for(int i=low; i<=high; i++){
//		p[i] = r[i];
//	}
//	
//}
//
//void merge_sort(int * p, int low, int high){
//	int mid;
//	if(low<high){
//	mid = (low+high)/2;
//	merge_sort(p, low, mid);
//	merge_sort(p, mid+1, high);
//	merge(p, low, mid, high);
//	}
//}
//
//int main(){
//	int a[] = {12, 43, 2, 69, 4, 2, 12};
//	int n = 7;
//	cout<<"\nArray 1 is : ";
//	display(a, n);
//	
//	merge_sort(a, 0, 6);
//
//	cout<<"\n\nArray After sort is : ";
//	display(a, n);
//	return 0;
//}



///														COUNT SORT

//#include <iostream>
//using namespace std;
//
//void display(int * p, int s){
//	
//	for(int i=0; i<s; i++){
//		cout<<p[i]<<"   ";
//	}
//	cout<<"\n";
//}
//
//void count_sort(int *p, int x){
//	int max = p[0];
//	for(int i=0; i<x; i++){
//		if(p[i]>max){
//			max = p[i];
//		}
//	}
//	
//	int * b = new int[max+1];
//	int ele;
//	for(int i=0; i<max+1; i++){
//		b[i] = 0;
//	}
//	for(int i=0; i<x; i++){
//		ele = p[i];
//		b[ele]++;
//	}
//	int j = 0;
//	for(int i=0; i<max+1; i++){
//		while(b[i]!=0){
//			p[j] = i;
//			j++;
//			b[i]--;
//		}
//	}
//}
//
//int main(){
//	int a[] = {23, 62, 14, 63, 14, 566, 7658, 2345, 566, 53};
//	int n = 10;
//	cout<<"\nOriginal Array : ";
//	display(a, n);
//	count_sort(a, n);
//	cout<<"\n\nAfter Sort : ";
//	display(a, n);
//	return 0;		
//}




///											Linked Representation of Binary Tree     &   CHECKING OF BINARY SEARCH TREE

//#include <stdio.h>
//#include <malloc.h>
//struct node{
//	int data;
//	struct node * left;
//	struct node * right;
//};
//
//int check_bst(struct node * root){
//	static struct node * prev = NULL;
//	if(root!=NULL){
//		if(!check_bst(root->left)){
//			return 0;
//		}else if(prev!=NULL && root->data <= prev->data){
//			return 0;
//		}
//		prev = root;
//		check_bst(root->right);
//	}
//	else{
//		return 1;
//	}
//}

//void in_order(struct node * root){
//	if(root!=NULL){
//		in_order(root->left);
//		printf("  %d  ", root->data);
//		in_order(root->right);
//	}
//}
//
//void post_order(struct node * root){
//	if(root!=NULL){
//		post_order(root->left);
//		post_order(root->right);
//		printf(" %d ", root->data);
//	}	
//}
//
//void pre_order(struct node * root){
//	int data;
//	if(root!=NULL){
//		data = root->data;
//	printf(" %d ", data);
//	pre_order(root->left);
//	pre_order(root->right);
//	}
//	
//}
//
//struct node * create_node(int data){
//	struct node * ptr1 = (struct node *)malloc(sizeof(struct node));
//	ptr1->data = data;
//	ptr1->left = NULL;
//	ptr1->right = NULL;
//	return ptr1;
//}
//
///*                              42
//                               /  \
//                            34      54
//                           /  \    /  \
//                          17  72  62   6
//*/
//
//int main(){
//	struct node * root = create_node(42);
//	
//	struct node * p = create_node(34);
//	root->left = p;
//	
//	struct node * q = create_node(54);
//	root->right = q;
//	
//	struct node * r = create_node(17);
//	p->left = r;
//	
//	struct node * s = create_node(72);
//	p->right = s;
//	
//	struct node * t = create_node(62);
//	q->left = t;
//	
//	struct node * u = create_node(06);
//	q->right = u;
//	
////	pre_order(root);
////	post_order(root);
////	in_order(root);
//	printf("\nCheck BST : %d", check_bst(root));
//	return 0;
//}



//													SEARCH IN BINARY SEARCH TREE
//#include <stdio.h>
//#include <malloc.h>
//
//struct node{
//	int data;
//	struct node * left;
//	struct node * right;
//};
//
//int is_bst(struct node * root){
//	struct node * prev = NULL;
//	if(root!=NULL){
//		if(!is_bst(root->left)){
//			return 0;
//		}else if(prev!=NULL  &&  root->data  <= prev->data){
//			return 0;
//		}
//		prev = root;
//		is_bst(root->right);
//	}else{
//		return 1;
//	}
//}
//
//void in_order(struct node * root){
//	if(root!=NULL){
//		in_order(root->left);
//		printf(" %d ", root->data);
//		in_order(root->right);
//	}
//}
//
//struct node * create(int ele){
//	struct node * p = (struct node *)malloc(sizeof(struct node));
//	p->left = p->right = NULL;
//	p->data = ele;
//	return p;
//}
//
//struct node * search(struct node * root, int value){
//	if(root!=NULL){
//		if(root->data!=value){
//			if(root->data > value){
//				return search(root->left, value);
//			}
//			else{
//				return search(root->right, value);
//			}
//		}else{
//			return root;
//		}
//		
//	}else{
//		return NULL;
//	}
//}
//
////struct node * search(struct node* root, int key){
////    if(root==NULL){
////        return NULL;
////    }
////    if(key==root->data){
////        return root;
////    }
////    else if(key<root->data){
////        return search(root->left, key);
////    }
////    else{
////        return search(root->right, key);
////    }
////}
//
//
//int main(){
//	struct node * root = create(84);
//	root->left = root->right = NULL;
//	
//	struct node * p = create(74);
//	root->left = p;
//	
//	struct node * q = create(98);
//	root->right = q;
//	
//	struct node * r = create(23);
//	p->left = r;
//	
//	struct node * s = create(80);
//	p->right = s;
//	
//	struct node * t = create(62);
//	q->left = t;
//	
//	struct node * e = create(45);
//	t->left = e;
//	
//	struct node * u = create(123);
//	q->right = u;
//	
//	in_order(root);
//	printf("\n%d", is_bst(root));
//	
////	if(search(root, 62)==1){
////		printf("\nElement is found.");
////	}else if(search(root, 62)==-1){
////		printf("\nElement is not found.");
////	}
//	
//	struct node * search_ele = search(root, 123);              //  doesn't run for 62, 45.
//	if(search_ele!=NULL){
//		printf("\nElement : %d", search_ele->data);
//	}else{
//		printf("\nElement not found.");
//	}
//	return 0;
//}



//                                                      ITERATOR SEARCH

//#include <stdio.h>
//#include <malloc.h>
//
//struct node{
//	int data;
//	struct node * left;
//	struct node * right;
//};
//
//int is_bst(struct node * root){
//	struct node * prev = NULL;
//	if(root!=NULL){
//		if(!is_bst(root->left)){
//			return 0;
//		}else if(prev!=NULL  &&  root->data  <= prev->data){
//			return 0;
//		}
//		prev = root;
//		is_bst(root->right);
//	}else{
//		return 1;
//	}
//}
//
//void in_order(struct node * root){
//	if(root!=NULL){
//		in_order(root->left);
//		printf(" %d ", root->data);
//		in_order(root->right);
//	}
//}
//
//struct node * create(int ele){
//	struct node * p = (struct node *)malloc(sizeof(struct node));
//	p->left = p->right = NULL;
//	p->data = ele;
//	return p;
//}
//
//struct node * search_itr(struct node * root, int ele){
//	while(root!=NULL){
//	
//	if(ele == root->data){
//		return root;
//	}
//	if(root->data > ele){
//		root = root->left;
//	}
//	else{
//		root = root->right;
//	}
//	}
//	return root;
//}
//
//
//int main(){
//	struct node * root = create(84);
//	root->left = root->right = NULL;
//	
//	struct node * x1 = create(56);
//	root->left = x1;
//	
//	struct node * x2 = create(922);
//	root->right  = x2;
//	
//	struct node * x3 = create(13);
//	x1->left = x3;
//	
//	struct node * x4 = create(754);
//	x2->left =  x4;
//	
//	in_order(root);
//	printf("\n%d", is_bst(root));
//	
////	if(search(root, 62)==1){
////		printf("\nElement is found.");
////	}else if(search(root, 62)==-1){
////		printf("\nElement is not found.");
////	}
//	
//	struct node * search_ele = search_itr(root, 84);              //  doesn't run for 62, 45.
//	if(search_ele!=NULL){
//		printf("\nElement : %d", search_ele->data);
//	}else{
//		printf("\nElement not found.");
//	}
//	return 0;
//}



// 											INSERTION IN BST

//#include <stdio.h>
//#include <malloc.h>
//
//struct node{
//	int data;
//	struct node * left;
//	struct node * right;
//};
//
//int is_bst(struct node * root){
//	struct node * prev = NULL;
//	if(root!=NULL){
//		if(!is_bst(root->left)){
//			return 0;
//		}else if(prev!=NULL  &&  root->data  <= prev->data){
//			return 0;
//		}
//		prev = root;
//		is_bst(root->right);
//	}else{
//		return 1;
//	}
//}
//
//void in_order(struct node * root){
//	if(root!=NULL){
//		in_order(root->left);
//		printf(" %d ", root->data);
//		in_order(root->right);
//	}
//}
//
//struct node * create(int ele){
//	struct node * p = (struct node *)malloc(sizeof(struct node));
//	p->left = p->right = NULL;
//	p->data = ele;
//	return p;
//}
//
//struct node * search_itr(struct node * root, int ele){
//	while(root!=NULL){
//	
//	if(ele == root->data){
//		return root;
//	}
//	if(root->data > ele){
//		root = root->left;
//	}
//	else{
//		root = root->right;
//	}
//	}
//	return root;
//}
//
//void insertion(struct node * root, int element){
//	struct node * p = create(element);
//	p->data = element;
//	p->left = p->right = NULL;
//	struct node * prev = NULL;
//	while(root!=NULL){
//		prev = root;
//		if(root->data == element){
//			printf("\nInsertion can't possible.\n");
//			return;
//		}
//		else if(root->data > element){
//			root = root->left;
//		}else{
//			root = root->right;
//		}
//	}
//	if(prev->data > element){
//		prev->left = p;
//	}else{
//		prev->right = p;
//	}
//}
//
//int main(){
//	struct node * root = create(84);
//	root->left = root->right = NULL;
//	
//	struct node * x1 = create(56);
//	root->left = x1;
//	
//	struct node * x2 = create(922);
//	root->right  = x2;
//	
//	struct node * x3 = create(13);
//	x1->left = x3;
//	
//	struct node * x4 = create(754);
//	x2->left =  x4;
//	printf("\nBefore Insertion : \n");
//	in_order(root);
////	printf("\n%d", is_bst(root));
//	printf("\nAfter Insertion : \n");
//	insertion(root, 100);
//	insertion(root, 345);
//	insertion(root, 10);
//	insertion(root, 80);
//	insertion(root, 100);
//	in_order(root);
//	
//	return 0;
//} 


//															CODE IN CPP  ---> INSERTION IN BST
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class node{
//    public :
//    int data;
//    node * left;
//    node * right;
//        node(int data){
//            this->data = data;
//            left = right = NULL;
//        }  
//};
//
//class insert_node{
//    public :
//        node * insert(node * root, int element){
//            if(root==NULL){
//                return new node(element);
//            }else{
//                node * p;
//                if(root->data >= element){
//                    p = insert(root->left, element);
//                    root->left = p;
//                }else{
//                    p = insert(root->right, element);
//                    root->right = p;
//                }
//                return root;
//            }
//        }
//        void post_order(node * root){
//            if(root!=NULL){
//                post_order(root->left);
//                post_order(root->right);
//                cout<<root->data<<" ";
//            }
//        }
//          
//};
//
//int main() {
//    insert_node lana;
//    node * root = NULL;
//    
//    int t;
//    cin>>t;
//    int value1;
//    
//    while(t-->0){
//        cin>>value1;
//        root = lana.insert(root, value1);
//    }
//    lana.post_order(root);  
//    return 0;
//}






//													DELETION OF NODE IN BST
//#include <stdio.h>
//#include <malloc.h>
//
//struct node{
//	int data;
//	struct node * left;
//	struct node * right;
//};
//
//int is_bst(struct node * root){
//	struct node * prev = NULL;
//	if(root!=NULL){
//		if(!is_bst(root->left)){
//			return 0;
//		}else if(prev!=NULL  &&  root->data  <= prev->data){
//			return 0;
//		}
//		prev = root;
//		is_bst(root->right);
//	}else{
//		return 1;
//	}
//}
//
//void in_order(struct node * root){
//	if(root!=NULL){
//		in_order(root->left);
//		printf(" %d ", root->data);
//		in_order(root->right);
//	}
//}
//
//struct node * create(int ele){
//	struct node * p = (struct node *)malloc(sizeof(struct node));
//	p->left = p->right = NULL;
//	p->data = ele;
//	return p;
//}
//
//struct node * search_itr(struct node * root, int ele){
//	while(root!=NULL){
//	
//	if(ele == root->data){
//		return root;
//	}
//	if(root->data > ele){
//		root = root->left;
//	}
//	else{
//		root = root->right;
//	}
//	}
//	return root;
//}
//
//void insertion(struct node * root, int element){
//	struct node * p = create(element);
//	p->data = element;
//	p->left = p->right = NULL;
//	struct node * prev = NULL;
//	while(root!=NULL){
//		prev = root;
//		if(root->data == element){
//			printf("\nInsertion can't possible.\n");
//			return;
//		}
//		else if(root->data > element){
//			root = root->left;
//		}else{
//			root = root->right;
//		}
//	}
//	if(prev->data > element){
//		prev->left = p;
//	}else{
//		prev->right = p;
//	}
//}
//
//struct node * in_pre(struct node * root){          //  predecessor of any node is the right most node of its left node.
//	root = root->left;
//	while(root->right != NULL){
//		root = root->right;
//	}
//	return root;
//}
//
//struct node * deletion(struct node * root, int element){         // dosen't print  for node which data is 100 in this BST. 
//	struct node * predecessor;
//	if(root==NULL){
//		return NULL;
//	}
//	if(root->left == NULL && root->right == NULL){
//		free(root);
//		return NULL;
//	}
//	//  searching the node.
//	if(root->data > element){
//		root->left = deletion(root->left, element);
//	}
//	else if(root->data < element){
//		root->right = deletion(root->right, element);
//	}
//	// deletion strategy 
//	else{
//	predecessor = in_pre(root);
//	root->data = predecessor->data;
//	root->left = deletion(root->left, predecessor->data);
//	}
//	return root;
//}
//
//int main(){
//	struct node * root = create(84);
//	root->left = root->right = NULL;
//	
//	struct node * x1 = create(56);
//	root->left = x1;
//	
//	struct node * x2 = create(922);
//	root->right  = x2;
//	
//	struct node * x3 = create(13);
//	x1->left = x3;
//	
//	struct node * x4 = create(754);
//	x2->left =  x4;
//	printf("\nBefore Insertion : \n");
//	in_order(root);
////	printf("\n%d", is_bst(root));
//	printf("\nAfter Insertion : \n");
//	insertion(root, 100);
//	insertion(root, 345);
//	insertion(root, 10);
////	insertion(root, 80);
////	insertion(root, 100);
//	in_order(root);
//	printf("\nAfter the Deletion : \n");
//	root = deletion(root, 754);
//	in_order(root);	
//	
//	return 0;
//} 
//





/// 												LEVEL ORDER TRAVERSAL IN TREE
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//class node {
//     public : 
//    int data;
//    node * left;
//    node * right;
//   
//        node(int data){
//            this->data = data;
//            left = right = NULL;
//        }  
//};
//
//class Insert_node{
//    public :
//        node * insert(node * root, int element){
//            if(root==NULL){
//                return new node(element);
//            }
//            else{
//                node * p;
//                if(root->data > element){
//                    p = insert(root->left, element);
//                    root->left = p;
//                }
//                else{
//                    p = insert(root->right, element);
//                    root->right = p;
//                }
//                return root;
//            }
//        }  
//};
//
//int height(node * root){
//    int height_l, height_r;
//    if(root==NULL){
//        return 0;
//    }else{
//        height_l = height(root->left);
//        height_r = height(root->right);
//        if(height_l > height_r){
//            return (height_l + 1);
//        }else{
//            return (height_r + 1);
//        }
//    }
//}
//
//void current_level(node * root, int level){
//    if(root==NULL){
//        return;
//    }
//    if(level==1){
//        cout<<root->data<<" ";
//        
//    }
//    else if(level > 1){
//        current_level(root->left, level-1);
//        current_level(root->right, level-1);
//    }
//}
//
//void level_order(node * root){
//    int h = height(root);
//    for(int i=1; i<=h; i++){
//        current_level(root, i);
//    }
//}
//
//
//int main() {
//    Insert_node lana;
//    node * root = NULL;
//    int t;
//    int value;
//    cin>>t;
//    while(t-- > 0){
//        cin>>value;
//        root = lana.insert(root, value);
//    }
//    level_order(root);
//    
//    return 0;
//}
 
 //													GETLINE()
 
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main(){
//	string s;
//	getline(cin,  s);
//	cout<<s;
//	return 0;
//}



///															CHECKING A TREE IS IT A BST OR NOT.  --> this check well
//   IN bst, root is greater than the all the node in left sub-tree and is lesser than all the node in right sub-tree.

//bool is_bst(Node * root, int min, int max){
//    if(root==NULL){
//        return true;}
//    if(root->data > max || root->data < min){
//return false;}
//    return is_bst(root->left, min, root->data-1) && is_bst(root->right, root->data+1, max);
//}
//
//	bool checkBST(Node* root) {
//		return is_bst(root, 0, 10000);
//	}


//													GRAPH - BREADTH SEARCH TRAVERSAL
//#include <stdio.h>
//#include <stdlib.h>
//
//struct queue{
//	int size;
//	int front;
//	int back;
//	int * arr; 
//};
//int isEmpty(struct queue * ptr){
//	if(ptr->front== ptr->back){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//int isFull(struct queue * ptr){
//	if(ptr->back == ptr->size-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//void enqueue(struct queue * ptr, int ele){
//	if(isFull(ptr)){
//		printf("\nQueue is Full. \n");
//	}
//	else{
//		ptr->back++;
//		ptr->arr[ptr->back] = ele;
//	}
//}
//
//int dequeue(struct queue * ptr){
//	int value = -1;
//	if(isEmpty(ptr)){
//		printf("\nQueue is Empty.\n");
//		
//	}else{
//		ptr->front++;
//		value = ptr->arr[ptr->front];
//	}
//	return value;
//}
//void display(struct queue * ptr){
//	printf("\nQueue is : ");
//	int intial = ptr->front;
//	while(ptr->front!=ptr->back){
//		ptr->front++;
//		printf("%d   ", ptr->arr[ptr->front]);
//		
//	}
//	ptr->front = intial;
//}

//                                                      TAKING MEMORY FOR STRUCT QUEUE POINTER IN HEAP. ( DYANAMIC MEMORY ALLOCATION )
//int main(){                                                   
//	struct queue * explore = (struct queue *)malloc(sizeof(struct queue));
//	explore->size = 20;
//	explore->front = -1;
//	explore->back = -1;
//	explore->arr = (int *)malloc(explore->size*sizeof(int));
//	
//	int visit[7] = {0,0,0,0,0,0,0};
//	
//	int a[7][7] = {
//	{0,1,1,1,0,0,0},
//	{1,0,1,0,0,0,0},
//	{1,1,0,1,1,0,0},
//	{1,0,1,0,1,0,0},
//	{0,0,1,1,0,1,1},
//	{0,0,0,0,1,0,0},
//	{0,0,0,0,1,0,0}
//	};
//	printf("Breadth First Search : ");
//	int i = 5;
//	enqueue(explore, i);
//	visit[i] = 1;
//	printf(" %d ", i);
//	while(!isEmpty(explore)){
//		i = dequeue(explore);
//		for(int j = 0; j < 7; j++){
//			if(a[i][j]==1 && visit[j]==0){
//				visit[j] = 1;
//				enqueue(explore, j);
////				printf("\ndisplay : ");
////				display(explore);
//				printf(" %d ", j);
//				
//			}
//		}
//	}
//	return 0;
//}



//															GRAPGH - DFS TRAVERSAL
//#include <stdio.h>
//#include <stdlib.h>
//
//struct stack{
//	int size;
//	int top;
//	int * arr;
//};
//
//int IsEmpty(struct stack * ptr){
//	if(ptr->top==-1){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//
//int IsFull(struct stack * ptr){
//	if(ptr->top == ptr->size-1){
//		return 1;
//		
//	}else{
//		return 0;
//	}
//}
//
//void push(struct stack * ptr, int ele){
//	if(IsFull(ptr)){
//		printf("\nStack Overflow.");
//	}else{
//	ptr->top++;
//	ptr->arr[ptr->top] = ele;
//	}
//}
//
//int pop(struct stack * ptr){
//	if(IsEmpty(ptr)){
//		printf("\nStack Underflow.");
//		return -1;
//	}else{
//	
//	int value = ptr->arr[ptr->top];
//	ptr->top--;
//	return value;
//}
//}
//
//int peek(struct stack * ptr, int i){
//	if(ptr->top - i + 1 < 0){
//		printf("\nInvalid position.");
//		return -1;
//	}else{
//		return ptr->arr[ptr->top - i + 1];
//	}
//}
//
//void display(struct stack * ptr){
//	for(int i=0; i<=ptr->top; i++){
//		printf("\nElemets are %d", ptr->arr[i]);
//	}
//}
//
//int Top(struct stack * ptr){
//	return ptr->arr[ptr->top];
//}
//
//int Bottom(struct stack * ptr){
//	return ptr->arr[0];
//}
//int main(){                      									//  DFS implementation using the stack.
//	struct stack * p = (struct stack *)malloc(sizeof(struct stack));
//	p->size = 30;
//	p->top = -1;
//	p->arr = (int *)malloc(p->size * sizeof(int));
//	
//	int visit[7] = {0,0,0,0,0,0,0};
//	
//	int a[7][7] = {
//	{0,1,1,1,0,0,0},
//	{1,0,1,0,0,0,0},
//	{1,1,0,1,1,0,0},
//	{1,0,1,0,1,0,0},
//	{0,0,1,1,0,1,1},
//	{0,0,0,0,1,0,0},
//	{0,0,0,0,1,0,0}
//	};
//	
//	printf("Depth First Search : ");
//	
//	int i = 0;
//	push(p, i);
//	while(!IsEmpty(p)){
//		i = pop(p);
//		if(visit[i]==0){
//			visit[i] = 1;
//			printf(" %d ", i);
//		}
//		for(int j = 0; j<7; j++){
//			if(a[i][j]==1 && visit[j]==0){
//				push(p, j);
//				
//			}
//		}
//		
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int visit[7] = {0,0,0,0,0,0,0};
//	
//int a[7][7] = {
//	{0,1,1,1,0,0,0},
//	{1,0,1,0,0,0,0},
//	{1,1,0,1,1,0,0},
//	{1,0,1,0,1,0,0},
//	{0,0,1,1,0,1,1},
//	{0,0,0,0,1,0,0},
//	{0,0,0,0,1,0,0}
//};
//	
//void dfs(int i){
//	visit[i]=1;
//	printf(" %d ", i);
//	for(int j = 0; j<7; j++){
//		if(a[i][j]==1 && visit[j]==0){
//			dfs(j);
//		}
//	}
//}
//
//int main(){         // easy implementation of dfs, using recursion, compiler use its own stack. Doesn't need to implement stack.
//	dfs(4);
//	return 0;
//}


//														DIJKSTRA ALGORITHM

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<int> dijkstra(vector< vector< pair<int, int> > >  graph, int start){
//	vector <int> dist(graph.size(), INT_MAX);
//	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int,int> > > pq;
//	
//	pq.push(make_pair(0, start));
//	dist[start] = 0;
//	
//	while(!pq.empty()){
//		int u = pq.top().second;
//		pq.pop();
//		
//		for(int i = 0; i<graph[u].size(); i++){
//			int v = graph[u][i].first;
//			int w = graph[u][i].second;
//			
//			if(dist[v] > dist[u] + w){
//				dist[v] = dist[u] + w;
//				pq.push(make_pair(dist[v], v));
//			}
//		}
//	}
//	return dist;
//}
//
//void addEdge( vector< vector< pair<int, int> > > &graph, int u, int v, int w)
//{
//	graph[u].push_back(make_pair(v, w));
//	graph[v].push_back(make_pair(u, w));	
//}
//
//
//
//int main(){
//	vector< vector< pair<int, int> > > graph(9, vector< pair<int, int> >(9));
//	addEdge(graph, 0, 1, 4);
//	addEdge(graph, 0, 7, 8);
//	addEdge(graph, 1, 2, 8);
//	addEdge(graph, 1, 7, 11);
//	addEdge(graph, 7, 8, 7);
//	addEdge(graph, 7, 6, 1);
//	addEdge(graph, 6, 8, 7);
//	addEdge(graph, 6, 5, 2);
//	addEdge(graph, 8, 2, 2);
//	addEdge(graph, 5, 2, 4);
//	addEdge(graph, 2, 3, 7);
//	addEdge(graph, 3, 4, 9);
//	addEdge(graph, 5, 4, 10);
//	addEdge(graph, 3, 5, 14);
//	
//	vector<int> dist = dijkstra(graph, 0);
//	
//	cout<<" Vertex		Distance from Source\n";
//	
//	for(int i=0; i<9; ++i){
//		cout<<" "<<i<<"\t\t\t"<<dist[i]<<"\n";
//	}
//	return 0;
//}


//												TOPOLOGICAL SORT  -- KAHN'S ALGORITHM

//#include <iostream>              // doesn't run in dev, need cpp 20 compiler, code in visual studio.
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector <int> topological_sort(vector <int> graph[], int s){
//	vector <int> indegree(s, 0);
//	queue <int> q;
//	vector <int> result;
//	
//	for(int i=0; i<s; i++){
//		for(int j=0; j<graph[i].size(); j++){
//			indegree[graph[i][j]]++;
//		}
//	}
//	
//	for(int i=0; i<indegree.size(); i++){
//		if(indegree[i]==0){
//			q.push(i);
//		}
//	}
//	while(!q.empty()){
//		int v = q.front();
//		q.pop();
//		result.push_back(v);
//		for(auto i=graph[v].begin(); i < graph[v].end(); i++){
//			indegree[*i]--;
//			if(indegree[*i]==0){
//				q.push(*i);
//			}
//		}
//		
//	}
//	return result;
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//}
//
//int main(){
//	int s = 5;
//	vector <int> graph[s];
//	
//	addEdge(graph, 0, 1);
//	addEdge(graph, 0, 2);
//	addEdge(graph, 1, 3);
//	addEdge(graph, 1, 2);
//	addEdge(graph, 2, 3);
//	addEdge(graph, 2, 4);
//	
//	vector <int> res = topological_sort(graph, s);
//	if(res.size()!= s){
//		cout<<"Topological Sort can't possible.\n";
//		return 0;
//	}
//	cout<<"Topological Sort of the Graph are  : ";
//	for(int i=0; i<res.size(); i++){
//		cout<<res[i]<<" ";
//	}
//	return 0;
//}


//											TOPOLOGICAL SORT  ->	MODIFIED - DSA   ALGORITHM
//#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//void top_sort(vector <int> graph[], vector <bool> &visited, list<int> &res, int node){
//	visited[node] = true;
//	for( auto i = graph[node].begin(); i<graph[node].end(); i++){
//		if(visited[*i] == false){
//			top_sort(graph, visited, res, *i);
//		}
//	}
//	res.push_front(node);
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//}
//
//int main(){
//	int s = 14;
//	vector <int> graph[s];
//	addEdge(graph, 0, 4);
//	addEdge(graph, 0, 5);
//	addEdge(graph, 0, 11);
//	addEdge(graph, 1, 4);
//	addEdge(graph, 1, 8);
//	addEdge(graph, 1, 2);
//	addEdge(graph, 2, 5);
//	addEdge(graph, 2, 6);
//	addEdge(graph, 3, 2);
//	addEdge(graph, 3, 6);
//	addEdge(graph, 3, 13);
//	addEdge(graph, 4, 7);
//	addEdge(graph, 6, 5);
//	addEdge(graph, 8, 7);
//	addEdge(graph, 9, 11);
//	addEdge(graph, 9, 10);
//	addEdge(graph, 12, 9);
//	addEdge(graph, 10, 13);
//	
//	vector <bool> visited(s, false);
//	list <int> res;
//	cout<<" Topological Sort using DFS : ";
//	for(int i=0; i<s; ++i){
//		if(!visited[i]){
//			top_sort(graph, visited, res, i);
//		}
//	}
//	reverse(res.begin(), res.end());
//	list <int> :: iterator it;
//	for(it = res.begin(); it != res.end(); ++it){
//		cout<<*it<<" ";
//	}
//	return 0;
//}

//												ARTICULATION POINT  -- TARJAN'S ALGORITHM


//#include <iostream>               // code is correct, run on online gdb compiler
//#include <vector>
//#include <set>
//using namespace std;
//
//set <int> arti_point(vector <int> graph[], set <int>& result, vector <bool>& visited, 
//                            vector <int>& parent, vector <int>& disc, vector <int>& low, int time, int v)
//{
//    visited[v] = true;
////    static int time = 0;               // static int, doesn't affect value because of recursion
//    time++;
//    disc[v] = low[v] = time;
//    int child = 0;
//    for( auto i=graph[v].begin(); i!=graph[v].end(); i++){
//        int av = *i;
//        if(!visited[av]){
//            child++;
//            parent[av] = v;
//            arti_point(graph, result, visited, parent, disc, low, time, av);
//            low[v] = min(low[v], low[av]);
//            if(parent[v]==-1 && child > 1){         //  root node with atleast 2 child
//                result.insert(v);
//            }
//            else if(parent[v] != -1 && low[av] >= disc[v]){     // leetcode hard ques, solve by only incudes this case.   why??
//                result.insert(v);    //  v edge and his child av has no backedge with ancestor of av.
//            }
//
//        }
//        else if(parent[v] != av){     ///   having backedge
//            low[v] = min( low[v], disc[av] );
//        }
//    }
//    return result;
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//    graph[u].emplace_back(v);
//    graph[v].emplace_back(u);
//}
//
//int main(){
//    int s = 7;
//    vector <int> graph[s];
//    addEdge(graph, 1, 0);
//    addEdge(graph, 1, 2);
//    addEdge(graph, 0, 3);
//    addEdge(graph, 2, 3);
//    addEdge(graph, 2, 6);
//    addEdge(graph, 3, 5);
//    addEdge(graph, 3, 4);
//    addEdge(graph, 4, 5);
//
//    set <int> result;
//    vector <bool> visited(s, false);
//    vector <int> parent(s, -1);
//    vector <int> disc(s, 0);
//    vector <int> low(s, 0);
//    int time = 0;
//
//    result = arti_point(graph, result, visited, parent, disc, low, time, 0);
//    cout<<" Articulation point are  : ";
//    for(int i : result){
//        cout<< i <<" ";
//    }
//    return 0;
//}


//															DISJOINT - SET ( CYCLE DETECTION ) (DATA STRUCTURE)
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void make_set(vector <int> &parent){                 //  CODE OF DISJOINT SET
//    for(int i=0; i<parent.size(); i++){
//        parent[i] = i;
//    }
//}
//
//int find(vector <int> &parent, int x){
//    if(x != parent[x]){
//        parent[x] = find(parent, parent[x]);
//    }
//    return parent[x];
//}
//
//void addEdge(vector <int> graph[], vector <pair<int, int> >& allEdges, int u, int v){
//    graph[u].push_back(v);
//    graph[v].push_back(u);
//    allEdges.push_back(make_pair(u, v));
//}
//
//void union_set(vector <int> &parent, vector <int> &rank, int x, int y){
//    int rootX = find(parent, x);
//    int rootY = find(parent, y);
//    if(rootX == rootY){
//        return;
//    }
//    if(rank[rootX] > rank[rootY]){
//        parent[rootY] = rootX;
//    } 
//    else{
//        parent[rootX] = rootY;
//        if(rank[rootX] == rank[rootY]){
//            rank[rootY]++;
//        }
//    }
//
//}
//
//bool cycle_detect(vector <pair<int, int> > &allEdges, int size)
//{
//    vector <int> parent(size);
//    vector <int> rank(size, 0);
//
//    make_set(parent);
//    
//    for(int i=0; i<allEdges.size(); i++){
//        int rootX = find(parent, allEdges[i].first);
//        int rootY = find(parent, allEdges[i].second);
//
//        if(rootX == rootY){
//            return true;
//        }
//        else{
//            union_set(parent, rank, rootX, rootY);
//        }
//    }
//    return false;
//}
//
//int main(){
//    int s = 6;
//    vector <int> graph[s];
//    vector <pair <int, int> > allEdges;
//
//    addEdge(graph, allEdges, 0, 1);
//    addEdge(graph, allEdges, 1, 3);
//    addEdge(graph, allEdges, 0, 2);
//    addEdge(graph, allEdges, 2, 3);
//    addEdge(graph, allEdges, 3, 4);
//    addEdge(graph, allEdges, 4, 5);
//    cout<<" Result \n";
//    cout<<" Cycle Detection is "<<cycle_detect(allEdges, s);
//    return 0;
//}


//													KRUSKAL'S ALGORITHM  --> GREEDY ALGO TO FIND MST
 
//#include <iostream>             ///  RUN ON ONLINE GDB, CPP20 COMPILER IS REQUIRED, CORRECT CODE
//#include <vector>
//#include <tuple>
//#include <bits/stdc++.h>
//using namespace std;
//
//void make_set(vector <int> &parent){
//    for(int i=0; i<parent.size(); i++){
//        parent[i] = i;
//    }
//}
//
//bool comp(const tuple< int, int, int> & a, const tuple <int, int, int > & b){
//    int x = get<2>(a);
//    int y = get<2>(b);
//
//    if(x < y){
//        return true;
//    }
//    return false;
//}
//
//int find(vector <int> & parent, int x){
//    if(x != parent[x]){
//        parent[x] = find(parent, parent[x]);
//    }
//    return parent[x];
//}
//
//void addEdges(vector <vector < pair<int, int> > > &graph, vector <tuple <int, int, int> > &allEdges, 
//                    int u, int v, int w)
//{
//    graph[u].emplace_back(make_pair(v, w));
//    graph[v].emplace_back(make_pair(u,  w));
//    allEdges.emplace_back(make_tuple(u, v, w));
//}
//
//void union_set(vector <int> &parent, vector <int> &rank, int x, int y){
//    int rootX = find(parent, x);
//    int rootY = find(parent, y);
//
//    if(rootX == rootY){
//        return;
//    }
//    if(rank[rootX] > rank[rootY]){
//        parent[rootY] = rootX;
//    }
//    else{
//        parent[rootX] = rootY;
//        if(rank[rootX] == rank[rootY]){
//            rank[rootY]++;
//        }
//    }
//}
//
//vector <tuple<int, int, int> > kruskal(vector< vector < pair < int, int> > > &graph,
//                     vector <tuple <int, int, int> > &allEdges, int size)
//{
//    vector <int> parent(size);
//    vector <int> rank(size, 0);
//
//    vector <tuple <int, int, int> > res;
//    make_set(parent);
//
//    sort(allEdges.begin(), allEdges.end(), comp);
//
//    for(tuple <int, int, int> t : allEdges){
//        int u = get<0>(t);
//        int v = get<1>(t);
//        int w = get<2>(t);
//
//        if(find(parent, u) != find(parent, v)){
//            res.emplace_back(u, v, w);
//            union_set(parent, rank, u, v);
//        }
//        
//    }
//
//    return res;
//}
//
//int main(){
//    int s = 7;
//    // pair of vertex and weight
//    vector < vector < pair <int, int> > > graph(s, vector <pair < int, int> >(s));
//    // tuple of vertice, vertice and weight
//    vector < tuple< int, int, int > > allEdges;
//
//    addEdges(graph, allEdges, 0, 5, 2);
//    addEdges(graph, allEdges, 0, 1, 2);
//    addEdges(graph, allEdges, 0, 3, 7);
//    addEdges(graph, allEdges, 5, 2, 4);
//    addEdges(graph, allEdges, 5, 1, 5);
//    addEdges(graph, allEdges, 2, 1, 1);
//    addEdges(graph, allEdges, 1, 3, 4);
//    addEdges(graph, allEdges, 2, 4, 4);
//    addEdges(graph, allEdges, 1, 4, 3);
//    addEdges(graph, allEdges, 3, 4, 1);
//    addEdges(graph, allEdges, 3, 6, 5);
//    addEdges(graph, allEdges, 4, 6, 7);
//
//    vector <tuple <int, int, int> > res = kruskal(graph, allEdges, s);
//    int sum = 0;
//    for(tuple<int, int, int> t : res){
//        sum += get <2>(t);
//        cout<<get<0>(t)<<" - "<<get<1>(t)<<", "<<get<2>(t)<<"   "<<sum<<endl;
//    }
//    return 0;
//}


//										GREEDY APPROACH TO FIND MST  --->    PRIM'S ALLGORITHM

//#include <iostream>           //  CORRECT CODE, RUN IN CPP20 COMPILER 
//#include <queue>
//#include <tuple>
//#include <vector>
//#include <set>
//#include <bits/stdc++.h>
//using namespace std;
//
//vector < tuple< int, int, int > > prim(vector <vector <pair<int, int> > > & graph, int start){
//    vector <tuple <int, int, int> > res;
//    vector < int >  parent(graph.size(), -1);
//    vector <int> key(graph.size(), INT_MAX);
//    vector <bool> visited(graph.size(), false);
//    key[start] = 0;
//    
//    priority_queue< pair<int, int>, vector <pair< int, int > >, greater<pair<int, int> > > pq;
//    pq.push(make_pair(0, start));
//    
//    while(!pq.empty()){
//        int v = pq.top().second;
//        pq.pop();
//        
//        if(parent[v]!=-1 and !visited[v]){
//            res.push_back(make_tuple(parent[v], v, key[v]));
//        }
//        visited[v] = true;
//        
//        for(auto i : graph[v]){
//            int av = i.first;
//            int w = i.second;
//            
//            if(!visited[av] && key[av] > w){
//                parent[av] = v;
//                key[av] = w;
//                pq.push(make_pair(key[av], av));
//            }
//        }
//        
//    }
//    return res;
//}
//
//void addEdge(vector <vector <pair<int, int> > > &graph, int u, int v, int w){
//    graph[u].push_back(make_pair(v, w));
//    graph[v].push_back(make_pair(u, w));
//}
//
//int main(){
//    int s = 7;
//    vector <vector <pair<int, int> > > graph(s, vector <pair<int, int>> (7));
//    
//    
//	addEdge(graph, 0, 1, 2);
//    addEdge(graph, 0, 3, 7);
//    addEdge(graph, 0, 5, 2);
//    addEdge(graph, 1, 2, 1);
//    addEdge(graph, 1, 3, 4);
//    addEdge(graph, 1, 4, 3);
//    addEdge(graph, 1, 5, 5);
//    addEdge(graph, 2, 4, 4);
//    addEdge(graph, 2, 5, 4);
//    addEdge(graph, 3, 4, 1);
//    addEdge(graph, 3, 6, 5);
//    addEdge(graph, 4, 6, 7);
//    
//    vector <tuple<int, int, int> > result = prim(graph, 0);
//    int sum = 0;
//    for(tuple <int, int, int> t : result){
//        sum += get<2>(t);
//        cout<<get<0>(t)<<" - "<<get<1>(t)<<"    "<<get<2>(t)<<"\n";
//    }
//    cout<<"\n\n  Cost of MST is "<<sum<<"\n";
//    return 0;
//}



//													BELLMAN'S FORD ALGORITHM ->          TO FIND SHORTEST DISTANCE  ( DP ALGO )
//#include <iostream>
//#include <vector>
//#include <map>
//#include <bits/stdc++.h>
//using namespace std;
//
//bool bellman_ford(map <pair < int, int >, int > &edges, vector <int> &dist, int start, int s){
//
//    
//    for(int i=0; i<s; i++){
//        for( auto a : edges){
//            int u = a.first.first;
//            int v = a.first.second;
//            int w = a.second;
//            
//            if(dist[u]!=INT_MAX && (dist[v] > dist[u] + w)){
//                dist[v] = dist[u] + w;
//            }
//        }
//    }
//    
//    for(auto a : edges){
//        int u = a.first.first;
//        int v = a.first.second;
//        int w = a.second;
//        
//        if(dist[u]!=INT_MAX && (dist[v] > dist[u] + w)){
//            return false;
//        }
//    }
//    return true;
//}
//
//void addEdge(map <pair < int, int>, int> &edges, int u, int v, int w){
//    edges[make_pair(u, v)] = w;
//}
//
//int main(){
//    int s = 5;
//    map < pair < int, int >, int > edges;
//    
//    addEdge(edges, 0, 1, 4);
//    addEdge(edges, 0, 2, 2);
//    addEdge(edges, 2, 1, 1);
//    addEdge(edges, 1, 2, 3);
//    addEdge(edges, 1, 4, 3);
//    addEdge(edges, 2, 3, 4);
//    addEdge(edges, 1, 3, 2);
//    addEdge(edges, 2, 4, 5);
//    addEdge(edges, 4, 3, -5);
//    
//    vector <int> dist(s, INT_MAX);
//       
//    int start = 0;
//    dist[start] = 0;
//    
//    if(bellman_ford(edges, dist, start, s)){
//        for(int i=0; i<s; i++){
//            cout<<" "<<start<<" -  "<<i<<" = "<<dist[i]<<"\n";
//        }
//    }
//    else{
//        cout<<" Bellman's Ford Algorithm can't possible. Negative Cycle is detect.\n";
//    }
//    return 0;
//}



//												FLOYD WARSHALL ALGORITHM  --> TO FIND SHORTEST DISTANCE BETWEEN ALL THE NODES


//#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//
//void addEdge(vector <vector <int> > & dist, int u, int v, int w){
//	dist[u][v] = w;
//}
//
//void floyd_warshall(vector <vector <int> > &dist, int s){
//	for(int k=0; k<s; k++){
//		for(int i=0; i<s; i++){
//			for(int j=0; j<s; j++){
//				if(dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX)    // as if the INT_MAX will be add to INT_MAX, then it will beyond int range.
//				{
//				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//				}
//			}
//		}
//	}
//}
//
//int main(){
//	int s = 5;
//	
//	vector < vector <int> > dist (s, vector <int> (s, INT_MAX));
//	
//	addEdge(dist, 0, 1, 3);
//	addEdge(dist, 0, 4, -4);
//	addEdge(dist, 0, 2, 8);
//	addEdge(dist, 1, 4, 7);
//	addEdge(dist, 1, 3, 1);
//	addEdge(dist, 2, 1, 4);
//	addEdge(dist, 3, 2, -5);
//	addEdge(dist, 3, 0, 2);
//	addEdge(dist, 4, 3, 6);
//	
//	for(int i=0; i<s; i++){
//		dist[i][i] = 0;
//	}
//	
//	floyd_warshall(dist, s);
//	cout<<" Floyd Warshall Matrix : \n";
//	for(int i=0; i<s; i++){
//		cout<<"\t| ";
//		for(int j=0; j<s; j++){
//			cout<<"  "<<dist[i][j]<<"\t|";
//		}
//		cout<<"\n";
//	}
//	return 0;
//}



//											FORD FULKERSON ALGO  --> MAXIMUM FLOW FROM SOURCE TO TARGET

//#include <iostream>
//#include <vector>
//#include <queue>
//#include <bits/stdc++.h>
//using namespace std;
//
//void addEdge(vector <vector <int> > &graph, int u, int v, int w){
//	graph[u][v] = w;
//}
//
//int bfs(vector <vector <int> > &residual_graph, vector <int> &parent, int source, int sink){
//	fill(parent.begin(), parent.end(), -1);
//	parent[source] = -2;
//	queue <pair <int, int> > q;
//	q.push({source, INT_MAX});
////	cout<<" \nPath : ";
//	while(!q.empty()){
//		int u = q.front().first;
//		int c = q.front().second;
////		cout<<u<<" -> ";
//		q.pop();
//		for(int av=0; av<residual_graph.size(); av++){
//			if(u!=av && parent[av]==-1 && residual_graph[u][av]!=0){
//				parent[av] = u;
//				int min_cap = min(c, residual_graph[u][av]);
//				if(av == sink){
//					return min_cap;
//				}
//				q.push({av, min_cap});		
//			}
//		}
//	}
////	cout<<"\n";
//	return 0;
//}
//
//
//int ford_fulkerson(vector <vector <int> > &graph, int source, int sink){
//	vector <int> parent (graph.size(), -1);
//	vector <vector <int> > residual_graph = graph;
//	int min_cap = 0, max_flow = 0;
//	
//	while(min_cap = bfs(residual_graph, parent, source, sink)){
//		max_flow += min_cap;
//		int u = sink;
//		while(u != source){
//			int v = parent[u];
//			residual_graph[v][u] -= min_cap;
//			residual_graph[u][v] += min_cap;
//			u = v;
//		}
//	}
//	return max_flow;
//}
//
//int main(){
//	int s = 6;
//	
//	vector < vector <int> > graph(s, vector <int> (s));
//	addEdge(graph, 0, 1, 4);
//	addEdge(graph, 0, 3, 3);
//	addEdge(graph, 1, 2, 4);
//	addEdge(graph, 3, 4, 6);
//	addEdge(graph, 2, 3, 3);
//	addEdge(graph, 2, 5, 2);
//	addEdge(graph, 4, 5, 6);
//	cout<<" Run\n";
//	cout<<" Maximum Flow : "<<ford_fulkerson(graph, 0, 5)<<endl;
//	return 0;
//}



//											GRAPH COLORING  ->   M  COLORING DECISION PROBLEM

//#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//
//bool is_valid(vector <int> graph[], vector <int> &color, int c, int v){
//	for( auto a : graph[v]){
//		if(color[a] == c){
//			return false;
//		}
//	}
//	return true;
//}
//
//bool graph_coloring(vector <int> graph[], vector <int> &color, int m, int v, int s){
//	if( v == s){
//		return true;
//	}
//	for(int c=1; c<=m; c++){
//		if(is_valid(graph, color, c, v)){
//			color[v] = c;
//			if(graph_coloring(graph, color, m, v+1, s)){
//				return true;
//			}
//			color[v] = 0;
//		}
//	}
//	return false;
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//	graph[v].push_back(u);
//}
//
//int main(){
//	int s = 10;
//	vector <int> graph[s];
//	vector <int> color(s, 0);
//	
//	addEdge(graph, 0, 1);
//	addEdge(graph, 0, 4);
//	addEdge(graph, 0, 5);
//	addEdge(graph, 1, 6);
//	addEdge(graph, 1, 2);
//	addEdge(graph, 4, 7);
//	addEdge(graph, 4, 3);
//	addEdge(graph, 2, 8);
//	addEdge(graph, 2, 3);
//	addEdge(graph, 3, 9);
//	addEdge(graph, 9, 5);
//	addEdge(graph, 5, 8);
//	addEdge(graph, 8, 7);
//	addEdge(graph, 6, 7);
//	addEdge(graph, 6, 9);
//	
//	for(int i=2; i<=5; i++){
//		cout<<"\n Colring of graph using "<<i<<" colors are : "<<graph_coloring(graph, color, i, 0, s)<<endl;
//	}
//	return 0;
//}

//											 GRAPH COLORING  -->   TOTAL NUMBER OF PERMUTATION POSSIBLE

//#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//
//
//bool is_valid(vector <int> graph[], vector <int> &color, int c, int v){
//	for( auto a : graph[v]){
//		if(color[a] == c){
//			return false;
//		}
//	}
//	return true;
//}
//
//void coloring(vector <int> graph[], vector <int> &color, int m, int v, int s, int count)
//{	
//	if(v==s){
//		cout<<" \nPermutation  is  :   ";	
//		for( auto i : color){
//			cout<<i<<",   ";
//		}
//		return;
//	}	
//	int c = 1;
//	while(c <= m){
//		if(is_valid(graph, color, c, v)){
//			color[v] = c;
//			coloring(graph, color, m, v+1, s);
//			color[v] = 0;
//		}
//		c++;
//	}
//	return;
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//	graph[v].push_back(u);
//}
//
//int main(){
//	int s = 10;
//	vector <int> graph[s];
//	vector <int> color(s, 0);
//	
//	addEdge(graph, 0, 1);
//	addEdge(graph, 0, 4);
//	addEdge(graph, 0, 5);
//	addEdge(graph, 1, 6);
//	addEdge(graph, 1, 2);
//	addEdge(graph, 4, 7);
//	addEdge(graph, 4, 3);
//	addEdge(graph, 2, 8);
//	addEdge(graph, 2, 3);
//	addEdge(graph, 3, 9);
//	addEdge(graph, 9, 5);
//	addEdge(graph, 5, 8);
//	addEdge(graph, 8, 7);
//	addEdge(graph, 6, 7);
//	addEdge(graph, 6, 9);
//	
//	int count = 0;
//	
//	cout<<" Possible permutation are : \n"<<endl;
//	coloring(graph, color, 3, 0, s);
//	
//	return 0;
//}

//									 		GRAPH : NO OF COLOR REQUIRED TO COLOR THE GRAPH

//#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//
//void coloring(vector <int> graph[], int s){
//	vector <int> color(s, -1);     //   store wheather the index is colored or not.
//	color[0] = 1;
//	vector <bool> color_assigned(s, false);   // store that the index ith is use or not.
//	
//	for(int u = 1; u<s; u++){
//		fill(color_assigned.begin(), color_assigned.end(), false);
//		for(auto av : graph[u]){
//			if(color[av]!=-1){
//				color_assigned[color[av]] = true;
//			}
//		}
//		int c;
//		for( c = 1; c<= s; c++){
//			if(color_assigned[c] == false){
//				break;
//			}
//		}
//		color[u] = c;
//	}
//	for(int u=0; u<s; u++){
//		cout<<" Vertex "<<u<<" color  --> "<<color[u]<<endl;
//	}
//	cout<<" Number of Color Required : "<<*max_element(color.begin(), color.end())<<endl;
//	return;
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//	graph[v].push_back(u);
//}
//
//int main(){
//	int s = 10;
//	vector <int> graph[s];
//	
//	
//	addEdge(graph, 0, 1);
//	addEdge(graph, 0, 4);
//	addEdge(graph, 0, 5);
//	addEdge(graph, 1, 6);
//	addEdge(graph, 1, 2);
//	addEdge(graph, 4, 7);
//	addEdge(graph, 4, 3);
//	addEdge(graph, 2, 8);
//	addEdge(graph, 2, 3);
//	addEdge(graph, 3, 9);
//	addEdge(graph, 9, 5);
//	addEdge(graph, 5, 8);
//	addEdge(graph, 8, 7);
//	addEdge(graph, 6, 7);
//	addEdge(graph, 6, 9);
//	
//	coloring(graph, s);
//
//	return 0;
//}



//													HAMILTONIAN CYCLE

//#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//
//bool hamiltonian(vector <int> graph[], int s, vector <int> &path, vector <bool> visited, int start)
//{
//	if(path.size() == s){
//		return true;
//	}	
//	
//	for( auto a : graph[start]){
//		if(!visited[a]){
//			visited[a] = true;
//			path.push_back(a);
//			if(hamiltonian(graph, s, path, visited, a)){
//				return true;
//			}
//			visited[a] =  false;
//			path.pop_back();
//		}
//	}
//	return false;
//}
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//	graph[v].push_back(u);
//}
//
//int main(){
//	int s = 7;
//	vector <int> graph[s];
//		
//    addEdge(graph, 0, 3);
//    addEdge(graph, 0, 4);
//    addEdge(graph, 0, 1);
//    addEdge(graph, 0, 5);
//    addEdge(graph, 3, 4);
//    addEdge(graph, 3, 2);
//    addEdge(graph, 3, 6);
//    addEdge(graph, 2, 6);
//    addEdge(graph, 2, 4);
//    addEdge(graph, 2, 1);
//    addEdge(graph, 1, 4);
//    addEdge(graph, 1, 5);
//    
//	
//	vector <bool> visited(s, false);
//	vector <int> path;
//	int start = 4;
//	visited[start] = true;
//	path.push_back(start);
//	
//	
//	if(hamiltonian(graph, s, path, visited, start)){
//		cout<<" Hamiltonaian Path is : ";
//		for( int i : path){
//			cout<<i<<"  ";
//		}	
//		cout<<path[0]<<endl;
//	}
//	else{
//		cout<<" 0 ";
//	}
//	return 0;
//}



//													EULER'S CYCLE   &    EULER'S PATH

//#include <iostream>
//#include <vector>
//#include <bits/stdc++.h>
//using namespace std;
//
//void addEdge(vector <int> graph[], int u, int v){
//	graph[u].push_back(v);
//	graph[v].push_back(u);
//}
//
//int dfs_count(vector <int> graph[], vector <bool> &visited, int v){
//	int count = 1;      // as 1 for this call of function
//	visited[v] = true;
//	for( auto av : graph[v]){
//		if(av != -1 && !visited[av]){            // av != -1, otherwise it terminate here.
//			count += dfs_count(graph, visited, av);
//		}
//	}
//	return count;
//}
//
//void remove_edge(vector <int> graph[], int u, int v){
//	vector <int> :: iterator it;
//	it = find(graph[v].begin(), graph[v].end(), u);
//	*it = -1;
//	it = find(graph[u].begin(), graph[u].end(), v);
//	*it = -1;
//}
//
////								CHECK IS VALID NEXT EDGE
//
//bool  isValidNextedge(vector <int> graph[], int s, int v, int av)
//{
//	int count = 0;
//	for( auto t : graph[v]){
//		if(t != -1){
//			count++;
//		}
//	}	
//	if(count == 0){
//		return false;
//	}
//	if(count == 1){
//		return true;
//	}
//	
//	vector <bool> visited(s, false);
//	count = 0;
//	count = dfs_count(graph, visited, v);
//	remove_edge(graph, v, av);
//	fill(visited.begin(), visited.end(), false);
//	int count1 = 0;
//	count1 = dfs_count(graph, visited, v);
//	addEdge(graph, v, av);
//	
//	return (count > count1) ? false : true;
//}
//
////								EULER CYCLE PRINT
//
//void euler_cycle(vector <int> graph[], int s, int v){
//	vector <int> :: iterator it;
//	for( auto av : graph[v]){
//		if(av != -1 && isValidNextedge(graph, s, v, av)){
//			cout<<"{ |"<<v<<"|<--->|"<<av<<"| },  ";
//			remove_edge(graph, v, av);
//			euler_cycle(graph, s, av);
//		}
//	}
//}
//
//
//
////    									CHECKING OF GRAPH WHEATHER IS EULERIAN OR NOT.
//void dfs(vector <int> graph[], vector <bool> &visited, int v){
//	visited[v] = true;
//	for( auto av : graph[v]){
//		if(!visited[av]){
//			dfs(graph, visited, v);
//		}
//	}
//}
//
//bool connected( vector <int> graph[], int s){
//	int i=0;
//	for(i=0; i<s; i++){
//		if(graph[i].size() == 0){
//			break;
//		}
//	}
//	if(i == s){
//		return true;
//	}
//	
//	vector <bool> visited(s, false);
//	dfs(graph, visited, 0);
//	
//	for( i=0; i<s; i++){
//		if(!visited[i]){
//			return false;
//		}
//	}
//	return true;
//}
//
//int isEulerian(vector <int> graph[], int s){
//	if(!connected(graph, s)){
//		return 0;
//	}
//	int odd = 0;
//	for(int i=0; i<s; i++){
//		if(graph[i].size() % 2 != 0){
//			odd++;
//		}
//	}
//	
//	if(odd > 2){
//		return 0;
//	}
//	return (odd == 2) ? 1 : 2;
//}
//
//int main(){
//	int s = 5;
//	vector <int> graph[s];
//	
//	addEdge(graph, 1, 0);
//	addEdge(graph, 1, 2);
//	addEdge(graph, 2, 0);
//	addEdge(graph, 0, 3);
//	addEdge(graph, 0, 4);
//	addEdge(graph, 4, 3);
//	
//	int res = isEulerian(graph, s);
//	if(res == 0){
//		cout<<" Graph is not Eulerian Graph.\n";
//	}
//	else if( res == 1){
//		cout<<" Graph is Semi-Eulerian Graph.\n";
//	}
//	else{
//		cout<<" Graph is Eulerian Graph.\n";
//	}
//	
//	int odd_degree = 0;
//	for(int i=0; i<s; i++){
//		if(graph[i].size() % 2 != 0){
//			odd_degree = i;
//			break;
//		}
//	}
//	
//	cout<<" Euler Cycle are : ";
//	euler_cycle(graph, s, odd_degree);
//	
//	return 0;
//}





