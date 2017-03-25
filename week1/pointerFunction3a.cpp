#include <iostream>
using namespace std;
//函数声明
double triangle_area(double &x,double &y);//三角形面积
double rectangle_area(double &x,double &y);//矩形面积
double swap_value(double &x,double &y);//交换值
double set_value(double &x,double &y);//设定长宽（高）
double print_area(double &x,double &y);//输出面积
//函数定义
double triangle_area(double &x,double &y)
{
  return x*y*0.5;
}

double rectangle_area(double &x,double &y)
{
  return x*y;
}
 
double swap_value(double &x,double &y)
{
  double temp;
  temp=x;
  x=y;
  y=temp;
  return 0.0;
}
 
double print_area(double &x,double &y)
{
  cout<<"执行函数后:\n";
  cout<<"x="<<x<<"  y="<<y<<endl;
  //coming soon in e.g.2...
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
          set_value(a,b);
          print_area(a,b);
          break;
        case '2':
          print_area(a,b);
          cout<<"三角形的面积为：\t"<<triangle_area(a,b)<<endl;
          break;
        case  '3':
          print_area(a,b);
          cout<<"矩形的面积为：\t"<<rectangle_area(a,b)<<endl;
          break;
        case '4':
          swap_value(a,b);
          print_area(a,b);
          break;
        default:
          cout<<"请按规矩出牌！"<<endl;
        }
    }
  return 0;
}
