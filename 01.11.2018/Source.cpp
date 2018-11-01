#include<iostream>
#include<string>
#include<memory>
#include<map>
using namespace std;
class date_{};
template<class T>
class t_ptr
{
	string*ptr;
public:
	string_ptr(T*ptr)
	{
		this->ptr = ptr;
	}
	~string_ptr()
	{
		delete ptr;
	}
	T& operator*()
	{
		return *ptr;
	}
	T* operator->()
	{
		return this->ptr;
	}
	t_ptr(const t_ptr<T>&) = delete;
	void operator=(const t_ptr<T>&) = delete;
};
void main()
{
	/*map<string, int>m;
	for (map<string,int>::iterator it=m.begin();it !=m.end(); it++)

	{

	}
	
	t_ptr<date_> f(new date_);

	unique_ptr<string> s2(new string("unique"));
	auto s3 = move(s2);*/
	auto_ptr<string> s(new string("auto"));
	auto s2 = s;
	cout << (*s)[0];
	/*(*s).at(5);
	s.get();
	s->at(5);
	
	shared_ptr<string> s3(new string("shared"));*/
	
	//while (1)
	//{
	//	string*str = new string("hello");
	//	string_ptr ptr(str);
	//	(*ptr).begin();
	//	str->begin();
	//	ptr->capacity();
	//	/*cout << *str;
	//	str->push_back('!');
	//	cout << *str;
	//	(*str).clear();*/
	//}
	system("pause");
}