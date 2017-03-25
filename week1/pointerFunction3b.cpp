#include <iostream>
using namespace std;
//函数声明
double triangle_area(double &x,double &y);//三角形面积
double rectangle_area(double &x,double &y);//矩形面积
double swap_value(double &x,double &y);//交换值
double set_value(double &x,double &y);//设定长宽（高）
//double print_area(double &x,double &y);//输出面积
double print_area(double(*p)(double&,double&), double &x,double &y);//利用函数指针输出面积
//函数定义
double triangle_area(double &x,double &y)
{
  cout<<"三角形的面积为：\t"<<x*y*0.5<<endl;
  return 0.0;
}
 
double rectangle_area(double &x,double &y)
{
  cout<<"矩形的面积为：\t"<<x*y<<endl;
  return 0.0;
}
 
double swap_value(double &x,double &y)
{
  double temp;
  temp=x;
  x=y;
  y=temp;
  return 0.0;
}
 
double print_area(double(*p)(double &x,double &y), double &x,double &y)
{
  cout<<"执行函数前:\n";
  cout<<"x="<<x<<"  y="<<y<<endl;
  //it is coming!...
  p(x,y);
  cout<<"函数指针传值后:\n";
  cout<<"x="<<x<<"  y="<<y<<endl;
  return 0.0;
}
 
double set_value(double &x,double &y)
//注意参数一定要定义成引用，要不传不出去哈！
{
  cout<<"自定义长宽（高）为：\n";
  cout<<"长为：";
  cin>>x;
  cout<<"宽或者高为：";
  cin>>y;
  return 0.0;
}
 
int main()
{
  bool quit=false;//初始化退出的值为否
  double a=2,b=3;//初始化两个参数a和b
  char choice;
  //声明的p为一个函数指针，它所指向的函数带有两个double类型的参数并且返回double
  double (*p)(double &,double &);
  while(quit==false)
    {
      cout<<"退出(q); 设定长、宽或高(1); 三角形面积(2); 矩形面积(3); 交换长宽或高(4)."<<endl;
      cin>>choice;
      switch(choice)
        {
        case 'q':
          quit=true;
          break;
        case '1':
          p=set_value;
          print_area(p,a,b);
          break;
        case '2':
          p=triangle_area;
          print_area(p,a,b);         
          break;
        case  '3':
          p=rectangle_area;
          print_area(p,a,b);
          break;
        case '4':
          p=swap_value;
          print_area(p,a,b);
          break;
        default:
          cout<<"请按规矩出牌！"<<endl;
        }
    }
  return 0;
}
