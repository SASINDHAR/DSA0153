#include&lt;iostream&gt;
using namespace std;
class cube
{
public:

int i,n;
cube()
{
cout&lt;&lt;&quot;enter the value &quot;;
cin&gt;&gt;n;
for(i=1;i&lt;=n;i++)
{
cout&lt;&lt;i*i*i&lt;&lt;endl;
}
}

};
int main()
{
cube c;
}
