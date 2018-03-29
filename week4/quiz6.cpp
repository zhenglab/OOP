#include<iostream>  
#include<cstring>  
using namespace std;  
class String  
{  
public:  
    int length;  
    char *s;  
    String(char *str=NULL);      //普通构造函数  
    String(const String &other); //拷贝构造函数  
    ~String(void);              // 析构函数  
    void print();  
    int getLen();  
};  
String::String(char *str)  
{  
    if(str)  
    {  
        this->length=strlen(str);  
        s= new char[length+1];  
        strcpy(s,str);  
    }  
}  
String::String(const String &other)  
{  
    length=strlen(other.s);  
    s= new char[length+1];  
    strcpy(s,other.s);  
}  
String::~String()  
{  
    cout<<"Destructing String "<<s<<endl;  
    if(s) delete []s;  
    length=0;  
}  
void String::print()  
{  
    cout<<s<<endl;  
}  
int String::getLen()  
{  
    return length;  
}  
  
class edit_String:public String  
{  
public:  
    edit_String(char *s):String(s)  
    {  
        cout<<"Constructing edit_String"<<endl;  
    }  
    void Delete(int p);         //实现删除功能  
    void Insert(int p,char c);  //实现插入功能  
    bool Replace(int p,char c); //实现替换功能  
};  
void edit_String::Delete(int p) //实现删除功能  
{  
    if(s==NULL)  
    {  
        cout<<"Fail to delete, s is empty"<<endl;  
        return;  
    }  
    if(p>=length)  
    {  
        cout<<"p is too big"<<endl;  
        return;  
    }  
    for(int i=0; i<length-1; i++)  
    {  
        if(i>=p-1)  
        {  
            s[i]=s[i+1];  
        }  
    }  
    length--;  
}  
bool edit_String::Replace(int p,char c)//实现替换功能  
{  
    if(s==NULL)  
    {  
        cout<<"Fail to replace, s is empty"<<endl;  
        return false;  
    }  
    if(p>=length)  
    {  
        cout<<"p is too big"<<endl;  
        return false;  
    }  
    for(int i=0; i<length; i++)  
    {  
        if(i==p)  
        {  
            s[i]=c;  
            return true;  
        }  
    }  
    return false;  
}  
void edit_String::Insert(int p,char c)//实现插入功能  
{  
    char* temp=new char[length+1];  
    for(int i=0; i<=length; i++)  
    {  
        if(i<p)  
            temp[i]=s[i];  
        else if(i==p)  
        {  
            temp[i]=c;  
        }  
        else  
        {  
            temp[i]=s[i-1];  
        }  
    }  
    if(s!=NULL) delete s;  
    s= new char[strlen(temp)+1];  
    length++;  
    strcpy(s,temp);  
    delete []temp;  
}  
  
int main()  
{  
    char s1[9]="dutclass";  
    edit_String es(s1);  
    es.print();  
    es.Delete(3);  
    es.print();  
    es.Replace(1,'m');  
    es.print();  
    es.Insert(3,'w');  
    es.print();  
    return 0;  
}
