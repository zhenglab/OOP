class CDemo {
 private:
  int n;
 public:
  CDemo(int i=0):n(i) { };
  CDemo & operator++();  //前置++
  CDemo operator++(int);  //后置++
  operator int () { return n; }
  friend CDemo & operator--(CDemo &);  //前置--
  friend CDemo operator--(CDemo &,int);  //后置--
};

CDemo & CDemo::operator++()
{
  n++;
  return * this;
}

CDemo CDemo::operator++(int k)
{
  CDemo tmp(*this);
  n++;
  return tmp;
}

CDemo & operator--(CDemo & d)
{
  d.n--;
  return d;
}

CDemo operator--(CDemo & d, int k)
{
  CDemo tmp(d);
  d.n--;
  return tmp;
}
