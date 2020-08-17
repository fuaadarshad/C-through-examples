//the keyword "template" is used to define "template function" and "template class"
//"function template" also known as "generic function"
//it is a way to make your "function" or "class" generalized as far as data type is concerned

// template<class type>

#include<iostream>
using namespace std;
template<class T>  

class ArrayList
{
	private:
		struct ControlBlock
		{
			int capacity;
			X *arr_ptr; //"int" replaced by "X"
		};
		ControlBlock *s;

	public:
		ArrayList(int capacity)
		{
			s=new ControlBlock;
			s->capacity=capacity;
			s->arr_ptr=new X[s->capacity];
		}
	
	void addElement(int index,X data)
		{
			if(index>=0&&index<=s->capacity-1)  //	0<= index <=capacity-1 --> validity of index  
				s->arr_ptr[index]=data;	    //capactity can't be accessed directly (s->capacity) **see diagram
			else
				cout<<endl<<"array index is not valid";
		}

	void viewElement(int index,X &data) //we have used refrence variable "data" so that we can store value of element to be viewed
		{
			if(index>=0&&index<=s->capacity-1)  //	0<= index <=capacity-1 --> validity of index
				data=s->arr_ptr[index];     //capactity can't be accessed directly (s->capacity) **see diagram
			else
				cout<<endl<<"Array index is not valid";
		}

	void viewList()
		{
			int i;
			for(i=0;i<s->capacity;i++)
				cout<<i<<"-->"<<s->arr_ptr[i]<<endl;
		}
};

int main()
{
int data;

ArrayList <int>list1(4); //only chnage made "ArrayList list1(4);" replaced by "ArrayList <int>list1(4);" we can keep "int/float/string..."  

list1.addElement(0,32);
list1.addElement(1,42);
list1.addElement(2,52);
list1.addElement(3,62);

list1.viewElement(0,data); //in function call "ordinary variable" is passed but in definition "passed value" is stored in "reference variable"
cout<<"viewElement "<<data<<endl;

list1.viewList();
}
