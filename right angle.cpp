#include&lt;iostream&gt;
using namespace std;
class pattern
{
public:
int num,i,j;
pattern()
{
cout&lt;&lt;&quot;enter the number of rows&quot;;
cin&gt;&gt;num;
for(i=1;i&lt;=num;i++)
{
for(j=1;j&lt;=i;j++)
{
cout&lt;&lt;j&lt;&lt;&quot; &quot;;

}
cout&lt;&lt;&quot; \n&quot;;
}
}
~pattern()
{
cout&lt;&lt;&quot;object is destroyed&quot;;
}

};
int main()
{
pattern p;
return 0;
}
