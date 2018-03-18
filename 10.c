#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct words
{
	int num;//单词编号
	char a[10];//单词英文
	char b[30];//单词中文
}c[10]={1,"english","英语",2,"chinese","语文",3,"PE","体育",4,"math","数学",5,"yesterday","昨天",6,"computer","电脑",7,"phone","手机",8,"name","名字",9,"pen","钢笔",10,"word","单词"};
struct end
{
	int xh;
	char xm[10];
	int zs;
	int zqs;
	int sj;
}d[100];
int s=0;//统计用户个数
int main()
{
	void sr();//输入记录模块
	void chx();//查询记录模块
	//void xg();//修改记录模块
	//void shch();//删除记录模块
	//void tj();//统计记录模块
	//void bc();//保存信息导文件
	void dr();//从文件中读入信息
	int i;
	dr();
	do
	{
	printf("\t\t请选择：\n");
	printf("\t\t1:输入记录模块\t\t\n");
	printf("\t\t2:查询记录模块\t\t\n");
	printf("\t\t3:修改记录模块\t\t\n");
	printf("\t\t4:删除统计模块\t\t\n");
	printf("\t\t5:统计模块\t\t\n");
	printf("\t\t6:保存统计模块\t\t\n");
	printf("\t\t7:退出程序\t\t\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			sr();
			break;
		case 2:
			chx();
			break;
		case 3:
			xg();
			break;
		case 4:
			//shch();
			break;
		case 5:
			//tj();
			break;
		case 6:
			break;
		default:
			printf("\n error \n");
			break;
	}
	}
	while(i!=6);
		return 0;
}
void dr ()
{

}
void sr()
{
	int i,j=0,x=0,k=0,p[10],v,m,o,l,t=0;
	char xm[10];
	char n;
srand((unsigned int)time (NULL));
	do
	{
	printf("请输入姓名:\n");
	scanf("%s",d[s].xm);
    for(i=0;i<s;i++)
		if(strcmp(d[s].xm,d[i].xm)==0)		
	    j=1;
		}
	while(j!=0);//确保所增加的信息与前面的不重复
	printf("请输入要背的单词个数：");
	scanf("%d",&d[s].zs);
	o=clock();//记录初始时间
	for(i=0;i<d[s].zs;i++)
	{
		do
		{
	m=rand();
    k=m%10;//随机抽取单词
	v=0;
	for(j=0;j<x;j++)
		if(p[j]==k)
		v=1;
		}
	while(v!=0);//判断单词是否与前面抽取的相同
			printf("%s\n",c[k].b);
			p[x]=k;
			x++;
	printf("请输入该中文对应的英文；");
	scanf("%s",xm);
	if(strcmp(xm,c[k].a)==0)
	t++;//判断单词个数；
	}
l=clock();//记录背完单词的时间
d[s].zqs=t;
d[s].sj=l-o;
d[s].xh=s+1;
s++;
printf("答题者学号是:%d  答题总数是:%d  答题的正确数是:%d  答题时间是:%d\n",d[s-1].xh,d[s-1].zs,d[s-1].zqs,d[s-1].sj);
printf("是否保存该信息?\n");
scanf("%c",n);
if(n=='y')
	bc();
}
void chx()
{
	char xm[20];
	int i,j=0;
	printf("请输入所要查询的用户姓名：");
	scanf("%s",xm);
	do
	for(i=0;i<s;i++)
		if(strcmp(xm,d[i].xm)==0)
		{
			j=1;
			printf("答题时间是:%d 背单词总数是:%d 正确数是:%d\n",d[i].sj,d[i].zs,d[i].zqs);
		}
	while(j!=1);
}
