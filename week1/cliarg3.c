#include <stdio.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
  int ch;
  opterr=0;
  
  while((ch=getopt(argc,argv,"a:b::cde"))!=-1)
  {
    printf("optind:%d\n",optind);
    printf("optarg:%s\n",optarg);
    printf("ch:%c\n",ch);
    switch(ch)
      {
      case 'a':
        printf("option a:'%s'\n",optarg);
        break;
      case 'b':
        printf("option b:'%s'\n",optarg);
        break;
      case 'c':
        printf("option c\n");
        break;
      case 'd':
        printf("option d\n");
        break;
      case 'e':
        printf("option e\n");
        break;
      default:
        printf("other option:%c\n",ch);
    }
    printf("optopt+%c\n",optopt);
  }
} 

/*
  getopt() 原型
  int getopt( int argc, char *const argv[], const char *optstring );
  给定了命令参数的数量 (argc)、指向这些参数的数组 (argv) 和选项字符串 (optstring) 后，getopt() 将返回第一个选项，并设置一些全局变量。使用相同的参数再次调用该函数时，它将返回下一个选项，并设置相应的全局变量。如果不再有识别到的选项，将返回 -1，此任务就完成了。
  getopt() 所设置的全局变量包括：
  optarg——指向当前选项参数（如果有）的指针。
  optind——再次调用 getopt() 时的下一个 argv 指针的索引。
  optopt——最后一个已知选项。
*/
