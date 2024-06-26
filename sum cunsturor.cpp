#include&lt;iostream&gt;
using namespace std;
class sum
{
public:
int i,n,count=0;
sum()
{
cout&lt;&lt;&quot;enter the value &quot;;
cin&gt;&gt;n;
for(i=1;i&lt;=n;i++)

{
count=count+i;
}
cout&lt;&lt;count;
}

};
int main()
{
sum s;
}
