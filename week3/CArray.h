class CArray {
  int size;  //数组元素的个数
  int * ptr;  //指向动态分配的数组
 public:
  CArray(int s=0);  //s代表数组元素的个数
  CArray(CArray & a);  //复制构造函数
  ~CArray();  //析构函数
  void push_back(int v);  //数组尾部添加一个元素v
  CArray & operator=(const CArray & a);  //数组对象间的赋值
  int length() { return size; }  //返回数组元素个数
  int & operator[](int i)  //返回值int则不能支持a[i]=4 l-value r-value
    {//支持n=a[i]和a[i]=4
      return ptr[i];
    }
};

CArray::CArray(int s):size(s)
{
  if(s==0)
    ptr=NULL;
  else
    ptr=new int[s];
}

CArray::CArray(CArray & a)
{
  if(!a.ptr) {
    ptr=NULL;
    size=0;
    return;
  }
  ptr=new int[a.size];
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size=a.size;
}

CArray::~CArray()
{
  if(ptr)
    delete [] ptr;
}

CArray & CArray::operator=(const CArray & a)
{
  if(ptr==a.ptr)  //a=a;
    return * this;
  if(a.ptr==NULL) {
    if(ptr)
      delete [] ptr;
    ptr=NULL;
    size=0;
    return * this;
  }
  if(size<a.size) {
    if(ptr)
      delete [] ptr;
    ptr=new int[a.size];
  }
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size=a.size;
  return * this;
}

void CArray::push_back(int v)
{
  if(ptr) {
    int * tmpPtr=new int[size+1];
    memcpy(tmpPtr,ptr,sizeof(int)*size);
    delete [] ptr;
    ptr=tmpPtr;
  }
  else
    ptr=new int[1];
  ptr[size++]=v;
}

//vector
