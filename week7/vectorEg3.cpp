#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])  
{  
  vector<string> sentence;  
  sentence.reserve(5);  
  
  //append some elements  
  sentence.push_back("hello");  
  sentence.push_back("how");  
  sentence.push_back("are");  
  sentence.push_back("you");  
  sentence.push_back("?");  
  copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));  
  cout << endl;  
  
  //print "technical data"  
  cout << "max_size():" << sentence.max_size() << endl;  
  cout << "size():" << sentence.size() << endl;  
  cout << "capacity():" << sentence.capacity() << endl;  
  
  cout << "**************************" << endl;  
  
  //swap second and fourth element  
  swap(sentence[1], sentence[3]);   
  //insert element "always" before element "?"  
  sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");  
  //assign "!" to the last element  
  sentence.back() = "!";  
  copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));  
  cout << endl;  
  
  //print "technical data"  
  // return maximum possible length of sequence   
  // 容器的最大可以存储的元素个数，这是个极限，当容器扩展到这个最大值时就不能再自动增大  
  cout << "max_size():" << sentence.max_size() << endl;  
  // return length of sequence  
  cout << "size():" << sentence.size() << endl;  
  // return current length of allocated storage  
  cout << "capacity():" << sentence.capacity() << endl;  
  return 0;  
}
