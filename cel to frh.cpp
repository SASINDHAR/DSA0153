#include &lt;iostream&gt;
using namespace std;
int main()
{
float celsius, fahrenheit;
cout &lt;&lt; &quot;Enter the temperature in Celsius: &quot;;
cin &gt;&gt; celsius;
fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
cout &lt;&lt; &quot;The temperature in Fahrenheit is: &quot; &lt;&lt; fahrenheit &lt;&lt; &quot;°F&quot; &lt;&lt; endl;
return 0;
}
