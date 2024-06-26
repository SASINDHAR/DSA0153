#include &lt;iostream&gt;
int sum(int a = 0, int b = 0, int c = 0, int d = 0) {
return a + b + c + d;
}

int main() {
int num1, num2, num3, num4;
std::cout &lt;&lt; &quot;Enter four numbers (separated by spaces): &quot;;
std::cin &gt;&gt; num1 &gt;&gt; num2 &gt;&gt; num3 &gt;&gt; num4;
int result = sum(num1, num2, num3, num4);
std::cout &lt;&lt; &quot;Sum of the numbers is: &quot; &lt;&lt; result &lt;&lt; std::endl;

return 0;
}
